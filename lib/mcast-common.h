/*
 * Copyright (c) 2014 Red Hat, Inc.
 *
 * Based on mac-learning implementation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MCAST_COMMON_H
#define MCAST_COMMON_H 1

#define IGMP_LIST_LEN  10
#define G_HOLD_LIMIT   100
#define DO_NOT_CHECK   0

typedef struct grpSrcList {
   ovs_be32 inNumSrc;
   ovs_be32 exNumSrc;
   ovs_be32 inList[IGMP_LIST_LEN];
   ovs_be32 exList[IGMP_LIST_LEN];
} grpSrcList_t;

typedef struct grpSrcListRec {
   uint8_t numsrc;
   uint32_t srcList[IGMP_LIST_LEN];
} grpSrcListRec_t;

extern uint8_t g_igmpSrcIndex;
extern grpSrcListRec_t g_igmpSrcListRec[];

#endif /* mcast-common.h */
