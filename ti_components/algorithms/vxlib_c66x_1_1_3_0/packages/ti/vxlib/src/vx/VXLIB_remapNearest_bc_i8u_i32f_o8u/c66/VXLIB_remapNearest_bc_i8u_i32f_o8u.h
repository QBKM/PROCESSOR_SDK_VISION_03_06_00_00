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
**|        Copyright (c) 2016 - 2017 Texas Instruments Incorporated          |**
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

#ifndef VXLIB_REMAPNEAREST_BC_I8U_I32F_O8U_H_
#define VXLIB_REMAPNEAREST_BC_I8U_I32F_O8U_H_ 1

#include "../../../common/VXLIB_types.h"

/** @defgroup VXLIB_remapNearest_bc_i8u_i32f_o8u */
/** @ingroup  VXLIB_remapNearest_bc_i8u_i32f_o8u */
/* @{ */
/**
*  Maps output pixels in an image from an input pixels in an image (8-bit),
*  using the nearest neighbor interpolation.  If the input pixel mapping
*  is out of bounds from the input image, then the border_constant_value
*  is placed in the output cooresponding to the out of bounds input.
*
* @par Method:
*  The Image Remap Kernel is computed by using the following equation:
*
* @verbatim

   dst(x,y) = src[remap(x*2,y), remap(x*2+1,y)]

  @endverbatim
*
*
* @par
*   @param [in]  src[]                  Pointer to array containing first input image (UQ8.0)
*   @param [in]  src_addr[]             Pointer to structure containing dimensional information of src
*   @param [out] dst[]                  Pointer to array containing output image (UQ8.0)
*   @param [in]  dst_addr[]             Pointer to structure containing dimensional information of dst
*   @param [in]  remap[]                Pointer to array containing the remap table (F32)
*                                        Format of array is (x0, y0, x1, y1, ... ) so that array width is
*                                        twice the width of the dst array: 2 coordinates for each output
*                                        pixel.
*   @param [in]  remap_addr[]           Pointer to structure containing dimensional information of remap
*   @param [in]  border_constant_value  Parameter indicating out of bounds value (UQ8.0)
*
* @par Assumptions:
*    - I/O buffer pointers are assumed to be not aliased.
*    - remap_addr->dim_x == dst_addr->dim_x * 2
*
* @par Performance Considerations:
*    - For best performance, the following parameter settings are recommended:
*      - Set widths equal to strides
*      - Set all width values to a multiple of 4
*    - If a user wants to divide processing of the image into smaller blocks using DMA, then it can
*      divide the output image and remap image into blocks, but the input image should be accessable in its
*      entirety since the remap coordinates refer to x and y offsets in the full input image.
*/
VXLIB_STATUS    VXLIB_remapNearest_bc_i8u_i32f_o8u(const uint8_t src[restrict],
                               const VXLIB_bufParams2D_t *src_addr,
                               uint8_t dst[restrict],
                               const VXLIB_bufParams2D_t *dst_addr,
                               const VXLIB_F32 remap[restrict],
                               const VXLIB_bufParams2D_t * remap_addr,
                               uint8_t border_constant_value);

/**
* @par Description:
*  Checks the parameters for programming errors for the VXLIB_remapNearest_bc_i8u_i32f_o8u function.
*
* @par Method:
*  The following checks are made:
*    - There shall be no NULL pointers
*    - Remap and dst images shall have the same y dimensions
*    - Remap shall have the same x dimensions of 2x that of dst image.
*    - The strides of each image shall be equal to or greater than the x dimension
*
* @par
*   @param [in]  src[]                  Pointer to array containing first input image (UQ8.0)
*   @param [in]  src_addr[]             Pointer to structure containing dimensional information of src
*   @param [out] dst[]                  Pointer to array containing output image (UQ8.0)
*   @param [in]  dst_addr[]             Pointer to structure containing dimensional information of dst
*   @param [in]  remap[]                Pointer to array containing the remap table (F32)
*                                        Format of array is (x0, y0, x1, y1, ... ) so that array width is
*                                        twice the width of the dst array: 2 coordinates for each output
*                                        pixel.
*   @param [in]  remap_addr[]           Pointer to structure containing dimensional information of remap
*   @param [in]  border_constant_value  Parameter indicating out of bounds value (UQ8.0)
*
*/

VXLIB_STATUS VXLIB_remapNearest_bc_i8u_i32f_o8u_checkParams(const uint8_t src[restrict],
                                        const VXLIB_bufParams2D_t *src_addr,
                                        uint8_t dst[restrict],
                                        const VXLIB_bufParams2D_t *dst_addr,
                                        const VXLIB_F32 remap[restrict],
                                        const VXLIB_bufParams2D_t * remap_addr,
                                        uint8_t border_constant_value);
/** @} */
#endif
