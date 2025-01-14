/*
* module name : Structure From Motion
*
* module descripton : Generates sparse 3D points from optical flow information in camera captured images
*
*/
/*
 
Copyright (c) 2009-2017 Texas Instruments Incorporated
 
All rights reserved not granted herein.
 
Limited License.  
 
Texas Instruments Incorporated grants a world-wide, royalty-free, non-exclusive license under copyrights and patents it now or hereafter owns or controls to make, have made, use, import, offer to sell and sell ("Utilize") this software subject to the terms herein.  With respect to the foregoing patent license, such license is granted  solely to the extent that any such patent is necessary to Utilize the software alone.  The patent license shall not apply to any combinations which include this software, other than combinations with devices manufactured by or for TI (�TI Devices�).  No hardware patent is licensed hereunder.
 
Redistributions must preserve existing copyright notices and reproduce this license (including the above copyright notice and the disclaimer and (if applicable) source code license limitations below) in the documentation and/or other materials provided with the distribution
 
Redistribution and use in binary form, without modification, are permitted provided that the following conditions are met:
 
*       No reverse engineering, decompilation, or disassembly of this software is permitted with respect to any software provided in binary form.
 
*       any redistribution and use are licensed by TI for use only with TI Devices.
 
*       Nothing shall obligate TI to provide you with source code for the software licensed and provided to you in object code.
 
If software source code is provided to you, modification and redistribution of the source code are permitted provided that the following conditions are met:
 
*       any redistribution and use of the source code, including any resulting derivative works, are licensed by TI for use only with TI Devices.
 
*       any redistribution and use of any object code compiled from the source code and any resulting derivative works, are licensed by TI for use only with TI Devices.
 
Neither the name of Texas Instruments Incorporated nor the names of its suppliers may be used to endorse or promote products derived from this software without specific prior written permission.
 
DISCLAIMER.
 
THIS SOFTWARE IS PROVIDED BY TI AND TI�S LICENSORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL TI AND TI�S LICENSORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 
*/
#ifndef SFM_CONFIG_H_
#define SFM_CONFIG_H_

#include <stdint.h>
#include "configparser.h"
#include <xdais_types.h>
#include "isfm_ti.h"

#define FILE_NAME_SIZE  (256)
#define MAX_TESTCASES (20)

extern double HSV_COLOR_MAP[][3];

#define UCHAR_MAX     0xff
typedef struct
{
  uint8_t  inFeatFileName[FILE_NAME_SIZE];
  uint8_t  inImgFileName[FILE_NAME_SIZE];
  uint8_t  outFeatFileName[FILE_NAME_SIZE];
  uint8_t  outImgFileName[FILE_NAME_SIZE];
  uint8_t  inCamPrmFileName[FILE_NAME_SIZE];
  uint16_t imageWidth;
  uint16_t imageHeight;
  uint16_t startFrame;
  uint16_t maxFrames;
  uint16_t maxNumTracks;
  uint16_t profileEn;
  int32_t  maxRansacItr;
  int32_t  maxTriangItr;
  int32_t  camExtPrmNormType;
  uint8_t  curPrev3DPtFlag;
  uint16_t compareEn;
  uint8_t  compareRsultPath[FILE_NAME_SIZE];
  uint8_t  refFeatFileName[FILE_NAME_SIZE];
  uint16_t sfmEn;
  uint32_t fMatrixCalcMethod;
  uint32_t fMatrixPrunEn;
  uint32_t fMatrixInTh;
  float    pointPruneAngle;
} ssfm_Config;

extern uint32_t sfm_numTestCases;
extern ssfm_Config gConfig_sfm[MAX_TESTCASES];
extern sTokenMapping gsTokenMap_sfm[MAX_ITEMS_TO_PARSE];

#endif /*TI_SFM_CONFIG_H_*/

