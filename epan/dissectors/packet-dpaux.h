/* packet-dpaux.h
 * Definitions for packet disassembly structures and routines
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#ifndef PACKET_DPAUX_H
#define PACKET_DPAUX_H

extern int proto_dpaux;

struct dpaux_info {
	gboolean from_source;
};

#endif
