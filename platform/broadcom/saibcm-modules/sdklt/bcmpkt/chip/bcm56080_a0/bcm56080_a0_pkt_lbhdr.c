/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: INTERNAL/regs/xgs/generate-pmd.pl
 *
 * Copyright 2018-2024 Broadcom. All rights reserved.
 * The term 'Broadcom' refers to Broadcom Inc. and/or its subsidiaries.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License 
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * A copy of the GNU General Public License version 2 (GPLv2) can
 * be found in the LICENSES folder.
 *
 * This file provides LBHDR access functions for BCM56080_A0.
 *
 ******************************************************************************/

#include <sal/sal_types.h>
#include <bcmpkt/bcmpkt_lbhdr_internal.h>

#define MASK(_bn) (((uint32_t)0x1<<(_bn))-1)
#define WORD_FIELD_GET(_d,_s,_l) (((_d) >> (_s)) & MASK(_l))
#define WORD_FIELD_SET(_d,_s,_l,_v) (_d)=(((_d) & ~(MASK(_l) << (_s))) | (((_v) & MASK(_l)) << (_s)))
#define WORD_FIELD_MASK(_d,_s,_l) (_d)=((_d) | (MASK(_l) << (_s)))
/*******************************************************************************
 * SWFORMAT:  LBHDR
 * BLOCKS:
 * SIZE:     128
 ******************************************************************************/
static void bcmpkt_lbhdr_start_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 24, 8, val);
}

static uint32_t bcmpkt_lbhdr_start_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 24, 8);
    return val;
}

static void bcmpkt_lbhdr_header_type_set(uint32_t *data, uint32_t val)
{
    if (val == BCMPKT_LBHDR_HEADER_T_GENERIC) {
        val = 0;
    }
    WORD_FIELD_SET(data[0], 15, 1, val);
}

static uint32_t bcmpkt_lbhdr_header_type_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 15, 1);
    if (val == 0) {
        val = BCMPKT_LBHDR_HEADER_T_GENERIC;
    }
    return val;
}

static void bcmpkt_lbhdr_input_priority_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 20, 4, val);
}

static uint32_t bcmpkt_lbhdr_input_priority_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 20, 4);
    return val;
}

static void bcmpkt_lbhdr_pkt_profile_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 26, 3, val);
}

static uint32_t bcmpkt_lbhdr_pkt_profile_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 26, 3);
    return val;
}

static void bcmpkt_lbhdr_visibility_pkt_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 29, 1, val);
}

static uint32_t bcmpkt_lbhdr_visibility_pkt_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 29, 1);
    return val;
}

static void bcmpkt_lbhdr_source_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 30, 2, val & MASK(2));
    WORD_FIELD_SET(data[0], 0, 14, (val >> 2) & MASK(14));
}

static uint32_t bcmpkt_lbhdr_source_get(uint32_t *data)
{
    uint32_t val;
    val = (WORD_FIELD_GET(data[1], 30, 2) | (WORD_FIELD_GET(data[0], 0, 14) << 2)) ;
    return val;
}

static void bcmpkt_lbhdr_source_type_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[0], 14, 1, val);
}

static uint32_t bcmpkt_lbhdr_source_type_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[0], 14, 1);
    return val;
}

static void bcmpkt_lbhdr_zero_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 5, 1, val);
}

static uint32_t bcmpkt_lbhdr_zero_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 5, 1);
    return val;
}

static void bcmpkt_lbhdr_pp_port_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 0, 7, val);
}

static uint32_t bcmpkt_lbhdr_pp_port_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 0, 7);
    return val;
}

static void bcmpkt_lbhdr_routed_pkt_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[3], 31, 1, val);
}

static uint32_t bcmpkt_lbhdr_routed_pkt_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[3], 31, 1);
    return val;
}

static void bcmpkt_lbhdr_vrf_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[2], 30, 2, val & MASK(2));
    WORD_FIELD_SET(data[1], 0, 4, (val >> 2) & MASK(4));
}

static uint32_t bcmpkt_lbhdr_vrf_get(uint32_t *data)
{
    uint32_t val;
    val = (WORD_FIELD_GET(data[2], 30, 2) | (WORD_FIELD_GET(data[1], 0, 4) << 2)) ;
    return val;
}

static void bcmpkt_lbhdr_vrf_valid_set(uint32_t *data, uint32_t val)
{
    WORD_FIELD_SET(data[1], 4, 1, val);
}

static uint32_t bcmpkt_lbhdr_vrf_valid_get(uint32_t *data)
{
    uint32_t val;
    val = WORD_FIELD_GET(data[1], 4, 1);
    return val;
}

static uint32_t bcmpkt_lbhdr_i_size_get(uint32_t *data, uint32_t **addr)
{
    return 4;
}


const bcmpkt_lbhdr_fget_t bcm56080_a0_lbhdr_fget = {
    {
        bcmpkt_lbhdr_start_get,
        bcmpkt_lbhdr_header_type_get,
        bcmpkt_lbhdr_input_priority_get,
        bcmpkt_lbhdr_pkt_profile_get,
        bcmpkt_lbhdr_visibility_pkt_get,
        bcmpkt_lbhdr_source_get,
        bcmpkt_lbhdr_source_type_get,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_lbhdr_zero_get,
        bcmpkt_lbhdr_pp_port_get,
        bcmpkt_lbhdr_routed_pkt_get,
        bcmpkt_lbhdr_vrf_get,
        bcmpkt_lbhdr_vrf_valid_get,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};


const bcmpkt_lbhdr_fset_t bcm56080_a0_lbhdr_fset = {
    {
        bcmpkt_lbhdr_start_set,
        bcmpkt_lbhdr_header_type_set,
        bcmpkt_lbhdr_input_priority_set,
        bcmpkt_lbhdr_pkt_profile_set,
        bcmpkt_lbhdr_visibility_pkt_set,
        bcmpkt_lbhdr_source_set,
        bcmpkt_lbhdr_source_type_set,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        bcmpkt_lbhdr_zero_set,
        bcmpkt_lbhdr_pp_port_set,
        bcmpkt_lbhdr_routed_pkt_set,
        bcmpkt_lbhdr_vrf_set,
        bcmpkt_lbhdr_vrf_valid_set,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    }
};


const bcmpkt_lbhdr_figet_t bcm56080_a0_lbhdr_figet = {
    {
        bcmpkt_lbhdr_i_size_get
    }
};

static shr_enum_map_t bcm56080_a0_lbhdr_view_types[] = {
    {NULL, -1},
};

/* -2: unsupported, -1: global, others: view's value */
static int bcm56080_a0_lbhdr_view_infos[BCMPKT_LBHDR_FID_COUNT] = {
     -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2,
     -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -2,
     -2, -2, -2, -2, -2, -2, -2, -2,
};


void bcm56080_a0_lbhdr_view_info_get(bcmpkt_pmd_view_info_t *info)
{
    info->view_infos = bcm56080_a0_lbhdr_view_infos;
    info->view_types = bcm56080_a0_lbhdr_view_types;
    info->view_type_get = NULL;
}
