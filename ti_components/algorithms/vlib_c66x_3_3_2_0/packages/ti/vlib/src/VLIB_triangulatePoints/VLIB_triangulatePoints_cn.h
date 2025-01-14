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
**|         Copyright (c) 2007-2012 Texas Instruments Incorporated           |**
**|                        ALL RIGHTS RESERVED                               |**
**|                                                                          |**
**| Permission to use, copy, modify, or distribute this software,            |**
**| whether in part or in whole, for any purpose is forbidden without        |**
**| a signed licensing agreement and NDA from Texas Instruments              |**
**| Incorporated (TI).                                                       |**
**|                                                                          |**
**| TI makes no representation or warranties with respect to the             |**
**| performance of this computer program, and specifically disclaims         |**
**| any responsibility for any damages, special or consequential,            |**
**| connected with the use of this program.                                  |**
**|                                                                          |**
**+--------------------------------------------------------------------------+**
*******************************************************************************/

#ifndef VLIB_TRIANGULATEPOINT_CN_H_
#define VLIB_TRIANGULATEPOINT_CN_H_ 1

#include "VLIB_triangulatePoints_types.h"

int32_t VLIB_triangulatePoints_cn(VLIB_F32 *curTrack,
                                  VLIB_F32 *normCamExtPrm,
                                  uint8_t *curTrackLength,
                                  uint32_t maxIter,
                                  VLIB_F32 *Xcam,
                                  VLIB_F32 *scratch,
                                  uint32_t totalTracks,
                                  uint8_t *validOut,
                                  uint32_t flag);
#endif
/* ======================================================================== */
/*  End of file:  VLIB_triangulatePoints_cn.h                    */
/* ======================================================================== */

