/*******************************************************************************
**+--------------------------------------------------------------------------+**
**|                            ****                                          |**
**|                            ****                                          |**
**|                            ******o***                                    |**
**|                      ********_///_****                                   |**
**|                      ***** /_//_/ ****                                   |**
**|                       ** ** (__/ ****                                    |**
**|                           *********                                      |**
**|                            ****                                          |**
**|                            ***                                           |**
**|                                                                          |**
**|         Copyright (c) 2016 - 2017 Texas Instruments Incorporated         |**
**|                                                                          |**
**|              All rights reserved not granted herein.                     |**
**|                                                                          |**
**|                         Limited License.                                 |**
**|                                                                          |**
**|  Texas Instruments Incorporated grants a world-wide, royalty-free,       |**
**|  non-exclusive license under copyrights and patents it now or            |**
**|  hereafter owns or controls to make, have made, use, import, offer to    |**
**|  sell and sell ("Utilize") this software subject to the terms herein.    |**
**|  With respect to the foregoing patent license, such license is granted   |**
**|  solely to the extent that any such patent is necessary to Utilize the   |**
**|  software alone.  The patent license shall not apply to any              |**
**|  combinations which include this software, other than combinations       |**
**|  with devices manufactured by or for TI ("TI Devices").  No hardware     |**
**|  patent is licensed hereunder.                                           |**
**|                                                                          |**
**|  Redistributions must preserve existing copyright notices and            |**
**|  reproduce this license (including the above copyright notice and the    |**
**|  disclaimer and (if applicable) source code license limitations below)   |**
**|  in the documentation and/or other materials provided with the           |**
**|  distribution                                                            |**
**|                                                                          |**
**|  Redistribution and use in binary form, without modification, are        |**
**|  permitted provided that the following conditions are met:               |**
**|                                                                          |**
**|    *  No reverse engineering, decompilation, or disassembly of this      |**
**|  software is permitted with respect to any software provided in binary   |**
**|  form.                                                                   |**
**|                                                                          |**
**|    *  any redistribution and use are licensed by TI for use only with    |**
**|  TI Devices.                                                             |**
**|                                                                          |**
**|    *  Nothing shall obligate TI to provide you with source code for      |**
**|  the software licensed and provided to you in object code.               |**
**|                                                                          |**
**|  If software source code is provided to you, modification and            |**
**|  redistribution of the source code are permitted provided that the       |**
**|  following conditions are met:                                           |**
**|                                                                          |**
**|    *  any redistribution and use of the source code, including any       |**
**|  resulting derivative works, are licensed by TI for use only with TI     |**
**|  Devices.                                                                |**
**|                                                                          |**
**|    *  any redistribution and use of any object code compiled from the    |**
**|  source code and any resulting derivative works, are licensed by TI      |**
**|  for use only with TI Devices.                                           |**
**|                                                                          |**
**|  Neither the name of Texas Instruments Incorporated nor the names of     |**
**|  its suppliers may be used to endorse or promote products derived from   |**
**|  this software without specific prior written permission.                |**
**|                                                                          |**
**|  DISCLAIMER.                                                             |**
**|                                                                          |**
**|  THIS SOFTWARE IS PROVIDED BY TI AND TI'S LICENSORS "AS IS" AND ANY      |**
**|  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE       |**
**|  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR      |**
**|  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL TI AND TI'S LICENSORS BE      |**
**|  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR     |**
**|  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF    |**
**|  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR         |**
**|  BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,   |**
**|  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE    |**
**|  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,       |**
**|  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                      |**
**+--------------------------------------------------------------------------+**
*******************************************************************************/

#include "VXLIB_colorConvert_IYUVtoRGB_i8u_o8u.h"

CODE_SECTION(VXLIB_colorConvert_IYUVtoRGB_i8u_o8u,              ".text:optimized")
CODE_SECTION(VXLIB_colorConvert_IYUVtoRGB_i8u_o8u_core,         ".text:optimized")
CODE_SECTION(VXLIB_colorConvert_IYUVtoRGB_i8u_o8u_checkParams,  ".text:optimized")

static inline void  VXLIB_colorConvert_IYUVtoRGB_i8u_o8u_core(const uint8_t src0[restrict],
                                  const uint8_t src1[restrict],
                                  const uint8_t src2[restrict],
                                  uint8_t dst[restrict],
                                  int32_t width,
                                  int64_t  frv,
                                  int64_t  fgu,
                                  int64_t  fgv,
                                  int64_t  fbu);

static inline void  VXLIB_colorConvert_IYUVtoRGB_i8u_o8u_core(const uint8_t src0[restrict],
                                  const uint8_t src1[restrict],
                                  const uint8_t src2[restrict],
                                  uint8_t dst[restrict],
                                  int32_t width,
                                  int64_t  frv,
                                  int64_t  fgu,
                                  int64_t  fgv,
                                  int64_t  fbu)
{
    int32_t             x;
    int32_t             int_v, int_u, src_1, src_2, i32temp;
    uint32_t            r3210, r7654, g3210, g7654, b3210, b7654;
    int64_t             src_0, dst_0, dst_1, lltemp1, lltemp2;
    uint32_t            utemp0, utemp1, utemp2;
    __x128_t            i128temp;

    /* Case 1: SIMD of 8 pixels at a time*/
    /* 18/8 = 2.25 cycles per pixel */
    for( x=0; x < ((width/8) * 8); x += 8 ) {

        src_0 = _mem8_const(&src0[x]);  /* y value */

        src_1 = _mem4_const(&src1[x/2]);
        src_2 = _mem4_const(&src2[x/2]);

        int_v = _sub4(src_2, (int32_t)0x80808080U);  /* v value */
        int_u = _sub4(src_1, (int32_t)0x80808080U);  /* u value */

        /* compute r value */
        i128temp  = _dmpy2(frv, _dshl2(_unpkbu4((uint32_t)int_v), 8U)); /* multipliers in Q14 and Q8 respectively */
        dst_0 = _dshr(_dadd(_lo128(i128temp), 0x0020000000200000), 22U); /* w/ rounding */
        dst_1 = _dshr(_dadd(_hi128(i128temp), 0x0020000000200000), 22U); /* w/ rounding */


        lltemp2 = _dpackl2(dst_0, dst_0);
        lltemp1 = _dadd2(_unpkbu4(_loll(src_0)), lltemp2);
        r3210 = _spacku4((int32_t)_hill(lltemp1), (int32_t)_loll(lltemp1));

        lltemp2 = _dpackl2(dst_1, dst_1);
        lltemp1= _dadd2(_unpkbu4(_hill(src_0)), lltemp2);
        r7654 = _spacku4((int32_t)_hill(lltemp1), (int32_t)_loll(lltemp1));

        /* compute g value */
        i128temp  = _dmpy2(fgv, _dshl2(_unpkbu4((uint32_t)int_v), 8U)); /* multipliers in Q14 and Q8 respectively */
        dst_0 = _dshr(_dadd(_lo128(i128temp), 0x0020000000200000), 22U); /* w/ rounding */
        dst_1 = _dshr(_dadd(_hi128(i128temp), 0x0020000000200000), 22U); /* w/ rounding */

        lltemp1 = _dpackl2(dst_0, dst_0);
        lltemp2 = _dpackl2(dst_1, dst_1);

        i128temp  = _dmpy2(fgu, _dshl2(_unpkbu4((uint32_t)int_u), 8U)); /* multipliers in Q14 and Q8 respectively */
        dst_0 = _dshr(_dadd(_lo128(i128temp), 0x0020000000200000), 22U); /* w/ rounding */
        dst_1 = _dshr(_dadd(_hi128(i128temp), 0x0020000000200000), 22U); /* w/ rounding */

        lltemp1 = _dadd2(lltemp1, _dpackl2(dst_0, dst_0));
        lltemp2 = _dadd2(lltemp2, _dpackl2(dst_1, dst_1));
        lltemp1 = _dsub2(_unpkbu4(_loll(src_0)), lltemp1);
        g3210 = _spacku4((int32_t)_hill(lltemp1), (int32_t)_loll(lltemp1));
        lltemp2 = _dsub2(_unpkbu4(_hill(src_0)), lltemp2);
        g7654 = _spacku4((int32_t)_hill(lltemp2), (int32_t)_loll(lltemp2));

        /* compute b value */
        i128temp  = _dmpy2(fbu, _dshl2(_unpkbu4((uint32_t)int_u), 8U)); /* multipliers in Q14 and Q8 respectively */
        dst_0 = _dshr(_dadd(_lo128(i128temp), 0x0020000000200000), 22U); /* w/ rounding */
        dst_1 = _dshr(_dadd(_hi128(i128temp), 0x0020000000200000), 22U); /* w/ rounding */

        lltemp2 = _dpackl2(dst_0, dst_0);
        lltemp1 = _dadd2(_unpkbu4(_loll(src_0)), lltemp2);
        b3210 = _spacku4((int32_t)_hill(lltemp1), (int32_t)_loll(lltemp1));
        lltemp2 = _dpackl2(dst_1, dst_1);
        lltemp1= _dadd2(_unpkbu4(_hill(src_0)), lltemp2);
        b7654 = _spacku4((int32_t)_hill(lltemp1), (int32_t)_loll(lltemp1));

        /* load output data */
        utemp2 = _packh4(_packl4(g3210, r3210), _pack2(b3210, g3210));  /* g2-r2-b1-g1 */
        utemp0 = _packh4(g3210, r3210); /* g3-g1-r3-r1 */
        utemp1 = _packl4(_pack2(utemp0, b3210), _pack2(g3210,r3210));  /* r1-b0-g0-r0 */
        _mem8(&dst[x*3]) = _dmv(utemp2, utemp1);

        utemp0 = _packl4(b3210, b3210); /* b2b0b2b0 */
        utemp1 = _packh4(_packh4(b3210, g3210), _packh4(r3210, utemp0)); /* b3-g3-r3-b2 */
        utemp0 = _packh4(g7654, r7654); /* g7-g5-r7-r5 */
        utemp2 = _packl4(_pack2(utemp0, b7654), _pack2(g7654,r7654));  /* r5-b4-g4-r4 */
        _mem8(&dst[(x*3) + 8]) = _dmv(utemp2, utemp1);

        utemp0 = _packl4(b7654, g7654);
        utemp2 = _packh4(_packh4(b7654, g7654), _packh4(r7654, utemp0)); /* b7-g7-r7-b6 */
        utemp1 = _packh4(_packl4(g7654, r7654), _pack2(b7654, g7654));  /* g6-r6-b5-g5 */
        _mem8(&dst[(x*3) + 16]) = _dmv(utemp2, utemp1);
    }

    /* Case 2: Process remaining pixels beyond multiple of 8 */
    /* 5 cycle per pixel */
    for (;  x < width; x++) {

        int_u =  (int32_t)src1[((uint32_t)x>>1)] - 128;
        int_v =  (int32_t)src2[((uint32_t)x>>1)] - 128;

        /* MISRA.BITS.NOT_UNSIGNED
         * MISRAC_2004 Rule_12.7
         * MISRAC_WAIVER:
         * An arithmetic right shift of 14 is required on the 4 lines below as indicated by
         * (Arithmentic right shift).
         * It can not be cast to an unsigned because that would make a logical right shift
         * instead of the arithmetic shift that I need (I need the sign bit extension) to
         * mantain negative values.  I have confirmed that the DSP compiler is doing as
         * I expect (arithmetic right shift) with this code.
         */

        i32temp = (_mpyus(_loll(frv), int_v) + 0x2000) >> 14; /* w/ rounding (Arithmentic right shift) */
        i32temp += (int32_t)src0[x];
        dst[x*3] = (uint8_t)_spacku4(0,i32temp);

        i32temp = (_mpyus(_loll(fgu), int_u) + 0x2000) >> 14; /* w/ rounding (Arithmentic right shift) */
        i32temp += ((_mpyus(_loll(fgv), int_v) + 0x2000) >> 14); /* w/ rounding (Arithmentic right shift) */
        i32temp = (int32_t)src0[x] - i32temp;
        dst[(x*3) + 1] = (uint8_t)_spacku4(0,i32temp);

        i32temp = (_mpyus(_loll(fbu), int_u) +0x2000) >> 14; /* w/ rounding (Arithmentic right shift) */
        i32temp += (int32_t)src0[x];
        dst[(x*3) + 2] = (uint8_t)_spacku4(0,i32temp);
    }
}

VXLIB_STATUS    VXLIB_colorConvert_IYUVtoRGB_i8u_o8u(const uint8_t src0[restrict],
                                  const VXLIB_bufParams2D_t * src0_addr,
                                  const uint8_t src1[restrict],
                                  const VXLIB_bufParams2D_t * src1_addr,
                                  const uint8_t src2[restrict],
                                  const VXLIB_bufParams2D_t * src2_addr,
                                  uint8_t dst[restrict],
                                  const VXLIB_bufParams2D_t * dst_addr,
                                  uint8_t src_space)
{
    VXLIB_STATUS    status = VXLIB_SUCCESS;

#if defined(VXLIB_CHECK_PARAMS) || defined(VXLIB_COLORCONVERT_IYUVtoRGB_I8U_O8U_CHECK_PARAMS)
    status = VXLIB_colorConvert_IYUVtoRGB_i8u_o8u_checkParams(src0, src0_addr, src1, src1_addr, src2, src2_addr, dst, dst_addr, src_space);
    if( status == VXLIB_SUCCESS )
#endif
    {
        int32_t    y;
        int64_t frv, fgu, fgv, fbu;

        if ((int32_t)src_space == VXLIB_COLOR_SPACE_BT709)
        {
            /* 4 packed Q14 values for multiplication */
            frv = 0x64ca64ca64ca64ca; /* 1.5748f in Q14 */
            fgu = 0x0bfd0bfd0bfd0bfd; /* 0.1873f in Q14 */
            fgv = 0x1df51df51df51df5; /* 0.4681f in Q14 */
            fbu = 0x76c276c276c276c2; /* 1.8556f in Q14 */
        }
        else
        {
            /* 4 packed Q14 values for multiplication */
            frv = 0x59cb59cb59cb59cb; /* 1.403f in Q14 */
            fgu = 0x1604160416041604; /* 0.344f in Q14 */
            fgv = 0x2db22db22db22db2; /* 0.714f in Q14 */
            fbu = 0x7179717971797179; /* 1.773f in Q14 */
        }

        for( y=0; y < dst_addr->dim_y; y++ ) {

            const uint8_t   *src0_t = (const uint8_t *)&src0[ (y * src0_addr->stride_y)];
            const uint8_t   *src1_t = (const uint8_t *)&src1[ ((y/2) * src1_addr->stride_y)];
            const uint8_t   *src2_t = (const uint8_t *)&src2[ ((y/2) * src2_addr->stride_y)];
            uint8_t         *dst_t  = (uint8_t *)&dst[ (y * dst_addr->stride_y)];

            VXLIB_colorConvert_IYUVtoRGB_i8u_o8u_core(src0_t, src1_t, src2_t, dst_t, dst_addr->dim_x, frv, fgu, fgv, fbu);
        }
    }
    return (status);
}


#if (!defined(VXLIB_REMOVE_CHECK_PARAMS) && !defined(VXLIB_COLORCONVERT_IYUVTORGB_I8U_O8U_REMOVE_CHECK_PARAMS)) || (defined(VXLIB_CHECK_PARAMS)) || (defined(VXLIB_COLORCONVERT_IYUVTORGB_I8U_O8U_CHECK_PARAMS))

VXLIB_STATUS VXLIB_colorConvert_IYUVtoRGB_i8u_o8u_checkParams(const uint8_t src0[],
                                           const VXLIB_bufParams2D_t *src0_addr,
                                           const uint8_t src1[],
                                           const VXLIB_bufParams2D_t *src1_addr,
                                           const uint8_t src2[],
                                           const VXLIB_bufParams2D_t *src2_addr,
                                           const uint8_t dst[],
                                           const VXLIB_bufParams2D_t *dst_addr,
                                           uint8_t src_space)
{
    VXLIB_STATUS    status = VXLIB_SUCCESS;

    if((src0 == NULL) || (src1 == NULL) || (src2 == NULL) || (dst == NULL) ) {
        status = VXLIB_ERR_NULL_POINTER;
    } else if(  (src0_addr->dim_x != dst_addr->dim_x) ||
                (src0_addr->dim_y != dst_addr->dim_y) ||
                (src0_addr->stride_y < src0_addr->dim_x) ||
                (src1_addr->stride_y < src1_addr->dim_x) ||
                (src2_addr->stride_y < src2_addr->dim_x) ||
                (src0_addr->dim_x != (2*src1_addr->dim_x)) ||
                (src1_addr->dim_x != src2_addr->dim_x) ||
                (src0_addr->dim_y != (2*src1_addr->dim_y)) ||
                (src1_addr->dim_y != src2_addr->dim_y) ||
                (dst_addr->stride_y < (3*dst_addr->dim_x)) ) {
        status = VXLIB_ERR_INVALID_DIMENSION;
    } else if((src0_addr->data_type != VXLIB_UINT8) ||
               (src1_addr->data_type != VXLIB_UINT8) ||
               (src2_addr->data_type != VXLIB_UINT8) ||
               (dst_addr->data_type != VXLIB_UINT24) ) {
        status = VXLIB_ERR_INVALID_TYPE;
    }
#if defined(VXLIB_ALIGNED8_WIDTHS) || defined(VXLIB_COLORCONVERT_IYUVtoRGB_I8U_O8U_ALIGNED8_WIDTHS)
    else if((src0_addr->dim_x % 8U) != 0) {
        status = VXLIB_ERR_NOT_ALIGNED_WIDTHS;
    }
#endif
    else if(src_space > 3U) {
        status = VXLIB_ERR_INVALID_VALUE;
    }
    else {
        status = VXLIB_SUCCESS;
    }
    return (status);
}

#endif