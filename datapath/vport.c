/*
 * Copyright (c) 2007-2012 Nicira, Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA
 */

#include <linux/etherdevice.h>
#include <linux/if.h>
#include <linux/if_vlan.h>
#include <linux/jhash.h>
#include <linux/kconfig.h>
#include <linux/kernel.h>
#include <linux/list.h>
#include <linux/mutex.h>
#include <linux/percpu.h>
#include <linux/rcupdate.h>
#include <linux/rtnetlink.h>
#include <linux/compat.h>
#include <linux/version.h>
#include <net/net_namespace.h>

#include "datapath.h"
#include "gso.h"
#include "vport.h"
#include "vport-internal_dev.h"

static void ovs_vport_record_error(struct vport *,
				   enum vport_err_type err_type);

/* List of statically compiled vport implementations.  Don't forget to also
 * add yours to the list at the bottom of vport.h.
 */
static const struct vport_ops *vport_ops_list[] = {
	&ovs_netdev_vport_ops,
	&ovs_internal_vport_ops,
	&ovs_geneve_vport_ops,
#if IS_ENABLED(CONFIG_NET_IPGRE_DEMUX)
	&ovs_gre_vport_ops,
	&ovs_gre64_vport_ops,
#endif
	&ovs_vxlan_vport_ops,
	&ovs_lisp_vport_ops,
};

/* Protected by RCU read lock for reading, ovs_mutex for writing. */
static struct hlist_head *dev_table;
#define VPORT_HASH_BUCKETS 1024

/**
 *	ovs_vport_init - initialize vport subsystem
 *
 * Called at module load time to initialize the vport subsystem.
 */
int ovs_vport_init(void)
{
	dev_table = kzalloc(VPORT_HASH_BUCKETS * sizeof(struct hlist_head),
			    GFP_KERNEL);
	if (!dev_table)
		return -ENOMEM;

	return 0;
}

/**
 *	ovs_vport_exit - shutdown vport subsystem
 *
 * Called at module exit time to shutdown the vport subsystem.
 */
void ovs_vport_exit(void)
{
	kfree(dev_table);
}

static struct hlist_head *hash_bucket(const struct net *net, const char *name)
{
	unsigned int hash = jhash(name, strlen(name), (unsigned long) net);
	return &dev_table[hash & (VPORT_HASH_BUCKETS - 1)];
}

/**
 *	ovs_vport_locate - find a port that has already been created
 *
 * @name: name of port to find
 *
 * Must be called with ovs or RCU read lock.
 */
struct vport *ovs_vport_locate(const struct net *net, const char *name)
{
	struct hlist_head *bucket = hash_bucket(net, name);
	struct vport *vport;

	hlist_for_each_entry_rcu(vport, bucket, hash_node)
		if (!strcmp(name, vport->ops->get_name(vport)) &&
		    net_eq(ovs_dp_get_net(vport->dp), net))
			return vport;

	return NULL;
}

/**
 *	ovs_vport_alloc - allocate and initialize new vport
 *
 * @priv_size: Size of private data area to allocate.
 * @ops: vport device ops
 *
 * Allocate and initialize a new vport defined by @ops.  The vport will contain
 * a private data area of size @priv_size that can be accessed using
 * vport_priv().  vports that are no longer needed should be released with
 * ovs_vport_free().
 */
struct vport *ovs_vport_alloc(int priv_size, const struct vport_ops *ops,
			      const struct vport_parms *parms)
{
	struct vport *vport;
	size_t alloc_size;

	alloc_size = sizeof(struct vport);
	if (priv_size) {
		alloc_size = ALIGN(alloc_size, VPORT_ALIGN);
		alloc_size += priv_size;
	}

	vport = kzalloc(alloc_size, GFP_KERNEL);
	if (!vport)
		return ERR_PTR(-ENOMEM);

	vport->dp = parms->dp;
	vport->port_no = parms->port_no;
	vport->ops = ops;
	INIT_HLIST_NODE(&vport->dp_hash_node);

	if (ovs_vport_set_upcall_portids(vport, parms->upcall_portids)) {
		kfree(vport);
		return ERR_PTR(-EINVAL);
	}

	vport->percpu_stats = netdev_alloc_pcpu_stats(struct pcpu_sw_netstats);
	if (!vport->percpu_stats) {
		kfree(vport);
		return ERR_PTR(-ENOMEM);
	}

	return vport;
}

/**
 *	ovs_vport_free - uninitialize and free vport
 *
 * @vport: vport to free
 *
 * Frees a vport allocated with ovs_vport_alloc() when it is no longer needed.
 *
 * The caller must ensure that an RCU grace period has passed since the last
 * time @vport was in a datapath.
 */
void ovs_vport_free(struct vport *vport)
{
	kfree(rcu_dereference_raw(vport->upcall_portids));
	free_percpu(vport->percpu_stats);
	kfree(vport);
}

/**
 *	ovs_vport_add - add vport device (for kernel callers)
 *
 * @parms: Information about new vport.
 *
 * Creates a new vport with the specified configuration (which is dependent on
 * device type).  ovs_mutex must be held.
 */
struct vport *ovs_vport_add(const struct vport_parms *parms)
{
	struct vport *vport;
	int err = 0;
	int i;

	for (i = 0; i < ARRAY_SIZE(vport_ops_list); i++) {
		if (vport_ops_list[i]->type == parms->type) {
			struct hlist_head *bucket;

			vport = vport_ops_list[i]->create(parms);
			if (IS_ERR(vport)) {
				err = PTR_ERR(vport);
				goto out;
			}

			bucket = hash_bucket(ovs_dp_get_net(vport->dp),
					     vport->ops->get_name(vport));
			hlist_add_head_rcu(&vport->hash_node, bucket);
			return vport;
		}
	}

	err = -EAFNOSUPPORT;

out:
	return ERR_PTR(err);
}

/**
 *	ovs_vport_set_options - modify existing vport device (for kernel callers)
 *
 * @vport: vport to modify.
 * @options: New configuration.
 *
 * Modifies an existing device with the specified configuration (which is
 * dependent on device type).  ovs_mutex must be held.
 */
int ovs_vport_set_options(struct vport *vport, struct nlattr *options)
{
	if (!vport->ops->set_options)
		return -EOPNOTSUPP;
	return vport->ops->set_options(vport, options);
}

/**
 *	ovs_vport_del - delete existing vport device
 *
 * @vport: vport to delete.
 *
 * Detaches @vport from its datapath and destroys it.  It is possible to fail
 * for reasons such as lack of memory.  ovs_mutex must be held.
 */
void ovs_vport_del(struct vport *vport)
{
	ASSERT_OVSL();

	hlist_del_rcu(&vport->hash_node);
	vport->ops->destroy(vport);
}

/**
 *	ovs_vport_get_stats - retrieve device stats
 *
 * @vport: vport from which to retrieve the stats
 * @stats: location to store stats
 *
 * Retrieves transmit, receive, and error stats for the given device.
 *
 * Must be called with ovs_mutex or rcu_read_lock.
 */
void ovs_vport_get_stats(struct vport *vport, struct ovs_vport_stats *stats)
{
	int i;

	/* We potentially have two surces of stats that need to be
	 * combined: those we have collected (split into err_stats and
	 * percpu_stats), and device error stats from netdev->get_stats()
	 * (for errors that happen downstream and therefore aren't
	 * reported through our vport_record_error() function).
	 * Stats from first source are reported by ovs over
	 * OVS_VPORT_ATTR_STATS.
	 * netdev-stats can be directly read over netlink-ioctl.
	 */

	stats->rx_errors  = atomic_long_read(&vport->err_stats.rx_errors);
	stats->tx_errors  = atomic_long_read(&vport->err_stats.tx_errors);
	stats->tx_dropped = atomic_long_read(&vport->err_stats.tx_dropped);
	stats->rx_dropped = atomic_long_read(&vport->err_stats.rx_dropped);

	stats->rx_bytes		= 0;
	stats->rx_packets	= 0;
	stats->tx_bytes		= 0;
	stats->tx_packets	= 0;

	for_each_possible_cpu(i) {
		const struct pcpu_sw_netstats *percpu_stats;
		struct pcpu_sw_netstats local_stats;
		unsigned int start;

		percpu_stats = per_cpu_ptr(vport->percpu_stats, i);

		do {
			start = u64_stats_fetch_begin_irq(&percpu_stats->syncp);
			local_stats = *percpu_stats;
		} while (u64_stats_fetch_retry_irq(&percpu_stats->syncp, start));

		stats->rx_bytes		+= local_stats.rx_bytes;
		stats->rx_packets	+= local_stats.rx_packets;
		stats->tx_bytes		+= local_stats.tx_bytes;
		stats->tx_packets	+= local_stats.tx_packets;
	}
}

/**
 *	ovs_vport_get_options - retrieve device options
 *
 * @vport: vport from which to retrieve the options.
 * @skb: sk_buff where options should be appended.
 *
 * Retrieves the configuration of the given device, appending an
 * %OVS_VPORT_ATTR_OPTIONS attribute that in turn contains nested
 * vport-specific attributes to @skb.
 *
 * Returns 0 if successful, -EMSGSIZE if @skb has insufficient room, or another
 * negative error code if a real error occurred.  If an error occurs, @skb is
 * left unmodified.
 *
 * Must be called with ovs_mutex or rcu_read_lock.
 */
int ovs_vport_get_options(const struct vport *vport, struct sk_buff *skb)
{
	struct nlattr *nla;
	int err;

	if (!vport->ops->get_options)
		return 0;

	nla = nla_nest_start(skb, OVS_VPORT_ATTR_OPTIONS);
	if (!nla)
		return -EMSGSIZE;

	err = vport->ops->get_options(vport, skb);
	if (err) {
		nla_nest_cancel(skb, nla);
		return err;
	}

	nla_nest_end(skb, nla);
	return 0;
}

static void vport_portids_destroy_rcu_cb(struct rcu_head *rcu)
{
	struct vport_portids *ids = container_of(rcu, struct vport_portids,
						 rcu);

	kfree(ids);
}

/**
 *	ovs_vport_set_upcall_portids - set upcall portids of @vport.
 *
 * @vport: vport to modify.
 * @ids: new configuration, an array of port ids.
 *
 * Sets the vport's upcall_portids to @ids.
 *
 * Returns 0 if successful, -EINVAL if @ids is zero length or cannot be parsed
 * as an array of U32.
 *
 * Must be called with ovs_mutex.
 */
int ovs_vport_set_upcall_portids(struct vport *vport, const struct nlattr *ids)
{
	struct vport_portids *old, *vport_portids;

	if (!nla_len(ids) || nla_len(ids) % sizeof(u32))
		return -EINVAL;

	old = ovsl_dereference(vport->upcall_portids);

	vport_portids = kmalloc(sizeof *vport_portids + nla_len(ids),
				GFP_KERNEL);
	if (!vport_portids)
		return -ENOMEM;

	vport_portids->n_ids = nla_len(ids) / sizeof(u32);
	vport_portids->rn_ids = reciprocal_value(vport_portids->n_ids);
	nla_memcpy(vport_portids->ids, ids, nla_len(ids));

	rcu_assign_pointer(vport->upcall_portids, vport_portids);

	if (old)
		call_rcu(&old->rcu, vport_portids_destroy_rcu_cb);

	return 0;
}

/**
 *	ovs_vport_get_upcall_portids - get the upcall_portids of @vport.
 *
 * @vport: vport from which to retrieve the portids.
 * @skb: sk_buff where portids should be appended.
 *
 * Retrieves the configuration of the given vport, appending the
 * %OVS_VPORT_ATTR_UPCALL_PID attribute which is the array of upcall
 * portids to @skb.
 *
 * Returns 0 if successful, -EMSGSIZE if @skb has insufficient room.
 * If an error occurs, @skb is left unmodified.  Must be called with
 * ovs_mutex or rcu_read_lock.
 */
int ovs_vport_get_upcall_portids(const struct vport *vport,
				 struct sk_buff *skb)
{
	struct vport_portids *ids;

	ids = rcu_dereference_ovsl(vport->upcall_portids);

	if (vport->dp->user_features & OVS_DP_F_VPORT_PIDS)
		return nla_put(skb, OVS_VPORT_ATTR_UPCALL_PID,
			       ids->n_ids * sizeof(u32), (void *) ids->ids);
	else
		return nla_put_u32(skb, OVS_VPORT_ATTR_UPCALL_PID, ids->ids[0]);
}

/**
 *	ovs_vport_find_upcall_portid - find the upcall portid to send upcall.
 *
 * @vport: vport from which the missed packet is received.
 * @skb: skb that the missed packet was received.
 *
 * Uses the skb_get_hash() to select the upcall portid to send the
 * upcall.
 *
 * Returns the portid of the target socket.  Must be called with rcu_read_lock.
 */
u32 ovs_vport_find_upcall_portid(const struct vport *vport, struct sk_buff *skb)
{
	struct vport_portids *ids;
	u32 hash;

	ids = rcu_dereference(vport->upcall_portids);

	if (ids->n_ids == 1 && ids->ids[0] == 0)
		return 0;

	hash = skb_get_hash(skb);
	return ids->ids[hash - ids->n_ids * reciprocal_divide(hash, ids->rn_ids)];
}

/**
 *	ovs_vport_receive - pass up received packet to the datapath for processing
 *
 * @vport: vport that received the packet
 * @skb: skb that was received
 * @tun_info: tunnel (if any) that carried packet
 *
 * Must be called with rcu_read_lock.  The packet cannot be shared and
 * skb->data should point to the Ethernet header.  The caller must have already
 * called compute_ip_summed() to initialize the checksumming fields.
 */
void ovs_vport_receive(struct vport *vport, struct sk_buff *skb,
		       const struct ovs_tunnel_info *tun_info)
{
	struct pcpu_sw_netstats *stats;
	struct sw_flow_key key;
	int error;

	stats = this_cpu_ptr(vport->percpu_stats);
	u64_stats_update_begin(&stats->syncp);
	stats->rx_packets++;
	stats->rx_bytes += skb->len + (skb_vlan_tag_present(skb) ? VLAN_HLEN : 0);
	u64_stats_update_end(&stats->syncp);

	ovs_skb_init_inner_protocol(skb);
	OVS_CB(skb)->input_vport = vport;
	OVS_CB(skb)->egress_tun_info = NULL;
	error = ovs_flow_key_extract(tun_info, skb, &key);
	if (unlikely(error)) {
		kfree_skb(skb);
		return;
	}

	ovs_dp_process_packet(skb, &key);
}

/**
 *	ovs_vport_send - send a packet on a device
 *
 * @vport: vport on which to send the packet
 * @skb: skb to send
 *
 * Sends the given packet and returns the length of data sent.  Either ovs
 * lock or rcu_read_lock must be held.
 */
int ovs_vport_send(struct vport *vport, struct sk_buff *skb)
{
	int sent = vport->ops->send(vport, skb);

	if (likely(sent > 0)) {
		struct pcpu_sw_netstats *stats;

		stats = this_cpu_ptr(vport->percpu_stats);

		u64_stats_update_begin(&stats->syncp);
		stats->tx_packets++;
		stats->tx_bytes += sent;
		u64_stats_update_end(&stats->syncp);
	} else if (sent < 0) {
		ovs_vport_record_error(vport, VPORT_E_TX_ERROR);
	} else {
		ovs_vport_record_error(vport, VPORT_E_TX_DROPPED);
	}

	return sent;
}

/**
 *	ovs_vport_record_error - indicate device error to generic stats layer
 *
 * @vport: vport that encountered the error
 * @err_type: one of enum vport_err_type types to indicate the error type
 *
 * If using the vport generic stats layer indicate that an error of the given
 * type has occurred.
 */
static void ovs_vport_record_error(struct vport *vport,
				   enum vport_err_type err_type)
{
	switch (err_type) {
	case VPORT_E_RX_DROPPED:
		atomic_long_inc(&vport->err_stats.rx_dropped);
		break;

	case VPORT_E_RX_ERROR:
		atomic_long_inc(&vport->err_stats.rx_errors);
		break;

	case VPORT_E_TX_DROPPED:
		atomic_long_inc(&vport->err_stats.tx_dropped);
		break;

	case VPORT_E_TX_ERROR:
		atomic_long_inc(&vport->err_stats.tx_errors);
		break;
	}
}

static void free_vport_rcu(struct rcu_head *rcu)
{
	struct vport *vport = container_of(rcu, struct vport, rcu);

	ovs_vport_free(vport);
}

void ovs_vport_deferred_free(struct vport *vport)
{
	if (!vport)
		return;

	call_rcu(&vport->rcu, free_vport_rcu);
}

int ovs_tunnel_get_egress_info(struct ovs_tunnel_info *egress_tun_info,
			       struct net *net,
			       const struct ovs_tunnel_info *tun_info,
			       u8 ipproto,
			       u32 skb_mark,
			       __be16 tp_src,
			       __be16 tp_dst)
{
	const struct ovs_key_ipv4_tunnel *tun_key;
	struct rtable *rt;
	__be32 saddr;

	if (unlikely(!tun_info))
		return -EINVAL;

	tun_key = &tun_info->tunnel;
	saddr = tun_key->ipv4_src;
	/* Route lookup to get srouce IP address: saddr.
	 * The process may need to be changed if the corresponding process
	 * in vports ops changed.
	 */
	rt = find_route(net,
			&saddr,
			tun_key->ipv4_dst,
			ipproto,
			tun_key->ipv4_tos,
			skb_mark);
	if (IS_ERR(rt))
		return PTR_ERR(rt);

	ip_rt_put(rt);

	/* Generate egress_tun_info based on tun_info,
	 * saddr, tp_src and tp_dst
	 */
	__ovs_flow_tun_info_init(egress_tun_info,
				 saddr, tun_key->ipv4_dst,
				 tun_key->ipv4_tos,
				 tun_key->ipv4_ttl,
				 tp_src, tp_dst,
				 tun_key->tun_id,
				 tun_key->tun_flags,
				 tun_info->options,
				 tun_info->options_len);

	return 0;
}

int ovs_vport_get_egress_tun_info(struct vport *vport, struct sk_buff *skb,
				  struct ovs_tunnel_info *info)
{
	/* get_egress_tun_info() is only implemented on tunnel ports. */
	if (unlikely(!vport->ops->get_egress_tun_info))
		return -EINVAL;

	return vport->ops->get_egress_tun_info(vport, skb, info);
}
