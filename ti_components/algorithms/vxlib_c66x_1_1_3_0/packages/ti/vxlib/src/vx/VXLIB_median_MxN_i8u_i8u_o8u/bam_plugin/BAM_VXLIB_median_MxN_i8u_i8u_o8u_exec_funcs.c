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
**|        Copyright (c) 2017 Texas Instruments Incorporated                 |**
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

#include "cpu.h"
#include "BAM_VXLIB_median_MxN_i8u_i8u_o8u_int.h"
#include "../VXLIB_median_MxN_i8u_i8u_o8u.h"
#include "edma_utils_memcpy.h"

/***********************************************************************************************/
/*  Below are the helper  functions related to VXLIB_median_MxN_i8u_i8u_o8u kernel            */
/***********************************************************************************************/
static BAM_Status BAM_VXLIB_median_MxN_i8u_i8u_o8u_initFrame(void *kernelContext);
static BAM_Status BAM_VXLIB_median_MxN_i8u_i8u_o8u_compute(void *kernelContext);

static BAM_Status BAM_VXLIB_median_MxN_i8u_i8u_o8u_initFrame(void *kernelContext)
{
    BAM_VXLIB_median_MxN_i8u_i8u_o8u_Context *context = \
                            (BAM_VXLIB_median_MxN_i8u_i8u_o8u_Context *)kernelContext;


    /* Read LUT into internal memory */
    EDMA_UTILS_memcpy2D(
        context->pInternalBlock[BAM_VXLIB_MEDIAN_MXN_I8U_I8U_O8U_INTERNAL_MASK],
        context->kernelInitArgs.params.mask_addr,
        context->kernelInitArgs.params.mask.stride_y *
        context->kernelInitArgs.params.mask.dim_y, 1U, 0, 0);

    context->kernelInitArgs.params.scratch_size =
        context->kernelInitArgs.params.mask.dim_x *
        context->kernelInitArgs.params.mask.dim_y * 2 * sizeof(int64_t);

    return BAM_S_SUCCESS;
}

static BAM_Status BAM_VXLIB_median_MxN_i8u_i8u_o8u_compute(void *kernelContext)
{
    BAM_VXLIB_median_MxN_i8u_i8u_o8u_Context *context = \
                                (BAM_VXLIB_median_MxN_i8u_i8u_o8u_Context *)kernelContext;

    VXLIB_STATUS    status_vx;
    BAM_Status     status_bam = BAM_S_SUCCESS;

    status_vx = VXLIB_median_MxN_i8u_i8u_o8u(
        (const uint8_t*)context->pInBlock[BAM_VXLIB_MEDIAN_MXN_I8U_I8U_O8U_INPUT_IMAGE_PORT],
        &context->kernelInitArgs.bufParams[0],
        (uint8_t*)context->pOutBlock[BAM_VXLIB_MEDIAN_MXN_I8U_I8U_O8U_OUTPUT_PORT],
        &context->kernelInitArgs.bufParams[1],
        (const uint8_t*)context->pInternalBlock[BAM_VXLIB_MEDIAN_MXN_I8U_I8U_O8U_INTERNAL_MASK],
        &context->kernelInitArgs.params.mask,
        (int64_t*)context->pInternalBlock[BAM_VXLIB_MEDIAN_MXN_I8U_I8U_O8U_INTERNAL_SCRATCH],
        context->kernelInitArgs.params.scratch_size);

    if( status_vx != VXLIB_SUCCESS )
    {
        status_bam = BAM_E_FAIL_RUNTIME;
    }

    return status_bam;
}

BAM_KernelExecFuncDef gBAM_VXLIB_median_MxN_i8u_i8u_o8u_execFunc =
{
    NULL,
    &BAM_VXLIB_median_MxN_i8u_i8u_o8u_initFrame,
    &BAM_VXLIB_median_MxN_i8u_i8u_o8u_compute,
    NULL,
    NULL,
    NULL
};