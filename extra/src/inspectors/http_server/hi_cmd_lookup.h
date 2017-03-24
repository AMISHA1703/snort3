//--------------------------------------------------------------------------
// Copyright (C) 2014-2017 Cisco and/or its affiliates. All rights reserved.
// Copyright (C) 2003-2013 Sourcefire, Inc.
//
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License Version 2 as published
// by the Free Software Foundation.  You may not use, modify or distribute
// this program under any other version of the GNU General Public License.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//--------------------------------------------------------------------------

#ifndef HI_CMD_LOOKUP_H
#define HI_CMD_LOOKUP_H

#include "hi_ui_config.h"

int http_cmd_lookup_init(CMD_LOOKUP** CmdLookup);
int http_cmd_lookup_cleanup(CMD_LOOKUP** CmdLookup);
int http_cmd_lookup_add(CMD_LOOKUP* CmdLookup, char cmd[], int len, HTTP_CMD_CONF* HTTPCmd);

HTTP_CMD_CONF* http_cmd_lookup_find(CMD_LOOKUP* CmdLookup, const char cmd[], int len, int* iError);
HTTP_CMD_CONF* http_cmd_lookup_first(CMD_LOOKUP* CmdLookup, int* iError);
HTTP_CMD_CONF* http_cmd_lookup_next(CMD_LOOKUP* CmdLookup, int* iError);

#endif

