/*
*
* Copyright (c) 2017 Texas Instruments Incorporated
*
* All rights reserved not granted herein.
*
* Limited License.
*
* Texas Instruments Incorporated grants a world-wide, royalty-free, non-exclusive
* license under copyrights and patents it now or hereafter owns or controls to make,
* have made, use, import, offer to sell and sell ("Utilize") this software subject to the
* terms herein.  With respect to the foregoing patent license, such license is granted
* solely to the extent that any such patent is necessary to Utilize the software alone.
* The patent license shall not apply to any combinations which include this software,
* other than combinations with devices manufactured by or for TI ("TI Devices").
* No hardware patent is licensed hereunder.
*
* Redistributions must preserve existing copyright notices and reproduce this license
* (including the above copyright notice and the disclaimer and (if applicable) source
* code license limitations below) in the documentation and/or other materials provided
* with the distribution
*
* Redistribution and use in binary form, without modification, are permitted provided
* that the following conditions are met:
*
* *       No reverse engineering, decompilation, or disassembly of this software is
* permitted with respect to any software provided in binary form.
*
* *       any redistribution and use are licensed by TI for use only with TI Devices.
*
* *       Nothing shall obligate TI to provide you with source code for the software
* licensed and provided to you in object code.
*
* If software source code is provided to you, modification and redistribution of the
* source code are permitted provided that the following conditions are met:
*
* *       any redistribution and use of the source code, including any resulting derivative
* works, are licensed by TI for use only with TI Devices.
*
* *       any redistribution and use of any object code compiled from the source code
* and any resulting derivative works, are licensed by TI for use only with TI Devices.
*
* Neither the name of Texas Instruments Incorporated nor the names of its suppliers
*
* may be used to endorse or promote products derived from this software without
* specific prior written permission.
*
* DISCLAIMER.
*
* THIS SOFTWARE IS PROVIDED BY TI AND TI'S LICENSORS "AS IS" AND ANY EXPRESS
* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL TI AND TI'S LICENSORS BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
* OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
* OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
* OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/




#ifndef TIVX_KERNEL_HARRISC_CORNERS_
#define TIVX_KERNEL_HARRISC_CORNERS_


#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \file
 * \brief Interface file for fast corners kernel
 */


/*!
 * \brief Index of the input image
 *
 * \ingroup group_tivx_int_common_kernel
 */
#define TIVX_KERNEL_HARRISC_IN_IMG_IDX                   (0U)

/*!
 * \brief Index of the scalar strenth threshold
 *
 * \ingroup group_tivx_int_common_kernel
 */
#define TIVX_KERNEL_HARRISC_IN_SC_THR_IDX                (1U)

/*!
 * \brief Index of the radial Euclidean distance for non-maximum suppression
 *
 * \ingroup group_tivx_int_common_kernel
 */
#define TIVX_KERNEL_HARRISC_IN_SC_DIST_IDX               (2U)

/*!
 * \brief Index of the scalar sensitivity threshold k from the
 *        Harris Stephens equation
 *
 * \ingroup group_tivx_int_common_kernel
 */
#define TIVX_KERNEL_HARRISC_IN_SC_SENS_IDX               (3U)

/*!
 * \brief Index of The gradient window size to use on the input
 *
 * \ingroup group_tivx_int_common_kernel
 */
#define TIVX_KERNEL_HARRISC_IN_SC_GS_IDX                 (4U)

/*!
 * \brief Index of The block window size used to compute the Harris Corner score
 *
 * \ingroup group_tivx_int_common_kernel
 */
#define TIVX_KERNEL_HARRISC_IN_SC_BS_IDX                 (5U)

/*!
 * \brief Index of the output array corners
 *
 * \ingroup group_tivx_int_common_kernel
 */
#define TIVX_KERNEL_HARRISC_OUT_ARR_IDX                  (6U)

/*!
 * \brief Index of the scalar containing array size
 *
 * \ingroup group_tivx_int_common_kernel
 */
#define TIVX_KERNEL_HARRISC_OUT_SC_CNT_IDX               (7U)

/*!
 * \brief Max Params supported by fast corners kernel
 *
 * \ingroup group_tivx_int_common_kernel
 */
#define TIVX_KERNEL_HARRISC_MAX_PARAMS            (8U)

/*!
 * \brief Minimu width/height supported by Fast corner
 *
 * \ingroup group_tivx_int_common_kernel
 */
#define TIVX_KERNEL_HARRISC_MIN_SIZE              (7U)

#ifdef __cplusplus
}
#endif

#endif
