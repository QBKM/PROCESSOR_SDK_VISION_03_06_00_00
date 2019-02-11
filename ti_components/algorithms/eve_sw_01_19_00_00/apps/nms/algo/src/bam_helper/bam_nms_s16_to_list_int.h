/*
*
* Copyright (c) 2009-2017 Texas Instruments Incorporated
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


/**
 *  @file       bam_nms_s16_to_list_int.h
 *
 *  @brief      This header defines internal structures for integrating the combination of
 *                NMS 16 bit signed kernel and bin to image list kernel  into BAM.
 */
#ifndef BAM_NMS_S16_TO_LIST_INT_H_
#define BAM_NMS_S16_TO_LIST_INT_H_

#include <stdint.h>
#include <vcop.h>

#include "algframework.h"
#include "bam_bin_image_to_list_int.h"
#include "bam_nonMaxSuppress_mxn_S16bitPack_int.h"
#include "bam_bin_image_to_list.h"
#include "bam_nonMaxSuppress_mxn_S16bitPack.h"

typedef enum
{
  NMS_MXN_S16_TO_LIST_INTERNAL_NMSBINPACK_PARAM_IDX        =    0,
  NMS_MXN_S16_TO_LIST_INTERNAL_BINTOLIST_PARAM_IDX,
  NMS_MXN_S16_TO_LIST_INTERNAL_UPDATE_DST_PARAM_IDX,
  NMS_MXN_S16_TO_LIST_INTERNAL_SCRATCHBUF1_IDX ,
  NMS_MXN_S16_TO_LIST_INTERNAL_BINPACK_BUF_IDX ,
  NMS_MXN_S16_TO_LIST_INTERNAL_XSEQ_IDX ,
  NMS_MXN_S16_TO_LIST_INTERNAL_STARTXY_IDX,
  NMS_MXN_S16_TO_LIST_INTERNAL_DSTPTR_OFFSET_IDX,
  NMS_MXN_S16_TO_LIST_INTERNAL_NUM_BLOCK
} eBAM_NMS_MXN_S16_TO_LIST_INTERNAL_BLOCKS;


#define NUM_IN_BLOCKS (BAM_NMS_MXN_S16_TO_LIST_NUM_INPUT_BLOCKS)
#define NUM_OUT_BLOCKS (BAM_NMS_MXN_S16_TO_LIST_NUM_OUTPUT_BLOCKS)
#define NUM_INTERNAL_BLOCKS (NMS_MXN_S16_TO_LIST_INTERNAL_NUM_BLOCK)

typedef struct bam_nms_16s_to_list_context
{
  /* Must always follow this order: pInternalBlock[], pInBlock[], pOutputBlock[], args */
  void *pInternalBlock[NUM_INTERNAL_BLOCKS];
  void *pInBlock[NUM_IN_BLOCKS];
  void *pOutBlock[NUM_OUT_BLOCKS];
  BAM_Nms_16s_to_list_CtrlArgs  kernelArgs;
  BAM_Bin_image_to_list_Context  binImgToListContext;
  BAM_NonMaxSuppress_mxn_S16bitPack_Context  nms16sbitPackContext;
  uint16_t blockCount;
  uint16_t numHorzBlocks;
  uint16_t numNms16sbitPackParamCnt;
  uint16_t nmsBinPackPrmBlockOffset1;
  uint16_t nmsBinPackPrmBlockOffset2;
  uint16_t   *pNmsBinPackDstOffset[2];
  uint8_t     pingPongFlag;
  uint16_t     nmsBinPackblockJump;
} BAM_Nms_16s_to_list_Context;


#endif /* BAM_NMS_S16_TO_LIST_INT_H_*/
