/* Generated automatically -- do not modify!    -*- buffer-read-only: t -*- */

#include <config.h>
#include "lib/vswitch-idl.h"
#include <limits.h>
#include "ovs-thread.h"
#include "ovsdb-data.h"
#include "ovsdb-error.h"
#include "util.h"

#ifdef __CHECKER__
/* Sparse dislikes sizeof(bool) ("warning: expression using sizeof bool"). */
enum { sizeof_bool = 1 };
#else
enum { sizeof_bool = sizeof(bool) };
#endif

static bool inited;


static struct ovsrec_autoattach *
ovsrec_autoattach_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_autoattach, header_) : NULL;
}

static struct ovsrec_bridge *
ovsrec_bridge_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_bridge, header_) : NULL;
}

static struct ovsrec_controller *
ovsrec_controller_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_controller, header_) : NULL;
}

static struct ovsrec_flow_sample_collector_set *
ovsrec_flow_sample_collector_set_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_flow_sample_collector_set, header_) : NULL;
}

static struct ovsrec_flow_table *
ovsrec_flow_table_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_flow_table, header_) : NULL;
}

static struct ovsrec_ipfix *
ovsrec_ipfix_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_ipfix, header_) : NULL;
}

static struct ovsrec_interface *
ovsrec_interface_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_interface, header_) : NULL;
}

static struct ovsrec_manager *
ovsrec_manager_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_manager, header_) : NULL;
}

static struct ovsrec_mirror *
ovsrec_mirror_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_mirror, header_) : NULL;
}

static struct ovsrec_netflow *
ovsrec_netflow_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_netflow, header_) : NULL;
}

static struct ovsrec_open_vswitch *
ovsrec_open_vswitch_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_open_vswitch, header_) : NULL;
}

static struct ovsrec_port *
ovsrec_port_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_port, header_) : NULL;
}

static struct ovsrec_qos *
ovsrec_qos_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_qos, header_) : NULL;
}

static struct ovsrec_queue *
ovsrec_queue_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_queue, header_) : NULL;
}

static struct ovsrec_ssl *
ovsrec_ssl_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_ssl, header_) : NULL;
}

static struct ovsrec_sflow *
ovsrec_sflow_cast(const struct ovsdb_idl_row *row)
{
    return row ? CONTAINER_OF(row, struct ovsrec_sflow, header_) : NULL;
}

/* AutoAttach table. */

static void
ovsrec_autoattach_parse_mappings(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_autoattach *row = ovsrec_autoattach_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->key_mappings = NULL;
    row->value_mappings = NULL;
    row->n_mappings = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_mappings) {
            row->key_mappings = xmalloc(datum->n * sizeof *row->key_mappings);
            row->value_mappings = xmalloc(datum->n * sizeof *row->value_mappings);
        }
        row->key_mappings[row->n_mappings] = datum->keys[i].integer;
        row->value_mappings[row->n_mappings] = datum->values[i].integer;
        row->n_mappings++;
    }
}

static void
ovsrec_autoattach_parse_system_description(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_autoattach *row = ovsrec_autoattach_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->system_description = datum->keys[0].string;
    } else {
        row->system_description = "";
    }
}

static void
ovsrec_autoattach_parse_system_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_autoattach *row = ovsrec_autoattach_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->system_name = datum->keys[0].string;
    } else {
        row->system_name = "";
    }
}

static void
ovsrec_autoattach_unparse_mappings(struct ovsdb_idl_row *row_)
{
    struct ovsrec_autoattach *row = ovsrec_autoattach_cast(row_);

    ovs_assert(inited);
    free(row->key_mappings);
    free(row->value_mappings);
}

static void
ovsrec_autoattach_unparse_system_description(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_autoattach_unparse_system_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_autoattach_init__(struct ovsdb_idl_row *row)
{
    ovsrec_autoattach_init(ovsrec_autoattach_cast(row));
}

/* Clears the contents of 'row' in table "AutoAttach". */
void
ovsrec_autoattach_init(struct ovsrec_autoattach *row)
{
    memset(row, 0, sizeof *row); 
}

/* Searches table "AutoAttach" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_autoattach *
ovsrec_autoattach_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_autoattach_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_AUTOATTACH], uuid));
}

/* Returns a row in table "AutoAttach" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_autoattach *
ovsrec_autoattach_first(const struct ovsdb_idl *idl)
{
    return ovsrec_autoattach_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_AUTOATTACH]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_autoattach *
ovsrec_autoattach_next(const struct ovsrec_autoattach *row)
{
    return ovsrec_autoattach_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "AutoAttach".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_autoattach_delete(const struct ovsrec_autoattach *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "AutoAttach" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_autoattach *
ovsrec_autoattach_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_autoattach_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_AUTOATTACH], NULL));
}

/* Causes the original contents of column "mappings" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "mappings" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "mappings" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "mappings" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_autoattach_insert()).
 *
 *   - If "mappings" has already been modified (with
 *     ovsrec_autoattach_set_mappings()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_autoattach_set_mappings() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_autoattach_verify_mappings(const struct ovsrec_autoattach *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_autoattach_columns[OVSREC_AUTOATTACH_COL_MAPPINGS]);
}

/* Causes the original contents of column "system_description" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "system_description" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "system_description" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "system_description" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_autoattach_insert()).
 *
 *   - If "system_description" has already been modified (with
 *     ovsrec_autoattach_set_system_description()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_autoattach_set_system_description() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_autoattach_verify_system_description(const struct ovsrec_autoattach *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_autoattach_columns[OVSREC_AUTOATTACH_COL_SYSTEM_DESCRIPTION]);
}

/* Causes the original contents of column "system_name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "system_name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "system_name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "system_name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_autoattach_insert()).
 *
 *   - If "system_name" has already been modified (with
 *     ovsrec_autoattach_set_system_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_autoattach_set_system_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_autoattach_verify_system_name(const struct ovsrec_autoattach *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_autoattach_columns[OVSREC_AUTOATTACH_COL_SYSTEM_NAME]);
}

/* Returns the "mappings" column's value from the "AutoAttach" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * 'value_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes mappings's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "mappings" member in ovsrec_autoattach. */
const struct ovsdb_datum *
ovsrec_autoattach_get_mappings(const struct ovsrec_autoattach *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    ovs_assert(value_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_autoattach_col_mappings);
}

/* Returns the "system_description" column's value from the "AutoAttach" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes system_description's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "system_description" member in ovsrec_autoattach. */
const struct ovsdb_datum *
ovsrec_autoattach_get_system_description(const struct ovsrec_autoattach *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_autoattach_col_system_description);
}

/* Returns the "system_name" column's value from the "AutoAttach" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes system_name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "system_name" member in ovsrec_autoattach. */
const struct ovsdb_datum *
ovsrec_autoattach_get_system_name(const struct ovsrec_autoattach *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_autoattach_col_system_name);
}

/* Sets the "mappings" column from the "AutoAttach" table in 'row' to
 * the map with keys 'key_mappings' and values 'value_mappings'
 * with 'n_mappings' entries.
 *
 * Argument constraints: key in range 0 to 16,777,215, value in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_autoattach_set_mappings(const struct ovsrec_autoattach *row, const int64_t *key_mappings, const int64_t *value_mappings, size_t n_mappings)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_mappings;
    datum.keys = n_mappings ? xmalloc(n_mappings * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_mappings * sizeof *datum.values);
    for (i = 0; i < n_mappings; i++) {
        datum.keys[i].integer = key_mappings[i];
        datum.values[i].integer = value_mappings[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_INTEGER);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_autoattach_columns[OVSREC_AUTOATTACH_COL_MAPPINGS], &datum);
}

/* Sets the "system_description" column from the "AutoAttach" table in 'row' to
 * 'system_description'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_autoattach_set_system_description(const struct ovsrec_autoattach *row, const char *system_description)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, system_description);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_autoattach_columns[OVSREC_AUTOATTACH_COL_SYSTEM_DESCRIPTION], &datum);
}

/* Sets the "system_name" column from the "AutoAttach" table in 'row' to
 * 'system_name'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_autoattach_set_system_name(const struct ovsrec_autoattach *row, const char *system_name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, system_name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_autoattach_columns[OVSREC_AUTOATTACH_COL_SYSTEM_NAME], &datum);
}

struct ovsdb_idl_column ovsrec_autoattach_columns[OVSREC_AUTOATTACH_N_COLUMNS];

static void
ovsrec_autoattach_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_autoattach_col_mappings. */
    c = &ovsrec_autoattach_col_mappings;
    c->name = "mappings";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(16777215);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_INTEGER);
    c->type.value.u.integer.min = INT64_C(0);
    c->type.value.u.integer.max = INT64_C(4095);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_autoattach_parse_mappings;
    c->unparse = ovsrec_autoattach_unparse_mappings;

    /* Initialize ovsrec_autoattach_col_system_description. */
    c = &ovsrec_autoattach_col_system_description;
    c->name = "system_description";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_autoattach_parse_system_description;
    c->unparse = ovsrec_autoattach_unparse_system_description;

    /* Initialize ovsrec_autoattach_col_system_name. */
    c = &ovsrec_autoattach_col_system_name;
    c->name = "system_name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_autoattach_parse_system_name;
    c->unparse = ovsrec_autoattach_unparse_system_name;
}

/* Bridge table. */

static void
ovsrec_bridge_parse_auto_attach(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->auto_attach = ovsrec_autoattach_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_AUTOATTACH], &datum->keys[0].uuid));
    } else {
        row->auto_attach = NULL;
    }
}

static void
ovsrec_bridge_parse_controller(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->controller = NULL;
    row->n_controller = 0;
    for (i = 0; i < datum->n; i++) {
        struct ovsrec_controller *keyRow = ovsrec_controller_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_CONTROLLER], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_controller) {
                row->controller = xmalloc(datum->n * sizeof *row->controller);
            }
            row->controller[row->n_controller] = keyRow;
            row->n_controller++;
        }
    }
}

static void
ovsrec_bridge_parse_datapath_id(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->datapath_id = datum->keys[0].string;
    } else {
        row->datapath_id = NULL;
    }
}

static void
ovsrec_bridge_parse_datapath_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->datapath_type = datum->keys[0].string;
    } else {
        row->datapath_type = "";
    }
}

static void
ovsrec_bridge_parse_datapath_version(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->datapath_version = datum->keys[0].string;
    } else {
        row->datapath_version = "";
    }
}

static void
ovsrec_bridge_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_bridge_parse_fail_mode(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->fail_mode = datum->keys[0].string;
    } else {
        row->fail_mode = NULL;
    }
}

static void
ovsrec_bridge_parse_flood_vlans(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);
    size_t n = MIN(4096, datum->n);
    size_t i;

    ovs_assert(inited);
    row->flood_vlans = NULL;
    row->n_flood_vlans = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_flood_vlans) {
            row->flood_vlans = xmalloc(n * sizeof *row->flood_vlans);
        }
        row->flood_vlans[row->n_flood_vlans] = datum->keys[i].integer;
        row->n_flood_vlans++;
    }
}

static void
ovsrec_bridge_parse_flow_tables(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->key_flow_tables = NULL;
    row->value_flow_tables = NULL;
    row->n_flow_tables = 0;
    for (i = 0; i < datum->n; i++) {
        struct ovsrec_flow_table *valueRow = ovsrec_flow_table_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_FLOW_TABLE], &datum->values[i].uuid));
        if (valueRow) {
            if (!row->n_flow_tables) {
                row->key_flow_tables = xmalloc(datum->n * sizeof *row->key_flow_tables);
                row->value_flow_tables = xmalloc(datum->n * sizeof *row->value_flow_tables);
            }
            row->key_flow_tables[row->n_flow_tables] = datum->keys[i].integer;
            row->value_flow_tables[row->n_flow_tables] = valueRow;
            row->n_flow_tables++;
        }
    }
}

static void
ovsrec_bridge_parse_ipfix(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ipfix = ovsrec_ipfix_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_IPFIX], &datum->keys[0].uuid));
    } else {
        row->ipfix = NULL;
    }
}

static void
ovsrec_bridge_parse_mcast_snooping_enable(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->mcast_snooping_enable = datum->keys[0].boolean;
    } else {
        row->mcast_snooping_enable = false;
    }
}

static void
ovsrec_bridge_parse_mirrors(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->mirrors = NULL;
    row->n_mirrors = 0;
    for (i = 0; i < datum->n; i++) {
        struct ovsrec_mirror *keyRow = ovsrec_mirror_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_MIRROR], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_mirrors) {
                row->mirrors = xmalloc(datum->n * sizeof *row->mirrors);
            }
            row->mirrors[row->n_mirrors] = keyRow;
            row->n_mirrors++;
        }
    }
}

static void
ovsrec_bridge_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
ovsrec_bridge_parse_netflow(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->netflow = ovsrec_netflow_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_NETFLOW], &datum->keys[0].uuid));
    } else {
        row->netflow = NULL;
    }
}

static void
ovsrec_bridge_parse_other_config(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->other_config);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->other_config,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_bridge_parse_ports(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->ports = NULL;
    row->n_ports = 0;
    for (i = 0; i < datum->n; i++) {
        struct ovsrec_port *keyRow = ovsrec_port_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_PORT], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_ports) {
                row->ports = xmalloc(datum->n * sizeof *row->ports);
            }
            row->ports[row->n_ports] = keyRow;
            row->n_ports++;
        }
    }
}

static void
ovsrec_bridge_parse_protocols(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->protocols = NULL;
    row->n_protocols = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_protocols) {
            row->protocols = xmalloc(datum->n * sizeof *row->protocols);
        }
        row->protocols[row->n_protocols] = datum->keys[i].string;
        row->n_protocols++;
    }
}

static void
ovsrec_bridge_parse_rstp_enable(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->rstp_enable = datum->keys[0].boolean;
    } else {
        row->rstp_enable = false;
    }
}

static void
ovsrec_bridge_parse_rstp_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->rstp_status);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->rstp_status,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_bridge_parse_sflow(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->sflow = ovsrec_sflow_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_SFLOW], &datum->keys[0].uuid));
    } else {
        row->sflow = NULL;
    }
}

static void
ovsrec_bridge_parse_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->status);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->status,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_bridge_parse_stp_enable(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->stp_enable = datum->keys[0].boolean;
    } else {
        row->stp_enable = false;
    }
}

static void
ovsrec_bridge_unparse_auto_attach(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_bridge_unparse_controller(struct ovsdb_idl_row *row_)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    free(row->controller);
}

static void
ovsrec_bridge_unparse_datapath_id(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_bridge_unparse_datapath_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_bridge_unparse_datapath_version(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_bridge_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_bridge_unparse_fail_mode(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_bridge_unparse_flood_vlans(struct ovsdb_idl_row *row_)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    free(row->flood_vlans);
}

static void
ovsrec_bridge_unparse_flow_tables(struct ovsdb_idl_row *row_)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    free(row->key_flow_tables);
    free(row->value_flow_tables);
}

static void
ovsrec_bridge_unparse_ipfix(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_bridge_unparse_mcast_snooping_enable(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_bridge_unparse_mirrors(struct ovsdb_idl_row *row_)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    free(row->mirrors);
}

static void
ovsrec_bridge_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_bridge_unparse_netflow(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_bridge_unparse_other_config(struct ovsdb_idl_row *row_)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->other_config);
}

static void
ovsrec_bridge_unparse_ports(struct ovsdb_idl_row *row_)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    free(row->ports);
}

static void
ovsrec_bridge_unparse_protocols(struct ovsdb_idl_row *row_)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    free(row->protocols);
}

static void
ovsrec_bridge_unparse_rstp_enable(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_bridge_unparse_rstp_status(struct ovsdb_idl_row *row_)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->rstp_status);
}

static void
ovsrec_bridge_unparse_sflow(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_bridge_unparse_status(struct ovsdb_idl_row *row_)
{
    struct ovsrec_bridge *row = ovsrec_bridge_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->status);
}

static void
ovsrec_bridge_unparse_stp_enable(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_bridge_init__(struct ovsdb_idl_row *row)
{
    ovsrec_bridge_init(ovsrec_bridge_cast(row));
}

/* Clears the contents of 'row' in table "Bridge". */
void
ovsrec_bridge_init(struct ovsrec_bridge *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->other_config);
    smap_init(&row->rstp_status);
    smap_init(&row->status);
}

/* Searches table "Bridge" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_bridge *
ovsrec_bridge_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_bridge_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_BRIDGE], uuid));
}

/* Returns a row in table "Bridge" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_bridge *
ovsrec_bridge_first(const struct ovsdb_idl *idl)
{
    return ovsrec_bridge_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_BRIDGE]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_bridge *
ovsrec_bridge_next(const struct ovsrec_bridge *row)
{
    return ovsrec_bridge_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "Bridge".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_delete(const struct ovsrec_bridge *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Bridge" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_bridge *
ovsrec_bridge_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_bridge_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_BRIDGE], NULL));
}

/* Causes the original contents of column "auto_attach" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "auto_attach" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "auto_attach" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "auto_attach" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "auto_attach" has already been modified (with
 *     ovsrec_bridge_set_auto_attach()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_auto_attach() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_auto_attach(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_AUTO_ATTACH]);
}

/* Causes the original contents of column "controller" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "controller" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "controller" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "controller" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "controller" has already been modified (with
 *     ovsrec_bridge_set_controller()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_controller() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_controller(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_CONTROLLER]);
}

/* Causes the original contents of column "datapath_id" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "datapath_id" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "datapath_id" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "datapath_id" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "datapath_id" has already been modified (with
 *     ovsrec_bridge_set_datapath_id()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_datapath_id() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_datapath_id(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_DATAPATH_ID]);
}

/* Causes the original contents of column "datapath_type" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "datapath_type" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "datapath_type" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "datapath_type" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "datapath_type" has already been modified (with
 *     ovsrec_bridge_set_datapath_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_datapath_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_datapath_type(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_DATAPATH_TYPE]);
}

/* Causes the original contents of column "datapath_version" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "datapath_version" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "datapath_version" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "datapath_version" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "datapath_version" has already been modified (with
 *     ovsrec_bridge_set_datapath_version()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_datapath_version() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_datapath_version(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_DATAPATH_VERSION]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_bridge_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_external_ids(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "fail_mode" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "fail_mode" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "fail_mode" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "fail_mode" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "fail_mode" has already been modified (with
 *     ovsrec_bridge_set_fail_mode()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_fail_mode() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_fail_mode(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_FAIL_MODE]);
}

/* Causes the original contents of column "flood_vlans" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "flood_vlans" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "flood_vlans" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "flood_vlans" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "flood_vlans" has already been modified (with
 *     ovsrec_bridge_set_flood_vlans()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_flood_vlans() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_flood_vlans(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_FLOOD_VLANS]);
}

/* Causes the original contents of column "flow_tables" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "flow_tables" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "flow_tables" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "flow_tables" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "flow_tables" has already been modified (with
 *     ovsrec_bridge_set_flow_tables()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_flow_tables() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_flow_tables(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_FLOW_TABLES]);
}

/* Causes the original contents of column "ipfix" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ipfix" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ipfix" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ipfix" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "ipfix" has already been modified (with
 *     ovsrec_bridge_set_ipfix()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_ipfix() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_ipfix(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_IPFIX]);
}

/* Causes the original contents of column "mcast_snooping_enable" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "mcast_snooping_enable" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "mcast_snooping_enable" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "mcast_snooping_enable" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "mcast_snooping_enable" has already been modified (with
 *     ovsrec_bridge_set_mcast_snooping_enable()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_mcast_snooping_enable() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_mcast_snooping_enable(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_MCAST_SNOOPING_ENABLE]);
}

/* Causes the original contents of column "mirrors" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "mirrors" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "mirrors" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "mirrors" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "mirrors" has already been modified (with
 *     ovsrec_bridge_set_mirrors()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_mirrors() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_mirrors(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_MIRRORS]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "name" has already been modified (with
 *     ovsrec_bridge_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_name(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_NAME]);
}

/* Causes the original contents of column "netflow" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "netflow" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "netflow" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "netflow" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "netflow" has already been modified (with
 *     ovsrec_bridge_set_netflow()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_netflow() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_netflow(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_NETFLOW]);
}

/* Causes the original contents of column "other_config" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "other_config" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "other_config" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "other_config" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "other_config" has already been modified (with
 *     ovsrec_bridge_set_other_config()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_other_config() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_other_config(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_OTHER_CONFIG]);
}

/* Causes the original contents of column "ports" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ports" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ports" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ports" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "ports" has already been modified (with
 *     ovsrec_bridge_set_ports()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_ports() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_ports(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_PORTS]);
}

/* Causes the original contents of column "protocols" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "protocols" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "protocols" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "protocols" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "protocols" has already been modified (with
 *     ovsrec_bridge_set_protocols()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_protocols() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_protocols(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_PROTOCOLS]);
}

/* Causes the original contents of column "rstp_enable" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "rstp_enable" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "rstp_enable" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "rstp_enable" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "rstp_enable" has already been modified (with
 *     ovsrec_bridge_set_rstp_enable()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_rstp_enable() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_rstp_enable(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_RSTP_ENABLE]);
}

/* Causes the original contents of column "rstp_status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "rstp_status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "rstp_status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "rstp_status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "rstp_status" has already been modified (with
 *     ovsrec_bridge_set_rstp_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_rstp_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_rstp_status(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_RSTP_STATUS]);
}

/* Causes the original contents of column "sflow" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "sflow" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "sflow" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "sflow" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "sflow" has already been modified (with
 *     ovsrec_bridge_set_sflow()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_sflow() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_sflow(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_SFLOW]);
}

/* Causes the original contents of column "status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "status" has already been modified (with
 *     ovsrec_bridge_set_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_status(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_STATUS]);
}

/* Causes the original contents of column "stp_enable" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "stp_enable" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "stp_enable" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "stp_enable" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_bridge_insert()).
 *
 *   - If "stp_enable" has already been modified (with
 *     ovsrec_bridge_set_stp_enable()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_bridge_set_stp_enable() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_bridge_verify_stp_enable(const struct ovsrec_bridge *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_STP_ENABLE]);
}

/* Returns the "auto_attach" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes auto_attach's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "auto_attach" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_auto_attach(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_auto_attach);
}

/* Returns the "controller" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes controller's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "controller" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_controller(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_controller);
}

/* Returns the "datapath_id" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes datapath_id's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "datapath_id" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_datapath_id(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_datapath_id);
}

/* Returns the "datapath_type" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes datapath_type's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "datapath_type" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_datapath_type(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_datapath_type);
}

/* Returns the "datapath_version" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes datapath_version's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "datapath_version" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_datapath_version(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_datapath_version);
}

/* Returns the "external_ids" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_external_ids(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_external_ids);
}

/* Returns the "fail_mode" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes fail_mode's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "fail_mode" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_fail_mode(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_fail_mode);
}

/* Returns the "flood_vlans" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes flood_vlans's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "flood_vlans" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_flood_vlans(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_flood_vlans);
}

/* Returns the "flow_tables" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * 'value_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes flow_tables's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "flow_tables" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_flow_tables(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    ovs_assert(value_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_flow_tables);
}

/* Returns the "ipfix" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes ipfix's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ipfix" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_ipfix(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_ipfix);
}

/* Returns the "mcast_snooping_enable" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes mcast_snooping_enable's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "mcast_snooping_enable" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_mcast_snooping_enable(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_mcast_snooping_enable);
}

/* Returns the "mirrors" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes mirrors's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "mirrors" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_mirrors(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_mirrors);
}

/* Returns the "name" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_name(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_name);
}

/* Returns the "netflow" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes netflow's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "netflow" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_netflow(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_netflow);
}

/* Returns the "other_config" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes other_config's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "other_config" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_other_config(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_other_config);
}

/* Returns the "ports" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes ports's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ports" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_ports(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_ports);
}

/* Returns the "protocols" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes protocols's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "protocols" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_protocols(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_protocols);
}

/* Returns the "rstp_enable" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes rstp_enable's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "rstp_enable" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_rstp_enable(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_rstp_enable);
}

/* Returns the "rstp_status" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes rstp_status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "rstp_status" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_rstp_status(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_rstp_status);
}

/* Returns the "sflow" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes sflow's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "sflow" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_sflow(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_sflow);
}

/* Returns the "status" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "status" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_status(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_status);
}

/* Returns the "stp_enable" column's value from the "Bridge" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes stp_enable's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "stp_enable" member in ovsrec_bridge. */
const struct ovsdb_datum *
ovsrec_bridge_get_stp_enable(const struct ovsrec_bridge *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &ovsrec_bridge_col_stp_enable);
}

/* Sets the "auto_attach" column from the "Bridge" table in 'row' to
 * the 'auto_attach' set.
 *
 * If "auto_attach" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_auto_attach(const struct ovsrec_bridge *row, const struct ovsrec_autoattach *auto_attach)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (auto_attach) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = auto_attach->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_AUTO_ATTACH], &datum);
}

/* Sets the "controller" column from the "Bridge" table in 'row' to
 * the 'controller' set with 'n_controller' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_controller(const struct ovsrec_bridge *row, struct ovsrec_controller **controller, size_t n_controller)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_controller;
    datum.keys = n_controller ? xmalloc(n_controller * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_controller; i++) {
        datum.keys[i].uuid = controller[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_CONTROLLER], &datum);
}

/* Sets the "datapath_id" column from the "Bridge" table in 'row' to
 * the 'datapath_id' set.
 *
 * If "datapath_id" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_datapath_id(const struct ovsrec_bridge *row, const char *datapath_id)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (datapath_id) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, datapath_id);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_DATAPATH_ID], &datum);
}

/* Sets the "datapath_type" column from the "Bridge" table in 'row' to
 * 'datapath_type'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_datapath_type(const struct ovsrec_bridge *row, const char *datapath_type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, datapath_type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_DATAPATH_TYPE], &datum);
}

/* Sets the "datapath_version" column from the "Bridge" table in 'row' to
 * 'datapath_version'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_datapath_version(const struct ovsrec_bridge *row, const char *datapath_version)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, datapath_version);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_DATAPATH_VERSION], &datum);
}

/* Sets the "external_ids" column's value from the "Bridge" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_bridge_set_external_ids(const struct ovsrec_bridge *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "fail_mode" column from the "Bridge" table in 'row' to
 * the 'fail_mode' set.
 *
 * If "fail_mode" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "secure" or "standalone"
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_fail_mode(const struct ovsrec_bridge *row, const char *fail_mode)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (fail_mode) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, fail_mode);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_FAIL_MODE], &datum);
}

/* Sets the "flood_vlans" column from the "Bridge" table in 'row' to
 * the 'flood_vlans' set with 'n_flood_vlans' entries.
 *
 * Argument constraints: in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_flood_vlans(const struct ovsrec_bridge *row, const int64_t *flood_vlans, size_t n_flood_vlans)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_flood_vlans;
    datum.keys = n_flood_vlans ? xmalloc(n_flood_vlans * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_flood_vlans; i++) {
        datum.keys[i].integer = flood_vlans[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_FLOOD_VLANS], &datum);
}

/* Sets the "flow_tables" column from the "Bridge" table in 'row' to
 * the map with keys 'key_flow_tables' and values 'value_flow_tables'
 * with 'n_flow_tables' entries.
 *
 * Argument constraints: key in range 0 to 254
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_flow_tables(const struct ovsrec_bridge *row, const int64_t *key_flow_tables, struct ovsrec_flow_table **value_flow_tables, size_t n_flow_tables)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_flow_tables;
    datum.keys = n_flow_tables ? xmalloc(n_flow_tables * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_flow_tables * sizeof *datum.values);
    for (i = 0; i < n_flow_tables; i++) {
        datum.keys[i].integer = key_flow_tables[i];
        datum.values[i].uuid = value_flow_tables[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_UUID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_FLOW_TABLES], &datum);
}

/* Sets the "ipfix" column from the "Bridge" table in 'row' to
 * the 'ipfix' set.
 *
 * If "ipfix" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_ipfix(const struct ovsrec_bridge *row, const struct ovsrec_ipfix *ipfix)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (ipfix) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = ipfix->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_IPFIX], &datum);
}

/* Sets the "mcast_snooping_enable" column from the "Bridge" table in 'row' to
 * 'mcast_snooping_enable'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_mcast_snooping_enable(const struct ovsrec_bridge *row, bool mcast_snooping_enable)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = mcast_snooping_enable;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_MCAST_SNOOPING_ENABLE], &datum);
}

/* Sets the "mirrors" column from the "Bridge" table in 'row' to
 * the 'mirrors' set with 'n_mirrors' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_mirrors(const struct ovsrec_bridge *row, struct ovsrec_mirror **mirrors, size_t n_mirrors)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_mirrors;
    datum.keys = n_mirrors ? xmalloc(n_mirrors * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_mirrors; i++) {
        datum.keys[i].uuid = mirrors[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_MIRRORS], &datum);
}

/* Sets the "name" column from the "Bridge" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_name(const struct ovsrec_bridge *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_NAME], &datum);
}

/* Sets the "netflow" column from the "Bridge" table in 'row' to
 * the 'netflow' set.
 *
 * If "netflow" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_netflow(const struct ovsrec_bridge *row, const struct ovsrec_netflow *netflow)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (netflow) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = netflow->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_NETFLOW], &datum);
}

/* Sets the "other_config" column's value from the "Bridge" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
ovsrec_bridge_set_other_config(const struct ovsrec_bridge *row, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(other_config);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_OTHER_CONFIG],
                        &datum);
}


/* Sets the "ports" column from the "Bridge" table in 'row' to
 * the 'ports' set with 'n_ports' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_ports(const struct ovsrec_bridge *row, struct ovsrec_port **ports, size_t n_ports)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_ports;
    datum.keys = n_ports ? xmalloc(n_ports * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_ports; i++) {
        datum.keys[i].uuid = ports[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_PORTS], &datum);
}

/* Sets the "protocols" column from the "Bridge" table in 'row' to
 * the 'protocols' set with 'n_protocols' entries.
 *
 * Argument constraints: one of "OpenFlow11", "OpenFlow10", "OpenFlow13", "OpenFlow12", "OpenFlow15", or "OpenFlow14"
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_protocols(const struct ovsrec_bridge *row, const char **protocols, size_t n_protocols)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_protocols;
    datum.keys = n_protocols ? xmalloc(n_protocols * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_protocols; i++) {
        datum.keys[i].string = xstrdup(protocols[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_PROTOCOLS], &datum);
}

/* Sets the "rstp_enable" column from the "Bridge" table in 'row' to
 * 'rstp_enable'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_rstp_enable(const struct ovsrec_bridge *row, bool rstp_enable)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = rstp_enable;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_RSTP_ENABLE], &datum);
}

/* Sets the "rstp_status" column's value from the "Bridge" table in 'row'
 * to 'rstp_status'.
 *
 * The caller retains ownership of 'rstp_status' and everything in it. */
void
ovsrec_bridge_set_rstp_status(const struct ovsrec_bridge *row, const struct smap *rstp_status)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (rstp_status) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(rstp_status);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, rstp_status) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_RSTP_STATUS],
                        &datum);
}


/* Sets the "sflow" column from the "Bridge" table in 'row' to
 * the 'sflow' set.
 *
 * If "sflow" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_sflow(const struct ovsrec_bridge *row, const struct ovsrec_sflow *sflow)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (sflow) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = sflow->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_SFLOW], &datum);
}

/* Sets the "status" column's value from the "Bridge" table in 'row'
 * to 'status'.
 *
 * The caller retains ownership of 'status' and everything in it. */
void
ovsrec_bridge_set_status(const struct ovsrec_bridge *row, const struct smap *status)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (status) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(status);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, status) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_STATUS],
                        &datum);
}


/* Sets the "stp_enable" column from the "Bridge" table in 'row' to
 * 'stp_enable'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_bridge_set_stp_enable(const struct ovsrec_bridge *row, bool stp_enable)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = stp_enable;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_bridge_columns[OVSREC_BRIDGE_COL_STP_ENABLE], &datum);
}

struct ovsdb_idl_column ovsrec_bridge_columns[OVSREC_BRIDGE_N_COLUMNS];

static void
ovsrec_bridge_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_bridge_col_auto_attach. */
    c = &ovsrec_bridge_col_auto_attach;
    c->name = "auto_attach";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "AutoAttach";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_auto_attach;
    c->unparse = ovsrec_bridge_unparse_auto_attach;

    /* Initialize ovsrec_bridge_col_controller. */
    c = &ovsrec_bridge_col_controller;
    c->name = "controller";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Controller";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_controller;
    c->unparse = ovsrec_bridge_unparse_controller;

    /* Initialize ovsrec_bridge_col_datapath_id. */
    c = &ovsrec_bridge_col_datapath_id;
    c->name = "datapath_id";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_datapath_id;
    c->unparse = ovsrec_bridge_unparse_datapath_id;

    /* Initialize ovsrec_bridge_col_datapath_type. */
    c = &ovsrec_bridge_col_datapath_type;
    c->name = "datapath_type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_datapath_type;
    c->unparse = ovsrec_bridge_unparse_datapath_type;

    /* Initialize ovsrec_bridge_col_datapath_version. */
    c = &ovsrec_bridge_col_datapath_version;
    c->name = "datapath_version";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_datapath_version;
    c->unparse = ovsrec_bridge_unparse_datapath_version;

    /* Initialize ovsrec_bridge_col_external_ids. */
    c = &ovsrec_bridge_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_external_ids;
    c->unparse = ovsrec_bridge_unparse_external_ids;

    /* Initialize ovsrec_bridge_col_fail_mode. */
    c = &ovsrec_bridge_col_fail_mode;
    c->name = "fail_mode";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 2;
    c->type.key.enum_->keys = xmalloc(2 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("secure");
    c->type.key.enum_->keys[1].string = xstrdup("standalone");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_fail_mode;
    c->unparse = ovsrec_bridge_unparse_fail_mode;

    /* Initialize ovsrec_bridge_col_flood_vlans. */
    c = &ovsrec_bridge_col_flood_vlans;
    c->name = "flood_vlans";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4095);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 4096;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_flood_vlans;
    c->unparse = ovsrec_bridge_unparse_flood_vlans;

    /* Initialize ovsrec_bridge_col_flow_tables. */
    c = &ovsrec_bridge_col_flow_tables;
    c->name = "flow_tables";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(254);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_UUID);
    c->type.value.u.uuid.refTableName = "Flow_Table";
    c->type.value.u.uuid.refType = OVSDB_REF_STRONG;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_flow_tables;
    c->unparse = ovsrec_bridge_unparse_flow_tables;

    /* Initialize ovsrec_bridge_col_ipfix. */
    c = &ovsrec_bridge_col_ipfix;
    c->name = "ipfix";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "IPFIX";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_ipfix;
    c->unparse = ovsrec_bridge_unparse_ipfix;

    /* Initialize ovsrec_bridge_col_mcast_snooping_enable. */
    c = &ovsrec_bridge_col_mcast_snooping_enable;
    c->name = "mcast_snooping_enable";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_mcast_snooping_enable;
    c->unparse = ovsrec_bridge_unparse_mcast_snooping_enable;

    /* Initialize ovsrec_bridge_col_mirrors. */
    c = &ovsrec_bridge_col_mirrors;
    c->name = "mirrors";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Mirror";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_mirrors;
    c->unparse = ovsrec_bridge_unparse_mirrors;

    /* Initialize ovsrec_bridge_col_name. */
    c = &ovsrec_bridge_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = false;
    c->parse = ovsrec_bridge_parse_name;
    c->unparse = ovsrec_bridge_unparse_name;

    /* Initialize ovsrec_bridge_col_netflow. */
    c = &ovsrec_bridge_col_netflow;
    c->name = "netflow";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "NetFlow";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_netflow;
    c->unparse = ovsrec_bridge_unparse_netflow;

    /* Initialize ovsrec_bridge_col_other_config. */
    c = &ovsrec_bridge_col_other_config;
    c->name = "other_config";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_other_config;
    c->unparse = ovsrec_bridge_unparse_other_config;

    /* Initialize ovsrec_bridge_col_ports. */
    c = &ovsrec_bridge_col_ports;
    c->name = "ports";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Port";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_ports;
    c->unparse = ovsrec_bridge_unparse_ports;

    /* Initialize ovsrec_bridge_col_protocols. */
    c = &ovsrec_bridge_col_protocols;
    c->name = "protocols";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 6;
    c->type.key.enum_->keys = xmalloc(6 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("OpenFlow10");
    c->type.key.enum_->keys[1].string = xstrdup("OpenFlow11");
    c->type.key.enum_->keys[2].string = xstrdup("OpenFlow12");
    c->type.key.enum_->keys[3].string = xstrdup("OpenFlow13");
    c->type.key.enum_->keys[4].string = xstrdup("OpenFlow14");
    c->type.key.enum_->keys[5].string = xstrdup("OpenFlow15");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_protocols;
    c->unparse = ovsrec_bridge_unparse_protocols;

    /* Initialize ovsrec_bridge_col_rstp_enable. */
    c = &ovsrec_bridge_col_rstp_enable;
    c->name = "rstp_enable";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_rstp_enable;
    c->unparse = ovsrec_bridge_unparse_rstp_enable;

    /* Initialize ovsrec_bridge_col_rstp_status. */
    c = &ovsrec_bridge_col_rstp_status;
    c->name = "rstp_status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_rstp_status;
    c->unparse = ovsrec_bridge_unparse_rstp_status;

    /* Initialize ovsrec_bridge_col_sflow. */
    c = &ovsrec_bridge_col_sflow;
    c->name = "sflow";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "sFlow";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_sflow;
    c->unparse = ovsrec_bridge_unparse_sflow;

    /* Initialize ovsrec_bridge_col_status. */
    c = &ovsrec_bridge_col_status;
    c->name = "status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_status;
    c->unparse = ovsrec_bridge_unparse_status;

    /* Initialize ovsrec_bridge_col_stp_enable. */
    c = &ovsrec_bridge_col_stp_enable;
    c->name = "stp_enable";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_bridge_parse_stp_enable;
    c->unparse = ovsrec_bridge_unparse_stp_enable;
}

/* Controller table. */

static void
ovsrec_controller_parse_connection_mode(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->connection_mode = datum->keys[0].string;
    } else {
        row->connection_mode = NULL;
    }
}

static void
ovsrec_controller_parse_controller_burst_limit(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->controller_burst_limit = NULL;
    row->n_controller_burst_limit = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_controller_burst_limit) {
            row->controller_burst_limit = xmalloc(n * sizeof *row->controller_burst_limit);
        }
        row->controller_burst_limit[row->n_controller_burst_limit] = datum->keys[i].integer;
        row->n_controller_burst_limit++;
    }
}

static void
ovsrec_controller_parse_controller_rate_limit(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->controller_rate_limit = NULL;
    row->n_controller_rate_limit = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_controller_rate_limit) {
            row->controller_rate_limit = xmalloc(n * sizeof *row->controller_rate_limit);
        }
        row->controller_rate_limit[row->n_controller_rate_limit] = datum->keys[i].integer;
        row->n_controller_rate_limit++;
    }
}

static void
ovsrec_controller_parse_enable_async_messages(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->enable_async_messages = NULL;
    row->n_enable_async_messages = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_enable_async_messages) {
            row->enable_async_messages = xmalloc(n * sizeof_bool);
        }
        row->enable_async_messages[row->n_enable_async_messages] = datum->keys[i].boolean;
        row->n_enable_async_messages++;
    }
}

static void
ovsrec_controller_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_controller_parse_inactivity_probe(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->inactivity_probe = NULL;
    row->n_inactivity_probe = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_inactivity_probe) {
            row->inactivity_probe = xmalloc(n * sizeof *row->inactivity_probe);
        }
        row->inactivity_probe[row->n_inactivity_probe] = datum->keys[i].integer;
        row->n_inactivity_probe++;
    }
}

static void
ovsrec_controller_parse_is_connected(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->is_connected = datum->keys[0].boolean;
    } else {
        row->is_connected = false;
    }
}

static void
ovsrec_controller_parse_local_gateway(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->local_gateway = datum->keys[0].string;
    } else {
        row->local_gateway = NULL;
    }
}

static void
ovsrec_controller_parse_local_ip(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->local_ip = datum->keys[0].string;
    } else {
        row->local_ip = NULL;
    }
}

static void
ovsrec_controller_parse_local_netmask(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->local_netmask = datum->keys[0].string;
    } else {
        row->local_netmask = NULL;
    }
}

static void
ovsrec_controller_parse_max_backoff(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->max_backoff = NULL;
    row->n_max_backoff = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_max_backoff) {
            row->max_backoff = xmalloc(n * sizeof *row->max_backoff);
        }
        row->max_backoff[row->n_max_backoff] = datum->keys[i].integer;
        row->n_max_backoff++;
    }
}

static void
ovsrec_controller_parse_other_config(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->other_config);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->other_config,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_controller_parse_role(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->role = datum->keys[0].string;
    } else {
        row->role = NULL;
    }
}

static void
ovsrec_controller_parse_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->status);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->status,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_controller_parse_target(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->target = datum->keys[0].string;
    } else {
        row->target = "";
    }
}

static void
ovsrec_controller_unparse_connection_mode(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_controller_unparse_controller_burst_limit(struct ovsdb_idl_row *row_)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    free(row->controller_burst_limit);
}

static void
ovsrec_controller_unparse_controller_rate_limit(struct ovsdb_idl_row *row_)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    free(row->controller_rate_limit);
}

static void
ovsrec_controller_unparse_enable_async_messages(struct ovsdb_idl_row *row_)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    free(row->enable_async_messages);
}

static void
ovsrec_controller_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_controller_unparse_inactivity_probe(struct ovsdb_idl_row *row_)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    free(row->inactivity_probe);
}

static void
ovsrec_controller_unparse_is_connected(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_controller_unparse_local_gateway(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_controller_unparse_local_ip(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_controller_unparse_local_netmask(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_controller_unparse_max_backoff(struct ovsdb_idl_row *row_)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    free(row->max_backoff);
}

static void
ovsrec_controller_unparse_other_config(struct ovsdb_idl_row *row_)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->other_config);
}

static void
ovsrec_controller_unparse_role(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_controller_unparse_status(struct ovsdb_idl_row *row_)
{
    struct ovsrec_controller *row = ovsrec_controller_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->status);
}

static void
ovsrec_controller_unparse_target(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_controller_init__(struct ovsdb_idl_row *row)
{
    ovsrec_controller_init(ovsrec_controller_cast(row));
}

/* Clears the contents of 'row' in table "Controller". */
void
ovsrec_controller_init(struct ovsrec_controller *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->other_config);
    smap_init(&row->status);
}

/* Searches table "Controller" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_controller *
ovsrec_controller_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_controller_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_CONTROLLER], uuid));
}

/* Returns a row in table "Controller" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_controller *
ovsrec_controller_first(const struct ovsdb_idl *idl)
{
    return ovsrec_controller_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_CONTROLLER]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_controller *
ovsrec_controller_next(const struct ovsrec_controller *row)
{
    return ovsrec_controller_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "Controller".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_delete(const struct ovsrec_controller *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Controller" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_controller *
ovsrec_controller_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_controller_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_CONTROLLER], NULL));
}

/* Causes the original contents of column "connection_mode" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "connection_mode" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "connection_mode" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "connection_mode" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "connection_mode" has already been modified (with
 *     ovsrec_controller_set_connection_mode()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_connection_mode() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_connection_mode(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_CONNECTION_MODE]);
}

/* Causes the original contents of column "controller_burst_limit" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "controller_burst_limit" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "controller_burst_limit" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "controller_burst_limit" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "controller_burst_limit" has already been modified (with
 *     ovsrec_controller_set_controller_burst_limit()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_controller_burst_limit() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_controller_burst_limit(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_CONTROLLER_BURST_LIMIT]);
}

/* Causes the original contents of column "controller_rate_limit" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "controller_rate_limit" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "controller_rate_limit" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "controller_rate_limit" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "controller_rate_limit" has already been modified (with
 *     ovsrec_controller_set_controller_rate_limit()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_controller_rate_limit() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_controller_rate_limit(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_CONTROLLER_RATE_LIMIT]);
}

/* Causes the original contents of column "enable_async_messages" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "enable_async_messages" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "enable_async_messages" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "enable_async_messages" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "enable_async_messages" has already been modified (with
 *     ovsrec_controller_set_enable_async_messages()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_enable_async_messages() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_enable_async_messages(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_ENABLE_ASYNC_MESSAGES]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_controller_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_external_ids(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "inactivity_probe" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "inactivity_probe" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "inactivity_probe" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "inactivity_probe" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "inactivity_probe" has already been modified (with
 *     ovsrec_controller_set_inactivity_probe()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_inactivity_probe() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_inactivity_probe(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_INACTIVITY_PROBE]);
}

/* Causes the original contents of column "is_connected" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "is_connected" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "is_connected" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "is_connected" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "is_connected" has already been modified (with
 *     ovsrec_controller_set_is_connected()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_is_connected() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_is_connected(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_IS_CONNECTED]);
}

/* Causes the original contents of column "local_gateway" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "local_gateway" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "local_gateway" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "local_gateway" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "local_gateway" has already been modified (with
 *     ovsrec_controller_set_local_gateway()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_local_gateway() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_local_gateway(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_LOCAL_GATEWAY]);
}

/* Causes the original contents of column "local_ip" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "local_ip" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "local_ip" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "local_ip" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "local_ip" has already been modified (with
 *     ovsrec_controller_set_local_ip()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_local_ip() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_local_ip(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_LOCAL_IP]);
}

/* Causes the original contents of column "local_netmask" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "local_netmask" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "local_netmask" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "local_netmask" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "local_netmask" has already been modified (with
 *     ovsrec_controller_set_local_netmask()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_local_netmask() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_local_netmask(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_LOCAL_NETMASK]);
}

/* Causes the original contents of column "max_backoff" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "max_backoff" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "max_backoff" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "max_backoff" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "max_backoff" has already been modified (with
 *     ovsrec_controller_set_max_backoff()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_max_backoff() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_max_backoff(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_MAX_BACKOFF]);
}

/* Causes the original contents of column "other_config" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "other_config" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "other_config" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "other_config" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "other_config" has already been modified (with
 *     ovsrec_controller_set_other_config()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_other_config() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_other_config(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_OTHER_CONFIG]);
}

/* Causes the original contents of column "role" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "role" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "role" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "role" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "role" has already been modified (with
 *     ovsrec_controller_set_role()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_role() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_role(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_ROLE]);
}

/* Causes the original contents of column "status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "status" has already been modified (with
 *     ovsrec_controller_set_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_status(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_STATUS]);
}

/* Causes the original contents of column "target" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "target" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "target" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "target" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_controller_insert()).
 *
 *   - If "target" has already been modified (with
 *     ovsrec_controller_set_target()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_controller_set_target() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_controller_verify_target(const struct ovsrec_controller *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_TARGET]);
}

/* Returns the "connection_mode" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes connection_mode's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "connection_mode" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_connection_mode(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_connection_mode);
}

/* Returns the "controller_burst_limit" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes controller_burst_limit's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "controller_burst_limit" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_controller_burst_limit(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_controller_burst_limit);
}

/* Returns the "controller_rate_limit" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes controller_rate_limit's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "controller_rate_limit" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_controller_rate_limit(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_controller_rate_limit);
}

/* Returns the "enable_async_messages" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes enable_async_messages's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "enable_async_messages" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_enable_async_messages(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_enable_async_messages);
}

/* Returns the "external_ids" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_external_ids(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_external_ids);
}

/* Returns the "inactivity_probe" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes inactivity_probe's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "inactivity_probe" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_inactivity_probe(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_inactivity_probe);
}

/* Returns the "is_connected" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes is_connected's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "is_connected" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_is_connected(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_is_connected);
}

/* Returns the "local_gateway" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes local_gateway's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "local_gateway" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_local_gateway(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_local_gateway);
}

/* Returns the "local_ip" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes local_ip's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "local_ip" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_local_ip(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_local_ip);
}

/* Returns the "local_netmask" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes local_netmask's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "local_netmask" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_local_netmask(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_local_netmask);
}

/* Returns the "max_backoff" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes max_backoff's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "max_backoff" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_max_backoff(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_max_backoff);
}

/* Returns the "other_config" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes other_config's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "other_config" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_other_config(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_other_config);
}

/* Returns the "role" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes role's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "role" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_role(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_role);
}

/* Returns the "status" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "status" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_status(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_status);
}

/* Returns the "target" column's value from the "Controller" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes target's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "target" member in ovsrec_controller. */
const struct ovsdb_datum *
ovsrec_controller_get_target(const struct ovsrec_controller *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_controller_col_target);
}

/* Sets the "connection_mode" column from the "Controller" table in 'row' to
 * the 'connection_mode' set.
 *
 * If "connection_mode" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "in-band" or "out-of-band"
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_controller_set_connection_mode(const struct ovsrec_controller *row, const char *connection_mode)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (connection_mode) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, connection_mode);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_CONNECTION_MODE], &datum);
}

/* Sets the "controller_burst_limit" column from the "Controller" table in 'row' to
 * the 'controller_burst_limit' set with 'n_controller_burst_limit' entries.
 *
 * 'n_controller_burst_limit' may be 0 or 1; if it is 0, then 'controller_burst_limit'
 * may be NULL.
 *
 * Argument constraints: at least 25
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_controller_set_controller_burst_limit(const struct ovsrec_controller *row, const int64_t *controller_burst_limit, size_t n_controller_burst_limit)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_controller_burst_limit) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *controller_burst_limit;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_CONTROLLER_BURST_LIMIT], &datum);
}

/* Sets the "controller_rate_limit" column from the "Controller" table in 'row' to
 * the 'controller_rate_limit' set with 'n_controller_rate_limit' entries.
 *
 * 'n_controller_rate_limit' may be 0 or 1; if it is 0, then 'controller_rate_limit'
 * may be NULL.
 *
 * Argument constraints: at least 100
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_controller_set_controller_rate_limit(const struct ovsrec_controller *row, const int64_t *controller_rate_limit, size_t n_controller_rate_limit)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_controller_rate_limit) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *controller_rate_limit;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_CONTROLLER_RATE_LIMIT], &datum);
}

/* Sets the "enable_async_messages" column from the "Controller" table in 'row' to
 * the 'enable_async_messages' set with 'n_enable_async_messages' entries.
 *
 * 'n_enable_async_messages' may be 0 or 1; if it is 0, then 'enable_async_messages'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_controller_set_enable_async_messages(const struct ovsrec_controller *row, const bool *enable_async_messages, size_t n_enable_async_messages)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_enable_async_messages) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *enable_async_messages;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_ENABLE_ASYNC_MESSAGES], &datum);
}

/* Sets the "external_ids" column's value from the "Controller" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_controller_set_external_ids(const struct ovsrec_controller *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "inactivity_probe" column from the "Controller" table in 'row' to
 * the 'inactivity_probe' set with 'n_inactivity_probe' entries.
 *
 * 'n_inactivity_probe' may be 0 or 1; if it is 0, then 'inactivity_probe'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_controller_set_inactivity_probe(const struct ovsrec_controller *row, const int64_t *inactivity_probe, size_t n_inactivity_probe)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_inactivity_probe) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *inactivity_probe;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_INACTIVITY_PROBE], &datum);
}

/* Sets the "is_connected" column from the "Controller" table in 'row' to
 * 'is_connected'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_controller_set_is_connected(const struct ovsrec_controller *row, bool is_connected)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = is_connected;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_IS_CONNECTED], &datum);
}

/* Sets the "local_gateway" column from the "Controller" table in 'row' to
 * the 'local_gateway' set.
 *
 * If "local_gateway" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_controller_set_local_gateway(const struct ovsrec_controller *row, const char *local_gateway)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (local_gateway) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, local_gateway);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_LOCAL_GATEWAY], &datum);
}

/* Sets the "local_ip" column from the "Controller" table in 'row' to
 * the 'local_ip' set.
 *
 * If "local_ip" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_controller_set_local_ip(const struct ovsrec_controller *row, const char *local_ip)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (local_ip) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, local_ip);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_LOCAL_IP], &datum);
}

/* Sets the "local_netmask" column from the "Controller" table in 'row' to
 * the 'local_netmask' set.
 *
 * If "local_netmask" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_controller_set_local_netmask(const struct ovsrec_controller *row, const char *local_netmask)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (local_netmask) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, local_netmask);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_LOCAL_NETMASK], &datum);
}

/* Sets the "max_backoff" column from the "Controller" table in 'row' to
 * the 'max_backoff' set with 'n_max_backoff' entries.
 *
 * 'n_max_backoff' may be 0 or 1; if it is 0, then 'max_backoff'
 * may be NULL.
 *
 * Argument constraints: at least 1,000
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_controller_set_max_backoff(const struct ovsrec_controller *row, const int64_t *max_backoff, size_t n_max_backoff)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_max_backoff) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *max_backoff;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_MAX_BACKOFF], &datum);
}

/* Sets the "other_config" column's value from the "Controller" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
ovsrec_controller_set_other_config(const struct ovsrec_controller *row, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(other_config);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_OTHER_CONFIG],
                        &datum);
}


/* Sets the "role" column from the "Controller" table in 'row' to
 * the 'role' set.
 *
 * If "role" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: one of "slave", "other", or "master"
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_controller_set_role(const struct ovsrec_controller *row, const char *role)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (role) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, role);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_ROLE], &datum);
}

/* Sets the "status" column's value from the "Controller" table in 'row'
 * to 'status'.
 *
 * The caller retains ownership of 'status' and everything in it. */
void
ovsrec_controller_set_status(const struct ovsrec_controller *row, const struct smap *status)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (status) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(status);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, status) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_STATUS],
                        &datum);
}


/* Sets the "target" column from the "Controller" table in 'row' to
 * 'target'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_controller_set_target(const struct ovsrec_controller *row, const char *target)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, target);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_controller_columns[OVSREC_CONTROLLER_COL_TARGET], &datum);
}

struct ovsdb_idl_column ovsrec_controller_columns[OVSREC_CONTROLLER_N_COLUMNS];

static void
ovsrec_controller_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_controller_col_connection_mode. */
    c = &ovsrec_controller_col_connection_mode;
    c->name = "connection_mode";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 2;
    c->type.key.enum_->keys = xmalloc(2 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("in-band");
    c->type.key.enum_->keys[1].string = xstrdup("out-of-band");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_connection_mode;
    c->unparse = ovsrec_controller_unparse_connection_mode;

    /* Initialize ovsrec_controller_col_controller_burst_limit. */
    c = &ovsrec_controller_col_controller_burst_limit;
    c->name = "controller_burst_limit";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(25);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_controller_burst_limit;
    c->unparse = ovsrec_controller_unparse_controller_burst_limit;

    /* Initialize ovsrec_controller_col_controller_rate_limit. */
    c = &ovsrec_controller_col_controller_rate_limit;
    c->name = "controller_rate_limit";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(100);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_controller_rate_limit;
    c->unparse = ovsrec_controller_unparse_controller_rate_limit;

    /* Initialize ovsrec_controller_col_enable_async_messages. */
    c = &ovsrec_controller_col_enable_async_messages;
    c->name = "enable_async_messages";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_enable_async_messages;
    c->unparse = ovsrec_controller_unparse_enable_async_messages;

    /* Initialize ovsrec_controller_col_external_ids. */
    c = &ovsrec_controller_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_external_ids;
    c->unparse = ovsrec_controller_unparse_external_ids;

    /* Initialize ovsrec_controller_col_inactivity_probe. */
    c = &ovsrec_controller_col_inactivity_probe;
    c->name = "inactivity_probe";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_inactivity_probe;
    c->unparse = ovsrec_controller_unparse_inactivity_probe;

    /* Initialize ovsrec_controller_col_is_connected. */
    c = &ovsrec_controller_col_is_connected;
    c->name = "is_connected";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_is_connected;
    c->unparse = ovsrec_controller_unparse_is_connected;

    /* Initialize ovsrec_controller_col_local_gateway. */
    c = &ovsrec_controller_col_local_gateway;
    c->name = "local_gateway";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_local_gateway;
    c->unparse = ovsrec_controller_unparse_local_gateway;

    /* Initialize ovsrec_controller_col_local_ip. */
    c = &ovsrec_controller_col_local_ip;
    c->name = "local_ip";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_local_ip;
    c->unparse = ovsrec_controller_unparse_local_ip;

    /* Initialize ovsrec_controller_col_local_netmask. */
    c = &ovsrec_controller_col_local_netmask;
    c->name = "local_netmask";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_local_netmask;
    c->unparse = ovsrec_controller_unparse_local_netmask;

    /* Initialize ovsrec_controller_col_max_backoff. */
    c = &ovsrec_controller_col_max_backoff;
    c->name = "max_backoff";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(1000);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_max_backoff;
    c->unparse = ovsrec_controller_unparse_max_backoff;

    /* Initialize ovsrec_controller_col_other_config. */
    c = &ovsrec_controller_col_other_config;
    c->name = "other_config";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_other_config;
    c->unparse = ovsrec_controller_unparse_other_config;

    /* Initialize ovsrec_controller_col_role. */
    c = &ovsrec_controller_col_role;
    c->name = "role";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 3;
    c->type.key.enum_->keys = xmalloc(3 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("master");
    c->type.key.enum_->keys[1].string = xstrdup("other");
    c->type.key.enum_->keys[2].string = xstrdup("slave");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_role;
    c->unparse = ovsrec_controller_unparse_role;

    /* Initialize ovsrec_controller_col_status. */
    c = &ovsrec_controller_col_status;
    c->name = "status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_status;
    c->unparse = ovsrec_controller_unparse_status;

    /* Initialize ovsrec_controller_col_target. */
    c = &ovsrec_controller_col_target;
    c->name = "target";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_controller_parse_target;
    c->unparse = ovsrec_controller_unparse_target;
}

/* Flow_Sample_Collector_Set table. */

static void
ovsrec_flow_sample_collector_set_parse_bridge(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_flow_sample_collector_set *row = ovsrec_flow_sample_collector_set_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->bridge = ovsrec_bridge_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_BRIDGE], &datum->keys[0].uuid));
    } else {
        row->bridge = NULL;
    }
}

static void
ovsrec_flow_sample_collector_set_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_flow_sample_collector_set *row = ovsrec_flow_sample_collector_set_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_flow_sample_collector_set_parse_id(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_flow_sample_collector_set *row = ovsrec_flow_sample_collector_set_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->id = datum->keys[0].integer;
    } else {
        row->id = 0;
    }
}

static void
ovsrec_flow_sample_collector_set_parse_ipfix(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_flow_sample_collector_set *row = ovsrec_flow_sample_collector_set_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ipfix = ovsrec_ipfix_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_IPFIX], &datum->keys[0].uuid));
    } else {
        row->ipfix = NULL;
    }
}

static void
ovsrec_flow_sample_collector_set_unparse_bridge(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_flow_sample_collector_set_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_flow_sample_collector_set *row = ovsrec_flow_sample_collector_set_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_flow_sample_collector_set_unparse_id(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_flow_sample_collector_set_unparse_ipfix(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_flow_sample_collector_set_init__(struct ovsdb_idl_row *row)
{
    ovsrec_flow_sample_collector_set_init(ovsrec_flow_sample_collector_set_cast(row));
}

/* Clears the contents of 'row' in table "Flow_Sample_Collector_Set". */
void
ovsrec_flow_sample_collector_set_init(struct ovsrec_flow_sample_collector_set *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "Flow_Sample_Collector_Set" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_flow_sample_collector_set *
ovsrec_flow_sample_collector_set_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_flow_sample_collector_set_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_FLOW_SAMPLE_COLLECTOR_SET], uuid));
}

/* Returns a row in table "Flow_Sample_Collector_Set" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_flow_sample_collector_set *
ovsrec_flow_sample_collector_set_first(const struct ovsdb_idl *idl)
{
    return ovsrec_flow_sample_collector_set_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_FLOW_SAMPLE_COLLECTOR_SET]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_flow_sample_collector_set *
ovsrec_flow_sample_collector_set_next(const struct ovsrec_flow_sample_collector_set *row)
{
    return ovsrec_flow_sample_collector_set_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "Flow_Sample_Collector_Set".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_flow_sample_collector_set_delete(const struct ovsrec_flow_sample_collector_set *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Flow_Sample_Collector_Set" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_flow_sample_collector_set *
ovsrec_flow_sample_collector_set_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_flow_sample_collector_set_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_FLOW_SAMPLE_COLLECTOR_SET], NULL));
}

/* Causes the original contents of column "bridge" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bridge" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bridge" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bridge" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_flow_sample_collector_set_insert()).
 *
 *   - If "bridge" has already been modified (with
 *     ovsrec_flow_sample_collector_set_set_bridge()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_flow_sample_collector_set_set_bridge() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_flow_sample_collector_set_verify_bridge(const struct ovsrec_flow_sample_collector_set *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_flow_sample_collector_set_columns[OVSREC_FLOW_SAMPLE_COLLECTOR_SET_COL_BRIDGE]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_flow_sample_collector_set_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_flow_sample_collector_set_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_flow_sample_collector_set_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_flow_sample_collector_set_verify_external_ids(const struct ovsrec_flow_sample_collector_set *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_flow_sample_collector_set_columns[OVSREC_FLOW_SAMPLE_COLLECTOR_SET_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "id" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "id" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "id" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "id" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_flow_sample_collector_set_insert()).
 *
 *   - If "id" has already been modified (with
 *     ovsrec_flow_sample_collector_set_set_id()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_flow_sample_collector_set_set_id() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_flow_sample_collector_set_verify_id(const struct ovsrec_flow_sample_collector_set *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_flow_sample_collector_set_columns[OVSREC_FLOW_SAMPLE_COLLECTOR_SET_COL_ID]);
}

/* Causes the original contents of column "ipfix" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ipfix" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ipfix" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ipfix" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_flow_sample_collector_set_insert()).
 *
 *   - If "ipfix" has already been modified (with
 *     ovsrec_flow_sample_collector_set_set_ipfix()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_flow_sample_collector_set_set_ipfix() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_flow_sample_collector_set_verify_ipfix(const struct ovsrec_flow_sample_collector_set *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_flow_sample_collector_set_columns[OVSREC_FLOW_SAMPLE_COLLECTOR_SET_COL_IPFIX]);
}

/* Returns the "bridge" column's value from the "Flow_Sample_Collector_Set" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes bridge's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bridge" member in ovsrec_flow_sample_collector_set. */
const struct ovsdb_datum *
ovsrec_flow_sample_collector_set_get_bridge(const struct ovsrec_flow_sample_collector_set *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_flow_sample_collector_set_col_bridge);
}

/* Returns the "external_ids" column's value from the "Flow_Sample_Collector_Set" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_flow_sample_collector_set. */
const struct ovsdb_datum *
ovsrec_flow_sample_collector_set_get_external_ids(const struct ovsrec_flow_sample_collector_set *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_flow_sample_collector_set_col_external_ids);
}

/* Returns the "id" column's value from the "Flow_Sample_Collector_Set" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes id's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "id" member in ovsrec_flow_sample_collector_set. */
const struct ovsdb_datum *
ovsrec_flow_sample_collector_set_get_id(const struct ovsrec_flow_sample_collector_set *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_flow_sample_collector_set_col_id);
}

/* Returns the "ipfix" column's value from the "Flow_Sample_Collector_Set" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes ipfix's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ipfix" member in ovsrec_flow_sample_collector_set. */
const struct ovsdb_datum *
ovsrec_flow_sample_collector_set_get_ipfix(const struct ovsrec_flow_sample_collector_set *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_flow_sample_collector_set_col_ipfix);
}

/* Sets the "bridge" column from the "Flow_Sample_Collector_Set" table in 'row' to
 * 'bridge'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_flow_sample_collector_set_set_bridge(const struct ovsrec_flow_sample_collector_set *row, const struct ovsrec_bridge *bridge)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.uuid = bridge->header_.uuid;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_flow_sample_collector_set_columns[OVSREC_FLOW_SAMPLE_COLLECTOR_SET_COL_BRIDGE], &datum);
}

/* Sets the "external_ids" column's value from the "Flow_Sample_Collector_Set" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_flow_sample_collector_set_set_external_ids(const struct ovsrec_flow_sample_collector_set *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_flow_sample_collector_set_columns[OVSREC_FLOW_SAMPLE_COLLECTOR_SET_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "id" column from the "Flow_Sample_Collector_Set" table in 'row' to
 * 'id'.
 *
 * Argument constraints: in range 0 to 4,294,967,295
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_flow_sample_collector_set_set_id(const struct ovsrec_flow_sample_collector_set *row, int64_t id)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = id;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_flow_sample_collector_set_columns[OVSREC_FLOW_SAMPLE_COLLECTOR_SET_COL_ID], &datum);
}

/* Sets the "ipfix" column from the "Flow_Sample_Collector_Set" table in 'row' to
 * the 'ipfix' set.
 *
 * If "ipfix" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_flow_sample_collector_set_set_ipfix(const struct ovsrec_flow_sample_collector_set *row, const struct ovsrec_ipfix *ipfix)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (ipfix) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = ipfix->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_flow_sample_collector_set_columns[OVSREC_FLOW_SAMPLE_COLLECTOR_SET_COL_IPFIX], &datum);
}

struct ovsdb_idl_column ovsrec_flow_sample_collector_set_columns[OVSREC_FLOW_SAMPLE_COLLECTOR_SET_N_COLUMNS];

static void
ovsrec_flow_sample_collector_set_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_flow_sample_collector_set_col_bridge. */
    c = &ovsrec_flow_sample_collector_set_col_bridge;
    c->name = "bridge";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Bridge";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_flow_sample_collector_set_parse_bridge;
    c->unparse = ovsrec_flow_sample_collector_set_unparse_bridge;

    /* Initialize ovsrec_flow_sample_collector_set_col_external_ids. */
    c = &ovsrec_flow_sample_collector_set_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_flow_sample_collector_set_parse_external_ids;
    c->unparse = ovsrec_flow_sample_collector_set_unparse_external_ids;

    /* Initialize ovsrec_flow_sample_collector_set_col_id. */
    c = &ovsrec_flow_sample_collector_set_col_id;
    c->name = "id";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4294967295);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_flow_sample_collector_set_parse_id;
    c->unparse = ovsrec_flow_sample_collector_set_unparse_id;

    /* Initialize ovsrec_flow_sample_collector_set_col_ipfix. */
    c = &ovsrec_flow_sample_collector_set_col_ipfix;
    c->name = "ipfix";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "IPFIX";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_flow_sample_collector_set_parse_ipfix;
    c->unparse = ovsrec_flow_sample_collector_set_unparse_ipfix;
}

/* Flow_Table table. */

static void
ovsrec_flow_table_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_flow_table *row = ovsrec_flow_table_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_flow_table_parse_flow_limit(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_flow_table *row = ovsrec_flow_table_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->flow_limit = NULL;
    row->n_flow_limit = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_flow_limit) {
            row->flow_limit = xmalloc(n * sizeof *row->flow_limit);
        }
        row->flow_limit[row->n_flow_limit] = datum->keys[i].integer;
        row->n_flow_limit++;
    }
}

static void
ovsrec_flow_table_parse_groups(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_flow_table *row = ovsrec_flow_table_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->groups = NULL;
    row->n_groups = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_groups) {
            row->groups = xmalloc(datum->n * sizeof *row->groups);
        }
        row->groups[row->n_groups] = datum->keys[i].string;
        row->n_groups++;
    }
}

static void
ovsrec_flow_table_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_flow_table *row = ovsrec_flow_table_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = NULL;
    }
}

static void
ovsrec_flow_table_parse_overflow_policy(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_flow_table *row = ovsrec_flow_table_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->overflow_policy = datum->keys[0].string;
    } else {
        row->overflow_policy = NULL;
    }
}

static void
ovsrec_flow_table_parse_prefixes(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_flow_table *row = ovsrec_flow_table_cast(row_);
    size_t n = MIN(3, datum->n);
    size_t i;

    ovs_assert(inited);
    row->prefixes = NULL;
    row->n_prefixes = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_prefixes) {
            row->prefixes = xmalloc(n * sizeof *row->prefixes);
        }
        row->prefixes[row->n_prefixes] = datum->keys[i].string;
        row->n_prefixes++;
    }
}

static void
ovsrec_flow_table_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_flow_table *row = ovsrec_flow_table_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_flow_table_unparse_flow_limit(struct ovsdb_idl_row *row_)
{
    struct ovsrec_flow_table *row = ovsrec_flow_table_cast(row_);

    ovs_assert(inited);
    free(row->flow_limit);
}

static void
ovsrec_flow_table_unparse_groups(struct ovsdb_idl_row *row_)
{
    struct ovsrec_flow_table *row = ovsrec_flow_table_cast(row_);

    ovs_assert(inited);
    free(row->groups);
}

static void
ovsrec_flow_table_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_flow_table_unparse_overflow_policy(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_flow_table_unparse_prefixes(struct ovsdb_idl_row *row_)
{
    struct ovsrec_flow_table *row = ovsrec_flow_table_cast(row_);

    ovs_assert(inited);
    free(row->prefixes);
}

static void
ovsrec_flow_table_init__(struct ovsdb_idl_row *row)
{
    ovsrec_flow_table_init(ovsrec_flow_table_cast(row));
}

/* Clears the contents of 'row' in table "Flow_Table". */
void
ovsrec_flow_table_init(struct ovsrec_flow_table *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "Flow_Table" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_flow_table *
ovsrec_flow_table_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_flow_table_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_FLOW_TABLE], uuid));
}

/* Returns a row in table "Flow_Table" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_flow_table *
ovsrec_flow_table_first(const struct ovsdb_idl *idl)
{
    return ovsrec_flow_table_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_FLOW_TABLE]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_flow_table *
ovsrec_flow_table_next(const struct ovsrec_flow_table *row)
{
    return ovsrec_flow_table_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "Flow_Table".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_flow_table_delete(const struct ovsrec_flow_table *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Flow_Table" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_flow_table *
ovsrec_flow_table_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_flow_table_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_FLOW_TABLE], NULL));
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_flow_table_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_flow_table_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_flow_table_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_flow_table_verify_external_ids(const struct ovsrec_flow_table *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_flow_table_columns[OVSREC_FLOW_TABLE_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "flow_limit" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "flow_limit" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "flow_limit" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "flow_limit" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_flow_table_insert()).
 *
 *   - If "flow_limit" has already been modified (with
 *     ovsrec_flow_table_set_flow_limit()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_flow_table_set_flow_limit() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_flow_table_verify_flow_limit(const struct ovsrec_flow_table *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_flow_table_columns[OVSREC_FLOW_TABLE_COL_FLOW_LIMIT]);
}

/* Causes the original contents of column "groups" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "groups" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "groups" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "groups" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_flow_table_insert()).
 *
 *   - If "groups" has already been modified (with
 *     ovsrec_flow_table_set_groups()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_flow_table_set_groups() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_flow_table_verify_groups(const struct ovsrec_flow_table *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_flow_table_columns[OVSREC_FLOW_TABLE_COL_GROUPS]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_flow_table_insert()).
 *
 *   - If "name" has already been modified (with
 *     ovsrec_flow_table_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_flow_table_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_flow_table_verify_name(const struct ovsrec_flow_table *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_flow_table_columns[OVSREC_FLOW_TABLE_COL_NAME]);
}

/* Causes the original contents of column "overflow_policy" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "overflow_policy" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "overflow_policy" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "overflow_policy" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_flow_table_insert()).
 *
 *   - If "overflow_policy" has already been modified (with
 *     ovsrec_flow_table_set_overflow_policy()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_flow_table_set_overflow_policy() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_flow_table_verify_overflow_policy(const struct ovsrec_flow_table *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_flow_table_columns[OVSREC_FLOW_TABLE_COL_OVERFLOW_POLICY]);
}

/* Causes the original contents of column "prefixes" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "prefixes" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "prefixes" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "prefixes" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_flow_table_insert()).
 *
 *   - If "prefixes" has already been modified (with
 *     ovsrec_flow_table_set_prefixes()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_flow_table_set_prefixes() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_flow_table_verify_prefixes(const struct ovsrec_flow_table *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_flow_table_columns[OVSREC_FLOW_TABLE_COL_PREFIXES]);
}

/* Returns the "external_ids" column's value from the "Flow_Table" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_flow_table. */
const struct ovsdb_datum *
ovsrec_flow_table_get_external_ids(const struct ovsrec_flow_table *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_flow_table_col_external_ids);
}

/* Returns the "flow_limit" column's value from the "Flow_Table" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes flow_limit's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "flow_limit" member in ovsrec_flow_table. */
const struct ovsdb_datum *
ovsrec_flow_table_get_flow_limit(const struct ovsrec_flow_table *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_flow_table_col_flow_limit);
}

/* Returns the "groups" column's value from the "Flow_Table" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes groups's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "groups" member in ovsrec_flow_table. */
const struct ovsdb_datum *
ovsrec_flow_table_get_groups(const struct ovsrec_flow_table *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_flow_table_col_groups);
}

/* Returns the "name" column's value from the "Flow_Table" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in ovsrec_flow_table. */
const struct ovsdb_datum *
ovsrec_flow_table_get_name(const struct ovsrec_flow_table *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_flow_table_col_name);
}

/* Returns the "overflow_policy" column's value from the "Flow_Table" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes overflow_policy's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "overflow_policy" member in ovsrec_flow_table. */
const struct ovsdb_datum *
ovsrec_flow_table_get_overflow_policy(const struct ovsrec_flow_table *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_flow_table_col_overflow_policy);
}

/* Returns the "prefixes" column's value from the "Flow_Table" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes prefixes's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "prefixes" member in ovsrec_flow_table. */
const struct ovsdb_datum *
ovsrec_flow_table_get_prefixes(const struct ovsrec_flow_table *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_flow_table_col_prefixes);
}

/* Sets the "external_ids" column's value from the "Flow_Table" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_flow_table_set_external_ids(const struct ovsrec_flow_table *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_flow_table_columns[OVSREC_FLOW_TABLE_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "flow_limit" column from the "Flow_Table" table in 'row' to
 * the 'flow_limit' set with 'n_flow_limit' entries.
 *
 * 'n_flow_limit' may be 0 or 1; if it is 0, then 'flow_limit'
 * may be NULL.
 *
 * Argument constraints: at least 0
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_flow_table_set_flow_limit(const struct ovsrec_flow_table *row, const int64_t *flow_limit, size_t n_flow_limit)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_flow_limit) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *flow_limit;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_flow_table_columns[OVSREC_FLOW_TABLE_COL_FLOW_LIMIT], &datum);
}

/* Sets the "groups" column from the "Flow_Table" table in 'row' to
 * the 'groups' set with 'n_groups' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_flow_table_set_groups(const struct ovsrec_flow_table *row, const char **groups, size_t n_groups)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_groups;
    datum.keys = n_groups ? xmalloc(n_groups * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_groups; i++) {
        datum.keys[i].string = xstrdup(groups[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_flow_table_columns[OVSREC_FLOW_TABLE_COL_GROUPS], &datum);
}

/* Sets the "name" column from the "Flow_Table" table in 'row' to
 * the 'name' set.
 *
 * If "name" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_flow_table_set_name(const struct ovsrec_flow_table *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (name) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, name);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_flow_table_columns[OVSREC_FLOW_TABLE_COL_NAME], &datum);
}

/* Sets the "overflow_policy" column from the "Flow_Table" table in 'row' to
 * the 'overflow_policy' set.
 *
 * If "overflow_policy" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "refuse" or "evict"
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_flow_table_set_overflow_policy(const struct ovsrec_flow_table *row, const char *overflow_policy)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (overflow_policy) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, overflow_policy);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_flow_table_columns[OVSREC_FLOW_TABLE_COL_OVERFLOW_POLICY], &datum);
}

/* Sets the "prefixes" column from the "Flow_Table" table in 'row' to
 * the 'prefixes' set with 'n_prefixes' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_flow_table_set_prefixes(const struct ovsrec_flow_table *row, const char **prefixes, size_t n_prefixes)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_prefixes;
    datum.keys = n_prefixes ? xmalloc(n_prefixes * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_prefixes; i++) {
        datum.keys[i].string = xstrdup(prefixes[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_flow_table_columns[OVSREC_FLOW_TABLE_COL_PREFIXES], &datum);
}

struct ovsdb_idl_column ovsrec_flow_table_columns[OVSREC_FLOW_TABLE_N_COLUMNS];

static void
ovsrec_flow_table_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_flow_table_col_external_ids. */
    c = &ovsrec_flow_table_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_flow_table_parse_external_ids;
    c->unparse = ovsrec_flow_table_unparse_external_ids;

    /* Initialize ovsrec_flow_table_col_flow_limit. */
    c = &ovsrec_flow_table_col_flow_limit;
    c->name = "flow_limit";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_flow_table_parse_flow_limit;
    c->unparse = ovsrec_flow_table_unparse_flow_limit;

    /* Initialize ovsrec_flow_table_col_groups. */
    c = &ovsrec_flow_table_col_groups;
    c->name = "groups";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_flow_table_parse_groups;
    c->unparse = ovsrec_flow_table_unparse_groups;

    /* Initialize ovsrec_flow_table_col_name. */
    c = &ovsrec_flow_table_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_flow_table_parse_name;
    c->unparse = ovsrec_flow_table_unparse_name;

    /* Initialize ovsrec_flow_table_col_overflow_policy. */
    c = &ovsrec_flow_table_col_overflow_policy;
    c->name = "overflow_policy";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 2;
    c->type.key.enum_->keys = xmalloc(2 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("evict");
    c->type.key.enum_->keys[1].string = xstrdup("refuse");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_flow_table_parse_overflow_policy;
    c->unparse = ovsrec_flow_table_unparse_overflow_policy;

    /* Initialize ovsrec_flow_table_col_prefixes. */
    c = &ovsrec_flow_table_col_prefixes;
    c->name = "prefixes";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 3;
    c->mutable = true;
    c->parse = ovsrec_flow_table_parse_prefixes;
    c->unparse = ovsrec_flow_table_unparse_prefixes;
}

/* IPFIX table. */

static void
ovsrec_ipfix_parse_cache_active_timeout(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->cache_active_timeout = NULL;
    row->n_cache_active_timeout = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_cache_active_timeout) {
            row->cache_active_timeout = xmalloc(n * sizeof *row->cache_active_timeout);
        }
        row->cache_active_timeout[row->n_cache_active_timeout] = datum->keys[i].integer;
        row->n_cache_active_timeout++;
    }
}

static void
ovsrec_ipfix_parse_cache_max_flows(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->cache_max_flows = NULL;
    row->n_cache_max_flows = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_cache_max_flows) {
            row->cache_max_flows = xmalloc(n * sizeof *row->cache_max_flows);
        }
        row->cache_max_flows[row->n_cache_max_flows] = datum->keys[i].integer;
        row->n_cache_max_flows++;
    }
}

static void
ovsrec_ipfix_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_ipfix_parse_obs_domain_id(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->obs_domain_id = NULL;
    row->n_obs_domain_id = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_obs_domain_id) {
            row->obs_domain_id = xmalloc(n * sizeof *row->obs_domain_id);
        }
        row->obs_domain_id[row->n_obs_domain_id] = datum->keys[i].integer;
        row->n_obs_domain_id++;
    }
}

static void
ovsrec_ipfix_parse_obs_point_id(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->obs_point_id = NULL;
    row->n_obs_point_id = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_obs_point_id) {
            row->obs_point_id = xmalloc(n * sizeof *row->obs_point_id);
        }
        row->obs_point_id[row->n_obs_point_id] = datum->keys[i].integer;
        row->n_obs_point_id++;
    }
}

static void
ovsrec_ipfix_parse_other_config(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->other_config);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->other_config,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_ipfix_parse_sampling(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->sampling = NULL;
    row->n_sampling = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_sampling) {
            row->sampling = xmalloc(n * sizeof *row->sampling);
        }
        row->sampling[row->n_sampling] = datum->keys[i].integer;
        row->n_sampling++;
    }
}

static void
ovsrec_ipfix_parse_targets(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->targets = NULL;
    row->n_targets = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_targets) {
            row->targets = xmalloc(datum->n * sizeof *row->targets);
        }
        row->targets[row->n_targets] = datum->keys[i].string;
        row->n_targets++;
    }
}

static void
ovsrec_ipfix_unparse_cache_active_timeout(struct ovsdb_idl_row *row_)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);

    ovs_assert(inited);
    free(row->cache_active_timeout);
}

static void
ovsrec_ipfix_unparse_cache_max_flows(struct ovsdb_idl_row *row_)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);

    ovs_assert(inited);
    free(row->cache_max_flows);
}

static void
ovsrec_ipfix_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_ipfix_unparse_obs_domain_id(struct ovsdb_idl_row *row_)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);

    ovs_assert(inited);
    free(row->obs_domain_id);
}

static void
ovsrec_ipfix_unparse_obs_point_id(struct ovsdb_idl_row *row_)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);

    ovs_assert(inited);
    free(row->obs_point_id);
}

static void
ovsrec_ipfix_unparse_other_config(struct ovsdb_idl_row *row_)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->other_config);
}

static void
ovsrec_ipfix_unparse_sampling(struct ovsdb_idl_row *row_)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);

    ovs_assert(inited);
    free(row->sampling);
}

static void
ovsrec_ipfix_unparse_targets(struct ovsdb_idl_row *row_)
{
    struct ovsrec_ipfix *row = ovsrec_ipfix_cast(row_);

    ovs_assert(inited);
    free(row->targets);
}

static void
ovsrec_ipfix_init__(struct ovsdb_idl_row *row)
{
    ovsrec_ipfix_init(ovsrec_ipfix_cast(row));
}

/* Clears the contents of 'row' in table "IPFIX". */
void
ovsrec_ipfix_init(struct ovsrec_ipfix *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->other_config);
}

/* Searches table "IPFIX" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_ipfix *
ovsrec_ipfix_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_ipfix_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_IPFIX], uuid));
}

/* Returns a row in table "IPFIX" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_ipfix *
ovsrec_ipfix_first(const struct ovsdb_idl *idl)
{
    return ovsrec_ipfix_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_IPFIX]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_ipfix *
ovsrec_ipfix_next(const struct ovsrec_ipfix *row)
{
    return ovsrec_ipfix_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "IPFIX".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ipfix_delete(const struct ovsrec_ipfix *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "IPFIX" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_ipfix *
ovsrec_ipfix_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_ipfix_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_IPFIX], NULL));
}

/* Causes the original contents of column "cache_active_timeout" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "cache_active_timeout" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "cache_active_timeout" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "cache_active_timeout" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_ipfix_insert()).
 *
 *   - If "cache_active_timeout" has already been modified (with
 *     ovsrec_ipfix_set_cache_active_timeout()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_ipfix_set_cache_active_timeout() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ipfix_verify_cache_active_timeout(const struct ovsrec_ipfix *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_CACHE_ACTIVE_TIMEOUT]);
}

/* Causes the original contents of column "cache_max_flows" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "cache_max_flows" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "cache_max_flows" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "cache_max_flows" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_ipfix_insert()).
 *
 *   - If "cache_max_flows" has already been modified (with
 *     ovsrec_ipfix_set_cache_max_flows()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_ipfix_set_cache_max_flows() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ipfix_verify_cache_max_flows(const struct ovsrec_ipfix *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_CACHE_MAX_FLOWS]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_ipfix_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_ipfix_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_ipfix_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ipfix_verify_external_ids(const struct ovsrec_ipfix *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "obs_domain_id" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "obs_domain_id" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "obs_domain_id" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "obs_domain_id" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_ipfix_insert()).
 *
 *   - If "obs_domain_id" has already been modified (with
 *     ovsrec_ipfix_set_obs_domain_id()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_ipfix_set_obs_domain_id() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ipfix_verify_obs_domain_id(const struct ovsrec_ipfix *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_OBS_DOMAIN_ID]);
}

/* Causes the original contents of column "obs_point_id" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "obs_point_id" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "obs_point_id" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "obs_point_id" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_ipfix_insert()).
 *
 *   - If "obs_point_id" has already been modified (with
 *     ovsrec_ipfix_set_obs_point_id()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_ipfix_set_obs_point_id() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ipfix_verify_obs_point_id(const struct ovsrec_ipfix *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_OBS_POINT_ID]);
}

/* Causes the original contents of column "other_config" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "other_config" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "other_config" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "other_config" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_ipfix_insert()).
 *
 *   - If "other_config" has already been modified (with
 *     ovsrec_ipfix_set_other_config()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_ipfix_set_other_config() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ipfix_verify_other_config(const struct ovsrec_ipfix *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_OTHER_CONFIG]);
}

/* Causes the original contents of column "sampling" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "sampling" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "sampling" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "sampling" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_ipfix_insert()).
 *
 *   - If "sampling" has already been modified (with
 *     ovsrec_ipfix_set_sampling()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_ipfix_set_sampling() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ipfix_verify_sampling(const struct ovsrec_ipfix *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_SAMPLING]);
}

/* Causes the original contents of column "targets" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "targets" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "targets" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "targets" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_ipfix_insert()).
 *
 *   - If "targets" has already been modified (with
 *     ovsrec_ipfix_set_targets()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_ipfix_set_targets() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ipfix_verify_targets(const struct ovsrec_ipfix *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_TARGETS]);
}

/* Returns the "cache_active_timeout" column's value from the "IPFIX" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes cache_active_timeout's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "cache_active_timeout" member in ovsrec_ipfix. */
const struct ovsdb_datum *
ovsrec_ipfix_get_cache_active_timeout(const struct ovsrec_ipfix *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_ipfix_col_cache_active_timeout);
}

/* Returns the "cache_max_flows" column's value from the "IPFIX" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes cache_max_flows's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "cache_max_flows" member in ovsrec_ipfix. */
const struct ovsdb_datum *
ovsrec_ipfix_get_cache_max_flows(const struct ovsrec_ipfix *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_ipfix_col_cache_max_flows);
}

/* Returns the "external_ids" column's value from the "IPFIX" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_ipfix. */
const struct ovsdb_datum *
ovsrec_ipfix_get_external_ids(const struct ovsrec_ipfix *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_ipfix_col_external_ids);
}

/* Returns the "obs_domain_id" column's value from the "IPFIX" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes obs_domain_id's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "obs_domain_id" member in ovsrec_ipfix. */
const struct ovsdb_datum *
ovsrec_ipfix_get_obs_domain_id(const struct ovsrec_ipfix *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_ipfix_col_obs_domain_id);
}

/* Returns the "obs_point_id" column's value from the "IPFIX" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes obs_point_id's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "obs_point_id" member in ovsrec_ipfix. */
const struct ovsdb_datum *
ovsrec_ipfix_get_obs_point_id(const struct ovsrec_ipfix *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_ipfix_col_obs_point_id);
}

/* Returns the "other_config" column's value from the "IPFIX" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes other_config's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "other_config" member in ovsrec_ipfix. */
const struct ovsdb_datum *
ovsrec_ipfix_get_other_config(const struct ovsrec_ipfix *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_ipfix_col_other_config);
}

/* Returns the "sampling" column's value from the "IPFIX" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes sampling's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "sampling" member in ovsrec_ipfix. */
const struct ovsdb_datum *
ovsrec_ipfix_get_sampling(const struct ovsrec_ipfix *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_ipfix_col_sampling);
}

/* Returns the "targets" column's value from the "IPFIX" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes targets's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "targets" member in ovsrec_ipfix. */
const struct ovsdb_datum *
ovsrec_ipfix_get_targets(const struct ovsrec_ipfix *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_ipfix_col_targets);
}

/* Sets the "cache_active_timeout" column from the "IPFIX" table in 'row' to
 * the 'cache_active_timeout' set with 'n_cache_active_timeout' entries.
 *
 * 'n_cache_active_timeout' may be 0 or 1; if it is 0, then 'cache_active_timeout'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 4,200
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_ipfix_set_cache_active_timeout(const struct ovsrec_ipfix *row, const int64_t *cache_active_timeout, size_t n_cache_active_timeout)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_cache_active_timeout) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *cache_active_timeout;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_CACHE_ACTIVE_TIMEOUT], &datum);
}

/* Sets the "cache_max_flows" column from the "IPFIX" table in 'row' to
 * the 'cache_max_flows' set with 'n_cache_max_flows' entries.
 *
 * 'n_cache_max_flows' may be 0 or 1; if it is 0, then 'cache_max_flows'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 4,294,967,295
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_ipfix_set_cache_max_flows(const struct ovsrec_ipfix *row, const int64_t *cache_max_flows, size_t n_cache_max_flows)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_cache_max_flows) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *cache_max_flows;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_CACHE_MAX_FLOWS], &datum);
}

/* Sets the "external_ids" column's value from the "IPFIX" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_ipfix_set_external_ids(const struct ovsrec_ipfix *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "obs_domain_id" column from the "IPFIX" table in 'row' to
 * the 'obs_domain_id' set with 'n_obs_domain_id' entries.
 *
 * 'n_obs_domain_id' may be 0 or 1; if it is 0, then 'obs_domain_id'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 4,294,967,295
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_ipfix_set_obs_domain_id(const struct ovsrec_ipfix *row, const int64_t *obs_domain_id, size_t n_obs_domain_id)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_obs_domain_id) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *obs_domain_id;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_OBS_DOMAIN_ID], &datum);
}

/* Sets the "obs_point_id" column from the "IPFIX" table in 'row' to
 * the 'obs_point_id' set with 'n_obs_point_id' entries.
 *
 * 'n_obs_point_id' may be 0 or 1; if it is 0, then 'obs_point_id'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 4,294,967,295
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_ipfix_set_obs_point_id(const struct ovsrec_ipfix *row, const int64_t *obs_point_id, size_t n_obs_point_id)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_obs_point_id) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *obs_point_id;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_OBS_POINT_ID], &datum);
}

/* Sets the "other_config" column's value from the "IPFIX" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
ovsrec_ipfix_set_other_config(const struct ovsrec_ipfix *row, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(other_config);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_OTHER_CONFIG],
                        &datum);
}


/* Sets the "sampling" column from the "IPFIX" table in 'row' to
 * the 'sampling' set with 'n_sampling' entries.
 *
 * 'n_sampling' may be 0 or 1; if it is 0, then 'sampling'
 * may be NULL.
 *
 * Argument constraints: in range 1 to 4,294,967,295
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_ipfix_set_sampling(const struct ovsrec_ipfix *row, const int64_t *sampling, size_t n_sampling)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_sampling) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *sampling;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_SAMPLING], &datum);
}

/* Sets the "targets" column from the "IPFIX" table in 'row' to
 * the 'targets' set with 'n_targets' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_ipfix_set_targets(const struct ovsrec_ipfix *row, const char **targets, size_t n_targets)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_targets;
    datum.keys = n_targets ? xmalloc(n_targets * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_targets; i++) {
        datum.keys[i].string = xstrdup(targets[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_ipfix_columns[OVSREC_IPFIX_COL_TARGETS], &datum);
}

struct ovsdb_idl_column ovsrec_ipfix_columns[OVSREC_IPFIX_N_COLUMNS];

static void
ovsrec_ipfix_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_ipfix_col_cache_active_timeout. */
    c = &ovsrec_ipfix_col_cache_active_timeout;
    c->name = "cache_active_timeout";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4200);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_ipfix_parse_cache_active_timeout;
    c->unparse = ovsrec_ipfix_unparse_cache_active_timeout;

    /* Initialize ovsrec_ipfix_col_cache_max_flows. */
    c = &ovsrec_ipfix_col_cache_max_flows;
    c->name = "cache_max_flows";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4294967295);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_ipfix_parse_cache_max_flows;
    c->unparse = ovsrec_ipfix_unparse_cache_max_flows;

    /* Initialize ovsrec_ipfix_col_external_ids. */
    c = &ovsrec_ipfix_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_ipfix_parse_external_ids;
    c->unparse = ovsrec_ipfix_unparse_external_ids;

    /* Initialize ovsrec_ipfix_col_obs_domain_id. */
    c = &ovsrec_ipfix_col_obs_domain_id;
    c->name = "obs_domain_id";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4294967295);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_ipfix_parse_obs_domain_id;
    c->unparse = ovsrec_ipfix_unparse_obs_domain_id;

    /* Initialize ovsrec_ipfix_col_obs_point_id. */
    c = &ovsrec_ipfix_col_obs_point_id;
    c->name = "obs_point_id";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4294967295);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_ipfix_parse_obs_point_id;
    c->unparse = ovsrec_ipfix_unparse_obs_point_id;

    /* Initialize ovsrec_ipfix_col_other_config. */
    c = &ovsrec_ipfix_col_other_config;
    c->name = "other_config";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_ipfix_parse_other_config;
    c->unparse = ovsrec_ipfix_unparse_other_config;

    /* Initialize ovsrec_ipfix_col_sampling. */
    c = &ovsrec_ipfix_col_sampling;
    c->name = "sampling";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(1);
    c->type.key.u.integer.max = INT64_C(4294967295);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_ipfix_parse_sampling;
    c->unparse = ovsrec_ipfix_unparse_sampling;

    /* Initialize ovsrec_ipfix_col_targets. */
    c = &ovsrec_ipfix_col_targets;
    c->name = "targets";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_ipfix_parse_targets;
    c->unparse = ovsrec_ipfix_unparse_targets;
}

/* Interface table. */

static void
ovsrec_interface_parse_admin_state(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->admin_state = datum->keys[0].string;
    } else {
        row->admin_state = NULL;
    }
}

static void
ovsrec_interface_parse_bfd(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->bfd);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->bfd,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_interface_parse_bfd_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->bfd_status);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->bfd_status,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_interface_parse_cfm_fault(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->cfm_fault = NULL;
    row->n_cfm_fault = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_cfm_fault) {
            row->cfm_fault = xmalloc(n * sizeof_bool);
        }
        row->cfm_fault[row->n_cfm_fault] = datum->keys[i].boolean;
        row->n_cfm_fault++;
    }
}

static void
ovsrec_interface_parse_cfm_fault_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->cfm_fault_status = NULL;
    row->n_cfm_fault_status = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_cfm_fault_status) {
            row->cfm_fault_status = xmalloc(datum->n * sizeof *row->cfm_fault_status);
        }
        row->cfm_fault_status[row->n_cfm_fault_status] = datum->keys[i].string;
        row->n_cfm_fault_status++;
    }
}

static void
ovsrec_interface_parse_cfm_flap_count(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->cfm_flap_count = NULL;
    row->n_cfm_flap_count = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_cfm_flap_count) {
            row->cfm_flap_count = xmalloc(n * sizeof *row->cfm_flap_count);
        }
        row->cfm_flap_count[row->n_cfm_flap_count] = datum->keys[i].integer;
        row->n_cfm_flap_count++;
    }
}

static void
ovsrec_interface_parse_cfm_health(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->cfm_health = NULL;
    row->n_cfm_health = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_cfm_health) {
            row->cfm_health = xmalloc(n * sizeof *row->cfm_health);
        }
        row->cfm_health[row->n_cfm_health] = datum->keys[i].integer;
        row->n_cfm_health++;
    }
}

static void
ovsrec_interface_parse_cfm_mpid(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->cfm_mpid = NULL;
    row->n_cfm_mpid = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_cfm_mpid) {
            row->cfm_mpid = xmalloc(n * sizeof *row->cfm_mpid);
        }
        row->cfm_mpid[row->n_cfm_mpid] = datum->keys[i].integer;
        row->n_cfm_mpid++;
    }
}

static void
ovsrec_interface_parse_cfm_remote_mpids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->cfm_remote_mpids = NULL;
    row->n_cfm_remote_mpids = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_cfm_remote_mpids) {
            row->cfm_remote_mpids = xmalloc(datum->n * sizeof *row->cfm_remote_mpids);
        }
        row->cfm_remote_mpids[row->n_cfm_remote_mpids] = datum->keys[i].integer;
        row->n_cfm_remote_mpids++;
    }
}

static void
ovsrec_interface_parse_cfm_remote_opstate(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->cfm_remote_opstate = datum->keys[0].string;
    } else {
        row->cfm_remote_opstate = NULL;
    }
}

static void
ovsrec_interface_parse_duplex(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->duplex = datum->keys[0].string;
    } else {
        row->duplex = NULL;
    }
}

static void
ovsrec_interface_parse_error(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->error = datum->keys[0].string;
    } else {
        row->error = NULL;
    }
}

static void
ovsrec_interface_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_interface_parse_ifindex(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->ifindex = NULL;
    row->n_ifindex = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_ifindex) {
            row->ifindex = xmalloc(n * sizeof *row->ifindex);
        }
        row->ifindex[row->n_ifindex] = datum->keys[i].integer;
        row->n_ifindex++;
    }
}

static void
ovsrec_interface_parse_ingress_policing_burst(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ingress_policing_burst = datum->keys[0].integer;
    } else {
        row->ingress_policing_burst = 0;
    }
}

static void
ovsrec_interface_parse_ingress_policing_rate(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ingress_policing_rate = datum->keys[0].integer;
    } else {
        row->ingress_policing_rate = 0;
    }
}

static void
ovsrec_interface_parse_lacp_current(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->lacp_current = NULL;
    row->n_lacp_current = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_lacp_current) {
            row->lacp_current = xmalloc(n * sizeof_bool);
        }
        row->lacp_current[row->n_lacp_current] = datum->keys[i].boolean;
        row->n_lacp_current++;
    }
}

static void
ovsrec_interface_parse_link_resets(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->link_resets = NULL;
    row->n_link_resets = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_link_resets) {
            row->link_resets = xmalloc(n * sizeof *row->link_resets);
        }
        row->link_resets[row->n_link_resets] = datum->keys[i].integer;
        row->n_link_resets++;
    }
}

static void
ovsrec_interface_parse_link_speed(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->link_speed = NULL;
    row->n_link_speed = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_link_speed) {
            row->link_speed = xmalloc(n * sizeof *row->link_speed);
        }
        row->link_speed[row->n_link_speed] = datum->keys[i].integer;
        row->n_link_speed++;
    }
}

static void
ovsrec_interface_parse_link_state(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->link_state = datum->keys[0].string;
    } else {
        row->link_state = NULL;
    }
}

static void
ovsrec_interface_parse_lldp(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->lldp);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->lldp,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_interface_parse_mac(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->mac = datum->keys[0].string;
    } else {
        row->mac = NULL;
    }
}

static void
ovsrec_interface_parse_mac_in_use(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->mac_in_use = datum->keys[0].string;
    } else {
        row->mac_in_use = NULL;
    }
}

static void
ovsrec_interface_parse_mtu(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->mtu = NULL;
    row->n_mtu = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_mtu) {
            row->mtu = xmalloc(n * sizeof *row->mtu);
        }
        row->mtu[row->n_mtu] = datum->keys[i].integer;
        row->n_mtu++;
    }
}

static void
ovsrec_interface_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
ovsrec_interface_parse_ofport(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->ofport = NULL;
    row->n_ofport = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_ofport) {
            row->ofport = xmalloc(n * sizeof *row->ofport);
        }
        row->ofport[row->n_ofport] = datum->keys[i].integer;
        row->n_ofport++;
    }
}

static void
ovsrec_interface_parse_ofport_request(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->ofport_request = NULL;
    row->n_ofport_request = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_ofport_request) {
            row->ofport_request = xmalloc(n * sizeof *row->ofport_request);
        }
        row->ofport_request[row->n_ofport_request] = datum->keys[i].integer;
        row->n_ofport_request++;
    }
}

static void
ovsrec_interface_parse_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->options);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->options,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_interface_parse_other_config(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->other_config);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->other_config,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_interface_parse_statistics(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->key_statistics = NULL;
    row->value_statistics = NULL;
    row->n_statistics = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_statistics) {
            row->key_statistics = xmalloc(datum->n * sizeof *row->key_statistics);
            row->value_statistics = xmalloc(datum->n * sizeof *row->value_statistics);
        }
        row->key_statistics[row->n_statistics] = datum->keys[i].string;
        row->value_statistics[row->n_statistics] = datum->values[i].integer;
        row->n_statistics++;
    }
}

static void
ovsrec_interface_parse_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->status);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->status,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_interface_parse_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->type = datum->keys[0].string;
    } else {
        row->type = "";
    }
}

static void
ovsrec_interface_unparse_admin_state(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_interface_unparse_bfd(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->bfd);
}

static void
ovsrec_interface_unparse_bfd_status(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->bfd_status);
}

static void
ovsrec_interface_unparse_cfm_fault(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    free(row->cfm_fault);
}

static void
ovsrec_interface_unparse_cfm_fault_status(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    free(row->cfm_fault_status);
}

static void
ovsrec_interface_unparse_cfm_flap_count(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    free(row->cfm_flap_count);
}

static void
ovsrec_interface_unparse_cfm_health(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    free(row->cfm_health);
}

static void
ovsrec_interface_unparse_cfm_mpid(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    free(row->cfm_mpid);
}

static void
ovsrec_interface_unparse_cfm_remote_mpids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    free(row->cfm_remote_mpids);
}

static void
ovsrec_interface_unparse_cfm_remote_opstate(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_interface_unparse_duplex(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_interface_unparse_error(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_interface_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_interface_unparse_ifindex(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    free(row->ifindex);
}

static void
ovsrec_interface_unparse_ingress_policing_burst(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_interface_unparse_ingress_policing_rate(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_interface_unparse_lacp_current(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    free(row->lacp_current);
}

static void
ovsrec_interface_unparse_link_resets(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    free(row->link_resets);
}

static void
ovsrec_interface_unparse_link_speed(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    free(row->link_speed);
}

static void
ovsrec_interface_unparse_link_state(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_interface_unparse_lldp(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->lldp);
}

static void
ovsrec_interface_unparse_mac(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_interface_unparse_mac_in_use(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_interface_unparse_mtu(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    free(row->mtu);
}

static void
ovsrec_interface_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_interface_unparse_ofport(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    free(row->ofport);
}

static void
ovsrec_interface_unparse_ofport_request(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    free(row->ofport_request);
}

static void
ovsrec_interface_unparse_options(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->options);
}

static void
ovsrec_interface_unparse_other_config(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->other_config);
}

static void
ovsrec_interface_unparse_statistics(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    free(row->key_statistics);
    free(row->value_statistics);
}

static void
ovsrec_interface_unparse_status(struct ovsdb_idl_row *row_)
{
    struct ovsrec_interface *row = ovsrec_interface_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->status);
}

static void
ovsrec_interface_unparse_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_interface_init__(struct ovsdb_idl_row *row)
{
    ovsrec_interface_init(ovsrec_interface_cast(row));
}

/* Clears the contents of 'row' in table "Interface". */
void
ovsrec_interface_init(struct ovsrec_interface *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->bfd);
    smap_init(&row->bfd_status);
    smap_init(&row->external_ids);
    smap_init(&row->lldp);
    smap_init(&row->options);
    smap_init(&row->other_config);
    smap_init(&row->status);
}

/* Searches table "Interface" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_interface *
ovsrec_interface_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_interface_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_INTERFACE], uuid));
}

/* Returns a row in table "Interface" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_interface *
ovsrec_interface_first(const struct ovsdb_idl *idl)
{
    return ovsrec_interface_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_INTERFACE]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_interface *
ovsrec_interface_next(const struct ovsrec_interface *row)
{
    return ovsrec_interface_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "Interface".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_delete(const struct ovsrec_interface *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Interface" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_interface *
ovsrec_interface_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_interface_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_INTERFACE], NULL));
}

/* Causes the original contents of column "admin_state" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "admin_state" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "admin_state" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "admin_state" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "admin_state" has already been modified (with
 *     ovsrec_interface_set_admin_state()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_admin_state() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_admin_state(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_ADMIN_STATE]);
}

/* Causes the original contents of column "bfd" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bfd" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bfd" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bfd" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "bfd" has already been modified (with
 *     ovsrec_interface_set_bfd()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_bfd() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_bfd(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_BFD]);
}

/* Causes the original contents of column "bfd_status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bfd_status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bfd_status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bfd_status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "bfd_status" has already been modified (with
 *     ovsrec_interface_set_bfd_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_bfd_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_bfd_status(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_BFD_STATUS]);
}

/* Causes the original contents of column "cfm_fault" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "cfm_fault" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "cfm_fault" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "cfm_fault" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "cfm_fault" has already been modified (with
 *     ovsrec_interface_set_cfm_fault()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_cfm_fault() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_cfm_fault(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_CFM_FAULT]);
}

/* Causes the original contents of column "cfm_fault_status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "cfm_fault_status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "cfm_fault_status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "cfm_fault_status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "cfm_fault_status" has already been modified (with
 *     ovsrec_interface_set_cfm_fault_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_cfm_fault_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_cfm_fault_status(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_CFM_FAULT_STATUS]);
}

/* Causes the original contents of column "cfm_flap_count" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "cfm_flap_count" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "cfm_flap_count" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "cfm_flap_count" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "cfm_flap_count" has already been modified (with
 *     ovsrec_interface_set_cfm_flap_count()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_cfm_flap_count() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_cfm_flap_count(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_CFM_FLAP_COUNT]);
}

/* Causes the original contents of column "cfm_health" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "cfm_health" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "cfm_health" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "cfm_health" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "cfm_health" has already been modified (with
 *     ovsrec_interface_set_cfm_health()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_cfm_health() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_cfm_health(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_CFM_HEALTH]);
}

/* Causes the original contents of column "cfm_mpid" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "cfm_mpid" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "cfm_mpid" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "cfm_mpid" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "cfm_mpid" has already been modified (with
 *     ovsrec_interface_set_cfm_mpid()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_cfm_mpid() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_cfm_mpid(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_CFM_MPID]);
}

/* Causes the original contents of column "cfm_remote_mpids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "cfm_remote_mpids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "cfm_remote_mpids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "cfm_remote_mpids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "cfm_remote_mpids" has already been modified (with
 *     ovsrec_interface_set_cfm_remote_mpids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_cfm_remote_mpids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_cfm_remote_mpids(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_CFM_REMOTE_MPIDS]);
}

/* Causes the original contents of column "cfm_remote_opstate" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "cfm_remote_opstate" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "cfm_remote_opstate" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "cfm_remote_opstate" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "cfm_remote_opstate" has already been modified (with
 *     ovsrec_interface_set_cfm_remote_opstate()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_cfm_remote_opstate() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_cfm_remote_opstate(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_CFM_REMOTE_OPSTATE]);
}

/* Causes the original contents of column "duplex" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "duplex" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "duplex" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "duplex" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "duplex" has already been modified (with
 *     ovsrec_interface_set_duplex()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_duplex() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_duplex(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_DUPLEX]);
}

/* Causes the original contents of column "error" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "error" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "error" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "error" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "error" has already been modified (with
 *     ovsrec_interface_set_error()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_error() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_error(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_ERROR]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_interface_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_external_ids(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "ifindex" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ifindex" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ifindex" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ifindex" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "ifindex" has already been modified (with
 *     ovsrec_interface_set_ifindex()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_ifindex() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_ifindex(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_IFINDEX]);
}

/* Causes the original contents of column "ingress_policing_burst" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ingress_policing_burst" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ingress_policing_burst" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ingress_policing_burst" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "ingress_policing_burst" has already been modified (with
 *     ovsrec_interface_set_ingress_policing_burst()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_ingress_policing_burst() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_ingress_policing_burst(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_INGRESS_POLICING_BURST]);
}

/* Causes the original contents of column "ingress_policing_rate" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ingress_policing_rate" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ingress_policing_rate" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ingress_policing_rate" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "ingress_policing_rate" has already been modified (with
 *     ovsrec_interface_set_ingress_policing_rate()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_ingress_policing_rate() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_ingress_policing_rate(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_INGRESS_POLICING_RATE]);
}

/* Causes the original contents of column "lacp_current" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "lacp_current" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "lacp_current" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "lacp_current" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "lacp_current" has already been modified (with
 *     ovsrec_interface_set_lacp_current()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_lacp_current() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_lacp_current(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_LACP_CURRENT]);
}

/* Causes the original contents of column "link_resets" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "link_resets" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "link_resets" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "link_resets" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "link_resets" has already been modified (with
 *     ovsrec_interface_set_link_resets()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_link_resets() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_link_resets(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_LINK_RESETS]);
}

/* Causes the original contents of column "link_speed" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "link_speed" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "link_speed" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "link_speed" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "link_speed" has already been modified (with
 *     ovsrec_interface_set_link_speed()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_link_speed() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_link_speed(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_LINK_SPEED]);
}

/* Causes the original contents of column "link_state" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "link_state" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "link_state" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "link_state" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "link_state" has already been modified (with
 *     ovsrec_interface_set_link_state()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_link_state() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_link_state(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_LINK_STATE]);
}

/* Causes the original contents of column "lldp" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "lldp" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "lldp" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "lldp" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "lldp" has already been modified (with
 *     ovsrec_interface_set_lldp()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_lldp() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_lldp(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_LLDP]);
}

/* Causes the original contents of column "mac" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "mac" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "mac" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "mac" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "mac" has already been modified (with
 *     ovsrec_interface_set_mac()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_mac() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_mac(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_MAC]);
}

/* Causes the original contents of column "mac_in_use" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "mac_in_use" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "mac_in_use" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "mac_in_use" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "mac_in_use" has already been modified (with
 *     ovsrec_interface_set_mac_in_use()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_mac_in_use() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_mac_in_use(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_MAC_IN_USE]);
}

/* Causes the original contents of column "mtu" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "mtu" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "mtu" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "mtu" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "mtu" has already been modified (with
 *     ovsrec_interface_set_mtu()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_mtu() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_mtu(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_MTU]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "name" has already been modified (with
 *     ovsrec_interface_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_name(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_NAME]);
}

/* Causes the original contents of column "ofport" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ofport" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ofport" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ofport" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "ofport" has already been modified (with
 *     ovsrec_interface_set_ofport()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_ofport() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_ofport(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_OFPORT]);
}

/* Causes the original contents of column "ofport_request" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ofport_request" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ofport_request" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ofport_request" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "ofport_request" has already been modified (with
 *     ovsrec_interface_set_ofport_request()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_ofport_request() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_ofport_request(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_OFPORT_REQUEST]);
}

/* Causes the original contents of column "options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "options" has already been modified (with
 *     ovsrec_interface_set_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_options(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_OPTIONS]);
}

/* Causes the original contents of column "other_config" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "other_config" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "other_config" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "other_config" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "other_config" has already been modified (with
 *     ovsrec_interface_set_other_config()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_other_config() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_other_config(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_OTHER_CONFIG]);
}

/* Causes the original contents of column "statistics" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "statistics" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "statistics" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "statistics" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "statistics" has already been modified (with
 *     ovsrec_interface_set_statistics()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_statistics() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_statistics(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_STATISTICS]);
}

/* Causes the original contents of column "status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "status" has already been modified (with
 *     ovsrec_interface_set_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_status(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_STATUS]);
}

/* Causes the original contents of column "type" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "type" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "type" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "type" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_interface_insert()).
 *
 *   - If "type" has already been modified (with
 *     ovsrec_interface_set_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_interface_set_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_interface_verify_type(const struct ovsrec_interface *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_TYPE]);
}

/* Returns the "admin_state" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes admin_state's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "admin_state" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_admin_state(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_admin_state);
}

/* Returns the "bfd" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes bfd's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bfd" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_bfd(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_bfd);
}

/* Returns the "bfd_status" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes bfd_status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bfd_status" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_bfd_status(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_bfd_status);
}

/* Returns the "cfm_fault" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes cfm_fault's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "cfm_fault" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_cfm_fault(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_cfm_fault);
}

/* Returns the "cfm_fault_status" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes cfm_fault_status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "cfm_fault_status" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_cfm_fault_status(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_cfm_fault_status);
}

/* Returns the "cfm_flap_count" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes cfm_flap_count's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "cfm_flap_count" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_cfm_flap_count(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_cfm_flap_count);
}

/* Returns the "cfm_health" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes cfm_health's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "cfm_health" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_cfm_health(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_cfm_health);
}

/* Returns the "cfm_mpid" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes cfm_mpid's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "cfm_mpid" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_cfm_mpid(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_cfm_mpid);
}

/* Returns the "cfm_remote_mpids" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes cfm_remote_mpids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "cfm_remote_mpids" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_cfm_remote_mpids(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_cfm_remote_mpids);
}

/* Returns the "cfm_remote_opstate" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes cfm_remote_opstate's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "cfm_remote_opstate" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_cfm_remote_opstate(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_cfm_remote_opstate);
}

/* Returns the "duplex" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes duplex's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "duplex" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_duplex(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_duplex);
}

/* Returns the "error" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes error's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "error" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_error(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_error);
}

/* Returns the "external_ids" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_external_ids(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_external_ids);
}

/* Returns the "ifindex" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes ifindex's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ifindex" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_ifindex(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_ifindex);
}

/* Returns the "ingress_policing_burst" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes ingress_policing_burst's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ingress_policing_burst" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_ingress_policing_burst(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_ingress_policing_burst);
}

/* Returns the "ingress_policing_rate" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes ingress_policing_rate's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ingress_policing_rate" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_ingress_policing_rate(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_ingress_policing_rate);
}

/* Returns the "lacp_current" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes lacp_current's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "lacp_current" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_lacp_current(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_lacp_current);
}

/* Returns the "link_resets" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes link_resets's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "link_resets" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_link_resets(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_link_resets);
}

/* Returns the "link_speed" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes link_speed's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "link_speed" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_link_speed(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_link_speed);
}

/* Returns the "link_state" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes link_state's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "link_state" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_link_state(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_link_state);
}

/* Returns the "lldp" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes lldp's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "lldp" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_lldp(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_lldp);
}

/* Returns the "mac" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes mac's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "mac" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_mac(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_mac);
}

/* Returns the "mac_in_use" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes mac_in_use's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "mac_in_use" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_mac_in_use(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_mac_in_use);
}

/* Returns the "mtu" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes mtu's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "mtu" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_mtu(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_mtu);
}

/* Returns the "name" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_name(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_name);
}

/* Returns the "ofport" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes ofport's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ofport" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_ofport(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_ofport);
}

/* Returns the "ofport_request" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes ofport_request's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ofport_request" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_ofport_request(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_ofport_request);
}

/* Returns the "options" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes options's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "options" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_options(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_options);
}

/* Returns the "other_config" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes other_config's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "other_config" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_other_config(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_other_config);
}

/* Returns the "statistics" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes statistics's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "statistics" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_statistics(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_statistics);
}

/* Returns the "status" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "status" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_status(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_status);
}

/* Returns the "type" column's value from the "Interface" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes type's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "type" member in ovsrec_interface. */
const struct ovsdb_datum *
ovsrec_interface_get_type(const struct ovsrec_interface *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_interface_col_type);
}

/* Sets the "admin_state" column from the "Interface" table in 'row' to
 * the 'admin_state' set.
 *
 * If "admin_state" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "down" or "up"
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_admin_state(const struct ovsrec_interface *row, const char *admin_state)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (admin_state) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, admin_state);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_ADMIN_STATE], &datum);
}

/* Sets the "bfd" column's value from the "Interface" table in 'row'
 * to 'bfd'.
 *
 * The caller retains ownership of 'bfd' and everything in it. */
void
ovsrec_interface_set_bfd(const struct ovsrec_interface *row, const struct smap *bfd)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (bfd) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(bfd);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, bfd) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_interface_columns[OVSREC_INTERFACE_COL_BFD],
                        &datum);
}


/* Sets the "bfd_status" column's value from the "Interface" table in 'row'
 * to 'bfd_status'.
 *
 * The caller retains ownership of 'bfd_status' and everything in it. */
void
ovsrec_interface_set_bfd_status(const struct ovsrec_interface *row, const struct smap *bfd_status)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (bfd_status) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(bfd_status);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, bfd_status) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_interface_columns[OVSREC_INTERFACE_COL_BFD_STATUS],
                        &datum);
}


/* Sets the "cfm_fault" column from the "Interface" table in 'row' to
 * the 'cfm_fault' set with 'n_cfm_fault' entries.
 *
 * 'n_cfm_fault' may be 0 or 1; if it is 0, then 'cfm_fault'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_cfm_fault(const struct ovsrec_interface *row, const bool *cfm_fault, size_t n_cfm_fault)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_cfm_fault) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *cfm_fault;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_CFM_FAULT], &datum);
}

/* Sets the "cfm_fault_status" column from the "Interface" table in 'row' to
 * the 'cfm_fault_status' set with 'n_cfm_fault_status' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_cfm_fault_status(const struct ovsrec_interface *row, const char **cfm_fault_status, size_t n_cfm_fault_status)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_cfm_fault_status;
    datum.keys = n_cfm_fault_status ? xmalloc(n_cfm_fault_status * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_cfm_fault_status; i++) {
        datum.keys[i].string = xstrdup(cfm_fault_status[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_CFM_FAULT_STATUS], &datum);
}

/* Sets the "cfm_flap_count" column from the "Interface" table in 'row' to
 * the 'cfm_flap_count' set with 'n_cfm_flap_count' entries.
 *
 * 'n_cfm_flap_count' may be 0 or 1; if it is 0, then 'cfm_flap_count'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_cfm_flap_count(const struct ovsrec_interface *row, const int64_t *cfm_flap_count, size_t n_cfm_flap_count)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_cfm_flap_count) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *cfm_flap_count;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_CFM_FLAP_COUNT], &datum);
}

/* Sets the "cfm_health" column from the "Interface" table in 'row' to
 * the 'cfm_health' set with 'n_cfm_health' entries.
 *
 * 'n_cfm_health' may be 0 or 1; if it is 0, then 'cfm_health'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 100
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_cfm_health(const struct ovsrec_interface *row, const int64_t *cfm_health, size_t n_cfm_health)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_cfm_health) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *cfm_health;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_CFM_HEALTH], &datum);
}

/* Sets the "cfm_mpid" column from the "Interface" table in 'row' to
 * the 'cfm_mpid' set with 'n_cfm_mpid' entries.
 *
 * 'n_cfm_mpid' may be 0 or 1; if it is 0, then 'cfm_mpid'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_cfm_mpid(const struct ovsrec_interface *row, const int64_t *cfm_mpid, size_t n_cfm_mpid)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_cfm_mpid) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *cfm_mpid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_CFM_MPID], &datum);
}

/* Sets the "cfm_remote_mpids" column from the "Interface" table in 'row' to
 * the 'cfm_remote_mpids' set with 'n_cfm_remote_mpids' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_cfm_remote_mpids(const struct ovsrec_interface *row, const int64_t *cfm_remote_mpids, size_t n_cfm_remote_mpids)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_cfm_remote_mpids;
    datum.keys = n_cfm_remote_mpids ? xmalloc(n_cfm_remote_mpids * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_cfm_remote_mpids; i++) {
        datum.keys[i].integer = cfm_remote_mpids[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_CFM_REMOTE_MPIDS], &datum);
}

/* Sets the "cfm_remote_opstate" column from the "Interface" table in 'row' to
 * the 'cfm_remote_opstate' set.
 *
 * If "cfm_remote_opstate" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "down" or "up"
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_cfm_remote_opstate(const struct ovsrec_interface *row, const char *cfm_remote_opstate)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (cfm_remote_opstate) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, cfm_remote_opstate);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_CFM_REMOTE_OPSTATE], &datum);
}

/* Sets the "duplex" column from the "Interface" table in 'row' to
 * the 'duplex' set.
 *
 * If "duplex" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "full" or "half"
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_duplex(const struct ovsrec_interface *row, const char *duplex)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (duplex) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, duplex);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_DUPLEX], &datum);
}

/* Sets the "error" column from the "Interface" table in 'row' to
 * the 'error' set.
 *
 * If "error" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_error(const struct ovsrec_interface *row, const char *error)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (error) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, error);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_ERROR], &datum);
}

/* Sets the "external_ids" column's value from the "Interface" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_interface_set_external_ids(const struct ovsrec_interface *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_interface_columns[OVSREC_INTERFACE_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "ifindex" column from the "Interface" table in 'row' to
 * the 'ifindex' set with 'n_ifindex' entries.
 *
 * 'n_ifindex' may be 0 or 1; if it is 0, then 'ifindex'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 4,294,967,295
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_ifindex(const struct ovsrec_interface *row, const int64_t *ifindex, size_t n_ifindex)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_ifindex) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *ifindex;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_IFINDEX], &datum);
}

/* Sets the "ingress_policing_burst" column from the "Interface" table in 'row' to
 * 'ingress_policing_burst'.
 *
 * Argument constraints: at least 0
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_ingress_policing_burst(const struct ovsrec_interface *row, int64_t ingress_policing_burst)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = ingress_policing_burst;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_INGRESS_POLICING_BURST], &datum);
}

/* Sets the "ingress_policing_rate" column from the "Interface" table in 'row' to
 * 'ingress_policing_rate'.
 *
 * Argument constraints: at least 0
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_ingress_policing_rate(const struct ovsrec_interface *row, int64_t ingress_policing_rate)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = ingress_policing_rate;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_INGRESS_POLICING_RATE], &datum);
}

/* Sets the "lacp_current" column from the "Interface" table in 'row' to
 * the 'lacp_current' set with 'n_lacp_current' entries.
 *
 * 'n_lacp_current' may be 0 or 1; if it is 0, then 'lacp_current'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_lacp_current(const struct ovsrec_interface *row, const bool *lacp_current, size_t n_lacp_current)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_lacp_current) {
        datum.n = 1;
        datum.keys = &key;
        key.boolean = *lacp_current;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_LACP_CURRENT], &datum);
}

/* Sets the "link_resets" column from the "Interface" table in 'row' to
 * the 'link_resets' set with 'n_link_resets' entries.
 *
 * 'n_link_resets' may be 0 or 1; if it is 0, then 'link_resets'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_link_resets(const struct ovsrec_interface *row, const int64_t *link_resets, size_t n_link_resets)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_link_resets) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *link_resets;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_LINK_RESETS], &datum);
}

/* Sets the "link_speed" column from the "Interface" table in 'row' to
 * the 'link_speed' set with 'n_link_speed' entries.
 *
 * 'n_link_speed' may be 0 or 1; if it is 0, then 'link_speed'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_link_speed(const struct ovsrec_interface *row, const int64_t *link_speed, size_t n_link_speed)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_link_speed) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *link_speed;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_LINK_SPEED], &datum);
}

/* Sets the "link_state" column from the "Interface" table in 'row' to
 * the 'link_state' set.
 *
 * If "link_state" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "down" or "up"
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_link_state(const struct ovsrec_interface *row, const char *link_state)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (link_state) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, link_state);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_LINK_STATE], &datum);
}

/* Sets the "lldp" column's value from the "Interface" table in 'row'
 * to 'lldp'.
 *
 * The caller retains ownership of 'lldp' and everything in it. */
void
ovsrec_interface_set_lldp(const struct ovsrec_interface *row, const struct smap *lldp)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (lldp) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(lldp);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, lldp) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_interface_columns[OVSREC_INTERFACE_COL_LLDP],
                        &datum);
}


/* Sets the "mac" column from the "Interface" table in 'row' to
 * the 'mac' set.
 *
 * If "mac" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_mac(const struct ovsrec_interface *row, const char *mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (mac) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, mac);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_MAC], &datum);
}

/* Sets the "mac_in_use" column from the "Interface" table in 'row' to
 * the 'mac_in_use' set.
 *
 * If "mac_in_use" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_mac_in_use(const struct ovsrec_interface *row, const char *mac_in_use)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (mac_in_use) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, mac_in_use);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_MAC_IN_USE], &datum);
}

/* Sets the "mtu" column from the "Interface" table in 'row' to
 * the 'mtu' set with 'n_mtu' entries.
 *
 * 'n_mtu' may be 0 or 1; if it is 0, then 'mtu'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_mtu(const struct ovsrec_interface *row, const int64_t *mtu, size_t n_mtu)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_mtu) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *mtu;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_MTU], &datum);
}

/* Sets the "name" column from the "Interface" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_name(const struct ovsrec_interface *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_NAME], &datum);
}

/* Sets the "ofport" column from the "Interface" table in 'row' to
 * the 'ofport' set with 'n_ofport' entries.
 *
 * 'n_ofport' may be 0 or 1; if it is 0, then 'ofport'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_ofport(const struct ovsrec_interface *row, const int64_t *ofport, size_t n_ofport)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_ofport) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *ofport;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_OFPORT], &datum);
}

/* Sets the "ofport_request" column from the "Interface" table in 'row' to
 * the 'ofport_request' set with 'n_ofport_request' entries.
 *
 * 'n_ofport_request' may be 0 or 1; if it is 0, then 'ofport_request'
 * may be NULL.
 *
 * Argument constraints: in range 1 to 65,279
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_ofport_request(const struct ovsrec_interface *row, const int64_t *ofport_request, size_t n_ofport_request)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_ofport_request) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *ofport_request;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_OFPORT_REQUEST], &datum);
}

/* Sets the "options" column's value from the "Interface" table in 'row'
 * to 'options'.
 *
 * The caller retains ownership of 'options' and everything in it. */
void
ovsrec_interface_set_options(const struct ovsrec_interface *row, const struct smap *options)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (options) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(options);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, options) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_interface_columns[OVSREC_INTERFACE_COL_OPTIONS],
                        &datum);
}


/* Sets the "other_config" column's value from the "Interface" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
ovsrec_interface_set_other_config(const struct ovsrec_interface *row, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(other_config);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_interface_columns[OVSREC_INTERFACE_COL_OTHER_CONFIG],
                        &datum);
}


/* Sets the "statistics" column from the "Interface" table in 'row' to
 * the map with keys 'key_statistics' and values 'value_statistics'
 * with 'n_statistics' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_statistics(const struct ovsrec_interface *row, const char **key_statistics, const int64_t *value_statistics, size_t n_statistics)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_statistics;
    datum.keys = n_statistics ? xmalloc(n_statistics * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_statistics * sizeof *datum.values);
    for (i = 0; i < n_statistics; i++) {
        datum.keys[i].string = xstrdup(key_statistics[i]);
        datum.values[i].integer = value_statistics[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_INTEGER);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_STATISTICS], &datum);
}

/* Sets the "status" column's value from the "Interface" table in 'row'
 * to 'status'.
 *
 * The caller retains ownership of 'status' and everything in it. */
void
ovsrec_interface_set_status(const struct ovsrec_interface *row, const struct smap *status)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (status) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(status);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, status) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_interface_columns[OVSREC_INTERFACE_COL_STATUS],
                        &datum);
}


/* Sets the "type" column from the "Interface" table in 'row' to
 * 'type'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_interface_set_type(const struct ovsrec_interface *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_interface_columns[OVSREC_INTERFACE_COL_TYPE], &datum);
}

struct ovsdb_idl_column ovsrec_interface_columns[OVSREC_INTERFACE_N_COLUMNS];

static void
ovsrec_interface_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_interface_col_admin_state. */
    c = &ovsrec_interface_col_admin_state;
    c->name = "admin_state";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 2;
    c->type.key.enum_->keys = xmalloc(2 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("down");
    c->type.key.enum_->keys[1].string = xstrdup("up");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_admin_state;
    c->unparse = ovsrec_interface_unparse_admin_state;

    /* Initialize ovsrec_interface_col_bfd. */
    c = &ovsrec_interface_col_bfd;
    c->name = "bfd";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_bfd;
    c->unparse = ovsrec_interface_unparse_bfd;

    /* Initialize ovsrec_interface_col_bfd_status. */
    c = &ovsrec_interface_col_bfd_status;
    c->name = "bfd_status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_bfd_status;
    c->unparse = ovsrec_interface_unparse_bfd_status;

    /* Initialize ovsrec_interface_col_cfm_fault. */
    c = &ovsrec_interface_col_cfm_fault;
    c->name = "cfm_fault";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_cfm_fault;
    c->unparse = ovsrec_interface_unparse_cfm_fault;

    /* Initialize ovsrec_interface_col_cfm_fault_status. */
    c = &ovsrec_interface_col_cfm_fault_status;
    c->name = "cfm_fault_status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_cfm_fault_status;
    c->unparse = ovsrec_interface_unparse_cfm_fault_status;

    /* Initialize ovsrec_interface_col_cfm_flap_count. */
    c = &ovsrec_interface_col_cfm_flap_count;
    c->name = "cfm_flap_count";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_cfm_flap_count;
    c->unparse = ovsrec_interface_unparse_cfm_flap_count;

    /* Initialize ovsrec_interface_col_cfm_health. */
    c = &ovsrec_interface_col_cfm_health;
    c->name = "cfm_health";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(100);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_cfm_health;
    c->unparse = ovsrec_interface_unparse_cfm_health;

    /* Initialize ovsrec_interface_col_cfm_mpid. */
    c = &ovsrec_interface_col_cfm_mpid;
    c->name = "cfm_mpid";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_cfm_mpid;
    c->unparse = ovsrec_interface_unparse_cfm_mpid;

    /* Initialize ovsrec_interface_col_cfm_remote_mpids. */
    c = &ovsrec_interface_col_cfm_remote_mpids;
    c->name = "cfm_remote_mpids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_cfm_remote_mpids;
    c->unparse = ovsrec_interface_unparse_cfm_remote_mpids;

    /* Initialize ovsrec_interface_col_cfm_remote_opstate. */
    c = &ovsrec_interface_col_cfm_remote_opstate;
    c->name = "cfm_remote_opstate";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 2;
    c->type.key.enum_->keys = xmalloc(2 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("down");
    c->type.key.enum_->keys[1].string = xstrdup("up");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_cfm_remote_opstate;
    c->unparse = ovsrec_interface_unparse_cfm_remote_opstate;

    /* Initialize ovsrec_interface_col_duplex. */
    c = &ovsrec_interface_col_duplex;
    c->name = "duplex";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 2;
    c->type.key.enum_->keys = xmalloc(2 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("full");
    c->type.key.enum_->keys[1].string = xstrdup("half");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_duplex;
    c->unparse = ovsrec_interface_unparse_duplex;

    /* Initialize ovsrec_interface_col_error. */
    c = &ovsrec_interface_col_error;
    c->name = "error";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_error;
    c->unparse = ovsrec_interface_unparse_error;

    /* Initialize ovsrec_interface_col_external_ids. */
    c = &ovsrec_interface_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_external_ids;
    c->unparse = ovsrec_interface_unparse_external_ids;

    /* Initialize ovsrec_interface_col_ifindex. */
    c = &ovsrec_interface_col_ifindex;
    c->name = "ifindex";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4294967295);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_ifindex;
    c->unparse = ovsrec_interface_unparse_ifindex;

    /* Initialize ovsrec_interface_col_ingress_policing_burst. */
    c = &ovsrec_interface_col_ingress_policing_burst;
    c->name = "ingress_policing_burst";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_ingress_policing_burst;
    c->unparse = ovsrec_interface_unparse_ingress_policing_burst;

    /* Initialize ovsrec_interface_col_ingress_policing_rate. */
    c = &ovsrec_interface_col_ingress_policing_rate;
    c->name = "ingress_policing_rate";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_ingress_policing_rate;
    c->unparse = ovsrec_interface_unparse_ingress_policing_rate;

    /* Initialize ovsrec_interface_col_lacp_current. */
    c = &ovsrec_interface_col_lacp_current;
    c->name = "lacp_current";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_lacp_current;
    c->unparse = ovsrec_interface_unparse_lacp_current;

    /* Initialize ovsrec_interface_col_link_resets. */
    c = &ovsrec_interface_col_link_resets;
    c->name = "link_resets";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_link_resets;
    c->unparse = ovsrec_interface_unparse_link_resets;

    /* Initialize ovsrec_interface_col_link_speed. */
    c = &ovsrec_interface_col_link_speed;
    c->name = "link_speed";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_link_speed;
    c->unparse = ovsrec_interface_unparse_link_speed;

    /* Initialize ovsrec_interface_col_link_state. */
    c = &ovsrec_interface_col_link_state;
    c->name = "link_state";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 2;
    c->type.key.enum_->keys = xmalloc(2 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("down");
    c->type.key.enum_->keys[1].string = xstrdup("up");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_link_state;
    c->unparse = ovsrec_interface_unparse_link_state;

    /* Initialize ovsrec_interface_col_lldp. */
    c = &ovsrec_interface_col_lldp;
    c->name = "lldp";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_lldp;
    c->unparse = ovsrec_interface_unparse_lldp;

    /* Initialize ovsrec_interface_col_mac. */
    c = &ovsrec_interface_col_mac;
    c->name = "mac";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_mac;
    c->unparse = ovsrec_interface_unparse_mac;

    /* Initialize ovsrec_interface_col_mac_in_use. */
    c = &ovsrec_interface_col_mac_in_use;
    c->name = "mac_in_use";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_mac_in_use;
    c->unparse = ovsrec_interface_unparse_mac_in_use;

    /* Initialize ovsrec_interface_col_mtu. */
    c = &ovsrec_interface_col_mtu;
    c->name = "mtu";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_mtu;
    c->unparse = ovsrec_interface_unparse_mtu;

    /* Initialize ovsrec_interface_col_name. */
    c = &ovsrec_interface_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = false;
    c->parse = ovsrec_interface_parse_name;
    c->unparse = ovsrec_interface_unparse_name;

    /* Initialize ovsrec_interface_col_ofport. */
    c = &ovsrec_interface_col_ofport;
    c->name = "ofport";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_ofport;
    c->unparse = ovsrec_interface_unparse_ofport;

    /* Initialize ovsrec_interface_col_ofport_request. */
    c = &ovsrec_interface_col_ofport_request;
    c->name = "ofport_request";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(1);
    c->type.key.u.integer.max = INT64_C(65279);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_ofport_request;
    c->unparse = ovsrec_interface_unparse_ofport_request;

    /* Initialize ovsrec_interface_col_options. */
    c = &ovsrec_interface_col_options;
    c->name = "options";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_options;
    c->unparse = ovsrec_interface_unparse_options;

    /* Initialize ovsrec_interface_col_other_config. */
    c = &ovsrec_interface_col_other_config;
    c->name = "other_config";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_other_config;
    c->unparse = ovsrec_interface_unparse_other_config;

    /* Initialize ovsrec_interface_col_statistics. */
    c = &ovsrec_interface_col_statistics;
    c->name = "statistics";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_INTEGER);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_statistics;
    c->unparse = ovsrec_interface_unparse_statistics;

    /* Initialize ovsrec_interface_col_status. */
    c = &ovsrec_interface_col_status;
    c->name = "status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_status;
    c->unparse = ovsrec_interface_unparse_status;

    /* Initialize ovsrec_interface_col_type. */
    c = &ovsrec_interface_col_type;
    c->name = "type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_interface_parse_type;
    c->unparse = ovsrec_interface_unparse_type;
}

/* Manager table. */

static void
ovsrec_manager_parse_connection_mode(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_manager *row = ovsrec_manager_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->connection_mode = datum->keys[0].string;
    } else {
        row->connection_mode = NULL;
    }
}

static void
ovsrec_manager_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_manager *row = ovsrec_manager_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_manager_parse_inactivity_probe(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_manager *row = ovsrec_manager_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->inactivity_probe = NULL;
    row->n_inactivity_probe = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_inactivity_probe) {
            row->inactivity_probe = xmalloc(n * sizeof *row->inactivity_probe);
        }
        row->inactivity_probe[row->n_inactivity_probe] = datum->keys[i].integer;
        row->n_inactivity_probe++;
    }
}

static void
ovsrec_manager_parse_is_connected(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_manager *row = ovsrec_manager_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->is_connected = datum->keys[0].boolean;
    } else {
        row->is_connected = false;
    }
}

static void
ovsrec_manager_parse_max_backoff(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_manager *row = ovsrec_manager_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->max_backoff = NULL;
    row->n_max_backoff = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_max_backoff) {
            row->max_backoff = xmalloc(n * sizeof *row->max_backoff);
        }
        row->max_backoff[row->n_max_backoff] = datum->keys[i].integer;
        row->n_max_backoff++;
    }
}

static void
ovsrec_manager_parse_other_config(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_manager *row = ovsrec_manager_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->other_config);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->other_config,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_manager_parse_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_manager *row = ovsrec_manager_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->status);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->status,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_manager_parse_target(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_manager *row = ovsrec_manager_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->target = datum->keys[0].string;
    } else {
        row->target = "";
    }
}

static void
ovsrec_manager_unparse_connection_mode(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_manager_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_manager *row = ovsrec_manager_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_manager_unparse_inactivity_probe(struct ovsdb_idl_row *row_)
{
    struct ovsrec_manager *row = ovsrec_manager_cast(row_);

    ovs_assert(inited);
    free(row->inactivity_probe);
}

static void
ovsrec_manager_unparse_is_connected(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_manager_unparse_max_backoff(struct ovsdb_idl_row *row_)
{
    struct ovsrec_manager *row = ovsrec_manager_cast(row_);

    ovs_assert(inited);
    free(row->max_backoff);
}

static void
ovsrec_manager_unparse_other_config(struct ovsdb_idl_row *row_)
{
    struct ovsrec_manager *row = ovsrec_manager_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->other_config);
}

static void
ovsrec_manager_unparse_status(struct ovsdb_idl_row *row_)
{
    struct ovsrec_manager *row = ovsrec_manager_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->status);
}

static void
ovsrec_manager_unparse_target(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_manager_init__(struct ovsdb_idl_row *row)
{
    ovsrec_manager_init(ovsrec_manager_cast(row));
}

/* Clears the contents of 'row' in table "Manager". */
void
ovsrec_manager_init(struct ovsrec_manager *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->other_config);
    smap_init(&row->status);
}

/* Searches table "Manager" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_manager *
ovsrec_manager_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_manager_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_MANAGER], uuid));
}

/* Returns a row in table "Manager" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_manager *
ovsrec_manager_first(const struct ovsdb_idl *idl)
{
    return ovsrec_manager_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_MANAGER]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_manager *
ovsrec_manager_next(const struct ovsrec_manager *row)
{
    return ovsrec_manager_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "Manager".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_manager_delete(const struct ovsrec_manager *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Manager" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_manager *
ovsrec_manager_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_manager_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_MANAGER], NULL));
}

/* Causes the original contents of column "connection_mode" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "connection_mode" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "connection_mode" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "connection_mode" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_manager_insert()).
 *
 *   - If "connection_mode" has already been modified (with
 *     ovsrec_manager_set_connection_mode()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_manager_set_connection_mode() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_manager_verify_connection_mode(const struct ovsrec_manager *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_manager_columns[OVSREC_MANAGER_COL_CONNECTION_MODE]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_manager_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_manager_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_manager_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_manager_verify_external_ids(const struct ovsrec_manager *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_manager_columns[OVSREC_MANAGER_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "inactivity_probe" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "inactivity_probe" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "inactivity_probe" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "inactivity_probe" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_manager_insert()).
 *
 *   - If "inactivity_probe" has already been modified (with
 *     ovsrec_manager_set_inactivity_probe()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_manager_set_inactivity_probe() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_manager_verify_inactivity_probe(const struct ovsrec_manager *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_manager_columns[OVSREC_MANAGER_COL_INACTIVITY_PROBE]);
}

/* Causes the original contents of column "is_connected" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "is_connected" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "is_connected" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "is_connected" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_manager_insert()).
 *
 *   - If "is_connected" has already been modified (with
 *     ovsrec_manager_set_is_connected()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_manager_set_is_connected() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_manager_verify_is_connected(const struct ovsrec_manager *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_manager_columns[OVSREC_MANAGER_COL_IS_CONNECTED]);
}

/* Causes the original contents of column "max_backoff" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "max_backoff" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "max_backoff" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "max_backoff" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_manager_insert()).
 *
 *   - If "max_backoff" has already been modified (with
 *     ovsrec_manager_set_max_backoff()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_manager_set_max_backoff() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_manager_verify_max_backoff(const struct ovsrec_manager *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_manager_columns[OVSREC_MANAGER_COL_MAX_BACKOFF]);
}

/* Causes the original contents of column "other_config" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "other_config" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "other_config" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "other_config" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_manager_insert()).
 *
 *   - If "other_config" has already been modified (with
 *     ovsrec_manager_set_other_config()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_manager_set_other_config() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_manager_verify_other_config(const struct ovsrec_manager *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_manager_columns[OVSREC_MANAGER_COL_OTHER_CONFIG]);
}

/* Causes the original contents of column "status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_manager_insert()).
 *
 *   - If "status" has already been modified (with
 *     ovsrec_manager_set_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_manager_set_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_manager_verify_status(const struct ovsrec_manager *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_manager_columns[OVSREC_MANAGER_COL_STATUS]);
}

/* Causes the original contents of column "target" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "target" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "target" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "target" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_manager_insert()).
 *
 *   - If "target" has already been modified (with
 *     ovsrec_manager_set_target()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_manager_set_target() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_manager_verify_target(const struct ovsrec_manager *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_manager_columns[OVSREC_MANAGER_COL_TARGET]);
}

/* Returns the "connection_mode" column's value from the "Manager" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes connection_mode's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "connection_mode" member in ovsrec_manager. */
const struct ovsdb_datum *
ovsrec_manager_get_connection_mode(const struct ovsrec_manager *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_manager_col_connection_mode);
}

/* Returns the "external_ids" column's value from the "Manager" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_manager. */
const struct ovsdb_datum *
ovsrec_manager_get_external_ids(const struct ovsrec_manager *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_manager_col_external_ids);
}

/* Returns the "inactivity_probe" column's value from the "Manager" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes inactivity_probe's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "inactivity_probe" member in ovsrec_manager. */
const struct ovsdb_datum *
ovsrec_manager_get_inactivity_probe(const struct ovsrec_manager *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_manager_col_inactivity_probe);
}

/* Returns the "is_connected" column's value from the "Manager" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes is_connected's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "is_connected" member in ovsrec_manager. */
const struct ovsdb_datum *
ovsrec_manager_get_is_connected(const struct ovsrec_manager *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &ovsrec_manager_col_is_connected);
}

/* Returns the "max_backoff" column's value from the "Manager" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes max_backoff's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "max_backoff" member in ovsrec_manager. */
const struct ovsdb_datum *
ovsrec_manager_get_max_backoff(const struct ovsrec_manager *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_manager_col_max_backoff);
}

/* Returns the "other_config" column's value from the "Manager" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes other_config's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "other_config" member in ovsrec_manager. */
const struct ovsdb_datum *
ovsrec_manager_get_other_config(const struct ovsrec_manager *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_manager_col_other_config);
}

/* Returns the "status" column's value from the "Manager" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "status" member in ovsrec_manager. */
const struct ovsdb_datum *
ovsrec_manager_get_status(const struct ovsrec_manager *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_manager_col_status);
}

/* Returns the "target" column's value from the "Manager" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes target's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "target" member in ovsrec_manager. */
const struct ovsdb_datum *
ovsrec_manager_get_target(const struct ovsrec_manager *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_manager_col_target);
}

/* Sets the "connection_mode" column from the "Manager" table in 'row' to
 * the 'connection_mode' set.
 *
 * If "connection_mode" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: either "in-band" or "out-of-band"
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_manager_set_connection_mode(const struct ovsrec_manager *row, const char *connection_mode)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (connection_mode) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, connection_mode);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_manager_columns[OVSREC_MANAGER_COL_CONNECTION_MODE], &datum);
}

/* Sets the "external_ids" column's value from the "Manager" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_manager_set_external_ids(const struct ovsrec_manager *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_manager_columns[OVSREC_MANAGER_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "inactivity_probe" column from the "Manager" table in 'row' to
 * the 'inactivity_probe' set with 'n_inactivity_probe' entries.
 *
 * 'n_inactivity_probe' may be 0 or 1; if it is 0, then 'inactivity_probe'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_manager_set_inactivity_probe(const struct ovsrec_manager *row, const int64_t *inactivity_probe, size_t n_inactivity_probe)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_inactivity_probe) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *inactivity_probe;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_manager_columns[OVSREC_MANAGER_COL_INACTIVITY_PROBE], &datum);
}

/* Sets the "is_connected" column from the "Manager" table in 'row' to
 * 'is_connected'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_manager_set_is_connected(const struct ovsrec_manager *row, bool is_connected)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = is_connected;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_manager_columns[OVSREC_MANAGER_COL_IS_CONNECTED], &datum);
}

/* Sets the "max_backoff" column from the "Manager" table in 'row' to
 * the 'max_backoff' set with 'n_max_backoff' entries.
 *
 * 'n_max_backoff' may be 0 or 1; if it is 0, then 'max_backoff'
 * may be NULL.
 *
 * Argument constraints: at least 1,000
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_manager_set_max_backoff(const struct ovsrec_manager *row, const int64_t *max_backoff, size_t n_max_backoff)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_max_backoff) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *max_backoff;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_manager_columns[OVSREC_MANAGER_COL_MAX_BACKOFF], &datum);
}

/* Sets the "other_config" column's value from the "Manager" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
ovsrec_manager_set_other_config(const struct ovsrec_manager *row, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(other_config);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_manager_columns[OVSREC_MANAGER_COL_OTHER_CONFIG],
                        &datum);
}


/* Sets the "status" column's value from the "Manager" table in 'row'
 * to 'status'.
 *
 * The caller retains ownership of 'status' and everything in it. */
void
ovsrec_manager_set_status(const struct ovsrec_manager *row, const struct smap *status)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (status) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(status);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, status) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_manager_columns[OVSREC_MANAGER_COL_STATUS],
                        &datum);
}


/* Sets the "target" column from the "Manager" table in 'row' to
 * 'target'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_manager_set_target(const struct ovsrec_manager *row, const char *target)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, target);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_manager_columns[OVSREC_MANAGER_COL_TARGET], &datum);
}

struct ovsdb_idl_column ovsrec_manager_columns[OVSREC_MANAGER_N_COLUMNS];

static void
ovsrec_manager_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_manager_col_connection_mode. */
    c = &ovsrec_manager_col_connection_mode;
    c->name = "connection_mode";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 2;
    c->type.key.enum_->keys = xmalloc(2 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("in-band");
    c->type.key.enum_->keys[1].string = xstrdup("out-of-band");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_manager_parse_connection_mode;
    c->unparse = ovsrec_manager_unparse_connection_mode;

    /* Initialize ovsrec_manager_col_external_ids. */
    c = &ovsrec_manager_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_manager_parse_external_ids;
    c->unparse = ovsrec_manager_unparse_external_ids;

    /* Initialize ovsrec_manager_col_inactivity_probe. */
    c = &ovsrec_manager_col_inactivity_probe;
    c->name = "inactivity_probe";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_manager_parse_inactivity_probe;
    c->unparse = ovsrec_manager_unparse_inactivity_probe;

    /* Initialize ovsrec_manager_col_is_connected. */
    c = &ovsrec_manager_col_is_connected;
    c->name = "is_connected";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_manager_parse_is_connected;
    c->unparse = ovsrec_manager_unparse_is_connected;

    /* Initialize ovsrec_manager_col_max_backoff. */
    c = &ovsrec_manager_col_max_backoff;
    c->name = "max_backoff";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(1000);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_manager_parse_max_backoff;
    c->unparse = ovsrec_manager_unparse_max_backoff;

    /* Initialize ovsrec_manager_col_other_config. */
    c = &ovsrec_manager_col_other_config;
    c->name = "other_config";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_manager_parse_other_config;
    c->unparse = ovsrec_manager_unparse_other_config;

    /* Initialize ovsrec_manager_col_status. */
    c = &ovsrec_manager_col_status;
    c->name = "status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_manager_parse_status;
    c->unparse = ovsrec_manager_unparse_status;

    /* Initialize ovsrec_manager_col_target. */
    c = &ovsrec_manager_col_target;
    c->name = "target";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_manager_parse_target;
    c->unparse = ovsrec_manager_unparse_target;
}

/* Mirror table. */

static void
ovsrec_mirror_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_mirror_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
ovsrec_mirror_parse_output_port(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->output_port = ovsrec_port_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_PORT], &datum->keys[0].uuid));
    } else {
        row->output_port = NULL;
    }
}

static void
ovsrec_mirror_parse_output_vlan(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->output_vlan = NULL;
    row->n_output_vlan = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_output_vlan) {
            row->output_vlan = xmalloc(n * sizeof *row->output_vlan);
        }
        row->output_vlan[row->n_output_vlan] = datum->keys[i].integer;
        row->n_output_vlan++;
    }
}

static void
ovsrec_mirror_parse_select_all(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->select_all = datum->keys[0].boolean;
    } else {
        row->select_all = false;
    }
}

static void
ovsrec_mirror_parse_select_dst_port(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->select_dst_port = NULL;
    row->n_select_dst_port = 0;
    for (i = 0; i < datum->n; i++) {
        struct ovsrec_port *keyRow = ovsrec_port_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_PORT], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_select_dst_port) {
                row->select_dst_port = xmalloc(datum->n * sizeof *row->select_dst_port);
            }
            row->select_dst_port[row->n_select_dst_port] = keyRow;
            row->n_select_dst_port++;
        }
    }
}

static void
ovsrec_mirror_parse_select_src_port(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->select_src_port = NULL;
    row->n_select_src_port = 0;
    for (i = 0; i < datum->n; i++) {
        struct ovsrec_port *keyRow = ovsrec_port_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_PORT], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_select_src_port) {
                row->select_src_port = xmalloc(datum->n * sizeof *row->select_src_port);
            }
            row->select_src_port[row->n_select_src_port] = keyRow;
            row->n_select_src_port++;
        }
    }
}

static void
ovsrec_mirror_parse_select_vlan(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);
    size_t n = MIN(4096, datum->n);
    size_t i;

    ovs_assert(inited);
    row->select_vlan = NULL;
    row->n_select_vlan = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_select_vlan) {
            row->select_vlan = xmalloc(n * sizeof *row->select_vlan);
        }
        row->select_vlan[row->n_select_vlan] = datum->keys[i].integer;
        row->n_select_vlan++;
    }
}

static void
ovsrec_mirror_parse_statistics(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->key_statistics = NULL;
    row->value_statistics = NULL;
    row->n_statistics = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_statistics) {
            row->key_statistics = xmalloc(datum->n * sizeof *row->key_statistics);
            row->value_statistics = xmalloc(datum->n * sizeof *row->value_statistics);
        }
        row->key_statistics[row->n_statistics] = datum->keys[i].string;
        row->value_statistics[row->n_statistics] = datum->values[i].integer;
        row->n_statistics++;
    }
}

static void
ovsrec_mirror_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_mirror_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_mirror_unparse_output_port(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_mirror_unparse_output_vlan(struct ovsdb_idl_row *row_)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);

    ovs_assert(inited);
    free(row->output_vlan);
}

static void
ovsrec_mirror_unparse_select_all(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_mirror_unparse_select_dst_port(struct ovsdb_idl_row *row_)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);

    ovs_assert(inited);
    free(row->select_dst_port);
}

static void
ovsrec_mirror_unparse_select_src_port(struct ovsdb_idl_row *row_)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);

    ovs_assert(inited);
    free(row->select_src_port);
}

static void
ovsrec_mirror_unparse_select_vlan(struct ovsdb_idl_row *row_)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);

    ovs_assert(inited);
    free(row->select_vlan);
}

static void
ovsrec_mirror_unparse_statistics(struct ovsdb_idl_row *row_)
{
    struct ovsrec_mirror *row = ovsrec_mirror_cast(row_);

    ovs_assert(inited);
    free(row->key_statistics);
    free(row->value_statistics);
}

static void
ovsrec_mirror_init__(struct ovsdb_idl_row *row)
{
    ovsrec_mirror_init(ovsrec_mirror_cast(row));
}

/* Clears the contents of 'row' in table "Mirror". */
void
ovsrec_mirror_init(struct ovsrec_mirror *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "Mirror" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_mirror *
ovsrec_mirror_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_mirror_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_MIRROR], uuid));
}

/* Returns a row in table "Mirror" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_mirror *
ovsrec_mirror_first(const struct ovsdb_idl *idl)
{
    return ovsrec_mirror_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_MIRROR]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_mirror *
ovsrec_mirror_next(const struct ovsrec_mirror *row)
{
    return ovsrec_mirror_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "Mirror".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_mirror_delete(const struct ovsrec_mirror *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Mirror" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_mirror *
ovsrec_mirror_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_mirror_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_MIRROR], NULL));
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_mirror_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_mirror_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_mirror_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_mirror_verify_external_ids(const struct ovsrec_mirror *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_mirror_insert()).
 *
 *   - If "name" has already been modified (with
 *     ovsrec_mirror_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_mirror_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_mirror_verify_name(const struct ovsrec_mirror *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_NAME]);
}

/* Causes the original contents of column "output_port" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "output_port" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "output_port" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "output_port" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_mirror_insert()).
 *
 *   - If "output_port" has already been modified (with
 *     ovsrec_mirror_set_output_port()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_mirror_set_output_port() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_mirror_verify_output_port(const struct ovsrec_mirror *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_OUTPUT_PORT]);
}

/* Causes the original contents of column "output_vlan" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "output_vlan" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "output_vlan" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "output_vlan" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_mirror_insert()).
 *
 *   - If "output_vlan" has already been modified (with
 *     ovsrec_mirror_set_output_vlan()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_mirror_set_output_vlan() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_mirror_verify_output_vlan(const struct ovsrec_mirror *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_OUTPUT_VLAN]);
}

/* Causes the original contents of column "select_all" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "select_all" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "select_all" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "select_all" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_mirror_insert()).
 *
 *   - If "select_all" has already been modified (with
 *     ovsrec_mirror_set_select_all()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_mirror_set_select_all() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_mirror_verify_select_all(const struct ovsrec_mirror *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_SELECT_ALL]);
}

/* Causes the original contents of column "select_dst_port" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "select_dst_port" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "select_dst_port" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "select_dst_port" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_mirror_insert()).
 *
 *   - If "select_dst_port" has already been modified (with
 *     ovsrec_mirror_set_select_dst_port()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_mirror_set_select_dst_port() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_mirror_verify_select_dst_port(const struct ovsrec_mirror *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_SELECT_DST_PORT]);
}

/* Causes the original contents of column "select_src_port" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "select_src_port" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "select_src_port" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "select_src_port" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_mirror_insert()).
 *
 *   - If "select_src_port" has already been modified (with
 *     ovsrec_mirror_set_select_src_port()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_mirror_set_select_src_port() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_mirror_verify_select_src_port(const struct ovsrec_mirror *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_SELECT_SRC_PORT]);
}

/* Causes the original contents of column "select_vlan" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "select_vlan" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "select_vlan" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "select_vlan" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_mirror_insert()).
 *
 *   - If "select_vlan" has already been modified (with
 *     ovsrec_mirror_set_select_vlan()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_mirror_set_select_vlan() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_mirror_verify_select_vlan(const struct ovsrec_mirror *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_SELECT_VLAN]);
}

/* Causes the original contents of column "statistics" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "statistics" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "statistics" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "statistics" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_mirror_insert()).
 *
 *   - If "statistics" has already been modified (with
 *     ovsrec_mirror_set_statistics()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_mirror_set_statistics() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_mirror_verify_statistics(const struct ovsrec_mirror *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_STATISTICS]);
}

/* Returns the "external_ids" column's value from the "Mirror" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_mirror. */
const struct ovsdb_datum *
ovsrec_mirror_get_external_ids(const struct ovsrec_mirror *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_mirror_col_external_ids);
}

/* Returns the "name" column's value from the "Mirror" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in ovsrec_mirror. */
const struct ovsdb_datum *
ovsrec_mirror_get_name(const struct ovsrec_mirror *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_mirror_col_name);
}

/* Returns the "output_port" column's value from the "Mirror" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes output_port's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "output_port" member in ovsrec_mirror. */
const struct ovsdb_datum *
ovsrec_mirror_get_output_port(const struct ovsrec_mirror *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_mirror_col_output_port);
}

/* Returns the "output_vlan" column's value from the "Mirror" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes output_vlan's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "output_vlan" member in ovsrec_mirror. */
const struct ovsdb_datum *
ovsrec_mirror_get_output_vlan(const struct ovsrec_mirror *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_mirror_col_output_vlan);
}

/* Returns the "select_all" column's value from the "Mirror" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes select_all's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "select_all" member in ovsrec_mirror. */
const struct ovsdb_datum *
ovsrec_mirror_get_select_all(const struct ovsrec_mirror *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &ovsrec_mirror_col_select_all);
}

/* Returns the "select_dst_port" column's value from the "Mirror" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes select_dst_port's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "select_dst_port" member in ovsrec_mirror. */
const struct ovsdb_datum *
ovsrec_mirror_get_select_dst_port(const struct ovsrec_mirror *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_mirror_col_select_dst_port);
}

/* Returns the "select_src_port" column's value from the "Mirror" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes select_src_port's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "select_src_port" member in ovsrec_mirror. */
const struct ovsdb_datum *
ovsrec_mirror_get_select_src_port(const struct ovsrec_mirror *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_mirror_col_select_src_port);
}

/* Returns the "select_vlan" column's value from the "Mirror" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes select_vlan's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "select_vlan" member in ovsrec_mirror. */
const struct ovsdb_datum *
ovsrec_mirror_get_select_vlan(const struct ovsrec_mirror *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_mirror_col_select_vlan);
}

/* Returns the "statistics" column's value from the "Mirror" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes statistics's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "statistics" member in ovsrec_mirror. */
const struct ovsdb_datum *
ovsrec_mirror_get_statistics(const struct ovsrec_mirror *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_mirror_col_statistics);
}

/* Sets the "external_ids" column's value from the "Mirror" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_mirror_set_external_ids(const struct ovsrec_mirror *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_mirror_columns[OVSREC_MIRROR_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "name" column from the "Mirror" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_mirror_set_name(const struct ovsrec_mirror *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_NAME], &datum);
}

/* Sets the "output_port" column from the "Mirror" table in 'row' to
 * the 'output_port' set.
 *
 * If "output_port" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_mirror_set_output_port(const struct ovsrec_mirror *row, const struct ovsrec_port *output_port)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (output_port) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = output_port->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_OUTPUT_PORT], &datum);
}

/* Sets the "output_vlan" column from the "Mirror" table in 'row' to
 * the 'output_vlan' set with 'n_output_vlan' entries.
 *
 * 'n_output_vlan' may be 0 or 1; if it is 0, then 'output_vlan'
 * may be NULL.
 *
 * Argument constraints: in range 1 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_mirror_set_output_vlan(const struct ovsrec_mirror *row, const int64_t *output_vlan, size_t n_output_vlan)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_output_vlan) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *output_vlan;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_OUTPUT_VLAN], &datum);
}

/* Sets the "select_all" column from the "Mirror" table in 'row' to
 * 'select_all'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_mirror_set_select_all(const struct ovsrec_mirror *row, bool select_all)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = select_all;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_SELECT_ALL], &datum);
}

/* Sets the "select_dst_port" column from the "Mirror" table in 'row' to
 * the 'select_dst_port' set with 'n_select_dst_port' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_mirror_set_select_dst_port(const struct ovsrec_mirror *row, struct ovsrec_port **select_dst_port, size_t n_select_dst_port)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_select_dst_port;
    datum.keys = n_select_dst_port ? xmalloc(n_select_dst_port * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_select_dst_port; i++) {
        datum.keys[i].uuid = select_dst_port[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_SELECT_DST_PORT], &datum);
}

/* Sets the "select_src_port" column from the "Mirror" table in 'row' to
 * the 'select_src_port' set with 'n_select_src_port' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_mirror_set_select_src_port(const struct ovsrec_mirror *row, struct ovsrec_port **select_src_port, size_t n_select_src_port)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_select_src_port;
    datum.keys = n_select_src_port ? xmalloc(n_select_src_port * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_select_src_port; i++) {
        datum.keys[i].uuid = select_src_port[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_SELECT_SRC_PORT], &datum);
}

/* Sets the "select_vlan" column from the "Mirror" table in 'row' to
 * the 'select_vlan' set with 'n_select_vlan' entries.
 *
 * Argument constraints: in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_mirror_set_select_vlan(const struct ovsrec_mirror *row, const int64_t *select_vlan, size_t n_select_vlan)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_select_vlan;
    datum.keys = n_select_vlan ? xmalloc(n_select_vlan * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_select_vlan; i++) {
        datum.keys[i].integer = select_vlan[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_SELECT_VLAN], &datum);
}

/* Sets the "statistics" column from the "Mirror" table in 'row' to
 * the map with keys 'key_statistics' and values 'value_statistics'
 * with 'n_statistics' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_mirror_set_statistics(const struct ovsrec_mirror *row, const char **key_statistics, const int64_t *value_statistics, size_t n_statistics)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_statistics;
    datum.keys = n_statistics ? xmalloc(n_statistics * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_statistics * sizeof *datum.values);
    for (i = 0; i < n_statistics; i++) {
        datum.keys[i].string = xstrdup(key_statistics[i]);
        datum.values[i].integer = value_statistics[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_INTEGER);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_mirror_columns[OVSREC_MIRROR_COL_STATISTICS], &datum);
}

struct ovsdb_idl_column ovsrec_mirror_columns[OVSREC_MIRROR_N_COLUMNS];

static void
ovsrec_mirror_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_mirror_col_external_ids. */
    c = &ovsrec_mirror_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_mirror_parse_external_ids;
    c->unparse = ovsrec_mirror_unparse_external_ids;

    /* Initialize ovsrec_mirror_col_name. */
    c = &ovsrec_mirror_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_mirror_parse_name;
    c->unparse = ovsrec_mirror_unparse_name;

    /* Initialize ovsrec_mirror_col_output_port. */
    c = &ovsrec_mirror_col_output_port;
    c->name = "output_port";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Port";
    c->type.key.u.uuid.refType = OVSDB_REF_WEAK;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_mirror_parse_output_port;
    c->unparse = ovsrec_mirror_unparse_output_port;

    /* Initialize ovsrec_mirror_col_output_vlan. */
    c = &ovsrec_mirror_col_output_vlan;
    c->name = "output_vlan";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(1);
    c->type.key.u.integer.max = INT64_C(4095);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_mirror_parse_output_vlan;
    c->unparse = ovsrec_mirror_unparse_output_vlan;

    /* Initialize ovsrec_mirror_col_select_all. */
    c = &ovsrec_mirror_col_select_all;
    c->name = "select_all";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_mirror_parse_select_all;
    c->unparse = ovsrec_mirror_unparse_select_all;

    /* Initialize ovsrec_mirror_col_select_dst_port. */
    c = &ovsrec_mirror_col_select_dst_port;
    c->name = "select_dst_port";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Port";
    c->type.key.u.uuid.refType = OVSDB_REF_WEAK;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_mirror_parse_select_dst_port;
    c->unparse = ovsrec_mirror_unparse_select_dst_port;

    /* Initialize ovsrec_mirror_col_select_src_port. */
    c = &ovsrec_mirror_col_select_src_port;
    c->name = "select_src_port";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Port";
    c->type.key.u.uuid.refType = OVSDB_REF_WEAK;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_mirror_parse_select_src_port;
    c->unparse = ovsrec_mirror_unparse_select_src_port;

    /* Initialize ovsrec_mirror_col_select_vlan. */
    c = &ovsrec_mirror_col_select_vlan;
    c->name = "select_vlan";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4095);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 4096;
    c->mutable = true;
    c->parse = ovsrec_mirror_parse_select_vlan;
    c->unparse = ovsrec_mirror_unparse_select_vlan;

    /* Initialize ovsrec_mirror_col_statistics. */
    c = &ovsrec_mirror_col_statistics;
    c->name = "statistics";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_INTEGER);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_mirror_parse_statistics;
    c->unparse = ovsrec_mirror_unparse_statistics;
}

/* NetFlow table. */

static void
ovsrec_netflow_parse_active_timeout(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_netflow *row = ovsrec_netflow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->active_timeout = datum->keys[0].integer;
    } else {
        row->active_timeout = 0;
    }
}

static void
ovsrec_netflow_parse_add_id_to_interface(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_netflow *row = ovsrec_netflow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->add_id_to_interface = datum->keys[0].boolean;
    } else {
        row->add_id_to_interface = false;
    }
}

static void
ovsrec_netflow_parse_engine_id(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_netflow *row = ovsrec_netflow_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->engine_id = NULL;
    row->n_engine_id = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_engine_id) {
            row->engine_id = xmalloc(n * sizeof *row->engine_id);
        }
        row->engine_id[row->n_engine_id] = datum->keys[i].integer;
        row->n_engine_id++;
    }
}

static void
ovsrec_netflow_parse_engine_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_netflow *row = ovsrec_netflow_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->engine_type = NULL;
    row->n_engine_type = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_engine_type) {
            row->engine_type = xmalloc(n * sizeof *row->engine_type);
        }
        row->engine_type[row->n_engine_type] = datum->keys[i].integer;
        row->n_engine_type++;
    }
}

static void
ovsrec_netflow_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_netflow *row = ovsrec_netflow_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_netflow_parse_targets(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_netflow *row = ovsrec_netflow_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->targets = NULL;
    row->n_targets = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_targets) {
            row->targets = xmalloc(datum->n * sizeof *row->targets);
        }
        row->targets[row->n_targets] = datum->keys[i].string;
        row->n_targets++;
    }
}

static void
ovsrec_netflow_unparse_active_timeout(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_netflow_unparse_add_id_to_interface(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_netflow_unparse_engine_id(struct ovsdb_idl_row *row_)
{
    struct ovsrec_netflow *row = ovsrec_netflow_cast(row_);

    ovs_assert(inited);
    free(row->engine_id);
}

static void
ovsrec_netflow_unparse_engine_type(struct ovsdb_idl_row *row_)
{
    struct ovsrec_netflow *row = ovsrec_netflow_cast(row_);

    ovs_assert(inited);
    free(row->engine_type);
}

static void
ovsrec_netflow_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_netflow *row = ovsrec_netflow_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_netflow_unparse_targets(struct ovsdb_idl_row *row_)
{
    struct ovsrec_netflow *row = ovsrec_netflow_cast(row_);

    ovs_assert(inited);
    free(row->targets);
}

static void
ovsrec_netflow_init__(struct ovsdb_idl_row *row)
{
    ovsrec_netflow_init(ovsrec_netflow_cast(row));
}

/* Clears the contents of 'row' in table "NetFlow". */
void
ovsrec_netflow_init(struct ovsrec_netflow *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "NetFlow" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_netflow *
ovsrec_netflow_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_netflow_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_NETFLOW], uuid));
}

/* Returns a row in table "NetFlow" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_netflow *
ovsrec_netflow_first(const struct ovsdb_idl *idl)
{
    return ovsrec_netflow_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_NETFLOW]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_netflow *
ovsrec_netflow_next(const struct ovsrec_netflow *row)
{
    return ovsrec_netflow_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "NetFlow".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_netflow_delete(const struct ovsrec_netflow *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "NetFlow" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_netflow *
ovsrec_netflow_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_netflow_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_NETFLOW], NULL));
}

/* Causes the original contents of column "active_timeout" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "active_timeout" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "active_timeout" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "active_timeout" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_netflow_insert()).
 *
 *   - If "active_timeout" has already been modified (with
 *     ovsrec_netflow_set_active_timeout()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_netflow_set_active_timeout() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_netflow_verify_active_timeout(const struct ovsrec_netflow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_netflow_columns[OVSREC_NETFLOW_COL_ACTIVE_TIMEOUT]);
}

/* Causes the original contents of column "add_id_to_interface" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "add_id_to_interface" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "add_id_to_interface" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "add_id_to_interface" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_netflow_insert()).
 *
 *   - If "add_id_to_interface" has already been modified (with
 *     ovsrec_netflow_set_add_id_to_interface()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_netflow_set_add_id_to_interface() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_netflow_verify_add_id_to_interface(const struct ovsrec_netflow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_netflow_columns[OVSREC_NETFLOW_COL_ADD_ID_TO_INTERFACE]);
}

/* Causes the original contents of column "engine_id" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "engine_id" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "engine_id" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "engine_id" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_netflow_insert()).
 *
 *   - If "engine_id" has already been modified (with
 *     ovsrec_netflow_set_engine_id()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_netflow_set_engine_id() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_netflow_verify_engine_id(const struct ovsrec_netflow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_netflow_columns[OVSREC_NETFLOW_COL_ENGINE_ID]);
}

/* Causes the original contents of column "engine_type" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "engine_type" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "engine_type" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "engine_type" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_netflow_insert()).
 *
 *   - If "engine_type" has already been modified (with
 *     ovsrec_netflow_set_engine_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_netflow_set_engine_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_netflow_verify_engine_type(const struct ovsrec_netflow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_netflow_columns[OVSREC_NETFLOW_COL_ENGINE_TYPE]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_netflow_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_netflow_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_netflow_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_netflow_verify_external_ids(const struct ovsrec_netflow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_netflow_columns[OVSREC_NETFLOW_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "targets" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "targets" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "targets" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "targets" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_netflow_insert()).
 *
 *   - If "targets" has already been modified (with
 *     ovsrec_netflow_set_targets()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_netflow_set_targets() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_netflow_verify_targets(const struct ovsrec_netflow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_netflow_columns[OVSREC_NETFLOW_COL_TARGETS]);
}

/* Returns the "active_timeout" column's value from the "NetFlow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes active_timeout's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "active_timeout" member in ovsrec_netflow. */
const struct ovsdb_datum *
ovsrec_netflow_get_active_timeout(const struct ovsrec_netflow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_netflow_col_active_timeout);
}

/* Returns the "add_id_to_interface" column's value from the "NetFlow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes add_id_to_interface's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "add_id_to_interface" member in ovsrec_netflow. */
const struct ovsdb_datum *
ovsrec_netflow_get_add_id_to_interface(const struct ovsrec_netflow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &ovsrec_netflow_col_add_id_to_interface);
}

/* Returns the "engine_id" column's value from the "NetFlow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes engine_id's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "engine_id" member in ovsrec_netflow. */
const struct ovsdb_datum *
ovsrec_netflow_get_engine_id(const struct ovsrec_netflow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_netflow_col_engine_id);
}

/* Returns the "engine_type" column's value from the "NetFlow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes engine_type's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "engine_type" member in ovsrec_netflow. */
const struct ovsdb_datum *
ovsrec_netflow_get_engine_type(const struct ovsrec_netflow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_netflow_col_engine_type);
}

/* Returns the "external_ids" column's value from the "NetFlow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_netflow. */
const struct ovsdb_datum *
ovsrec_netflow_get_external_ids(const struct ovsrec_netflow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_netflow_col_external_ids);
}

/* Returns the "targets" column's value from the "NetFlow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes targets's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "targets" member in ovsrec_netflow. */
const struct ovsdb_datum *
ovsrec_netflow_get_targets(const struct ovsrec_netflow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_netflow_col_targets);
}

/* Sets the "active_timeout" column from the "NetFlow" table in 'row' to
 * 'active_timeout'.
 *
 * Argument constraints: at least -1
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_netflow_set_active_timeout(const struct ovsrec_netflow *row, int64_t active_timeout)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = active_timeout;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_netflow_columns[OVSREC_NETFLOW_COL_ACTIVE_TIMEOUT], &datum);
}

/* Sets the "add_id_to_interface" column from the "NetFlow" table in 'row' to
 * 'add_id_to_interface'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_netflow_set_add_id_to_interface(const struct ovsrec_netflow *row, bool add_id_to_interface)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = add_id_to_interface;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_netflow_columns[OVSREC_NETFLOW_COL_ADD_ID_TO_INTERFACE], &datum);
}

/* Sets the "engine_id" column from the "NetFlow" table in 'row' to
 * the 'engine_id' set with 'n_engine_id' entries.
 *
 * 'n_engine_id' may be 0 or 1; if it is 0, then 'engine_id'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 255
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_netflow_set_engine_id(const struct ovsrec_netflow *row, const int64_t *engine_id, size_t n_engine_id)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_engine_id) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *engine_id;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_netflow_columns[OVSREC_NETFLOW_COL_ENGINE_ID], &datum);
}

/* Sets the "engine_type" column from the "NetFlow" table in 'row' to
 * the 'engine_type' set with 'n_engine_type' entries.
 *
 * 'n_engine_type' may be 0 or 1; if it is 0, then 'engine_type'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 255
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_netflow_set_engine_type(const struct ovsrec_netflow *row, const int64_t *engine_type, size_t n_engine_type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_engine_type) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *engine_type;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_netflow_columns[OVSREC_NETFLOW_COL_ENGINE_TYPE], &datum);
}

/* Sets the "external_ids" column's value from the "NetFlow" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_netflow_set_external_ids(const struct ovsrec_netflow *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_netflow_columns[OVSREC_NETFLOW_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "targets" column from the "NetFlow" table in 'row' to
 * the 'targets' set with 'n_targets' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_netflow_set_targets(const struct ovsrec_netflow *row, const char **targets, size_t n_targets)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_targets;
    datum.keys = n_targets ? xmalloc(n_targets * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_targets; i++) {
        datum.keys[i].string = xstrdup(targets[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_netflow_columns[OVSREC_NETFLOW_COL_TARGETS], &datum);
}

struct ovsdb_idl_column ovsrec_netflow_columns[OVSREC_NETFLOW_N_COLUMNS];

static void
ovsrec_netflow_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_netflow_col_active_timeout. */
    c = &ovsrec_netflow_col_active_timeout;
    c->name = "active_timeout";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(-1);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_netflow_parse_active_timeout;
    c->unparse = ovsrec_netflow_unparse_active_timeout;

    /* Initialize ovsrec_netflow_col_add_id_to_interface. */
    c = &ovsrec_netflow_col_add_id_to_interface;
    c->name = "add_id_to_interface";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_netflow_parse_add_id_to_interface;
    c->unparse = ovsrec_netflow_unparse_add_id_to_interface;

    /* Initialize ovsrec_netflow_col_engine_id. */
    c = &ovsrec_netflow_col_engine_id;
    c->name = "engine_id";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(255);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_netflow_parse_engine_id;
    c->unparse = ovsrec_netflow_unparse_engine_id;

    /* Initialize ovsrec_netflow_col_engine_type. */
    c = &ovsrec_netflow_col_engine_type;
    c->name = "engine_type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(255);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_netflow_parse_engine_type;
    c->unparse = ovsrec_netflow_unparse_engine_type;

    /* Initialize ovsrec_netflow_col_external_ids. */
    c = &ovsrec_netflow_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_netflow_parse_external_ids;
    c->unparse = ovsrec_netflow_unparse_external_ids;

    /* Initialize ovsrec_netflow_col_targets. */
    c = &ovsrec_netflow_col_targets;
    c->name = "targets";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_netflow_parse_targets;
    c->unparse = ovsrec_netflow_unparse_targets;
}

/* Open_vSwitch table. */

static void
ovsrec_open_vswitch_parse_bridges(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->bridges = NULL;
    row->n_bridges = 0;
    for (i = 0; i < datum->n; i++) {
        struct ovsrec_bridge *keyRow = ovsrec_bridge_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_BRIDGE], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_bridges) {
                row->bridges = xmalloc(datum->n * sizeof *row->bridges);
            }
            row->bridges[row->n_bridges] = keyRow;
            row->n_bridges++;
        }
    }
}

static void
ovsrec_open_vswitch_parse_cur_cfg(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->cur_cfg = datum->keys[0].integer;
    } else {
        row->cur_cfg = 0;
    }
}

static void
ovsrec_open_vswitch_parse_datapath_types(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->datapath_types = NULL;
    row->n_datapath_types = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_datapath_types) {
            row->datapath_types = xmalloc(datum->n * sizeof *row->datapath_types);
        }
        row->datapath_types[row->n_datapath_types] = datum->keys[i].string;
        row->n_datapath_types++;
    }
}

static void
ovsrec_open_vswitch_parse_db_version(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->db_version = datum->keys[0].string;
    } else {
        row->db_version = NULL;
    }
}

static void
ovsrec_open_vswitch_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_open_vswitch_parse_iface_types(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->iface_types = NULL;
    row->n_iface_types = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_iface_types) {
            row->iface_types = xmalloc(datum->n * sizeof *row->iface_types);
        }
        row->iface_types[row->n_iface_types] = datum->keys[i].string;
        row->n_iface_types++;
    }
}

static void
ovsrec_open_vswitch_parse_manager_options(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->manager_options = NULL;
    row->n_manager_options = 0;
    for (i = 0; i < datum->n; i++) {
        struct ovsrec_manager *keyRow = ovsrec_manager_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_MANAGER], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_manager_options) {
                row->manager_options = xmalloc(datum->n * sizeof *row->manager_options);
            }
            row->manager_options[row->n_manager_options] = keyRow;
            row->n_manager_options++;
        }
    }
}

static void
ovsrec_open_vswitch_parse_next_cfg(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->next_cfg = datum->keys[0].integer;
    } else {
        row->next_cfg = 0;
    }
}

static void
ovsrec_open_vswitch_parse_other_config(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->other_config);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->other_config,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_open_vswitch_parse_ovs_version(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ovs_version = datum->keys[0].string;
    } else {
        row->ovs_version = NULL;
    }
}

static void
ovsrec_open_vswitch_parse_ssl(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ssl = ovsrec_ssl_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_SSL], &datum->keys[0].uuid));
    } else {
        row->ssl = NULL;
    }
}

static void
ovsrec_open_vswitch_parse_statistics(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->statistics);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->statistics,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_open_vswitch_parse_system_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->system_type = datum->keys[0].string;
    } else {
        row->system_type = NULL;
    }
}

static void
ovsrec_open_vswitch_parse_system_version(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->system_version = datum->keys[0].string;
    } else {
        row->system_version = NULL;
    }
}

static void
ovsrec_open_vswitch_unparse_bridges(struct ovsdb_idl_row *row_)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);

    ovs_assert(inited);
    free(row->bridges);
}

static void
ovsrec_open_vswitch_unparse_cur_cfg(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_open_vswitch_unparse_datapath_types(struct ovsdb_idl_row *row_)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);

    ovs_assert(inited);
    free(row->datapath_types);
}

static void
ovsrec_open_vswitch_unparse_db_version(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_open_vswitch_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_open_vswitch_unparse_iface_types(struct ovsdb_idl_row *row_)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);

    ovs_assert(inited);
    free(row->iface_types);
}

static void
ovsrec_open_vswitch_unparse_manager_options(struct ovsdb_idl_row *row_)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);

    ovs_assert(inited);
    free(row->manager_options);
}

static void
ovsrec_open_vswitch_unparse_next_cfg(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_open_vswitch_unparse_other_config(struct ovsdb_idl_row *row_)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->other_config);
}

static void
ovsrec_open_vswitch_unparse_ovs_version(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_open_vswitch_unparse_ssl(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_open_vswitch_unparse_statistics(struct ovsdb_idl_row *row_)
{
    struct ovsrec_open_vswitch *row = ovsrec_open_vswitch_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->statistics);
}

static void
ovsrec_open_vswitch_unparse_system_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_open_vswitch_unparse_system_version(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_open_vswitch_init__(struct ovsdb_idl_row *row)
{
    ovsrec_open_vswitch_init(ovsrec_open_vswitch_cast(row));
}

/* Clears the contents of 'row' in table "Open_vSwitch". */
void
ovsrec_open_vswitch_init(struct ovsrec_open_vswitch *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->other_config);
    smap_init(&row->statistics);
}

/* Searches table "Open_vSwitch" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_open_vswitch *
ovsrec_open_vswitch_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_open_vswitch_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_OPEN_VSWITCH], uuid));
}

/* Returns a row in table "Open_vSwitch" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_open_vswitch *
ovsrec_open_vswitch_first(const struct ovsdb_idl *idl)
{
    return ovsrec_open_vswitch_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_OPEN_VSWITCH]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_open_vswitch *
ovsrec_open_vswitch_next(const struct ovsrec_open_vswitch *row)
{
    return ovsrec_open_vswitch_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "Open_vSwitch".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_delete(const struct ovsrec_open_vswitch *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Open_vSwitch" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_open_vswitch *
ovsrec_open_vswitch_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_open_vswitch_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_OPEN_VSWITCH], NULL));
}

/* Causes the original contents of column "bridges" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bridges" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bridges" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bridges" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_open_vswitch_insert()).
 *
 *   - If "bridges" has already been modified (with
 *     ovsrec_open_vswitch_set_bridges()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_open_vswitch_set_bridges() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_verify_bridges(const struct ovsrec_open_vswitch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_BRIDGES]);
}

/* Causes the original contents of column "cur_cfg" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "cur_cfg" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "cur_cfg" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "cur_cfg" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_open_vswitch_insert()).
 *
 *   - If "cur_cfg" has already been modified (with
 *     ovsrec_open_vswitch_set_cur_cfg()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_open_vswitch_set_cur_cfg() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_verify_cur_cfg(const struct ovsrec_open_vswitch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_CUR_CFG]);
}

/* Causes the original contents of column "datapath_types" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "datapath_types" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "datapath_types" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "datapath_types" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_open_vswitch_insert()).
 *
 *   - If "datapath_types" has already been modified (with
 *     ovsrec_open_vswitch_set_datapath_types()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_open_vswitch_set_datapath_types() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_verify_datapath_types(const struct ovsrec_open_vswitch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_DATAPATH_TYPES]);
}

/* Causes the original contents of column "db_version" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "db_version" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "db_version" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "db_version" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_open_vswitch_insert()).
 *
 *   - If "db_version" has already been modified (with
 *     ovsrec_open_vswitch_set_db_version()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_open_vswitch_set_db_version() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_verify_db_version(const struct ovsrec_open_vswitch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_DB_VERSION]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_open_vswitch_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_open_vswitch_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_open_vswitch_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_verify_external_ids(const struct ovsrec_open_vswitch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "iface_types" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "iface_types" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "iface_types" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "iface_types" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_open_vswitch_insert()).
 *
 *   - If "iface_types" has already been modified (with
 *     ovsrec_open_vswitch_set_iface_types()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_open_vswitch_set_iface_types() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_verify_iface_types(const struct ovsrec_open_vswitch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_IFACE_TYPES]);
}

/* Causes the original contents of column "manager_options" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "manager_options" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "manager_options" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "manager_options" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_open_vswitch_insert()).
 *
 *   - If "manager_options" has already been modified (with
 *     ovsrec_open_vswitch_set_manager_options()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_open_vswitch_set_manager_options() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_verify_manager_options(const struct ovsrec_open_vswitch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_MANAGER_OPTIONS]);
}

/* Causes the original contents of column "next_cfg" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "next_cfg" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "next_cfg" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "next_cfg" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_open_vswitch_insert()).
 *
 *   - If "next_cfg" has already been modified (with
 *     ovsrec_open_vswitch_set_next_cfg()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_open_vswitch_set_next_cfg() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_verify_next_cfg(const struct ovsrec_open_vswitch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_NEXT_CFG]);
}

/* Causes the original contents of column "other_config" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "other_config" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "other_config" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "other_config" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_open_vswitch_insert()).
 *
 *   - If "other_config" has already been modified (with
 *     ovsrec_open_vswitch_set_other_config()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_open_vswitch_set_other_config() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_verify_other_config(const struct ovsrec_open_vswitch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_OTHER_CONFIG]);
}

/* Causes the original contents of column "ovs_version" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ovs_version" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ovs_version" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ovs_version" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_open_vswitch_insert()).
 *
 *   - If "ovs_version" has already been modified (with
 *     ovsrec_open_vswitch_set_ovs_version()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_open_vswitch_set_ovs_version() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_verify_ovs_version(const struct ovsrec_open_vswitch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_OVS_VERSION]);
}

/* Causes the original contents of column "ssl" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ssl" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ssl" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ssl" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_open_vswitch_insert()).
 *
 *   - If "ssl" has already been modified (with
 *     ovsrec_open_vswitch_set_ssl()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_open_vswitch_set_ssl() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_verify_ssl(const struct ovsrec_open_vswitch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_SSL]);
}

/* Causes the original contents of column "statistics" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "statistics" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "statistics" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "statistics" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_open_vswitch_insert()).
 *
 *   - If "statistics" has already been modified (with
 *     ovsrec_open_vswitch_set_statistics()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_open_vswitch_set_statistics() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_verify_statistics(const struct ovsrec_open_vswitch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_STATISTICS]);
}

/* Causes the original contents of column "system_type" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "system_type" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "system_type" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "system_type" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_open_vswitch_insert()).
 *
 *   - If "system_type" has already been modified (with
 *     ovsrec_open_vswitch_set_system_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_open_vswitch_set_system_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_verify_system_type(const struct ovsrec_open_vswitch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_SYSTEM_TYPE]);
}

/* Causes the original contents of column "system_version" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "system_version" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "system_version" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "system_version" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_open_vswitch_insert()).
 *
 *   - If "system_version" has already been modified (with
 *     ovsrec_open_vswitch_set_system_version()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_open_vswitch_set_system_version() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_open_vswitch_verify_system_version(const struct ovsrec_open_vswitch *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_SYSTEM_VERSION]);
}

/* Returns the "bridges" column's value from the "Open_vSwitch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes bridges's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bridges" member in ovsrec_open_vswitch. */
const struct ovsdb_datum *
ovsrec_open_vswitch_get_bridges(const struct ovsrec_open_vswitch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_open_vswitch_col_bridges);
}

/* Returns the "cur_cfg" column's value from the "Open_vSwitch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes cur_cfg's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "cur_cfg" member in ovsrec_open_vswitch. */
const struct ovsdb_datum *
ovsrec_open_vswitch_get_cur_cfg(const struct ovsrec_open_vswitch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_open_vswitch_col_cur_cfg);
}

/* Returns the "datapath_types" column's value from the "Open_vSwitch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes datapath_types's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "datapath_types" member in ovsrec_open_vswitch. */
const struct ovsdb_datum *
ovsrec_open_vswitch_get_datapath_types(const struct ovsrec_open_vswitch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_open_vswitch_col_datapath_types);
}

/* Returns the "db_version" column's value from the "Open_vSwitch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes db_version's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "db_version" member in ovsrec_open_vswitch. */
const struct ovsdb_datum *
ovsrec_open_vswitch_get_db_version(const struct ovsrec_open_vswitch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_open_vswitch_col_db_version);
}

/* Returns the "external_ids" column's value from the "Open_vSwitch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_open_vswitch. */
const struct ovsdb_datum *
ovsrec_open_vswitch_get_external_ids(const struct ovsrec_open_vswitch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_open_vswitch_col_external_ids);
}

/* Returns the "iface_types" column's value from the "Open_vSwitch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes iface_types's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "iface_types" member in ovsrec_open_vswitch. */
const struct ovsdb_datum *
ovsrec_open_vswitch_get_iface_types(const struct ovsrec_open_vswitch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_open_vswitch_col_iface_types);
}

/* Returns the "manager_options" column's value from the "Open_vSwitch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes manager_options's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "manager_options" member in ovsrec_open_vswitch. */
const struct ovsdb_datum *
ovsrec_open_vswitch_get_manager_options(const struct ovsrec_open_vswitch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_open_vswitch_col_manager_options);
}

/* Returns the "next_cfg" column's value from the "Open_vSwitch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes next_cfg's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "next_cfg" member in ovsrec_open_vswitch. */
const struct ovsdb_datum *
ovsrec_open_vswitch_get_next_cfg(const struct ovsrec_open_vswitch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_open_vswitch_col_next_cfg);
}

/* Returns the "other_config" column's value from the "Open_vSwitch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes other_config's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "other_config" member in ovsrec_open_vswitch. */
const struct ovsdb_datum *
ovsrec_open_vswitch_get_other_config(const struct ovsrec_open_vswitch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_open_vswitch_col_other_config);
}

/* Returns the "ovs_version" column's value from the "Open_vSwitch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ovs_version's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ovs_version" member in ovsrec_open_vswitch. */
const struct ovsdb_datum *
ovsrec_open_vswitch_get_ovs_version(const struct ovsrec_open_vswitch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_open_vswitch_col_ovs_version);
}

/* Returns the "ssl" column's value from the "Open_vSwitch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes ssl's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ssl" member in ovsrec_open_vswitch. */
const struct ovsdb_datum *
ovsrec_open_vswitch_get_ssl(const struct ovsrec_open_vswitch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_open_vswitch_col_ssl);
}

/* Returns the "statistics" column's value from the "Open_vSwitch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes statistics's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "statistics" member in ovsrec_open_vswitch. */
const struct ovsdb_datum *
ovsrec_open_vswitch_get_statistics(const struct ovsrec_open_vswitch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_open_vswitch_col_statistics);
}

/* Returns the "system_type" column's value from the "Open_vSwitch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes system_type's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "system_type" member in ovsrec_open_vswitch. */
const struct ovsdb_datum *
ovsrec_open_vswitch_get_system_type(const struct ovsrec_open_vswitch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_open_vswitch_col_system_type);
}

/* Returns the "system_version" column's value from the "Open_vSwitch" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes system_version's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "system_version" member in ovsrec_open_vswitch. */
const struct ovsdb_datum *
ovsrec_open_vswitch_get_system_version(const struct ovsrec_open_vswitch *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_open_vswitch_col_system_version);
}

/* Sets the "bridges" column from the "Open_vSwitch" table in 'row' to
 * the 'bridges' set with 'n_bridges' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_open_vswitch_set_bridges(const struct ovsrec_open_vswitch *row, struct ovsrec_bridge **bridges, size_t n_bridges)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_bridges;
    datum.keys = n_bridges ? xmalloc(n_bridges * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_bridges; i++) {
        datum.keys[i].uuid = bridges[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_BRIDGES], &datum);
}

/* Sets the "cur_cfg" column from the "Open_vSwitch" table in 'row' to
 * 'cur_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_open_vswitch_set_cur_cfg(const struct ovsrec_open_vswitch *row, int64_t cur_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = cur_cfg;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_CUR_CFG], &datum);
}

/* Sets the "datapath_types" column from the "Open_vSwitch" table in 'row' to
 * the 'datapath_types' set with 'n_datapath_types' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_open_vswitch_set_datapath_types(const struct ovsrec_open_vswitch *row, const char **datapath_types, size_t n_datapath_types)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_datapath_types;
    datum.keys = n_datapath_types ? xmalloc(n_datapath_types * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_datapath_types; i++) {
        datum.keys[i].string = xstrdup(datapath_types[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_DATAPATH_TYPES], &datum);
}

/* Sets the "db_version" column from the "Open_vSwitch" table in 'row' to
 * the 'db_version' set.
 *
 * If "db_version" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_open_vswitch_set_db_version(const struct ovsrec_open_vswitch *row, const char *db_version)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (db_version) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, db_version);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_DB_VERSION], &datum);
}

/* Sets the "external_ids" column's value from the "Open_vSwitch" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_open_vswitch_set_external_ids(const struct ovsrec_open_vswitch *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "iface_types" column from the "Open_vSwitch" table in 'row' to
 * the 'iface_types' set with 'n_iface_types' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_open_vswitch_set_iface_types(const struct ovsrec_open_vswitch *row, const char **iface_types, size_t n_iface_types)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_iface_types;
    datum.keys = n_iface_types ? xmalloc(n_iface_types * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_iface_types; i++) {
        datum.keys[i].string = xstrdup(iface_types[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_IFACE_TYPES], &datum);
}

/* Sets the "manager_options" column from the "Open_vSwitch" table in 'row' to
 * the 'manager_options' set with 'n_manager_options' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_open_vswitch_set_manager_options(const struct ovsrec_open_vswitch *row, struct ovsrec_manager **manager_options, size_t n_manager_options)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_manager_options;
    datum.keys = n_manager_options ? xmalloc(n_manager_options * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_manager_options; i++) {
        datum.keys[i].uuid = manager_options[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_MANAGER_OPTIONS], &datum);
}

/* Sets the "next_cfg" column from the "Open_vSwitch" table in 'row' to
 * 'next_cfg'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_open_vswitch_set_next_cfg(const struct ovsrec_open_vswitch *row, int64_t next_cfg)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = next_cfg;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_NEXT_CFG], &datum);
}

/* Sets the "other_config" column's value from the "Open_vSwitch" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
ovsrec_open_vswitch_set_other_config(const struct ovsrec_open_vswitch *row, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(other_config);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_OTHER_CONFIG],
                        &datum);
}


/* Sets the "ovs_version" column from the "Open_vSwitch" table in 'row' to
 * the 'ovs_version' set.
 *
 * If "ovs_version" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_open_vswitch_set_ovs_version(const struct ovsrec_open_vswitch *row, const char *ovs_version)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (ovs_version) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, ovs_version);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_OVS_VERSION], &datum);
}

/* Sets the "ssl" column from the "Open_vSwitch" table in 'row' to
 * the 'ssl' set.
 *
 * If "ssl" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_open_vswitch_set_ssl(const struct ovsrec_open_vswitch *row, const struct ovsrec_ssl *ssl)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (ssl) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = ssl->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_SSL], &datum);
}

/* Sets the "statistics" column's value from the "Open_vSwitch" table in 'row'
 * to 'statistics'.
 *
 * The caller retains ownership of 'statistics' and everything in it. */
void
ovsrec_open_vswitch_set_statistics(const struct ovsrec_open_vswitch *row, const struct smap *statistics)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (statistics) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(statistics);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, statistics) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_STATISTICS],
                        &datum);
}


/* Sets the "system_type" column from the "Open_vSwitch" table in 'row' to
 * the 'system_type' set.
 *
 * If "system_type" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_open_vswitch_set_system_type(const struct ovsrec_open_vswitch *row, const char *system_type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (system_type) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, system_type);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_SYSTEM_TYPE], &datum);
}

/* Sets the "system_version" column from the "Open_vSwitch" table in 'row' to
 * the 'system_version' set.
 *
 * If "system_version" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_open_vswitch_set_system_version(const struct ovsrec_open_vswitch *row, const char *system_version)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (system_version) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, system_version);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_COL_SYSTEM_VERSION], &datum);
}

struct ovsdb_idl_column ovsrec_open_vswitch_columns[OVSREC_OPEN_VSWITCH_N_COLUMNS];

static void
ovsrec_open_vswitch_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_open_vswitch_col_bridges. */
    c = &ovsrec_open_vswitch_col_bridges;
    c->name = "bridges";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Bridge";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_open_vswitch_parse_bridges;
    c->unparse = ovsrec_open_vswitch_unparse_bridges;

    /* Initialize ovsrec_open_vswitch_col_cur_cfg. */
    c = &ovsrec_open_vswitch_col_cur_cfg;
    c->name = "cur_cfg";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_open_vswitch_parse_cur_cfg;
    c->unparse = ovsrec_open_vswitch_unparse_cur_cfg;

    /* Initialize ovsrec_open_vswitch_col_datapath_types. */
    c = &ovsrec_open_vswitch_col_datapath_types;
    c->name = "datapath_types";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_open_vswitch_parse_datapath_types;
    c->unparse = ovsrec_open_vswitch_unparse_datapath_types;

    /* Initialize ovsrec_open_vswitch_col_db_version. */
    c = &ovsrec_open_vswitch_col_db_version;
    c->name = "db_version";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_open_vswitch_parse_db_version;
    c->unparse = ovsrec_open_vswitch_unparse_db_version;

    /* Initialize ovsrec_open_vswitch_col_external_ids. */
    c = &ovsrec_open_vswitch_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_open_vswitch_parse_external_ids;
    c->unparse = ovsrec_open_vswitch_unparse_external_ids;

    /* Initialize ovsrec_open_vswitch_col_iface_types. */
    c = &ovsrec_open_vswitch_col_iface_types;
    c->name = "iface_types";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_open_vswitch_parse_iface_types;
    c->unparse = ovsrec_open_vswitch_unparse_iface_types;

    /* Initialize ovsrec_open_vswitch_col_manager_options. */
    c = &ovsrec_open_vswitch_col_manager_options;
    c->name = "manager_options";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Manager";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_open_vswitch_parse_manager_options;
    c->unparse = ovsrec_open_vswitch_unparse_manager_options;

    /* Initialize ovsrec_open_vswitch_col_next_cfg. */
    c = &ovsrec_open_vswitch_col_next_cfg;
    c->name = "next_cfg";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_open_vswitch_parse_next_cfg;
    c->unparse = ovsrec_open_vswitch_unparse_next_cfg;

    /* Initialize ovsrec_open_vswitch_col_other_config. */
    c = &ovsrec_open_vswitch_col_other_config;
    c->name = "other_config";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_open_vswitch_parse_other_config;
    c->unparse = ovsrec_open_vswitch_unparse_other_config;

    /* Initialize ovsrec_open_vswitch_col_ovs_version. */
    c = &ovsrec_open_vswitch_col_ovs_version;
    c->name = "ovs_version";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_open_vswitch_parse_ovs_version;
    c->unparse = ovsrec_open_vswitch_unparse_ovs_version;

    /* Initialize ovsrec_open_vswitch_col_ssl. */
    c = &ovsrec_open_vswitch_col_ssl;
    c->name = "ssl";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "SSL";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_open_vswitch_parse_ssl;
    c->unparse = ovsrec_open_vswitch_unparse_ssl;

    /* Initialize ovsrec_open_vswitch_col_statistics. */
    c = &ovsrec_open_vswitch_col_statistics;
    c->name = "statistics";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_open_vswitch_parse_statistics;
    c->unparse = ovsrec_open_vswitch_unparse_statistics;

    /* Initialize ovsrec_open_vswitch_col_system_type. */
    c = &ovsrec_open_vswitch_col_system_type;
    c->name = "system_type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_open_vswitch_parse_system_type;
    c->unparse = ovsrec_open_vswitch_unparse_system_type;

    /* Initialize ovsrec_open_vswitch_col_system_version. */
    c = &ovsrec_open_vswitch_col_system_version;
    c->name = "system_version";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_open_vswitch_parse_system_version;
    c->unparse = ovsrec_open_vswitch_unparse_system_version;
}

/* Port table. */

static void
ovsrec_port_parse_bond_active_slave(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->bond_active_slave = datum->keys[0].string;
    } else {
        row->bond_active_slave = NULL;
    }
}

static void
ovsrec_port_parse_bond_downdelay(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->bond_downdelay = datum->keys[0].integer;
    } else {
        row->bond_downdelay = 0;
    }
}

static void
ovsrec_port_parse_bond_fake_iface(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->bond_fake_iface = datum->keys[0].boolean;
    } else {
        row->bond_fake_iface = false;
    }
}

static void
ovsrec_port_parse_bond_mode(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->bond_mode = datum->keys[0].string;
    } else {
        row->bond_mode = NULL;
    }
}

static void
ovsrec_port_parse_bond_updelay(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->bond_updelay = datum->keys[0].integer;
    } else {
        row->bond_updelay = 0;
    }
}

static void
ovsrec_port_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_port_parse_fake_bridge(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->fake_bridge = datum->keys[0].boolean;
    } else {
        row->fake_bridge = false;
    }
}

static void
ovsrec_port_parse_interfaces(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->interfaces = NULL;
    row->n_interfaces = 0;
    for (i = 0; i < datum->n; i++) {
        struct ovsrec_interface *keyRow = ovsrec_interface_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_INTERFACE], &datum->keys[i].uuid));
        if (keyRow) {
            if (!row->n_interfaces) {
                row->interfaces = xmalloc(datum->n * sizeof *row->interfaces);
            }
            row->interfaces[row->n_interfaces] = keyRow;
            row->n_interfaces++;
        }
    }
}

static void
ovsrec_port_parse_lacp(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->lacp = datum->keys[0].string;
    } else {
        row->lacp = NULL;
    }
}

static void
ovsrec_port_parse_mac(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->mac = datum->keys[0].string;
    } else {
        row->mac = NULL;
    }
}

static void
ovsrec_port_parse_name(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->name = datum->keys[0].string;
    } else {
        row->name = "";
    }
}

static void
ovsrec_port_parse_other_config(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->other_config);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->other_config,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_port_parse_qos(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->qos = ovsrec_qos_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_QOS], &datum->keys[0].uuid));
    } else {
        row->qos = NULL;
    }
}

static void
ovsrec_port_parse_rstp_statistics(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->key_rstp_statistics = NULL;
    row->value_rstp_statistics = NULL;
    row->n_rstp_statistics = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_rstp_statistics) {
            row->key_rstp_statistics = xmalloc(datum->n * sizeof *row->key_rstp_statistics);
            row->value_rstp_statistics = xmalloc(datum->n * sizeof *row->value_rstp_statistics);
        }
        row->key_rstp_statistics[row->n_rstp_statistics] = datum->keys[i].string;
        row->value_rstp_statistics[row->n_rstp_statistics] = datum->values[i].integer;
        row->n_rstp_statistics++;
    }
}

static void
ovsrec_port_parse_rstp_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->rstp_status);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->rstp_status,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_port_parse_statistics(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->key_statistics = NULL;
    row->value_statistics = NULL;
    row->n_statistics = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_statistics) {
            row->key_statistics = xmalloc(datum->n * sizeof *row->key_statistics);
            row->value_statistics = xmalloc(datum->n * sizeof *row->value_statistics);
        }
        row->key_statistics[row->n_statistics] = datum->keys[i].string;
        row->value_statistics[row->n_statistics] = datum->values[i].integer;
        row->n_statistics++;
    }
}

static void
ovsrec_port_parse_status(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->status);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->status,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_port_parse_tag(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->tag = NULL;
    row->n_tag = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_tag) {
            row->tag = xmalloc(n * sizeof *row->tag);
        }
        row->tag[row->n_tag] = datum->keys[i].integer;
        row->n_tag++;
    }
}

static void
ovsrec_port_parse_trunks(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);
    size_t n = MIN(4096, datum->n);
    size_t i;

    ovs_assert(inited);
    row->trunks = NULL;
    row->n_trunks = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_trunks) {
            row->trunks = xmalloc(n * sizeof *row->trunks);
        }
        row->trunks[row->n_trunks] = datum->keys[i].integer;
        row->n_trunks++;
    }
}

static void
ovsrec_port_parse_vlan_mode(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->vlan_mode = datum->keys[0].string;
    } else {
        row->vlan_mode = NULL;
    }
}

static void
ovsrec_port_unparse_bond_active_slave(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_port_unparse_bond_downdelay(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_port_unparse_bond_fake_iface(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_port_unparse_bond_mode(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_port_unparse_bond_updelay(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_port_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_port_unparse_fake_bridge(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_port_unparse_interfaces(struct ovsdb_idl_row *row_)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    free(row->interfaces);
}

static void
ovsrec_port_unparse_lacp(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_port_unparse_mac(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_port_unparse_name(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_port_unparse_other_config(struct ovsdb_idl_row *row_)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->other_config);
}

static void
ovsrec_port_unparse_qos(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_port_unparse_rstp_statistics(struct ovsdb_idl_row *row_)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    free(row->key_rstp_statistics);
    free(row->value_rstp_statistics);
}

static void
ovsrec_port_unparse_rstp_status(struct ovsdb_idl_row *row_)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->rstp_status);
}

static void
ovsrec_port_unparse_statistics(struct ovsdb_idl_row *row_)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    free(row->key_statistics);
    free(row->value_statistics);
}

static void
ovsrec_port_unparse_status(struct ovsdb_idl_row *row_)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->status);
}

static void
ovsrec_port_unparse_tag(struct ovsdb_idl_row *row_)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    free(row->tag);
}

static void
ovsrec_port_unparse_trunks(struct ovsdb_idl_row *row_)
{
    struct ovsrec_port *row = ovsrec_port_cast(row_);

    ovs_assert(inited);
    free(row->trunks);
}

static void
ovsrec_port_unparse_vlan_mode(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_port_init__(struct ovsdb_idl_row *row)
{
    ovsrec_port_init(ovsrec_port_cast(row));
}

/* Clears the contents of 'row' in table "Port". */
void
ovsrec_port_init(struct ovsrec_port *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->other_config);
    smap_init(&row->rstp_status);
    smap_init(&row->status);
}

/* Searches table "Port" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_port *
ovsrec_port_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_port_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_PORT], uuid));
}

/* Returns a row in table "Port" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_port *
ovsrec_port_first(const struct ovsdb_idl *idl)
{
    return ovsrec_port_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_PORT]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_port *
ovsrec_port_next(const struct ovsrec_port *row)
{
    return ovsrec_port_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "Port".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_delete(const struct ovsrec_port *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Port" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_port *
ovsrec_port_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_port_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_PORT], NULL));
}

/* Causes the original contents of column "bond_active_slave" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bond_active_slave" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bond_active_slave" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bond_active_slave" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "bond_active_slave" has already been modified (with
 *     ovsrec_port_set_bond_active_slave()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_bond_active_slave() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_bond_active_slave(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_BOND_ACTIVE_SLAVE]);
}

/* Causes the original contents of column "bond_downdelay" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bond_downdelay" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bond_downdelay" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bond_downdelay" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "bond_downdelay" has already been modified (with
 *     ovsrec_port_set_bond_downdelay()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_bond_downdelay() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_bond_downdelay(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_BOND_DOWNDELAY]);
}

/* Causes the original contents of column "bond_fake_iface" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bond_fake_iface" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bond_fake_iface" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bond_fake_iface" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "bond_fake_iface" has already been modified (with
 *     ovsrec_port_set_bond_fake_iface()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_bond_fake_iface() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_bond_fake_iface(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_BOND_FAKE_IFACE]);
}

/* Causes the original contents of column "bond_mode" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bond_mode" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bond_mode" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bond_mode" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "bond_mode" has already been modified (with
 *     ovsrec_port_set_bond_mode()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_bond_mode() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_bond_mode(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_BOND_MODE]);
}

/* Causes the original contents of column "bond_updelay" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bond_updelay" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bond_updelay" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bond_updelay" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "bond_updelay" has already been modified (with
 *     ovsrec_port_set_bond_updelay()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_bond_updelay() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_bond_updelay(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_BOND_UPDELAY]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_port_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_external_ids(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "fake_bridge" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "fake_bridge" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "fake_bridge" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "fake_bridge" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "fake_bridge" has already been modified (with
 *     ovsrec_port_set_fake_bridge()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_fake_bridge() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_fake_bridge(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_FAKE_BRIDGE]);
}

/* Causes the original contents of column "interfaces" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "interfaces" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "interfaces" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "interfaces" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "interfaces" has already been modified (with
 *     ovsrec_port_set_interfaces()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_interfaces() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_interfaces(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_INTERFACES]);
}

/* Causes the original contents of column "lacp" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "lacp" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "lacp" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "lacp" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "lacp" has already been modified (with
 *     ovsrec_port_set_lacp()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_lacp() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_lacp(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_LACP]);
}

/* Causes the original contents of column "mac" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "mac" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "mac" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "mac" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "mac" has already been modified (with
 *     ovsrec_port_set_mac()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_mac() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_mac(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_MAC]);
}

/* Causes the original contents of column "name" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "name" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "name" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "name" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "name" has already been modified (with
 *     ovsrec_port_set_name()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_name() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_name(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_NAME]);
}

/* Causes the original contents of column "other_config" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "other_config" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "other_config" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "other_config" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "other_config" has already been modified (with
 *     ovsrec_port_set_other_config()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_other_config() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_other_config(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_OTHER_CONFIG]);
}

/* Causes the original contents of column "qos" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "qos" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "qos" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "qos" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "qos" has already been modified (with
 *     ovsrec_port_set_qos()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_qos() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_qos(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_QOS]);
}

/* Causes the original contents of column "rstp_statistics" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "rstp_statistics" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "rstp_statistics" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "rstp_statistics" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "rstp_statistics" has already been modified (with
 *     ovsrec_port_set_rstp_statistics()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_rstp_statistics() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_rstp_statistics(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_RSTP_STATISTICS]);
}

/* Causes the original contents of column "rstp_status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "rstp_status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "rstp_status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "rstp_status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "rstp_status" has already been modified (with
 *     ovsrec_port_set_rstp_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_rstp_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_rstp_status(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_RSTP_STATUS]);
}

/* Causes the original contents of column "statistics" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "statistics" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "statistics" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "statistics" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "statistics" has already been modified (with
 *     ovsrec_port_set_statistics()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_statistics() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_statistics(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_STATISTICS]);
}

/* Causes the original contents of column "status" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "status" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "status" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "status" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "status" has already been modified (with
 *     ovsrec_port_set_status()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_status() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_status(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_STATUS]);
}

/* Causes the original contents of column "tag" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "tag" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "tag" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "tag" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "tag" has already been modified (with
 *     ovsrec_port_set_tag()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_tag() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_tag(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_TAG]);
}

/* Causes the original contents of column "trunks" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "trunks" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "trunks" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "trunks" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "trunks" has already been modified (with
 *     ovsrec_port_set_trunks()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_trunks() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_trunks(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_TRUNKS]);
}

/* Causes the original contents of column "vlan_mode" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "vlan_mode" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "vlan_mode" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "vlan_mode" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_port_insert()).
 *
 *   - If "vlan_mode" has already been modified (with
 *     ovsrec_port_set_vlan_mode()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_port_set_vlan_mode() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_port_verify_vlan_mode(const struct ovsrec_port *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_VLAN_MODE]);
}

/* Returns the "bond_active_slave" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes bond_active_slave's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bond_active_slave" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_bond_active_slave(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_bond_active_slave);
}

/* Returns the "bond_downdelay" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes bond_downdelay's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bond_downdelay" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_bond_downdelay(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_bond_downdelay);
}

/* Returns the "bond_fake_iface" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes bond_fake_iface's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bond_fake_iface" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_bond_fake_iface(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_bond_fake_iface);
}

/* Returns the "bond_mode" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes bond_mode's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bond_mode" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_bond_mode(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_bond_mode);
}

/* Returns the "bond_updelay" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes bond_updelay's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bond_updelay" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_bond_updelay(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_bond_updelay);
}

/* Returns the "external_ids" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_external_ids(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_external_ids);
}

/* Returns the "fake_bridge" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes fake_bridge's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "fake_bridge" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_fake_bridge(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_fake_bridge);
}

/* Returns the "interfaces" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes interfaces's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "interfaces" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_interfaces(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_interfaces);
}

/* Returns the "lacp" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes lacp's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "lacp" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_lacp(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_lacp);
}

/* Returns the "mac" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes mac's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "mac" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_mac(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_mac);
}

/* Returns the "name" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes name's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "name" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_name(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_name);
}

/* Returns the "other_config" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes other_config's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "other_config" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_other_config(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_other_config);
}

/* Returns the "qos" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes qos's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "qos" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_qos(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_qos);
}

/* Returns the "rstp_statistics" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes rstp_statistics's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "rstp_statistics" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_rstp_statistics(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_rstp_statistics);
}

/* Returns the "rstp_status" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes rstp_status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "rstp_status" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_rstp_status(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_rstp_status);
}

/* Returns the "statistics" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes statistics's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "statistics" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_statistics(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_statistics);
}

/* Returns the "status" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes status's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "status" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_status(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_status);
}

/* Returns the "tag" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes tag's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "tag" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_tag(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_tag);
}

/* Returns the "trunks" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes trunks's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "trunks" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_trunks(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_trunks);
}

/* Returns the "vlan_mode" column's value from the "Port" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes vlan_mode's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "vlan_mode" member in ovsrec_port. */
const struct ovsdb_datum *
ovsrec_port_get_vlan_mode(const struct ovsrec_port *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_port_col_vlan_mode);
}

/* Sets the "bond_active_slave" column from the "Port" table in 'row' to
 * the 'bond_active_slave' set.
 *
 * If "bond_active_slave" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_bond_active_slave(const struct ovsrec_port *row, const char *bond_active_slave)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (bond_active_slave) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, bond_active_slave);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_BOND_ACTIVE_SLAVE], &datum);
}

/* Sets the "bond_downdelay" column from the "Port" table in 'row' to
 * 'bond_downdelay'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_bond_downdelay(const struct ovsrec_port *row, int64_t bond_downdelay)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = bond_downdelay;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_BOND_DOWNDELAY], &datum);
}

/* Sets the "bond_fake_iface" column from the "Port" table in 'row' to
 * 'bond_fake_iface'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_bond_fake_iface(const struct ovsrec_port *row, bool bond_fake_iface)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = bond_fake_iface;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_BOND_FAKE_IFACE], &datum);
}

/* Sets the "bond_mode" column from the "Port" table in 'row' to
 * the 'bond_mode' set.
 *
 * If "bond_mode" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: one of "active-backup", "balance-tcp", or "balance-slb"
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_bond_mode(const struct ovsrec_port *row, const char *bond_mode)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (bond_mode) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, bond_mode);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_BOND_MODE], &datum);
}

/* Sets the "bond_updelay" column from the "Port" table in 'row' to
 * 'bond_updelay'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_bond_updelay(const struct ovsrec_port *row, int64_t bond_updelay)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.integer = bond_updelay;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_BOND_UPDELAY], &datum);
}

/* Sets the "external_ids" column's value from the "Port" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_port_set_external_ids(const struct ovsrec_port *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_port_columns[OVSREC_PORT_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "fake_bridge" column from the "Port" table in 'row' to
 * 'fake_bridge'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_fake_bridge(const struct ovsrec_port *row, bool fake_bridge)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = fake_bridge;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_FAKE_BRIDGE], &datum);
}

/* Sets the "interfaces" column from the "Port" table in 'row' to
 * the 'interfaces' set with 'n_interfaces' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_interfaces(const struct ovsrec_port *row, struct ovsrec_interface **interfaces, size_t n_interfaces)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_interfaces;
    datum.keys = n_interfaces ? xmalloc(n_interfaces * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_interfaces; i++) {
        datum.keys[i].uuid = interfaces[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_UUID, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_INTERFACES], &datum);
}

/* Sets the "lacp" column from the "Port" table in 'row' to
 * the 'lacp' set.
 *
 * If "lacp" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: one of "active", "passive", or "off"
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_lacp(const struct ovsrec_port *row, const char *lacp)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (lacp) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, lacp);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_LACP], &datum);
}

/* Sets the "mac" column from the "Port" table in 'row' to
 * the 'mac' set.
 *
 * If "mac" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_mac(const struct ovsrec_port *row, const char *mac)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (mac) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, mac);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_MAC], &datum);
}

/* Sets the "name" column from the "Port" table in 'row' to
 * 'name'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_name(const struct ovsrec_port *row, const char *name)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, name);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_NAME], &datum);
}

/* Sets the "other_config" column's value from the "Port" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
ovsrec_port_set_other_config(const struct ovsrec_port *row, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(other_config);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_port_columns[OVSREC_PORT_COL_OTHER_CONFIG],
                        &datum);
}


/* Sets the "qos" column from the "Port" table in 'row' to
 * the 'qos' set.
 *
 * If "qos" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_qos(const struct ovsrec_port *row, const struct ovsrec_qos *qos)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (qos) {
        datum.n = 1;
        datum.keys = &key;
        key.uuid = qos->header_.uuid;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_QOS], &datum);
}

/* Sets the "rstp_statistics" column from the "Port" table in 'row' to
 * the map with keys 'key_rstp_statistics' and values 'value_rstp_statistics'
 * with 'n_rstp_statistics' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_rstp_statistics(const struct ovsrec_port *row, const char **key_rstp_statistics, const int64_t *value_rstp_statistics, size_t n_rstp_statistics)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_rstp_statistics;
    datum.keys = n_rstp_statistics ? xmalloc(n_rstp_statistics * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_rstp_statistics * sizeof *datum.values);
    for (i = 0; i < n_rstp_statistics; i++) {
        datum.keys[i].string = xstrdup(key_rstp_statistics[i]);
        datum.values[i].integer = value_rstp_statistics[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_INTEGER);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_RSTP_STATISTICS], &datum);
}

/* Sets the "rstp_status" column's value from the "Port" table in 'row'
 * to 'rstp_status'.
 *
 * The caller retains ownership of 'rstp_status' and everything in it. */
void
ovsrec_port_set_rstp_status(const struct ovsrec_port *row, const struct smap *rstp_status)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (rstp_status) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(rstp_status);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, rstp_status) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_port_columns[OVSREC_PORT_COL_RSTP_STATUS],
                        &datum);
}


/* Sets the "statistics" column from the "Port" table in 'row' to
 * the map with keys 'key_statistics' and values 'value_statistics'
 * with 'n_statistics' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_statistics(const struct ovsrec_port *row, const char **key_statistics, const int64_t *value_statistics, size_t n_statistics)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_statistics;
    datum.keys = n_statistics ? xmalloc(n_statistics * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_statistics * sizeof *datum.values);
    for (i = 0; i < n_statistics; i++) {
        datum.keys[i].string = xstrdup(key_statistics[i]);
        datum.values[i].integer = value_statistics[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_INTEGER);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_STATISTICS], &datum);
}

/* Sets the "status" column's value from the "Port" table in 'row'
 * to 'status'.
 *
 * The caller retains ownership of 'status' and everything in it. */
void
ovsrec_port_set_status(const struct ovsrec_port *row, const struct smap *status)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (status) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(status);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, status) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_port_columns[OVSREC_PORT_COL_STATUS],
                        &datum);
}


/* Sets the "tag" column from the "Port" table in 'row' to
 * the 'tag' set with 'n_tag' entries.
 *
 * 'n_tag' may be 0 or 1; if it is 0, then 'tag'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_tag(const struct ovsrec_port *row, const int64_t *tag, size_t n_tag)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_tag) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *tag;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_TAG], &datum);
}

/* Sets the "trunks" column from the "Port" table in 'row' to
 * the 'trunks' set with 'n_trunks' entries.
 *
 * Argument constraints: in range 0 to 4,095
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_trunks(const struct ovsrec_port *row, const int64_t *trunks, size_t n_trunks)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_trunks;
    datum.keys = n_trunks ? xmalloc(n_trunks * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_trunks; i++) {
        datum.keys[i].integer = trunks[i];
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_TRUNKS], &datum);
}

/* Sets the "vlan_mode" column from the "Port" table in 'row' to
 * the 'vlan_mode' set.
 *
 * If "vlan_mode" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * Argument constraints: one of "access", "native-tagged", "native-untagged", or "trunk"
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_port_set_vlan_mode(const struct ovsrec_port *row, const char *vlan_mode)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (vlan_mode) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, vlan_mode);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_port_columns[OVSREC_PORT_COL_VLAN_MODE], &datum);
}

struct ovsdb_idl_column ovsrec_port_columns[OVSREC_PORT_N_COLUMNS];

static void
ovsrec_port_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_port_col_bond_active_slave. */
    c = &ovsrec_port_col_bond_active_slave;
    c->name = "bond_active_slave";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_port_parse_bond_active_slave;
    c->unparse = ovsrec_port_unparse_bond_active_slave;

    /* Initialize ovsrec_port_col_bond_downdelay. */
    c = &ovsrec_port_col_bond_downdelay;
    c->name = "bond_downdelay";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_port_parse_bond_downdelay;
    c->unparse = ovsrec_port_unparse_bond_downdelay;

    /* Initialize ovsrec_port_col_bond_fake_iface. */
    c = &ovsrec_port_col_bond_fake_iface;
    c->name = "bond_fake_iface";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_port_parse_bond_fake_iface;
    c->unparse = ovsrec_port_unparse_bond_fake_iface;

    /* Initialize ovsrec_port_col_bond_mode. */
    c = &ovsrec_port_col_bond_mode;
    c->name = "bond_mode";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 3;
    c->type.key.enum_->keys = xmalloc(3 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("active-backup");
    c->type.key.enum_->keys[1].string = xstrdup("balance-slb");
    c->type.key.enum_->keys[2].string = xstrdup("balance-tcp");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_port_parse_bond_mode;
    c->unparse = ovsrec_port_unparse_bond_mode;

    /* Initialize ovsrec_port_col_bond_updelay. */
    c = &ovsrec_port_col_bond_updelay;
    c->name = "bond_updelay";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_port_parse_bond_updelay;
    c->unparse = ovsrec_port_unparse_bond_updelay;

    /* Initialize ovsrec_port_col_external_ids. */
    c = &ovsrec_port_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_port_parse_external_ids;
    c->unparse = ovsrec_port_unparse_external_ids;

    /* Initialize ovsrec_port_col_fake_bridge. */
    c = &ovsrec_port_col_fake_bridge;
    c->name = "fake_bridge";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_port_parse_fake_bridge;
    c->unparse = ovsrec_port_unparse_fake_bridge;

    /* Initialize ovsrec_port_col_interfaces. */
    c = &ovsrec_port_col_interfaces;
    c->name = "interfaces";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "Interface";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_port_parse_interfaces;
    c->unparse = ovsrec_port_unparse_interfaces;

    /* Initialize ovsrec_port_col_lacp. */
    c = &ovsrec_port_col_lacp;
    c->name = "lacp";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 3;
    c->type.key.enum_->keys = xmalloc(3 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("active");
    c->type.key.enum_->keys[1].string = xstrdup("off");
    c->type.key.enum_->keys[2].string = xstrdup("passive");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_port_parse_lacp;
    c->unparse = ovsrec_port_unparse_lacp;

    /* Initialize ovsrec_port_col_mac. */
    c = &ovsrec_port_col_mac;
    c->name = "mac";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_port_parse_mac;
    c->unparse = ovsrec_port_unparse_mac;

    /* Initialize ovsrec_port_col_name. */
    c = &ovsrec_port_col_name;
    c->name = "name";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = false;
    c->parse = ovsrec_port_parse_name;
    c->unparse = ovsrec_port_unparse_name;

    /* Initialize ovsrec_port_col_other_config. */
    c = &ovsrec_port_col_other_config;
    c->name = "other_config";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_port_parse_other_config;
    c->unparse = ovsrec_port_unparse_other_config;

    /* Initialize ovsrec_port_col_qos. */
    c = &ovsrec_port_col_qos;
    c->name = "qos";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_UUID);
    c->type.key.u.uuid.refTableName = "QoS";
    c->type.key.u.uuid.refType = OVSDB_REF_STRONG;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_port_parse_qos;
    c->unparse = ovsrec_port_unparse_qos;

    /* Initialize ovsrec_port_col_rstp_statistics. */
    c = &ovsrec_port_col_rstp_statistics;
    c->name = "rstp_statistics";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_INTEGER);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_port_parse_rstp_statistics;
    c->unparse = ovsrec_port_unparse_rstp_statistics;

    /* Initialize ovsrec_port_col_rstp_status. */
    c = &ovsrec_port_col_rstp_status;
    c->name = "rstp_status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_port_parse_rstp_status;
    c->unparse = ovsrec_port_unparse_rstp_status;

    /* Initialize ovsrec_port_col_statistics. */
    c = &ovsrec_port_col_statistics;
    c->name = "statistics";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_INTEGER);
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_port_parse_statistics;
    c->unparse = ovsrec_port_unparse_statistics;

    /* Initialize ovsrec_port_col_status. */
    c = &ovsrec_port_col_status;
    c->name = "status";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_port_parse_status;
    c->unparse = ovsrec_port_unparse_status;

    /* Initialize ovsrec_port_col_tag. */
    c = &ovsrec_port_col_tag;
    c->name = "tag";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4095);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_port_parse_tag;
    c->unparse = ovsrec_port_unparse_tag;

    /* Initialize ovsrec_port_col_trunks. */
    c = &ovsrec_port_col_trunks;
    c->name = "trunks";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4095);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 4096;
    c->mutable = true;
    c->parse = ovsrec_port_parse_trunks;
    c->unparse = ovsrec_port_unparse_trunks;

    /* Initialize ovsrec_port_col_vlan_mode. */
    c = &ovsrec_port_col_vlan_mode;
    c->name = "vlan_mode";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.enum_ = xmalloc(sizeof *c->type.key.enum_);
    c->type.key.enum_->n = 4;
    c->type.key.enum_->keys = xmalloc(4 * sizeof *c->type.key.enum_->keys);
    c->type.key.enum_->keys[0].string = xstrdup("access");
    c->type.key.enum_->keys[1].string = xstrdup("native-tagged");
    c->type.key.enum_->keys[2].string = xstrdup("native-untagged");
    c->type.key.enum_->keys[3].string = xstrdup("trunk");
    c->type.key.enum_->values = NULL;
    ovsdb_datum_sort_assert(c->type.key.enum_, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_port_parse_vlan_mode;
    c->unparse = ovsrec_port_unparse_vlan_mode;
}

/* QoS table. */

static void
ovsrec_qos_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_qos *row = ovsrec_qos_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_qos_parse_other_config(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_qos *row = ovsrec_qos_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->other_config);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->other_config,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_qos_parse_queues(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_qos *row = ovsrec_qos_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->key_queues = NULL;
    row->value_queues = NULL;
    row->n_queues = 0;
    for (i = 0; i < datum->n; i++) {
        struct ovsrec_queue *valueRow = ovsrec_queue_cast(ovsdb_idl_get_row_arc(row_, &ovsrec_table_classes[OVSREC_TABLE_QUEUE], &datum->values[i].uuid));
        if (valueRow) {
            if (!row->n_queues) {
                row->key_queues = xmalloc(datum->n * sizeof *row->key_queues);
                row->value_queues = xmalloc(datum->n * sizeof *row->value_queues);
            }
            row->key_queues[row->n_queues] = datum->keys[i].integer;
            row->value_queues[row->n_queues] = valueRow;
            row->n_queues++;
        }
    }
}

static void
ovsrec_qos_parse_type(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_qos *row = ovsrec_qos_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->type = datum->keys[0].string;
    } else {
        row->type = "";
    }
}

static void
ovsrec_qos_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_qos *row = ovsrec_qos_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_qos_unparse_other_config(struct ovsdb_idl_row *row_)
{
    struct ovsrec_qos *row = ovsrec_qos_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->other_config);
}

static void
ovsrec_qos_unparse_queues(struct ovsdb_idl_row *row_)
{
    struct ovsrec_qos *row = ovsrec_qos_cast(row_);

    ovs_assert(inited);
    free(row->key_queues);
    free(row->value_queues);
}

static void
ovsrec_qos_unparse_type(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_qos_init__(struct ovsdb_idl_row *row)
{
    ovsrec_qos_init(ovsrec_qos_cast(row));
}

/* Clears the contents of 'row' in table "QoS". */
void
ovsrec_qos_init(struct ovsrec_qos *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->other_config);
}

/* Searches table "QoS" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_qos *
ovsrec_qos_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_qos_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_QOS], uuid));
}

/* Returns a row in table "QoS" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_qos *
ovsrec_qos_first(const struct ovsdb_idl *idl)
{
    return ovsrec_qos_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_QOS]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_qos *
ovsrec_qos_next(const struct ovsrec_qos *row)
{
    return ovsrec_qos_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "QoS".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_qos_delete(const struct ovsrec_qos *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "QoS" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_qos *
ovsrec_qos_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_qos_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_QOS], NULL));
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_qos_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_qos_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_qos_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_qos_verify_external_ids(const struct ovsrec_qos *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_qos_columns[OVSREC_QOS_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "other_config" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "other_config" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "other_config" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "other_config" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_qos_insert()).
 *
 *   - If "other_config" has already been modified (with
 *     ovsrec_qos_set_other_config()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_qos_set_other_config() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_qos_verify_other_config(const struct ovsrec_qos *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_qos_columns[OVSREC_QOS_COL_OTHER_CONFIG]);
}

/* Causes the original contents of column "queues" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "queues" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "queues" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "queues" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_qos_insert()).
 *
 *   - If "queues" has already been modified (with
 *     ovsrec_qos_set_queues()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_qos_set_queues() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_qos_verify_queues(const struct ovsrec_qos *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_qos_columns[OVSREC_QOS_COL_QUEUES]);
}

/* Causes the original contents of column "type" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "type" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "type" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "type" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_qos_insert()).
 *
 *   - If "type" has already been modified (with
 *     ovsrec_qos_set_type()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_qos_set_type() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_qos_verify_type(const struct ovsrec_qos *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_qos_columns[OVSREC_QOS_COL_TYPE]);
}

/* Returns the "external_ids" column's value from the "QoS" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_qos. */
const struct ovsdb_datum *
ovsrec_qos_get_external_ids(const struct ovsrec_qos *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_qos_col_external_ids);
}

/* Returns the "other_config" column's value from the "QoS" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes other_config's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "other_config" member in ovsrec_qos. */
const struct ovsdb_datum *
ovsrec_qos_get_other_config(const struct ovsrec_qos *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_qos_col_other_config);
}

/* Returns the "queues" column's value from the "QoS" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * 'value_type' must be OVSDB_TYPE_UUID.
 * (This helps to avoid silent bugs if someone changes queues's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "queues" member in ovsrec_qos. */
const struct ovsdb_datum *
ovsrec_qos_get_queues(const struct ovsrec_qos *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    ovs_assert(value_type == OVSDB_TYPE_UUID);
    return ovsdb_idl_read(&row->header_, &ovsrec_qos_col_queues);
}

/* Returns the "type" column's value from the "QoS" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes type's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "type" member in ovsrec_qos. */
const struct ovsdb_datum *
ovsrec_qos_get_type(const struct ovsrec_qos *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_qos_col_type);
}

/* Sets the "external_ids" column's value from the "QoS" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_qos_set_external_ids(const struct ovsrec_qos *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_qos_columns[OVSREC_QOS_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "other_config" column's value from the "QoS" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
ovsrec_qos_set_other_config(const struct ovsrec_qos *row, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(other_config);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_qos_columns[OVSREC_QOS_COL_OTHER_CONFIG],
                        &datum);
}


/* Sets the "queues" column from the "QoS" table in 'row' to
 * the map with keys 'key_queues' and values 'value_queues'
 * with 'n_queues' entries.
 *
 * Argument constraints: key in range 0 to 4,294,967,295
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_qos_set_queues(const struct ovsrec_qos *row, const int64_t *key_queues, struct ovsrec_queue **value_queues, size_t n_queues)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_queues;
    datum.keys = n_queues ? xmalloc(n_queues * sizeof *datum.keys) : NULL;
    datum.values = xmalloc(n_queues * sizeof *datum.values);
    for (i = 0; i < n_queues; i++) {
        datum.keys[i].integer = key_queues[i];
        datum.values[i].uuid = value_queues[i]->header_.uuid;
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_INTEGER, OVSDB_TYPE_UUID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_qos_columns[OVSREC_QOS_COL_QUEUES], &datum);
}

/* Sets the "type" column from the "QoS" table in 'row' to
 * 'type'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_qos_set_type(const struct ovsrec_qos *row, const char *type)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, type);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_qos_columns[OVSREC_QOS_COL_TYPE], &datum);
}

struct ovsdb_idl_column ovsrec_qos_columns[OVSREC_QOS_N_COLUMNS];

static void
ovsrec_qos_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_qos_col_external_ids. */
    c = &ovsrec_qos_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_qos_parse_external_ids;
    c->unparse = ovsrec_qos_unparse_external_ids;

    /* Initialize ovsrec_qos_col_other_config. */
    c = &ovsrec_qos_col_other_config;
    c->name = "other_config";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_qos_parse_other_config;
    c->unparse = ovsrec_qos_unparse_other_config;

    /* Initialize ovsrec_qos_col_queues. */
    c = &ovsrec_qos_col_queues;
    c->name = "queues";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(4294967295);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_UUID);
    c->type.value.u.uuid.refTableName = "Queue";
    c->type.value.u.uuid.refType = OVSDB_REF_STRONG;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_qos_parse_queues;
    c->unparse = ovsrec_qos_unparse_queues;

    /* Initialize ovsrec_qos_col_type. */
    c = &ovsrec_qos_col_type;
    c->name = "type";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_qos_parse_type;
    c->unparse = ovsrec_qos_unparse_type;
}

/* Queue table. */

static void
ovsrec_queue_parse_dscp(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_queue *row = ovsrec_queue_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->dscp = NULL;
    row->n_dscp = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_dscp) {
            row->dscp = xmalloc(n * sizeof *row->dscp);
        }
        row->dscp[row->n_dscp] = datum->keys[i].integer;
        row->n_dscp++;
    }
}

static void
ovsrec_queue_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_queue *row = ovsrec_queue_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_queue_parse_other_config(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_queue *row = ovsrec_queue_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->other_config);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->other_config,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_queue_unparse_dscp(struct ovsdb_idl_row *row_)
{
    struct ovsrec_queue *row = ovsrec_queue_cast(row_);

    ovs_assert(inited);
    free(row->dscp);
}

static void
ovsrec_queue_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_queue *row = ovsrec_queue_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_queue_unparse_other_config(struct ovsdb_idl_row *row_)
{
    struct ovsrec_queue *row = ovsrec_queue_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->other_config);
}

static void
ovsrec_queue_init__(struct ovsdb_idl_row *row)
{
    ovsrec_queue_init(ovsrec_queue_cast(row));
}

/* Clears the contents of 'row' in table "Queue". */
void
ovsrec_queue_init(struct ovsrec_queue *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
    smap_init(&row->other_config);
}

/* Searches table "Queue" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_queue *
ovsrec_queue_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_queue_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_QUEUE], uuid));
}

/* Returns a row in table "Queue" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_queue *
ovsrec_queue_first(const struct ovsdb_idl *idl)
{
    return ovsrec_queue_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_QUEUE]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_queue *
ovsrec_queue_next(const struct ovsrec_queue *row)
{
    return ovsrec_queue_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "Queue".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_queue_delete(const struct ovsrec_queue *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "Queue" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_queue *
ovsrec_queue_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_queue_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_QUEUE], NULL));
}

/* Causes the original contents of column "dscp" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "dscp" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "dscp" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "dscp" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_queue_insert()).
 *
 *   - If "dscp" has already been modified (with
 *     ovsrec_queue_set_dscp()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_queue_set_dscp() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_queue_verify_dscp(const struct ovsrec_queue *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_queue_columns[OVSREC_QUEUE_COL_DSCP]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_queue_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_queue_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_queue_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_queue_verify_external_ids(const struct ovsrec_queue *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_queue_columns[OVSREC_QUEUE_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "other_config" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "other_config" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "other_config" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "other_config" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_queue_insert()).
 *
 *   - If "other_config" has already been modified (with
 *     ovsrec_queue_set_other_config()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_queue_set_other_config() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_queue_verify_other_config(const struct ovsrec_queue *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_queue_columns[OVSREC_QUEUE_COL_OTHER_CONFIG]);
}

/* Returns the "dscp" column's value from the "Queue" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes dscp's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "dscp" member in ovsrec_queue. */
const struct ovsdb_datum *
ovsrec_queue_get_dscp(const struct ovsrec_queue *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_queue_col_dscp);
}

/* Returns the "external_ids" column's value from the "Queue" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_queue. */
const struct ovsdb_datum *
ovsrec_queue_get_external_ids(const struct ovsrec_queue *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_queue_col_external_ids);
}

/* Returns the "other_config" column's value from the "Queue" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes other_config's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "other_config" member in ovsrec_queue. */
const struct ovsdb_datum *
ovsrec_queue_get_other_config(const struct ovsrec_queue *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_queue_col_other_config);
}

/* Sets the "dscp" column from the "Queue" table in 'row' to
 * the 'dscp' set with 'n_dscp' entries.
 *
 * 'n_dscp' may be 0 or 1; if it is 0, then 'dscp'
 * may be NULL.
 *
 * Argument constraints: in range 0 to 63
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_queue_set_dscp(const struct ovsrec_queue *row, const int64_t *dscp, size_t n_dscp)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_dscp) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *dscp;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_queue_columns[OVSREC_QUEUE_COL_DSCP], &datum);
}

/* Sets the "external_ids" column's value from the "Queue" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_queue_set_external_ids(const struct ovsrec_queue *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_queue_columns[OVSREC_QUEUE_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "other_config" column's value from the "Queue" table in 'row'
 * to 'other_config'.
 *
 * The caller retains ownership of 'other_config' and everything in it. */
void
ovsrec_queue_set_other_config(const struct ovsrec_queue *row, const struct smap *other_config)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (other_config) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(other_config);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, other_config) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_queue_columns[OVSREC_QUEUE_COL_OTHER_CONFIG],
                        &datum);
}


struct ovsdb_idl_column ovsrec_queue_columns[OVSREC_QUEUE_N_COLUMNS];

static void
ovsrec_queue_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_queue_col_dscp. */
    c = &ovsrec_queue_col_dscp;
    c->name = "dscp";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    c->type.key.u.integer.min = INT64_C(0);
    c->type.key.u.integer.max = INT64_C(63);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_queue_parse_dscp;
    c->unparse = ovsrec_queue_unparse_dscp;

    /* Initialize ovsrec_queue_col_external_ids. */
    c = &ovsrec_queue_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_queue_parse_external_ids;
    c->unparse = ovsrec_queue_unparse_external_ids;

    /* Initialize ovsrec_queue_col_other_config. */
    c = &ovsrec_queue_col_other_config;
    c->name = "other_config";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_queue_parse_other_config;
    c->unparse = ovsrec_queue_unparse_other_config;
}

/* SSL table. */

static void
ovsrec_ssl_parse_bootstrap_ca_cert(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_ssl *row = ovsrec_ssl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->bootstrap_ca_cert = datum->keys[0].boolean;
    } else {
        row->bootstrap_ca_cert = false;
    }
}

static void
ovsrec_ssl_parse_ca_cert(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_ssl *row = ovsrec_ssl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->ca_cert = datum->keys[0].string;
    } else {
        row->ca_cert = "";
    }
}

static void
ovsrec_ssl_parse_certificate(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_ssl *row = ovsrec_ssl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->certificate = datum->keys[0].string;
    } else {
        row->certificate = "";
    }
}

static void
ovsrec_ssl_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_ssl *row = ovsrec_ssl_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_ssl_parse_private_key(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_ssl *row = ovsrec_ssl_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->private_key = datum->keys[0].string;
    } else {
        row->private_key = "";
    }
}

static void
ovsrec_ssl_unparse_bootstrap_ca_cert(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_ssl_unparse_ca_cert(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_ssl_unparse_certificate(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_ssl_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_ssl *row = ovsrec_ssl_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_ssl_unparse_private_key(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_ssl_init__(struct ovsdb_idl_row *row)
{
    ovsrec_ssl_init(ovsrec_ssl_cast(row));
}

/* Clears the contents of 'row' in table "SSL". */
void
ovsrec_ssl_init(struct ovsrec_ssl *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "SSL" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_ssl *
ovsrec_ssl_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_ssl_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_SSL], uuid));
}

/* Returns a row in table "SSL" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_ssl *
ovsrec_ssl_first(const struct ovsdb_idl *idl)
{
    return ovsrec_ssl_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_SSL]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_ssl *
ovsrec_ssl_next(const struct ovsrec_ssl *row)
{
    return ovsrec_ssl_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "SSL".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ssl_delete(const struct ovsrec_ssl *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "SSL" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_ssl *
ovsrec_ssl_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_ssl_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_SSL], NULL));
}

/* Causes the original contents of column "bootstrap_ca_cert" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "bootstrap_ca_cert" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "bootstrap_ca_cert" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "bootstrap_ca_cert" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_ssl_insert()).
 *
 *   - If "bootstrap_ca_cert" has already been modified (with
 *     ovsrec_ssl_set_bootstrap_ca_cert()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_ssl_set_bootstrap_ca_cert() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ssl_verify_bootstrap_ca_cert(const struct ovsrec_ssl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_ssl_columns[OVSREC_SSL_COL_BOOTSTRAP_CA_CERT]);
}

/* Causes the original contents of column "ca_cert" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "ca_cert" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "ca_cert" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "ca_cert" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_ssl_insert()).
 *
 *   - If "ca_cert" has already been modified (with
 *     ovsrec_ssl_set_ca_cert()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_ssl_set_ca_cert() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ssl_verify_ca_cert(const struct ovsrec_ssl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_ssl_columns[OVSREC_SSL_COL_CA_CERT]);
}

/* Causes the original contents of column "certificate" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "certificate" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "certificate" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "certificate" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_ssl_insert()).
 *
 *   - If "certificate" has already been modified (with
 *     ovsrec_ssl_set_certificate()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_ssl_set_certificate() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ssl_verify_certificate(const struct ovsrec_ssl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_ssl_columns[OVSREC_SSL_COL_CERTIFICATE]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_ssl_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_ssl_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_ssl_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ssl_verify_external_ids(const struct ovsrec_ssl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_ssl_columns[OVSREC_SSL_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "private_key" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "private_key" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "private_key" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "private_key" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_ssl_insert()).
 *
 *   - If "private_key" has already been modified (with
 *     ovsrec_ssl_set_private_key()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_ssl_set_private_key() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_ssl_verify_private_key(const struct ovsrec_ssl *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_ssl_columns[OVSREC_SSL_COL_PRIVATE_KEY]);
}

/* Returns the "bootstrap_ca_cert" column's value from the "SSL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_BOOLEAN.
 * (This helps to avoid silent bugs if someone changes bootstrap_ca_cert's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "bootstrap_ca_cert" member in ovsrec_ssl. */
const struct ovsdb_datum *
ovsrec_ssl_get_bootstrap_ca_cert(const struct ovsrec_ssl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_BOOLEAN);
    return ovsdb_idl_read(&row->header_, &ovsrec_ssl_col_bootstrap_ca_cert);
}

/* Returns the "ca_cert" column's value from the "SSL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes ca_cert's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "ca_cert" member in ovsrec_ssl. */
const struct ovsdb_datum *
ovsrec_ssl_get_ca_cert(const struct ovsrec_ssl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_ssl_col_ca_cert);
}

/* Returns the "certificate" column's value from the "SSL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes certificate's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "certificate" member in ovsrec_ssl. */
const struct ovsdb_datum *
ovsrec_ssl_get_certificate(const struct ovsrec_ssl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_ssl_col_certificate);
}

/* Returns the "external_ids" column's value from the "SSL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_ssl. */
const struct ovsdb_datum *
ovsrec_ssl_get_external_ids(const struct ovsrec_ssl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_ssl_col_external_ids);
}

/* Returns the "private_key" column's value from the "SSL" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes private_key's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "private_key" member in ovsrec_ssl. */
const struct ovsdb_datum *
ovsrec_ssl_get_private_key(const struct ovsrec_ssl *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_ssl_col_private_key);
}

/* Sets the "bootstrap_ca_cert" column from the "SSL" table in 'row' to
 * 'bootstrap_ca_cert'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_ssl_set_bootstrap_ca_cert(const struct ovsrec_ssl *row, bool bootstrap_ca_cert)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.boolean = bootstrap_ca_cert;
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_ssl_columns[OVSREC_SSL_COL_BOOTSTRAP_CA_CERT], &datum);
}

/* Sets the "ca_cert" column from the "SSL" table in 'row' to
 * 'ca_cert'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_ssl_set_ca_cert(const struct ovsrec_ssl *row, const char *ca_cert)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, ca_cert);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_ssl_columns[OVSREC_SSL_COL_CA_CERT], &datum);
}

/* Sets the "certificate" column from the "SSL" table in 'row' to
 * 'certificate'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_ssl_set_certificate(const struct ovsrec_ssl *row, const char *certificate)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, certificate);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_ssl_columns[OVSREC_SSL_COL_CERTIFICATE], &datum);
}

/* Sets the "external_ids" column's value from the "SSL" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_ssl_set_external_ids(const struct ovsrec_ssl *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_ssl_columns[OVSREC_SSL_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "private_key" column from the "SSL" table in 'row' to
 * 'private_key'.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_ssl_set_private_key(const struct ovsrec_ssl *row, const char *private_key)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    datum.n = 1;
    datum.keys = &key;
    key.string = CONST_CAST(char *, private_key);
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_ssl_columns[OVSREC_SSL_COL_PRIVATE_KEY], &datum);
}

struct ovsdb_idl_column ovsrec_ssl_columns[OVSREC_SSL_N_COLUMNS];

static void
ovsrec_ssl_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_ssl_col_bootstrap_ca_cert. */
    c = &ovsrec_ssl_col_bootstrap_ca_cert;
    c->name = "bootstrap_ca_cert";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_BOOLEAN);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_ssl_parse_bootstrap_ca_cert;
    c->unparse = ovsrec_ssl_unparse_bootstrap_ca_cert;

    /* Initialize ovsrec_ssl_col_ca_cert. */
    c = &ovsrec_ssl_col_ca_cert;
    c->name = "ca_cert";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_ssl_parse_ca_cert;
    c->unparse = ovsrec_ssl_unparse_ca_cert;

    /* Initialize ovsrec_ssl_col_certificate. */
    c = &ovsrec_ssl_col_certificate;
    c->name = "certificate";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_ssl_parse_certificate;
    c->unparse = ovsrec_ssl_unparse_certificate;

    /* Initialize ovsrec_ssl_col_external_ids. */
    c = &ovsrec_ssl_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_ssl_parse_external_ids;
    c->unparse = ovsrec_ssl_unparse_external_ids;

    /* Initialize ovsrec_ssl_col_private_key. */
    c = &ovsrec_ssl_col_private_key;
    c->name = "private_key";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_ssl_parse_private_key;
    c->unparse = ovsrec_ssl_unparse_private_key;
}

/* sFlow table. */

static void
ovsrec_sflow_parse_agent(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_sflow *row = ovsrec_sflow_cast(row_);

    ovs_assert(inited);
    if (datum->n >= 1) {
        row->agent = datum->keys[0].string;
    } else {
        row->agent = NULL;
    }
}

static void
ovsrec_sflow_parse_external_ids(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_sflow *row = ovsrec_sflow_cast(row_);
    size_t i;

    ovs_assert(inited);
    smap_init(&row->external_ids);
    for (i = 0; i < datum->n; i++) {
        smap_add(&row->external_ids,
                 datum->keys[i].string,
                 datum->values[i].string);
    }
}

static void
ovsrec_sflow_parse_header(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_sflow *row = ovsrec_sflow_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->header = NULL;
    row->n_header = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_header) {
            row->header = xmalloc(n * sizeof *row->header);
        }
        row->header[row->n_header] = datum->keys[i].integer;
        row->n_header++;
    }
}

static void
ovsrec_sflow_parse_polling(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_sflow *row = ovsrec_sflow_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->polling = NULL;
    row->n_polling = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_polling) {
            row->polling = xmalloc(n * sizeof *row->polling);
        }
        row->polling[row->n_polling] = datum->keys[i].integer;
        row->n_polling++;
    }
}

static void
ovsrec_sflow_parse_sampling(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_sflow *row = ovsrec_sflow_cast(row_);
    size_t n = MIN(1, datum->n);
    size_t i;

    ovs_assert(inited);
    row->sampling = NULL;
    row->n_sampling = 0;
    for (i = 0; i < n; i++) {
        if (!row->n_sampling) {
            row->sampling = xmalloc(n * sizeof *row->sampling);
        }
        row->sampling[row->n_sampling] = datum->keys[i].integer;
        row->n_sampling++;
    }
}

static void
ovsrec_sflow_parse_targets(struct ovsdb_idl_row *row_, const struct ovsdb_datum *datum)
{
    struct ovsrec_sflow *row = ovsrec_sflow_cast(row_);
    size_t i;

    ovs_assert(inited);
    row->targets = NULL;
    row->n_targets = 0;
    for (i = 0; i < datum->n; i++) {
        if (!row->n_targets) {
            row->targets = xmalloc(datum->n * sizeof *row->targets);
        }
        row->targets[row->n_targets] = datum->keys[i].string;
        row->n_targets++;
    }
}

static void
ovsrec_sflow_unparse_agent(struct ovsdb_idl_row *row OVS_UNUSED)
{
    /* Nothing to do. */
}

static void
ovsrec_sflow_unparse_external_ids(struct ovsdb_idl_row *row_)
{
    struct ovsrec_sflow *row = ovsrec_sflow_cast(row_);

    ovs_assert(inited);
    smap_destroy(&row->external_ids);
}

static void
ovsrec_sflow_unparse_header(struct ovsdb_idl_row *row_)
{
    struct ovsrec_sflow *row = ovsrec_sflow_cast(row_);

    ovs_assert(inited);
    free(row->header);
}

static void
ovsrec_sflow_unparse_polling(struct ovsdb_idl_row *row_)
{
    struct ovsrec_sflow *row = ovsrec_sflow_cast(row_);

    ovs_assert(inited);
    free(row->polling);
}

static void
ovsrec_sflow_unparse_sampling(struct ovsdb_idl_row *row_)
{
    struct ovsrec_sflow *row = ovsrec_sflow_cast(row_);

    ovs_assert(inited);
    free(row->sampling);
}

static void
ovsrec_sflow_unparse_targets(struct ovsdb_idl_row *row_)
{
    struct ovsrec_sflow *row = ovsrec_sflow_cast(row_);

    ovs_assert(inited);
    free(row->targets);
}

static void
ovsrec_sflow_init__(struct ovsdb_idl_row *row)
{
    ovsrec_sflow_init(ovsrec_sflow_cast(row));
}

/* Clears the contents of 'row' in table "sFlow". */
void
ovsrec_sflow_init(struct ovsrec_sflow *row)
{
    memset(row, 0, sizeof *row); 
    smap_init(&row->external_ids);
}

/* Searches table "sFlow" in 'idl' for a row with UUID 'uuid'.  Returns
 * a pointer to the row if there is one, otherwise a null pointer.  */
const struct ovsrec_sflow *
ovsrec_sflow_get_for_uuid(const struct ovsdb_idl *idl, const struct uuid *uuid)
{
    return ovsrec_sflow_cast(ovsdb_idl_get_row_for_uuid(idl, &ovsrec_table_classes[OVSREC_TABLE_SFLOW], uuid));
}

/* Returns a row in table "sFlow" in 'idl', or a null pointer if that
 * table is empty.
 *
 * Database tables are internally maintained as hash tables, so adding or
 * removing rows while traversing the same table can cause some rows to be
 * visited twice or not at apply. */
const struct ovsrec_sflow *
ovsrec_sflow_first(const struct ovsdb_idl *idl)
{
    return ovsrec_sflow_cast(ovsdb_idl_first_row(idl, &ovsrec_table_classes[OVSREC_TABLE_SFLOW]));
}

/* Returns a row following 'row' within its table, or a null pointer if 'row'
 * is the last row in its table. */
const struct ovsrec_sflow *
ovsrec_sflow_next(const struct ovsrec_sflow *row)
{
    return ovsrec_sflow_cast(ovsdb_idl_next_row(&row->header_));
}

/* Deletes 'row' from table "sFlow".  'row' may be freed, so it must not be
 * accessed afterward.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_sflow_delete(const struct ovsrec_sflow *row)
{
    ovsdb_idl_txn_delete(&row->header_);
}

/* Inserts and returns a new row in the table "sFlow" in the database
 * with open transaction 'txn'.
 *
 * The new row is assigned a randomly generated provisional UUID.
 * ovsdb-server will assign a different UUID when 'txn' is committed,
 * but the IDL will replace any uses of the provisional UUID in the
 * data to be to be committed by the UUID assigned by ovsdb-server. */
struct ovsrec_sflow *
ovsrec_sflow_insert(struct ovsdb_idl_txn *txn)
{
    return ovsrec_sflow_cast(ovsdb_idl_txn_insert(txn, &ovsrec_table_classes[OVSREC_TABLE_SFLOW], NULL));
}

/* Causes the original contents of column "agent" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "agent" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "agent" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "agent" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_sflow_insert()).
 *
 *   - If "agent" has already been modified (with
 *     ovsrec_sflow_set_agent()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_sflow_set_agent() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_sflow_verify_agent(const struct ovsrec_sflow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_sflow_columns[OVSREC_SFLOW_COL_AGENT]);
}

/* Causes the original contents of column "external_ids" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "external_ids" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "external_ids" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "external_ids" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_sflow_insert()).
 *
 *   - If "external_ids" has already been modified (with
 *     ovsrec_sflow_set_external_ids()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_sflow_set_external_ids() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_sflow_verify_external_ids(const struct ovsrec_sflow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_sflow_columns[OVSREC_SFLOW_COL_EXTERNAL_IDS]);
}

/* Causes the original contents of column "header" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "header" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "header" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "header" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_sflow_insert()).
 *
 *   - If "header" has already been modified (with
 *     ovsrec_sflow_set_header()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_sflow_set_header() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_sflow_verify_header(const struct ovsrec_sflow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_sflow_columns[OVSREC_SFLOW_COL_HEADER]);
}

/* Causes the original contents of column "polling" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "polling" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "polling" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "polling" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_sflow_insert()).
 *
 *   - If "polling" has already been modified (with
 *     ovsrec_sflow_set_polling()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_sflow_set_polling() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_sflow_verify_polling(const struct ovsrec_sflow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_sflow_columns[OVSREC_SFLOW_COL_POLLING]);
}

/* Causes the original contents of column "sampling" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "sampling" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "sampling" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "sampling" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_sflow_insert()).
 *
 *   - If "sampling" has already been modified (with
 *     ovsrec_sflow_set_sampling()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_sflow_set_sampling() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_sflow_verify_sampling(const struct ovsrec_sflow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_sflow_columns[OVSREC_SFLOW_COL_SAMPLING]);
}

/* Causes the original contents of column "targets" in 'row' to be
 * verified as a prerequisite to completing the transaction.  That is, if
 * "targets" in 'row' changed (or if 'row' was deleted) between the
 * time that the IDL originally read its contents and the time that the
 * transaction commits, then the transaction aborts and ovsdb_idl_txn_commit()
 * returns TXN_AGAIN_WAIT or TXN_AGAIN_NOW (depending on whether the database
 * change has already been received).
 *
 * The intention is that, to ensure that no transaction commits based on dirty
 * reads, an application should call this function any time "targets" is
 * read as part of a read-modify-write operation.
 *
 * In some cases this function reduces to a no-op, because the current value
 * of "targets" is already known:
 *
 *   - If 'row' is a row created by the current transaction (returned by
 *     ovsrec_sflow_insert()).
 *
 *   - If "targets" has already been modified (with
 *     ovsrec_sflow_set_targets()) within the current transaction.
 *
 * Because of the latter property, always call this function *before*
 * ovsrec_sflow_set_targets() for a given read-modify-write.
 *
 * The caller must have started a transaction with ovsdb_idl_txn_create(). */
void
ovsrec_sflow_verify_targets(const struct ovsrec_sflow *row)
{
    ovs_assert(inited);
    ovsdb_idl_txn_verify(&row->header_, &ovsrec_sflow_columns[OVSREC_SFLOW_COL_TARGETS]);
}

/* Returns the "agent" column's value from the "sFlow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes agent's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "agent" member in ovsrec_sflow. */
const struct ovsdb_datum *
ovsrec_sflow_get_agent(const struct ovsrec_sflow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_sflow_col_agent);
}

/* Returns the "external_ids" column's value from the "sFlow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * 'value_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes external_ids's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "external_ids" member in ovsrec_sflow. */
const struct ovsdb_datum *
ovsrec_sflow_get_external_ids(const struct ovsrec_sflow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED,
	enum ovsdb_atomic_type value_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    ovs_assert(value_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_sflow_col_external_ids);
}

/* Returns the "header" column's value from the "sFlow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes header's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "header" member in ovsrec_sflow. */
const struct ovsdb_datum *
ovsrec_sflow_get_header(const struct ovsrec_sflow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_sflow_col_header);
}

/* Returns the "polling" column's value from the "sFlow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes polling's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "polling" member in ovsrec_sflow. */
const struct ovsdb_datum *
ovsrec_sflow_get_polling(const struct ovsrec_sflow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_sflow_col_polling);
}

/* Returns the "sampling" column's value from the "sFlow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_INTEGER.
 * (This helps to avoid silent bugs if someone changes sampling's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "sampling" member in ovsrec_sflow. */
const struct ovsdb_datum *
ovsrec_sflow_get_sampling(const struct ovsrec_sflow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_INTEGER);
    return ovsdb_idl_read(&row->header_, &ovsrec_sflow_col_sampling);
}

/* Returns the "targets" column's value from the "sFlow" table in 'row'
 * as a struct ovsdb_datum.  This is useful occasionally: for example,
 * ovsdb_datum_find_key() is an easier and more efficient way to search
 * for a given key than implementing the same operation on the "cooked"
 * form in 'row'.
 *
 * 'key_type' must be OVSDB_TYPE_STRING.
 * (This helps to avoid silent bugs if someone changes targets's
 * type without updating the caller.)
 *
 * The caller must not modify or free the returned value.
 *
 * Various kinds of changes can invalidate the returned value: modifying
 * 'column' within 'row', deleting 'row', or completing an ongoing transaction.
 * If the returned value is needed for a long time, it is best to make a copy
 * of it with ovsdb_datum_clone().
 *
 * This function is rarely useful, since it is easier to access the value
 * directly through the "targets" member in ovsrec_sflow. */
const struct ovsdb_datum *
ovsrec_sflow_get_targets(const struct ovsrec_sflow *row,
	enum ovsdb_atomic_type key_type OVS_UNUSED)
{
    ovs_assert(key_type == OVSDB_TYPE_STRING);
    return ovsdb_idl_read(&row->header_, &ovsrec_sflow_col_targets);
}

/* Sets the "agent" column from the "sFlow" table in 'row' to
 * the 'agent' set.
 *
 * If "agent" is null, the column will be the empty set,
 * otherwise it will contain the specified value.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_sflow_set_agent(const struct ovsrec_sflow *row, const char *agent)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (agent) {
        datum.n = 1;
        datum.keys = &key;
        key.string = CONST_CAST(char *, agent);
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_sflow_columns[OVSREC_SFLOW_COL_AGENT], &datum);
}

/* Sets the "external_ids" column's value from the "sFlow" table in 'row'
 * to 'external_ids'.
 *
 * The caller retains ownership of 'external_ids' and everything in it. */
void
ovsrec_sflow_set_external_ids(const struct ovsrec_sflow *row, const struct smap *external_ids)
{
    struct ovsdb_datum datum;

    ovs_assert(inited);
    if (external_ids) {
        struct smap_node *node;
        size_t i;

        datum.n = smap_count(external_ids);
        datum.keys = xmalloc(datum.n * sizeof *datum.keys);
        datum.values = xmalloc(datum.n * sizeof *datum.values);

        i = 0;
        SMAP_FOR_EACH (node, external_ids) {
            datum.keys[i].string = xstrdup(node->key);
            datum.values[i].string = xstrdup(node->value);
            i++;
        }
        ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_STRING);
    } else {
        ovsdb_datum_init_empty(&datum);
    }
    ovsdb_idl_txn_write(&row->header_,
                        &ovsrec_sflow_columns[OVSREC_SFLOW_COL_EXTERNAL_IDS],
                        &datum);
}


/* Sets the "header" column from the "sFlow" table in 'row' to
 * the 'header' set with 'n_header' entries.
 *
 * 'n_header' may be 0 or 1; if it is 0, then 'header'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_sflow_set_header(const struct ovsrec_sflow *row, const int64_t *header, size_t n_header)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_header) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *header;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_sflow_columns[OVSREC_SFLOW_COL_HEADER], &datum);
}

/* Sets the "polling" column from the "sFlow" table in 'row' to
 * the 'polling' set with 'n_polling' entries.
 *
 * 'n_polling' may be 0 or 1; if it is 0, then 'polling'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_sflow_set_polling(const struct ovsrec_sflow *row, const int64_t *polling, size_t n_polling)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_polling) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *polling;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_sflow_columns[OVSREC_SFLOW_COL_POLLING], &datum);
}

/* Sets the "sampling" column from the "sFlow" table in 'row' to
 * the 'sampling' set with 'n_sampling' entries.
 *
 * 'n_sampling' may be 0 or 1; if it is 0, then 'sampling'
 * may be NULL.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_sflow_set_sampling(const struct ovsrec_sflow *row, const int64_t *sampling, size_t n_sampling)
{
    struct ovsdb_datum datum;
    union ovsdb_atom key;

    ovs_assert(inited);
    if (n_sampling) {
        datum.n = 1;
        datum.keys = &key;
        key.integer = *sampling;
    } else {
        datum.n = 0;
        datum.keys = NULL;
    }
    datum.values = NULL;
    ovsdb_idl_txn_write_clone(&row->header_, &ovsrec_sflow_columns[OVSREC_SFLOW_COL_SAMPLING], &datum);
}

/* Sets the "targets" column from the "sFlow" table in 'row' to
 * the 'targets' set with 'n_targets' entries.
 *
 * The caller retains ownership of the arguments. */
void
ovsrec_sflow_set_targets(const struct ovsrec_sflow *row, const char **targets, size_t n_targets)
{
    struct ovsdb_datum datum;
    size_t i;

    ovs_assert(inited);
    datum.n = n_targets;
    datum.keys = n_targets ? xmalloc(n_targets * sizeof *datum.keys) : NULL;
    datum.values = NULL;
    for (i = 0; i < n_targets; i++) {
        datum.keys[i].string = xstrdup(targets[i]);
    }
    ovsdb_datum_sort_unique(&datum, OVSDB_TYPE_STRING, OVSDB_TYPE_VOID);
    ovsdb_idl_txn_write(&row->header_, &ovsrec_sflow_columns[OVSREC_SFLOW_COL_TARGETS], &datum);
}

struct ovsdb_idl_column ovsrec_sflow_columns[OVSREC_SFLOW_N_COLUMNS];

static void
ovsrec_sflow_columns_init(void)
{
    struct ovsdb_idl_column *c;

    /* Initialize ovsrec_sflow_col_agent. */
    c = &ovsrec_sflow_col_agent;
    c->name = "agent";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_sflow_parse_agent;
    c->unparse = ovsrec_sflow_unparse_agent;

    /* Initialize ovsrec_sflow_col_external_ids. */
    c = &ovsrec_sflow_col_external_ids;
    c->name = "external_ids";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_STRING);
    c->type.value.u.string.minLen = 0;
    c->type.n_min = 0;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_sflow_parse_external_ids;
    c->unparse = ovsrec_sflow_unparse_external_ids;

    /* Initialize ovsrec_sflow_col_header. */
    c = &ovsrec_sflow_col_header;
    c->name = "header";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_sflow_parse_header;
    c->unparse = ovsrec_sflow_unparse_header;

    /* Initialize ovsrec_sflow_col_polling. */
    c = &ovsrec_sflow_col_polling;
    c->name = "polling";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_sflow_parse_polling;
    c->unparse = ovsrec_sflow_unparse_polling;

    /* Initialize ovsrec_sflow_col_sampling. */
    c = &ovsrec_sflow_col_sampling;
    c->name = "sampling";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_INTEGER);
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 0;
    c->type.n_max = 1;
    c->mutable = true;
    c->parse = ovsrec_sflow_parse_sampling;
    c->unparse = ovsrec_sflow_unparse_sampling;

    /* Initialize ovsrec_sflow_col_targets. */
    c = &ovsrec_sflow_col_targets;
    c->name = "targets";
    ovsdb_base_type_init(&c->type.key, OVSDB_TYPE_STRING);
    c->type.key.u.string.minLen = 0;
    ovsdb_base_type_init(&c->type.value, OVSDB_TYPE_VOID);
    c->type.n_min = 1;
    c->type.n_max = UINT_MAX;
    c->mutable = true;
    c->parse = ovsrec_sflow_parse_targets;
    c->unparse = ovsrec_sflow_unparse_targets;
}

struct ovsdb_idl_table_class ovsrec_table_classes[OVSREC_N_TABLES] = {
    {"AutoAttach", false,
     ovsrec_autoattach_columns, ARRAY_SIZE(ovsrec_autoattach_columns),
     sizeof(struct ovsrec_autoattach), ovsrec_autoattach_init__},
    {"Bridge", false,
     ovsrec_bridge_columns, ARRAY_SIZE(ovsrec_bridge_columns),
     sizeof(struct ovsrec_bridge), ovsrec_bridge_init__},
    {"Controller", false,
     ovsrec_controller_columns, ARRAY_SIZE(ovsrec_controller_columns),
     sizeof(struct ovsrec_controller), ovsrec_controller_init__},
    {"Flow_Sample_Collector_Set", true,
     ovsrec_flow_sample_collector_set_columns, ARRAY_SIZE(ovsrec_flow_sample_collector_set_columns),
     sizeof(struct ovsrec_flow_sample_collector_set), ovsrec_flow_sample_collector_set_init__},
    {"Flow_Table", false,
     ovsrec_flow_table_columns, ARRAY_SIZE(ovsrec_flow_table_columns),
     sizeof(struct ovsrec_flow_table), ovsrec_flow_table_init__},
    {"IPFIX", false,
     ovsrec_ipfix_columns, ARRAY_SIZE(ovsrec_ipfix_columns),
     sizeof(struct ovsrec_ipfix), ovsrec_ipfix_init__},
    {"Interface", false,
     ovsrec_interface_columns, ARRAY_SIZE(ovsrec_interface_columns),
     sizeof(struct ovsrec_interface), ovsrec_interface_init__},
    {"Manager", false,
     ovsrec_manager_columns, ARRAY_SIZE(ovsrec_manager_columns),
     sizeof(struct ovsrec_manager), ovsrec_manager_init__},
    {"Mirror", false,
     ovsrec_mirror_columns, ARRAY_SIZE(ovsrec_mirror_columns),
     sizeof(struct ovsrec_mirror), ovsrec_mirror_init__},
    {"NetFlow", false,
     ovsrec_netflow_columns, ARRAY_SIZE(ovsrec_netflow_columns),
     sizeof(struct ovsrec_netflow), ovsrec_netflow_init__},
    {"Open_vSwitch", true,
     ovsrec_open_vswitch_columns, ARRAY_SIZE(ovsrec_open_vswitch_columns),
     sizeof(struct ovsrec_open_vswitch), ovsrec_open_vswitch_init__},
    {"Port", false,
     ovsrec_port_columns, ARRAY_SIZE(ovsrec_port_columns),
     sizeof(struct ovsrec_port), ovsrec_port_init__},
    {"QoS", true,
     ovsrec_qos_columns, ARRAY_SIZE(ovsrec_qos_columns),
     sizeof(struct ovsrec_qos), ovsrec_qos_init__},
    {"Queue", true,
     ovsrec_queue_columns, ARRAY_SIZE(ovsrec_queue_columns),
     sizeof(struct ovsrec_queue), ovsrec_queue_init__},
    {"SSL", false,
     ovsrec_ssl_columns, ARRAY_SIZE(ovsrec_ssl_columns),
     sizeof(struct ovsrec_ssl), ovsrec_ssl_init__},
    {"sFlow", false,
     ovsrec_sflow_columns, ARRAY_SIZE(ovsrec_sflow_columns),
     sizeof(struct ovsrec_sflow), ovsrec_sflow_init__},
};

struct ovsdb_idl_class ovsrec_idl_class = {
    "Open_vSwitch", ovsrec_table_classes, ARRAY_SIZE(ovsrec_table_classes)
};

void
ovsrec_init(void)
{
    if (inited) {
        return;
    }
    assert_single_threaded();
    inited = true;

    ovsrec_autoattach_columns_init();
    ovsrec_bridge_columns_init();
    ovsrec_controller_columns_init();
    ovsrec_flow_sample_collector_set_columns_init();
    ovsrec_flow_table_columns_init();
    ovsrec_ipfix_columns_init();
    ovsrec_interface_columns_init();
    ovsrec_manager_columns_init();
    ovsrec_mirror_columns_init();
    ovsrec_netflow_columns_init();
    ovsrec_open_vswitch_columns_init();
    ovsrec_port_columns_init();
    ovsrec_qos_columns_init();
    ovsrec_queue_columns_init();
    ovsrec_ssl_columns_init();
    ovsrec_sflow_columns_init();
}

/* Return the schema version.  The caller must not free the returned value. */
const char *
ovsrec_get_db_version(void)
{
    return "7.12.1";
}

