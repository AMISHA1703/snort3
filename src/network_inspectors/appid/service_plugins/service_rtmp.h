//--------------------------------------------------------------------------
// Copyright (C) 2014-2017 Cisco and/or its affiliates. All rights reserved.
// Copyright (C) 2005-2013 Sourcefire, Inc.
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

// service_rtmp.h author Sourcefire Inc.

#ifndef SERVICE_RTMP_H
#define SERVICE_RTMP_H

#include "service_detector.h"

class ServiceDiscovery;

class RtmpServiceDetector : public ServiceDetector
{
public:
    RtmpServiceDetector(ServiceDiscovery*);
    ~RtmpServiceDetector();

    int validate(AppIdDiscoveryArgs&) override;
};
#endif

