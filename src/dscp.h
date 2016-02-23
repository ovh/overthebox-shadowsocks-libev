/*
 * dscp.h - Define the DSCP values
 *
 * This file is part of the shadowsocks-libev.
 * shadowsocks-libev is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * shadowsocks-libev is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with shadowsocks-libev; see the file COPYING. If not, see
 * <http://www.gnu.org/licenses/>.
 */

#ifndef _DSCP_H
#define _DSCP_H

/* CS   = Class Selector        (RFC 2474)
   AFxy = Assured Forwarding    (RFC 2597)
   EF   = Expedited Forwarding  (RFC 3246) */

static const int DSCP_CS[] = { 0x0, 0x8, 0x10, 0x18, 0x20, 0x28, 0x30, 0x38 };
static const int DSCP_AF[] = { 0xA, 0xC, 0xE, 0x12, 0x14, 0x16, 0x1A, 0x1C,
    0x1E, 0x22, 0x24, 0x26 };

#define DSCP_EF     (0x2E)

#define DSCP_MIN    DSCP_CS[0]
#define DSCP_MAX    (0x3F)

#define DSCP_DEFAULT DSCP_CS[0]

#define DSCP_AF_STEP 3
#define DSCP_MIN_LEN 2
#define DSCP_MAX_LEN 4
#define DSCP_AF_LEN 4
#define DSCP_CS_LEN 3


#endif // _DSCP_H
