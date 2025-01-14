/* =============================================================================
 *   Copyright (c) Texas Instruments Incorporated 2014-2016
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */


/**
*
*  \file     hw_edma_tpcc.h
*
*  \brief    register-level header file for EDMA_TPCC
*
**/

#ifndef HW_EDMA_TPCC_H_
#define HW_EDMA_TPCC_H_

#ifdef __cplusplus
extern "C"
{
#endif

/****************************************************************************************************
* Register Definitions
****************************************************************************************************/
#define EDMA_TPCC_PID                                                                                      ((uint32_t)0x0U)
#define EDMA_TPCC_CCCFG                                                                                    ((uint32_t)0x4U)
#define EDMA_TPCC_CLKGDIS                                                                                  ((uint32_t)0xfcU)
#define EDMA_TPCC_DCHMAPN(n)                                                                               ((uint32_t)0x100U + ((n) * 4U))
#define EDMA_TPCC_QCHMAPN(n)                                                                               ((uint32_t)0x200U + ((n) * 4U))
#define EDMA_TPCC_DMAQNUMN(n)                                                                              ((uint32_t)0x240U + ((n) * 4U))
#define EDMA_TPCC_QDMAQNUM                                                                                 ((uint32_t)0x260U)
#define EDMA_TPCC_QUETCMAP                                                                                 ((uint32_t)0x280U)
#define EDMA_TPCC_QUEPRI                                                                                   ((uint32_t)0x284U)
#define EDMA_TPCC_EMR                                                                                      ((uint32_t)0x300U)
#define EDMA_TPCC_EMRH                                                                                     ((uint32_t)0x304U)
#define EDMA_TPCC_EMCR                                                                                     ((uint32_t)0x308U)
#define EDMA_TPCC_EMCRH                                                                                    ((uint32_t)0x30cU)
#define EDMA_TPCC_QEMR                                                                                     ((uint32_t)0x310U)
#define EDMA_TPCC_QEMCR                                                                                    ((uint32_t)0x314U)
#define EDMA_TPCC_CCERR                                                                                    ((uint32_t)0x318U)
#define EDMA_TPCC_CCERRCLR                                                                                 ((uint32_t)0x31cU)
#define EDMA_TPCC_EEVAL                                                                                    ((uint32_t)0x320U)
#define EDMA_TPCC_DRAEM(n)                                                                                 ((uint32_t)0x340U + ((n) * 8U))
#define EDMA_TPCC_DRAEHM(n)                                                                                ((uint32_t)0x344U + ((n) * 8U))
#define EDMA_TPCC_QRAEN(n)                                                                                 ((uint32_t)0x380U + ((n) * 4U))
#define EDMA_TPCC_QNE0(n)                                                                                  ((uint32_t)0x400U + ((n) * 64U))
#define EDMA_TPCC_QNE1(n)                                                                                  ((uint32_t)0x404U + ((n) * 64U))
#define EDMA_TPCC_QNE2(n)                                                                                  ((uint32_t)0x408U + ((n) * 64U))
#define EDMA_TPCC_QNE3(n)                                                                                  ((uint32_t)0x40cU + ((n) * 64U))
#define EDMA_TPCC_QNE4(n)                                                                                  ((uint32_t)0x410U + ((n) * 64U))
#define EDMA_TPCC_QNE5(n)                                                                                  ((uint32_t)0x414U + ((n) * 64U))
#define EDMA_TPCC_QNE6(n)                                                                                  ((uint32_t)0x418U + ((n) * 64U))
#define EDMA_TPCC_QNE7(n)                                                                                  ((uint32_t)0x41cU + ((n) * 64U))
#define EDMA_TPCC_QNE8(n)                                                                                  ((uint32_t)0x420U + ((n) * 64U))
#define EDMA_TPCC_QNE9(n)                                                                                  ((uint32_t)0x424U + ((n) * 64U))
#define EDMA_TPCC_QNE10(n)                                                                                 ((uint32_t)0x428U + ((n) * 64U))
#define EDMA_TPCC_QNE11(n)                                                                                 ((uint32_t)0x42cU + ((n) * 64U))
#define EDMA_TPCC_QNE12(n)                                                                                 ((uint32_t)0x430U + ((n) * 64U))
#define EDMA_TPCC_QNE13(n)                                                                                 ((uint32_t)0x434U + ((n) * 64U))
#define EDMA_TPCC_QNE14(n)                                                                                 ((uint32_t)0x438U + ((n) * 64U))
#define EDMA_TPCC_QNE15(n)                                                                                 ((uint32_t)0x43cU + ((n) * 64U))
#define EDMA_TPCC_QSTATN(n)                                                                                ((uint32_t)0x600U + ((n) * 4U))
#define EDMA_TPCC_QWMTHRA                                                                                  ((uint32_t)0x620U)
#define EDMA_TPCC_QWMTHRB                                                                                  ((uint32_t)0x624U)
#define EDMA_TPCC_CCSTAT                                                                                   ((uint32_t)0x640U)
#define EDMA_TPCC_AETCTL                                                                                   ((uint32_t)0x700U)
#define EDMA_TPCC_AETSTAT                                                                                  ((uint32_t)0x704U)
#define EDMA_TPCC_AETCMD                                                                                   ((uint32_t)0x708U)
#define EDMA_TPCC_MPFAR                                                                                    ((uint32_t)0x800U)
#define EDMA_TPCC_MPFSR                                                                                    ((uint32_t)0x804U)
#define EDMA_TPCC_MPFCR                                                                                    ((uint32_t)0x808U)
#define EDMA_TPCC_MPPAG                                                                                    ((uint32_t)0x80cU)
#define EDMA_TPCC_MPPAN(n)                                                                                 ((uint32_t)0x810U + ((n) * 4U))
#define EDMA_TPCC_ER                                                                                       ((uint32_t)0x1000U)
#define EDMA_TPCC_ERH                                                                                      ((uint32_t)0x1004U)
#define EDMA_TPCC_ECR                                                                                      ((uint32_t)0x1008U)
#define EDMA_TPCC_ECRH                                                                                     ((uint32_t)0x100cU)
#define EDMA_TPCC_ESR                                                                                      ((uint32_t)0x1010U)
#define EDMA_TPCC_ESRH                                                                                     ((uint32_t)0x1014U)
#define EDMA_TPCC_CER                                                                                      ((uint32_t)0x1018U)
#define EDMA_TPCC_CERH                                                                                     ((uint32_t)0x101cU)
#define EDMA_TPCC_EER                                                                                      ((uint32_t)0x1020U)
#define EDMA_TPCC_EERH                                                                                     ((uint32_t)0x1024U)
#define EDMA_TPCC_EECR                                                                                     ((uint32_t)0x1028U)
#define EDMA_TPCC_EECRH                                                                                    ((uint32_t)0x102cU)
#define EDMA_TPCC_EESR                                                                                     ((uint32_t)0x1030U)
#define EDMA_TPCC_EESRH                                                                                    ((uint32_t)0x1034U)
#define EDMA_TPCC_SER                                                                                      ((uint32_t)0x1038U)
#define EDMA_TPCC_SERH                                                                                     ((uint32_t)0x103cU)
#define EDMA_TPCC_SECR                                                                                     ((uint32_t)0x1040U)
#define EDMA_TPCC_SECRH                                                                                    ((uint32_t)0x1044U)
#define EDMA_TPCC_IER                                                                                      ((uint32_t)0x1050U)
#define EDMA_TPCC_IERH                                                                                     ((uint32_t)0x1054U)
#define EDMA_TPCC_IECR                                                                                     ((uint32_t)0x1058U)
#define EDMA_TPCC_IECRH                                                                                    ((uint32_t)0x105cU)
#define EDMA_TPCC_IESR                                                                                     ((uint32_t)0x1060U)
#define EDMA_TPCC_IESRH                                                                                    ((uint32_t)0x1064U)
#define EDMA_TPCC_IPR                                                                                      ((uint32_t)0x1068U)
#define EDMA_TPCC_IPRH                                                                                     ((uint32_t)0x106cU)
#define EDMA_TPCC_ICR                                                                                      ((uint32_t)0x1070U)
#define EDMA_TPCC_ICRH                                                                                     ((uint32_t)0x1074U)
#define EDMA_TPCC_IEVAL                                                                                    ((uint32_t)0x1078U)
#define EDMA_TPCC_QEER                                                                                     ((uint32_t)0x1084U)
#define EDMA_TPCC_QEECR                                                                                    ((uint32_t)0x1088U)
#define EDMA_TPCC_QEESR                                                                                    ((uint32_t)0x108cU)
#define EDMA_TPCC_QSER                                                                                     ((uint32_t)0x1090U)
#define EDMA_TPCC_QSECR                                                                                    ((uint32_t)0x1094U)
#define EDMA_TPCC_QER                                                                                      ((uint32_t)0x1080U)
#define EDMA_TPCC_IESRH_RN(n)                                                                              ((uint32_t)0x2064U + ((n) * 512U))
#define EDMA_TPCC_SER_RN(n)                                                                                ((uint32_t)0x2038U + ((n) * 512U))
#define EDMA_TPCC_SERH_RN(n)                                                                               ((uint32_t)0x203cU + ((n) * 512U))
#define EDMA_TPCC_ESR_RN(n)                                                                                ((uint32_t)0x2010U + ((n) * 512U))
#define EDMA_TPCC_EECR_RN(n)                                                                               ((uint32_t)0x2028U + ((n) * 512U))
#define EDMA_TPCC_ER_RN(n)                                                                                 ((uint32_t)0x2000U + ((n) * 512U))
#define EDMA_TPCC_ICRH_RN(n)                                                                               ((uint32_t)0x2074U + ((n) * 512U))
#define EDMA_TPCC_EECRH_RN(n)                                                                              ((uint32_t)0x202cU + ((n) * 512U))
#define EDMA_TPCC_IESR_RN(n)                                                                               ((uint32_t)0x2060U + ((n) * 512U))
#define EDMA_TPCC_SECR_RN(n)                                                                               ((uint32_t)0x2040U + ((n) * 512U))
#define EDMA_TPCC_EESR_RN(n)                                                                               ((uint32_t)0x2030U + ((n) * 512U))
#define EDMA_TPCC_QER_RN(n)                                                                                ((uint32_t)0x2080U + ((n) * 512U))
#define EDMA_TPCC_SECRH_RN(n)                                                                              ((uint32_t)0x2044U + ((n) * 512U))
#define EDMA_TPCC_EESRH_RN(n)                                                                              ((uint32_t)0x2034U + ((n) * 512U))
#define EDMA_TPCC_IER_RN(n)                                                                                ((uint32_t)0x2050U + ((n) * 512U))
#define EDMA_TPCC_QEECR_RN(n)                                                                              ((uint32_t)0x2088U + ((n) * 512U))
#define EDMA_TPCC_EER_RN(n)                                                                                ((uint32_t)0x2020U + ((n) * 512U))
#define EDMA_TPCC_CERH_RN(n)                                                                               ((uint32_t)0x201cU + ((n) * 512U))
#define EDMA_TPCC_QEER_RN(n)                                                                               ((uint32_t)0x2084U + ((n) * 512U))
#define EDMA_TPCC_QSECR_RN(n)                                                                              ((uint32_t)0x2094U + ((n) * 512U))
#define EDMA_TPCC_ECRH_RN(n)                                                                               ((uint32_t)0x200cU + ((n) * 512U))
#define EDMA_TPCC_ICR_RN(n)                                                                                ((uint32_t)0x2070U + ((n) * 512U))
#define EDMA_TPCC_IPRH_RN(n)                                                                               ((uint32_t)0x206cU + ((n) * 512U))
#define EDMA_TPCC_CER_RN(n)                                                                                ((uint32_t)0x2018U + ((n) * 512U))
#define EDMA_TPCC_IECRH_RN(n)                                                                              ((uint32_t)0x205cU + ((n) * 512U))
#define EDMA_TPCC_IECR_RN(n)                                                                               ((uint32_t)0x2058U + ((n) * 512U))
#define EDMA_TPCC_QSER_RN(n)                                                                               ((uint32_t)0x2090U + ((n) * 512U))
#define EDMA_TPCC_IERH_RN(n)                                                                               ((uint32_t)0x2054U + ((n) * 512U))
#define EDMA_TPCC_ECR_RN(n)                                                                                ((uint32_t)0x2008U + ((n) * 512U))
#define EDMA_TPCC_EERH_RN(n)                                                                               ((uint32_t)0x2024U + ((n) * 512U))
#define EDMA_TPCC_IPR_RN(n)                                                                                ((uint32_t)0x2068U + ((n) * 512U))
#define EDMA_TPCC_ESRH_RN(n)                                                                               ((uint32_t)0x2014U + ((n) * 512U))
#define EDMA_TPCC_QEESR_RN(n)                                                                              ((uint32_t)0x208cU + ((n) * 512U))
#define EDMA_TPCC_ERH_RN(n)                                                                                ((uint32_t)0x2004U + ((n) * 512U))
#define EDMA_TPCC_IEVAL_RN(n)                                                                              ((uint32_t)0x2078U + ((n) * 512U))
#define EDMA_TPCC_OPT(n)                                                                                   ((uint32_t)0x4000U + ((n) * 32U))
#define EDMA_TPCC_SRC(n)                                                                                   ((uint32_t)0x4004U + ((n) * 32U))
#define EDMA_TPCC_ABCNT(n)                                                                                 ((uint32_t)0x4008U + ((n) * 32U))
#define EDMA_TPCC_BIDX(n)                                                                                  ((uint32_t)0x4010U + ((n) * 32U))
#define EDMA_TPCC_LNK(n)                                                                                   ((uint32_t)0x4014U + ((n) * 32U))
#define EDMA_TPCC_CIDX(n)                                                                                  ((uint32_t)0x4018U + ((n) * 32U))
#define EDMA_TPCC_CCNT(n)                                                                                  ((uint32_t)0x401cU + ((n) * 32U))
#define EDMA_TPCC_DST(n)                                                                                   ((uint32_t)0x400cU + ((n) * 32U))

/****************************************************************************************************
* Field Definition Macros
****************************************************************************************************/

#define EDMA_TPCC_PID_PID_SHIFT                                                                           ((uint32_t)0U)
#define EDMA_TPCC_PID_PID_MASK                                                                            ((uint32_t)0xffffffffU)

#define EDMA_TPCC_CCCFG_RESERVED_0_SHIFT                                                                  ((uint32_t)26U)
#define EDMA_TPCC_CCCFG_RESERVED_0_MASK                                                                   ((uint32_t)0xfc000000U)

#define EDMA_TPCC_CCCFG_RESERVED_1_SHIFT                                                                  ((uint32_t)22U)
#define EDMA_TPCC_CCCFG_RESERVED_1_MASK                                                                   ((uint32_t)0x00c00000U)

#define EDMA_TPCC_CCCFG_RESERVED_2_SHIFT                                                                  ((uint32_t)19U)
#define EDMA_TPCC_CCCFG_RESERVED_2_MASK                                                                   ((uint32_t)0x00080000U)

#define EDMA_TPCC_CCCFG_RESERVED_3_SHIFT                                                                  ((uint32_t)15U)
#define EDMA_TPCC_CCCFG_RESERVED_3_MASK                                                                   ((uint32_t)0x00008000U)

#define EDMA_TPCC_CCCFG_RESERVED_4_SHIFT                                                                  ((uint32_t)11U)
#define EDMA_TPCC_CCCFG_RESERVED_4_MASK                                                                   ((uint32_t)0x00000800U)

#define EDMA_TPCC_CCCFG_RESERVED_5_SHIFT                                                                  ((uint32_t)7U)
#define EDMA_TPCC_CCCFG_RESERVED_5_MASK                                                                   ((uint32_t)0x00000080U)

#define EDMA_TPCC_CCCFG_RESERVED_6_SHIFT                                                                  ((uint32_t)3U)
#define EDMA_TPCC_CCCFG_RESERVED_6_MASK                                                                   ((uint32_t)0x00000008U)

#define EDMA_TPCC_CCCFG_NUM_DMACH_SHIFT                                                                   ((uint32_t)0U)
#define EDMA_TPCC_CCCFG_NUM_DMACH_MASK                                                                    ((uint32_t)0x00000007U)
#define EDMA_TPCC_CCCFG_NUM_DMACH_NUMDMACH4                                                               ((uint32_t)1U)
#define EDMA_TPCC_CCCFG_NUM_DMACH_NUMDMACH32                                                              ((uint32_t)4U)
#define EDMA_TPCC_CCCFG_NUM_DMACH_NUMDMACH8                                                               ((uint32_t)2U)
#define EDMA_TPCC_CCCFG_NUM_DMACH_NUMDMACH64                                                              ((uint32_t)5U)
#define EDMA_TPCC_CCCFG_NUM_DMACH_NUMDMACH16                                                              ((uint32_t)3U)
#define EDMA_TPCC_CCCFG_NUM_DMACH_NUMDMACH0                                                               ((uint32_t)0U)

#define EDMA_TPCC_CCCFG_NUM_QDMACH_SHIFT                                                                  ((uint32_t)4U)
#define EDMA_TPCC_CCCFG_NUM_QDMACH_MASK                                                                   ((uint32_t)0x00000070U)
#define EDMA_TPCC_CCCFG_NUM_QDMACH_NUMQDMACH4                                                             ((uint32_t)2U)
#define EDMA_TPCC_CCCFG_NUM_QDMACH_NUMQDMACH8                                                             ((uint32_t)4U)
#define EDMA_TPCC_CCCFG_NUM_QDMACH_NUMQDMACH6                                                             ((uint32_t)3U)
#define EDMA_TPCC_CCCFG_NUM_QDMACH_NUMQDMACH0                                                             ((uint32_t)0U)
#define EDMA_TPCC_CCCFG_NUM_QDMACH_NUMQDMACH2                                                             ((uint32_t)1U)

#define EDMA_TPCC_CCCFG_NUM_INTCH_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_CCCFG_NUM_INTCH_MASK                                                                    ((uint32_t)0x00000700U)
#define EDMA_TPCC_CCCFG_NUM_INTCH_NUMINTCH32                                                              ((uint32_t)3U)
#define EDMA_TPCC_CCCFG_NUM_INTCH_NUMINTCH64                                                              ((uint32_t)4U)
#define EDMA_TPCC_CCCFG_NUM_INTCH_NUMINTCH16                                                              ((uint32_t)2U)
#define EDMA_TPCC_CCCFG_NUM_INTCH_NUMINTCH8                                                               ((uint32_t)1U)

#define EDMA_TPCC_CCCFG_NUM_PAENTRY_SHIFT                                                                 ((uint32_t)12U)
#define EDMA_TPCC_CCCFG_NUM_PAENTRY_MASK                                                                  ((uint32_t)0x00007000U)
#define EDMA_TPCC_CCCFG_NUM_PAENTRY_NUMPARAMENTRIES16                                                     ((uint32_t)0U)
#define EDMA_TPCC_CCCFG_NUM_PAENTRY_NUMPARAMENTRIES32                                                     ((uint32_t)1U)
#define EDMA_TPCC_CCCFG_NUM_PAENTRY_NUMPARAMENTRIES64                                                     ((uint32_t)2U)
#define EDMA_TPCC_CCCFG_NUM_PAENTRY_NUMPARAMENTRIES128                                                    ((uint32_t)3U)
#define EDMA_TPCC_CCCFG_NUM_PAENTRY_NUMPARAMENTRIES256                                                    ((uint32_t)4U)
#define EDMA_TPCC_CCCFG_NUM_PAENTRY_NUMPARAMENTRIES512                                                    ((uint32_t)5U)

#define EDMA_TPCC_CCCFG_NUM_REGN_SHIFT                                                                    ((uint32_t)20U)
#define EDMA_TPCC_CCCFG_NUM_REGN_MASK                                                                     ((uint32_t)0x00300000U)
#define EDMA_TPCC_CCCFG_NUM_REGN_NUMREG4                                                                  ((uint32_t)2U)
#define EDMA_TPCC_CCCFG_NUM_REGN_NUMREG8                                                                  ((uint32_t)3U)
#define EDMA_TPCC_CCCFG_NUM_REGN_NUMREG0                                                                  ((uint32_t)0U)
#define EDMA_TPCC_CCCFG_NUM_REGN_NUMREG2                                                                  ((uint32_t)1U)

#define EDMA_TPCC_CCCFG_CHMAP_EXIST_SHIFT                                                                 ((uint32_t)24U)
#define EDMA_TPCC_CCCFG_CHMAP_EXIST_MASK                                                                  ((uint32_t)0x01000000U)

#define EDMA_TPCC_CCCFG_MP_EXIST_SHIFT                                                                    ((uint32_t)25U)
#define EDMA_TPCC_CCCFG_MP_EXIST_MASK                                                                     ((uint32_t)0x02000000U)

#define EDMA_TPCC_CCCFG_NUM_EVQUE_SHIFT                                                                   ((uint32_t)16U)
#define EDMA_TPCC_CCCFG_NUM_EVQUE_MASK                                                                    ((uint32_t)0x00070000U)
#define EDMA_TPCC_CCCFG_NUM_EVQUE_NUMTC7                                                                  ((uint32_t)6U)
#define EDMA_TPCC_CCCFG_NUM_EVQUE_NUMTC4                                                                  ((uint32_t)3U)
#define EDMA_TPCC_CCCFG_NUM_EVQUE_NUMTC1                                                                  ((uint32_t)0U)
#define EDMA_TPCC_CCCFG_NUM_EVQUE_NUMTC6                                                                  ((uint32_t)5U)
#define EDMA_TPCC_CCCFG_NUM_EVQUE_NUMTC8                                                                  ((uint32_t)7U)
#define EDMA_TPCC_CCCFG_NUM_EVQUE_NUMTC5                                                                  ((uint32_t)4U)
#define EDMA_TPCC_CCCFG_NUM_EVQUE_NUMTC3                                                                  ((uint32_t)2U)
#define EDMA_TPCC_CCCFG_NUM_EVQUE_NUMTC2                                                                  ((uint32_t)1U)

#define EDMA_TPCC_CLKGDIS_CLKGDIS_SHIFT                                                                   ((uint32_t)0U)
#define EDMA_TPCC_CLKGDIS_CLKGDIS_MASK                                                                    ((uint32_t)0x00000001U)

#define EDMA_TPCC_CLKGDIS_RESERVED_0_SHIFT                                                                ((uint32_t)1U)
#define EDMA_TPCC_CLKGDIS_RESERVED_0_MASK                                                                 ((uint32_t)0xfffffffeU)

#define EDMA_TPCC_DCHMAPN_PAENTRY_SHIFT                                                                   ((uint32_t)5U)
#define EDMA_TPCC_DCHMAPN_PAENTRY_MASK                                                                    ((uint32_t)0x00003fe0U)

#define EDMA_TPCC_DCHMAPN_RESERVED_0_SHIFT                                                                ((uint32_t)14U)
#define EDMA_TPCC_DCHMAPN_RESERVED_0_MASK                                                                 ((uint32_t)0xffffc000U)

#define EDMA_TPCC_DCHMAPN_RESERVED_1_SHIFT                                                                ((uint32_t)0U)
#define EDMA_TPCC_DCHMAPN_RESERVED_1_MASK                                                                 ((uint32_t)0x0000001fU)

#define EDMA_TPCC_QCHMAPN_PAENTRY_SHIFT                                                                   ((uint32_t)5U)
#define EDMA_TPCC_QCHMAPN_PAENTRY_MASK                                                                    ((uint32_t)0x00003fe0U)

#define EDMA_TPCC_QCHMAPN_TRWORD_SHIFT                                                                    ((uint32_t)2U)
#define EDMA_TPCC_QCHMAPN_TRWORD_MASK                                                                     ((uint32_t)0x0000001cU)

#define EDMA_TPCC_QCHMAPN_RESERVED_0_SHIFT                                                                ((uint32_t)14U)
#define EDMA_TPCC_QCHMAPN_RESERVED_0_MASK                                                                 ((uint32_t)0xffffc000U)

#define EDMA_TPCC_QCHMAPN_RESERVED_1_SHIFT                                                                ((uint32_t)0U)
#define EDMA_TPCC_QCHMAPN_RESERVED_1_MASK                                                                 ((uint32_t)0x00000003U)

#define EDMA_TPCC_DMAQNUMN_E6_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_DMAQNUMN_E6_MASK                                                                        ((uint32_t)0x07000000U)
#define EDMA_TPCC_DMAQNUMN_E6_Q3                                                                          ((uint32_t)3U)
#define EDMA_TPCC_DMAQNUMN_E6_Q7                                                                          ((uint32_t)7U)
#define EDMA_TPCC_DMAQNUMN_E6_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_DMAQNUMN_E6_Q6                                                                          ((uint32_t)6U)
#define EDMA_TPCC_DMAQNUMN_E6_Q1                                                                          ((uint32_t)1U)
#define EDMA_TPCC_DMAQNUMN_E6_Q0                                                                          ((uint32_t)0U)
#define EDMA_TPCC_DMAQNUMN_E6_Q5                                                                          ((uint32_t)5U)
#define EDMA_TPCC_DMAQNUMN_E6_Q2                                                                          ((uint32_t)2U)

#define EDMA_TPCC_DMAQNUMN_E2_SHIFT                                                                       ((uint32_t)8U)
#define EDMA_TPCC_DMAQNUMN_E2_MASK                                                                        ((uint32_t)0x00000700U)
#define EDMA_TPCC_DMAQNUMN_E2_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_DMAQNUMN_E2_Q7                                                                          ((uint32_t)7U)
#define EDMA_TPCC_DMAQNUMN_E2_Q1                                                                          ((uint32_t)1U)
#define EDMA_TPCC_DMAQNUMN_E2_Q2                                                                          ((uint32_t)2U)
#define EDMA_TPCC_DMAQNUMN_E2_Q5                                                                          ((uint32_t)5U)
#define EDMA_TPCC_DMAQNUMN_E2_Q0                                                                          ((uint32_t)0U)
#define EDMA_TPCC_DMAQNUMN_E2_Q3                                                                          ((uint32_t)3U)
#define EDMA_TPCC_DMAQNUMN_E2_Q6                                                                          ((uint32_t)6U)

#define EDMA_TPCC_DMAQNUMN_E1_SHIFT                                                                       ((uint32_t)4U)
#define EDMA_TPCC_DMAQNUMN_E1_MASK                                                                        ((uint32_t)0x00000070U)
#define EDMA_TPCC_DMAQNUMN_E1_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_DMAQNUMN_E1_Q3                                                                          ((uint32_t)3U)
#define EDMA_TPCC_DMAQNUMN_E1_Q6                                                                          ((uint32_t)6U)
#define EDMA_TPCC_DMAQNUMN_E1_Q0                                                                          ((uint32_t)0U)
#define EDMA_TPCC_DMAQNUMN_E1_Q1                                                                          ((uint32_t)1U)
#define EDMA_TPCC_DMAQNUMN_E1_Q7                                                                          ((uint32_t)7U)
#define EDMA_TPCC_DMAQNUMN_E1_Q2                                                                          ((uint32_t)2U)
#define EDMA_TPCC_DMAQNUMN_E1_Q5                                                                          ((uint32_t)5U)

#define EDMA_TPCC_DMAQNUMN_E4_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_DMAQNUMN_E4_MASK                                                                        ((uint32_t)0x00070000U)
#define EDMA_TPCC_DMAQNUMN_E4_Q1                                                                          ((uint32_t)1U)
#define EDMA_TPCC_DMAQNUMN_E4_Q0                                                                          ((uint32_t)0U)
#define EDMA_TPCC_DMAQNUMN_E4_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_DMAQNUMN_E4_Q2                                                                          ((uint32_t)2U)
#define EDMA_TPCC_DMAQNUMN_E4_Q5                                                                          ((uint32_t)5U)
#define EDMA_TPCC_DMAQNUMN_E4_Q7                                                                          ((uint32_t)7U)
#define EDMA_TPCC_DMAQNUMN_E4_Q3                                                                          ((uint32_t)3U)
#define EDMA_TPCC_DMAQNUMN_E4_Q6                                                                          ((uint32_t)6U)

#define EDMA_TPCC_DMAQNUMN_E3_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_DMAQNUMN_E3_MASK                                                                        ((uint32_t)0x00007000U)
#define EDMA_TPCC_DMAQNUMN_E3_Q2                                                                          ((uint32_t)2U)
#define EDMA_TPCC_DMAQNUMN_E3_Q5                                                                          ((uint32_t)5U)
#define EDMA_TPCC_DMAQNUMN_E3_Q0                                                                          ((uint32_t)0U)
#define EDMA_TPCC_DMAQNUMN_E3_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_DMAQNUMN_E3_Q3                                                                          ((uint32_t)3U)
#define EDMA_TPCC_DMAQNUMN_E3_Q6                                                                          ((uint32_t)6U)
#define EDMA_TPCC_DMAQNUMN_E3_Q7                                                                          ((uint32_t)7U)
#define EDMA_TPCC_DMAQNUMN_E3_Q1                                                                          ((uint32_t)1U)

#define EDMA_TPCC_DMAQNUMN_E5_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_DMAQNUMN_E5_MASK                                                                        ((uint32_t)0x00700000U)
#define EDMA_TPCC_DMAQNUMN_E5_Q7                                                                          ((uint32_t)7U)
#define EDMA_TPCC_DMAQNUMN_E5_Q1                                                                          ((uint32_t)1U)
#define EDMA_TPCC_DMAQNUMN_E5_Q2                                                                          ((uint32_t)2U)
#define EDMA_TPCC_DMAQNUMN_E5_Q5                                                                          ((uint32_t)5U)
#define EDMA_TPCC_DMAQNUMN_E5_Q3                                                                          ((uint32_t)3U)
#define EDMA_TPCC_DMAQNUMN_E5_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_DMAQNUMN_E5_Q6                                                                          ((uint32_t)6U)
#define EDMA_TPCC_DMAQNUMN_E5_Q0                                                                          ((uint32_t)0U)

#define EDMA_TPCC_DMAQNUMN_E0_SHIFT                                                                       ((uint32_t)0U)
#define EDMA_TPCC_DMAQNUMN_E0_MASK                                                                        ((uint32_t)0x00000007U)
#define EDMA_TPCC_DMAQNUMN_E0_Q5                                                                          ((uint32_t)5U)
#define EDMA_TPCC_DMAQNUMN_E0_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_DMAQNUMN_E0_Q6                                                                          ((uint32_t)6U)
#define EDMA_TPCC_DMAQNUMN_E0_Q1                                                                          ((uint32_t)1U)
#define EDMA_TPCC_DMAQNUMN_E0_Q0                                                                          ((uint32_t)0U)
#define EDMA_TPCC_DMAQNUMN_E0_Q3                                                                          ((uint32_t)3U)
#define EDMA_TPCC_DMAQNUMN_E0_Q2                                                                          ((uint32_t)2U)
#define EDMA_TPCC_DMAQNUMN_E0_Q7                                                                          ((uint32_t)7U)

#define EDMA_TPCC_DMAQNUMN_E7_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_DMAQNUMN_E7_MASK                                                                        ((uint32_t)0x70000000U)
#define EDMA_TPCC_DMAQNUMN_E7_Q3                                                                          ((uint32_t)3U)
#define EDMA_TPCC_DMAQNUMN_E7_Q7                                                                          ((uint32_t)7U)
#define EDMA_TPCC_DMAQNUMN_E7_Q6                                                                          ((uint32_t)6U)
#define EDMA_TPCC_DMAQNUMN_E7_Q1                                                                          ((uint32_t)1U)
#define EDMA_TPCC_DMAQNUMN_E7_Q0                                                                          ((uint32_t)0U)
#define EDMA_TPCC_DMAQNUMN_E7_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_DMAQNUMN_E7_Q2                                                                          ((uint32_t)2U)
#define EDMA_TPCC_DMAQNUMN_E7_Q5                                                                          ((uint32_t)5U)

#define EDMA_TPCC_DMAQNUMN_RESERVED_0_SHIFT                                                               ((uint32_t)31U)
#define EDMA_TPCC_DMAQNUMN_RESERVED_0_MASK                                                                ((uint32_t)0x80000000U)

#define EDMA_TPCC_DMAQNUMN_RESERVED_1_SHIFT                                                               ((uint32_t)27U)
#define EDMA_TPCC_DMAQNUMN_RESERVED_1_MASK                                                                ((uint32_t)0x08000000U)

#define EDMA_TPCC_DMAQNUMN_RESERVED_2_SHIFT                                                               ((uint32_t)23U)
#define EDMA_TPCC_DMAQNUMN_RESERVED_2_MASK                                                                ((uint32_t)0x00800000U)

#define EDMA_TPCC_DMAQNUMN_RESERVED_3_SHIFT                                                               ((uint32_t)19U)
#define EDMA_TPCC_DMAQNUMN_RESERVED_3_MASK                                                                ((uint32_t)0x00080000U)

#define EDMA_TPCC_DMAQNUMN_RESERVED_4_SHIFT                                                               ((uint32_t)15U)
#define EDMA_TPCC_DMAQNUMN_RESERVED_4_MASK                                                                ((uint32_t)0x00008000U)

#define EDMA_TPCC_DMAQNUMN_RESERVED_5_SHIFT                                                               ((uint32_t)11U)
#define EDMA_TPCC_DMAQNUMN_RESERVED_5_MASK                                                                ((uint32_t)0x00000800U)

#define EDMA_TPCC_DMAQNUMN_RESERVED_6_SHIFT                                                               ((uint32_t)7U)
#define EDMA_TPCC_DMAQNUMN_RESERVED_6_MASK                                                                ((uint32_t)0x00000080U)

#define EDMA_TPCC_DMAQNUMN_RESERVED_7_SHIFT                                                               ((uint32_t)3U)
#define EDMA_TPCC_DMAQNUMN_RESERVED_7_MASK                                                                ((uint32_t)0x00000008U)

#define EDMA_TPCC_QDMAQNUM_E5_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_QDMAQNUM_E5_MASK                                                                        ((uint32_t)0x00700000U)
#define EDMA_TPCC_QDMAQNUM_E5_Q7                                                                          ((uint32_t)7U)
#define EDMA_TPCC_QDMAQNUM_E5_Q0                                                                          ((uint32_t)0U)
#define EDMA_TPCC_QDMAQNUM_E5_Q3                                                                          ((uint32_t)3U)
#define EDMA_TPCC_QDMAQNUM_E5_Q2                                                                          ((uint32_t)2U)
#define EDMA_TPCC_QDMAQNUM_E5_Q6                                                                          ((uint32_t)6U)
#define EDMA_TPCC_QDMAQNUM_E5_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_QDMAQNUM_E5_Q5                                                                          ((uint32_t)5U)
#define EDMA_TPCC_QDMAQNUM_E5_Q1                                                                          ((uint32_t)1U)

#define EDMA_TPCC_QDMAQNUM_E6_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_QDMAQNUM_E6_MASK                                                                        ((uint32_t)0x07000000U)
#define EDMA_TPCC_QDMAQNUM_E6_Q1                                                                          ((uint32_t)1U)
#define EDMA_TPCC_QDMAQNUM_E6_Q5                                                                          ((uint32_t)5U)
#define EDMA_TPCC_QDMAQNUM_E6_Q0                                                                          ((uint32_t)0U)
#define EDMA_TPCC_QDMAQNUM_E6_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_QDMAQNUM_E6_Q7                                                                          ((uint32_t)7U)
#define EDMA_TPCC_QDMAQNUM_E6_Q2                                                                          ((uint32_t)2U)
#define EDMA_TPCC_QDMAQNUM_E6_Q6                                                                          ((uint32_t)6U)
#define EDMA_TPCC_QDMAQNUM_E6_Q3                                                                          ((uint32_t)3U)

#define EDMA_TPCC_QDMAQNUM_E7_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_QDMAQNUM_E7_MASK                                                                        ((uint32_t)0x70000000U)
#define EDMA_TPCC_QDMAQNUM_E7_Q0                                                                          ((uint32_t)0U)
#define EDMA_TPCC_QDMAQNUM_E7_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_QDMAQNUM_E7_Q5                                                                          ((uint32_t)5U)
#define EDMA_TPCC_QDMAQNUM_E7_Q3                                                                          ((uint32_t)3U)
#define EDMA_TPCC_QDMAQNUM_E7_Q2                                                                          ((uint32_t)2U)
#define EDMA_TPCC_QDMAQNUM_E7_Q1                                                                          ((uint32_t)1U)
#define EDMA_TPCC_QDMAQNUM_E7_Q6                                                                          ((uint32_t)6U)
#define EDMA_TPCC_QDMAQNUM_E7_Q7                                                                          ((uint32_t)7U)

#define EDMA_TPCC_QDMAQNUM_E4_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_QDMAQNUM_E4_MASK                                                                        ((uint32_t)0x00070000U)
#define EDMA_TPCC_QDMAQNUM_E4_Q0                                                                          ((uint32_t)0U)
#define EDMA_TPCC_QDMAQNUM_E4_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_QDMAQNUM_E4_Q6                                                                          ((uint32_t)6U)
#define EDMA_TPCC_QDMAQNUM_E4_Q3                                                                          ((uint32_t)3U)
#define EDMA_TPCC_QDMAQNUM_E4_Q1                                                                          ((uint32_t)1U)
#define EDMA_TPCC_QDMAQNUM_E4_Q2                                                                          ((uint32_t)2U)
#define EDMA_TPCC_QDMAQNUM_E4_Q5                                                                          ((uint32_t)5U)
#define EDMA_TPCC_QDMAQNUM_E4_Q7                                                                          ((uint32_t)7U)

#define EDMA_TPCC_QDMAQNUM_E3_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_QDMAQNUM_E3_MASK                                                                        ((uint32_t)0x00007000U)
#define EDMA_TPCC_QDMAQNUM_E3_Q5                                                                          ((uint32_t)5U)
#define EDMA_TPCC_QDMAQNUM_E3_Q7                                                                          ((uint32_t)7U)
#define EDMA_TPCC_QDMAQNUM_E3_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_QDMAQNUM_E3_Q6                                                                          ((uint32_t)6U)
#define EDMA_TPCC_QDMAQNUM_E3_Q3                                                                          ((uint32_t)3U)
#define EDMA_TPCC_QDMAQNUM_E3_Q2                                                                          ((uint32_t)2U)
#define EDMA_TPCC_QDMAQNUM_E3_Q1                                                                          ((uint32_t)1U)
#define EDMA_TPCC_QDMAQNUM_E3_Q0                                                                          ((uint32_t)0U)

#define EDMA_TPCC_QDMAQNUM_E1_SHIFT                                                                       ((uint32_t)4U)
#define EDMA_TPCC_QDMAQNUM_E1_MASK                                                                        ((uint32_t)0x00000070U)
#define EDMA_TPCC_QDMAQNUM_E1_Q3                                                                          ((uint32_t)3U)
#define EDMA_TPCC_QDMAQNUM_E1_Q5                                                                          ((uint32_t)5U)
#define EDMA_TPCC_QDMAQNUM_E1_Q7                                                                          ((uint32_t)7U)
#define EDMA_TPCC_QDMAQNUM_E1_Q1                                                                          ((uint32_t)1U)
#define EDMA_TPCC_QDMAQNUM_E1_Q6                                                                          ((uint32_t)6U)
#define EDMA_TPCC_QDMAQNUM_E1_Q0                                                                          ((uint32_t)0U)
#define EDMA_TPCC_QDMAQNUM_E1_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_QDMAQNUM_E1_Q2                                                                          ((uint32_t)2U)

#define EDMA_TPCC_QDMAQNUM_E0_SHIFT                                                                       ((uint32_t)0U)
#define EDMA_TPCC_QDMAQNUM_E0_MASK                                                                        ((uint32_t)0x00000007U)
#define EDMA_TPCC_QDMAQNUM_E0_Q1                                                                          ((uint32_t)1U)
#define EDMA_TPCC_QDMAQNUM_E0_Q6                                                                          ((uint32_t)6U)
#define EDMA_TPCC_QDMAQNUM_E0_Q3                                                                          ((uint32_t)3U)
#define EDMA_TPCC_QDMAQNUM_E0_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_QDMAQNUM_E0_Q7                                                                          ((uint32_t)7U)
#define EDMA_TPCC_QDMAQNUM_E0_Q2                                                                          ((uint32_t)2U)
#define EDMA_TPCC_QDMAQNUM_E0_Q5                                                                          ((uint32_t)5U)
#define EDMA_TPCC_QDMAQNUM_E0_Q0                                                                          ((uint32_t)0U)

#define EDMA_TPCC_QDMAQNUM_E2_SHIFT                                                                       ((uint32_t)8U)
#define EDMA_TPCC_QDMAQNUM_E2_MASK                                                                        ((uint32_t)0x00000700U)
#define EDMA_TPCC_QDMAQNUM_E2_Q5                                                                          ((uint32_t)5U)
#define EDMA_TPCC_QDMAQNUM_E2_Q7                                                                          ((uint32_t)7U)
#define EDMA_TPCC_QDMAQNUM_E2_Q0                                                                          ((uint32_t)0U)
#define EDMA_TPCC_QDMAQNUM_E2_Q1                                                                          ((uint32_t)1U)
#define EDMA_TPCC_QDMAQNUM_E2_Q2                                                                          ((uint32_t)2U)
#define EDMA_TPCC_QDMAQNUM_E2_Q4                                                                          ((uint32_t)4U)
#define EDMA_TPCC_QDMAQNUM_E2_Q6                                                                          ((uint32_t)6U)
#define EDMA_TPCC_QDMAQNUM_E2_Q3                                                                          ((uint32_t)3U)

#define EDMA_TPCC_QDMAQNUM_RESERVED_SHIFT                                                                 ((uint32_t)3U)
#define EDMA_TPCC_QDMAQNUM_RESERVED_MASK                                                                  ((uint32_t)0x00000008U)

#define EDMA_TPCC_QDMAQNUM_RESERVED1_SHIFT                                                                ((uint32_t)7U)
#define EDMA_TPCC_QDMAQNUM_RESERVED1_MASK                                                                 ((uint32_t)0x00000080U)

#define EDMA_TPCC_QDMAQNUM_RESERVED2_SHIFT                                                                ((uint32_t)11U)
#define EDMA_TPCC_QDMAQNUM_RESERVED2_MASK                                                                 ((uint32_t)0x00000800U)

#define EDMA_TPCC_QDMAQNUM_RESERVED3_SHIFT                                                                ((uint32_t)15U)
#define EDMA_TPCC_QDMAQNUM_RESERVED3_MASK                                                                 ((uint32_t)0x00008000U)

#define EDMA_TPCC_QDMAQNUM_RESERVED4_SHIFT                                                                ((uint32_t)19U)
#define EDMA_TPCC_QDMAQNUM_RESERVED4_MASK                                                                 ((uint32_t)0x00080000U)

#define EDMA_TPCC_QDMAQNUM_RESERVED5_SHIFT                                                                ((uint32_t)23U)
#define EDMA_TPCC_QDMAQNUM_RESERVED5_MASK                                                                 ((uint32_t)0x00800000U)

#define EDMA_TPCC_QDMAQNUM_RESERVED6_SHIFT                                                                ((uint32_t)27U)
#define EDMA_TPCC_QDMAQNUM_RESERVED6_MASK                                                                 ((uint32_t)0x08000000U)

#define EDMA_TPCC_QDMAQNUM_RESERVED7_SHIFT                                                                ((uint32_t)31U)
#define EDMA_TPCC_QDMAQNUM_RESERVED7_MASK                                                                 ((uint32_t)0x80000000U)

#define EDMA_TPCC_QUETCMAP_TCNUMQ0_SHIFT                                                                  ((uint32_t)0U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ0_MASK                                                                   ((uint32_t)0x00000007U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ0_TC0                                                                    ((uint32_t)0U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ0_TC1                                                                    ((uint32_t)1U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ0_TC2                                                                    ((uint32_t)2U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ0_TC3                                                                    ((uint32_t)3U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ0_TC4                                                                    ((uint32_t)4U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ0_TC5                                                                    ((uint32_t)5U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ0_TC6                                                                    ((uint32_t)6U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ0_TC7                                                                    ((uint32_t)7U)

#define EDMA_TPCC_QUETCMAP_TCNUMQ1_SHIFT                                                                  ((uint32_t)4U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ1_MASK                                                                   ((uint32_t)0x00000070U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ1_TC1                                                                    ((uint32_t)1U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ1_TC0                                                                    ((uint32_t)0U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ1_TC6                                                                    ((uint32_t)6U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ1_TC2                                                                    ((uint32_t)2U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ1_TC3                                                                    ((uint32_t)3U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ1_TC5                                                                    ((uint32_t)5U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ1_TC7                                                                    ((uint32_t)7U)
#define EDMA_TPCC_QUETCMAP_TCNUMQ1_TC4                                                                    ((uint32_t)4U)

#define EDMA_TPCC_QUETCMAP_RESERVED_0_SHIFT                                                               ((uint32_t)31U)
#define EDMA_TPCC_QUETCMAP_RESERVED_0_MASK                                                                ((uint32_t)0x80000000U)

#define EDMA_TPCC_QUETCMAP_RESERVED_1_SHIFT                                                               ((uint32_t)27U)
#define EDMA_TPCC_QUETCMAP_RESERVED_1_MASK                                                                ((uint32_t)0x08000000U)

#define EDMA_TPCC_QUETCMAP_RESERVED_2_SHIFT                                                               ((uint32_t)23U)
#define EDMA_TPCC_QUETCMAP_RESERVED_2_MASK                                                                ((uint32_t)0x00800000U)

#define EDMA_TPCC_QUETCMAP_RESERVED_3_SHIFT                                                               ((uint32_t)19U)
#define EDMA_TPCC_QUETCMAP_RESERVED_3_MASK                                                                ((uint32_t)0x00080000U)

#define EDMA_TPCC_QUETCMAP_RESERVED_4_SHIFT                                                               ((uint32_t)15U)
#define EDMA_TPCC_QUETCMAP_RESERVED_4_MASK                                                                ((uint32_t)0x00008000U)

#define EDMA_TPCC_QUETCMAP_RESERVED_5_SHIFT                                                               ((uint32_t)11U)
#define EDMA_TPCC_QUETCMAP_RESERVED_5_MASK                                                                ((uint32_t)0x00000800U)

#define EDMA_TPCC_QUETCMAP_RESERVED_6_SHIFT                                                               ((uint32_t)7U)
#define EDMA_TPCC_QUETCMAP_RESERVED_6_MASK                                                                ((uint32_t)0x00000080U)

#define EDMA_TPCC_QUETCMAP_RESERVED_7_SHIFT                                                               ((uint32_t)3U)
#define EDMA_TPCC_QUETCMAP_RESERVED_7_MASK                                                                ((uint32_t)0x00000008U)

#define EDMA_TPCC_QUETCMAP_RESERVED_8_SHIFT                                                               ((uint32_t)8U)
#define EDMA_TPCC_QUETCMAP_RESERVED_8_MASK                                                                ((uint32_t)0x00000700U)

#define EDMA_TPCC_QUETCMAP_RESERVED_9_SHIFT                                                               ((uint32_t)12U)
#define EDMA_TPCC_QUETCMAP_RESERVED_9_MASK                                                                ((uint32_t)0x00007000U)

#define EDMA_TPCC_QUETCMAP_RESERVED_10_SHIFT                                                              ((uint32_t)16U)
#define EDMA_TPCC_QUETCMAP_RESERVED_10_MASK                                                               ((uint32_t)0x00070000U)

#define EDMA_TPCC_QUETCMAP_RESERVED_11_SHIFT                                                              ((uint32_t)20U)
#define EDMA_TPCC_QUETCMAP_RESERVED_11_MASK                                                               ((uint32_t)0x00700000U)

#define EDMA_TPCC_QUETCMAP_RESERVED_12_SHIFT                                                              ((uint32_t)24U)
#define EDMA_TPCC_QUETCMAP_RESERVED_12_MASK                                                               ((uint32_t)0x07000000U)

#define EDMA_TPCC_QUETCMAP_RESERVED_13_SHIFT                                                              ((uint32_t)28U)
#define EDMA_TPCC_QUETCMAP_RESERVED_13_MASK                                                               ((uint32_t)0x70000000U)

#define EDMA_TPCC_QUEPRI_PRIQ0_SHIFT                                                                      ((uint32_t)0U)
#define EDMA_TPCC_QUEPRI_PRIQ0_MASK                                                                       ((uint32_t)0x00000007U)
#define EDMA_TPCC_QUEPRI_PRIQ0_PRIORITY7                                                                  ((uint32_t)7U)
#define EDMA_TPCC_QUEPRI_PRIQ0_PRIORITY6                                                                  ((uint32_t)6U)
#define EDMA_TPCC_QUEPRI_PRIQ0_PRIORITY5                                                                  ((uint32_t)5U)
#define EDMA_TPCC_QUEPRI_PRIQ0_PRIORITY4                                                                  ((uint32_t)4U)
#define EDMA_TPCC_QUEPRI_PRIQ0_PRIORITY3                                                                  ((uint32_t)3U)
#define EDMA_TPCC_QUEPRI_PRIQ0_PRIORITY2                                                                  ((uint32_t)2U)
#define EDMA_TPCC_QUEPRI_PRIQ0_PRIORITY1                                                                  ((uint32_t)1U)
#define EDMA_TPCC_QUEPRI_PRIQ0_PRIORITY0                                                                  ((uint32_t)0U)

#define EDMA_TPCC_QUEPRI_PRIQ1_SHIFT                                                                      ((uint32_t)4U)
#define EDMA_TPCC_QUEPRI_PRIQ1_MASK                                                                       ((uint32_t)0x00000070U)
#define EDMA_TPCC_QUEPRI_PRIQ1_PRIORITY7                                                                  ((uint32_t)7U)
#define EDMA_TPCC_QUEPRI_PRIQ1_PRIORITY6                                                                  ((uint32_t)6U)
#define EDMA_TPCC_QUEPRI_PRIQ1_PRIORITY0                                                                  ((uint32_t)0U)
#define EDMA_TPCC_QUEPRI_PRIQ1_PRIORITY1                                                                  ((uint32_t)1U)
#define EDMA_TPCC_QUEPRI_PRIQ1_PRIORITY3                                                                  ((uint32_t)3U)
#define EDMA_TPCC_QUEPRI_PRIQ1_PRIORITY4                                                                  ((uint32_t)4U)
#define EDMA_TPCC_QUEPRI_PRIQ1_PRIORITY2                                                                  ((uint32_t)2U)
#define EDMA_TPCC_QUEPRI_PRIQ1_PRIORITY5                                                                  ((uint32_t)5U)

#define EDMA_TPCC_QUEPRI_PRIQ2_SHIFT                                                                      ((uint32_t)8U)
#define EDMA_TPCC_QUEPRI_PRIQ2_MASK                                                                       ((uint32_t)0x00000700U)

#define EDMA_TPCC_QUEPRI_PRIQ3_SHIFT                                                                      ((uint32_t)12U)
#define EDMA_TPCC_QUEPRI_PRIQ3_MASK                                                                       ((uint32_t)0x00007000U)

#define EDMA_TPCC_QUEPRI_RESERVED_0_SHIFT                                                                 ((uint32_t)15U)
#define EDMA_TPCC_QUEPRI_RESERVED_0_MASK                                                                  ((uint32_t)0xffff8000U)

#define EDMA_TPCC_QUEPRI_RESERVED_1_SHIFT                                                                 ((uint32_t)11U)
#define EDMA_TPCC_QUEPRI_RESERVED_1_MASK                                                                  ((uint32_t)0x00000800U)

#define EDMA_TPCC_QUEPRI_RESERVED_2_SHIFT                                                                 ((uint32_t)7U)
#define EDMA_TPCC_QUEPRI_RESERVED_2_MASK                                                                  ((uint32_t)0x00000080U)

#define EDMA_TPCC_QUEPRI_RESERVED_3_SHIFT                                                                 ((uint32_t)3U)
#define EDMA_TPCC_QUEPRI_RESERVED_3_MASK                                                                  ((uint32_t)0x00000008U)

#define EDMA_TPCC_EMR_E0_SHIFT                                                                            ((uint32_t)0U)
#define EDMA_TPCC_EMR_E0_MASK                                                                             ((uint32_t)0x00000001U)

#define EDMA_TPCC_EMR_E1_SHIFT                                                                            ((uint32_t)1U)
#define EDMA_TPCC_EMR_E1_MASK                                                                             ((uint32_t)0x00000002U)

#define EDMA_TPCC_EMR_E2_SHIFT                                                                            ((uint32_t)2U)
#define EDMA_TPCC_EMR_E2_MASK                                                                             ((uint32_t)0x00000004U)

#define EDMA_TPCC_EMR_E3_SHIFT                                                                            ((uint32_t)3U)
#define EDMA_TPCC_EMR_E3_MASK                                                                             ((uint32_t)0x00000008U)

#define EDMA_TPCC_EMR_E4_SHIFT                                                                            ((uint32_t)4U)
#define EDMA_TPCC_EMR_E4_MASK                                                                             ((uint32_t)0x00000010U)

#define EDMA_TPCC_EMR_E5_SHIFT                                                                            ((uint32_t)5U)
#define EDMA_TPCC_EMR_E5_MASK                                                                             ((uint32_t)0x00000020U)

#define EDMA_TPCC_EMR_E6_SHIFT                                                                            ((uint32_t)6U)
#define EDMA_TPCC_EMR_E6_MASK                                                                             ((uint32_t)0x00000040U)

#define EDMA_TPCC_EMR_E7_SHIFT                                                                            ((uint32_t)7U)
#define EDMA_TPCC_EMR_E7_MASK                                                                             ((uint32_t)0x00000080U)

#define EDMA_TPCC_EMR_E8_SHIFT                                                                            ((uint32_t)8U)
#define EDMA_TPCC_EMR_E8_MASK                                                                             ((uint32_t)0x00000100U)

#define EDMA_TPCC_EMR_E9_SHIFT                                                                            ((uint32_t)9U)
#define EDMA_TPCC_EMR_E9_MASK                                                                             ((uint32_t)0x00000200U)

#define EDMA_TPCC_EMR_E10_SHIFT                                                                           ((uint32_t)10U)
#define EDMA_TPCC_EMR_E10_MASK                                                                            ((uint32_t)0x00000400U)

#define EDMA_TPCC_EMR_E11_SHIFT                                                                           ((uint32_t)11U)
#define EDMA_TPCC_EMR_E11_MASK                                                                            ((uint32_t)0x00000800U)

#define EDMA_TPCC_EMR_E12_SHIFT                                                                           ((uint32_t)12U)
#define EDMA_TPCC_EMR_E12_MASK                                                                            ((uint32_t)0x00001000U)

#define EDMA_TPCC_EMR_E13_SHIFT                                                                           ((uint32_t)13U)
#define EDMA_TPCC_EMR_E13_MASK                                                                            ((uint32_t)0x00002000U)

#define EDMA_TPCC_EMR_E14_SHIFT                                                                           ((uint32_t)14U)
#define EDMA_TPCC_EMR_E14_MASK                                                                            ((uint32_t)0x00004000U)

#define EDMA_TPCC_EMR_E15_SHIFT                                                                           ((uint32_t)15U)
#define EDMA_TPCC_EMR_E15_MASK                                                                            ((uint32_t)0x00008000U)

#define EDMA_TPCC_EMR_E16_SHIFT                                                                           ((uint32_t)16U)
#define EDMA_TPCC_EMR_E16_MASK                                                                            ((uint32_t)0x00010000U)

#define EDMA_TPCC_EMR_E17_SHIFT                                                                           ((uint32_t)17U)
#define EDMA_TPCC_EMR_E17_MASK                                                                            ((uint32_t)0x00020000U)

#define EDMA_TPCC_EMR_E18_SHIFT                                                                           ((uint32_t)18U)
#define EDMA_TPCC_EMR_E18_MASK                                                                            ((uint32_t)0x00040000U)

#define EDMA_TPCC_EMR_E19_SHIFT                                                                           ((uint32_t)19U)
#define EDMA_TPCC_EMR_E19_MASK                                                                            ((uint32_t)0x00080000U)

#define EDMA_TPCC_EMR_E20_SHIFT                                                                           ((uint32_t)20U)
#define EDMA_TPCC_EMR_E20_MASK                                                                            ((uint32_t)0x00100000U)

#define EDMA_TPCC_EMR_E21_SHIFT                                                                           ((uint32_t)21U)
#define EDMA_TPCC_EMR_E21_MASK                                                                            ((uint32_t)0x00200000U)

#define EDMA_TPCC_EMR_E22_SHIFT                                                                           ((uint32_t)22U)
#define EDMA_TPCC_EMR_E22_MASK                                                                            ((uint32_t)0x00400000U)

#define EDMA_TPCC_EMR_E23_SHIFT                                                                           ((uint32_t)23U)
#define EDMA_TPCC_EMR_E23_MASK                                                                            ((uint32_t)0x00800000U)

#define EDMA_TPCC_EMR_E24_SHIFT                                                                           ((uint32_t)24U)
#define EDMA_TPCC_EMR_E24_MASK                                                                            ((uint32_t)0x01000000U)

#define EDMA_TPCC_EMR_E25_SHIFT                                                                           ((uint32_t)25U)
#define EDMA_TPCC_EMR_E25_MASK                                                                            ((uint32_t)0x02000000U)

#define EDMA_TPCC_EMR_E26_SHIFT                                                                           ((uint32_t)26U)
#define EDMA_TPCC_EMR_E26_MASK                                                                            ((uint32_t)0x04000000U)

#define EDMA_TPCC_EMR_E27_SHIFT                                                                           ((uint32_t)27U)
#define EDMA_TPCC_EMR_E27_MASK                                                                            ((uint32_t)0x08000000U)

#define EDMA_TPCC_EMR_E28_SHIFT                                                                           ((uint32_t)28U)
#define EDMA_TPCC_EMR_E28_MASK                                                                            ((uint32_t)0x10000000U)

#define EDMA_TPCC_EMR_E29_SHIFT                                                                           ((uint32_t)29U)
#define EDMA_TPCC_EMR_E29_MASK                                                                            ((uint32_t)0x20000000U)

#define EDMA_TPCC_EMR_E30_SHIFT                                                                           ((uint32_t)30U)
#define EDMA_TPCC_EMR_E30_MASK                                                                            ((uint32_t)0x40000000U)

#define EDMA_TPCC_EMR_E31_SHIFT                                                                           ((uint32_t)31U)
#define EDMA_TPCC_EMR_E31_MASK                                                                            ((uint32_t)0x80000000U)

#define EDMA_TPCC_EMRH_E48_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_EMRH_E48_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_EMRH_E33_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_EMRH_E33_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_EMRH_E42_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_EMRH_E42_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_EMRH_E43_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_EMRH_E43_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_EMRH_E45_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_EMRH_E45_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_EMRH_E60_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_EMRH_E60_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_EMRH_E49_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_EMRH_E49_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_EMRH_E54_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_EMRH_E54_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_EMRH_E39_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_EMRH_E39_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_EMRH_E55_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_EMRH_E55_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_EMRH_E53_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_EMRH_E53_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_EMRH_E32_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_EMRH_E32_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_EMRH_E41_SHIFT                                                                          ((uint32_t)9U)
#define EDMA_TPCC_EMRH_E41_MASK                                                                           ((uint32_t)0x00000200U)

#define EDMA_TPCC_EMRH_E47_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_EMRH_E47_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_EMRH_E58_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_EMRH_E58_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_EMRH_E35_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_EMRH_E35_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_EMRH_E34_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_EMRH_E34_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_EMRH_E38_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_EMRH_E38_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_EMRH_E59_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_EMRH_E59_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_EMRH_E37_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_EMRH_E37_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_EMRH_E63_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_EMRH_E63_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_EMRH_E57_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_EMRH_E57_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_EMRH_E62_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_EMRH_E62_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_EMRH_E36_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_EMRH_E36_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_EMRH_E44_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_EMRH_E44_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_EMRH_E56_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_EMRH_E56_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_EMRH_E50_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_EMRH_E50_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_EMRH_E40_SHIFT                                                                          ((uint32_t)8U)
#define EDMA_TPCC_EMRH_E40_MASK                                                                           ((uint32_t)0x00000100U)

#define EDMA_TPCC_EMRH_E46_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_EMRH_E46_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_EMRH_E51_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_EMRH_E51_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_EMRH_E52_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_EMRH_E52_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_EMRH_E61_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_EMRH_E61_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_EMCR_E10_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_EMCR_E10_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_EMCR_E7_SHIFT                                                                           ((uint32_t)7U)
#define EDMA_TPCC_EMCR_E7_MASK                                                                            ((uint32_t)0x00000080U)

#define EDMA_TPCC_EMCR_E29_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_EMCR_E29_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_EMCR_E30_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_EMCR_E30_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_EMCR_E11_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_EMCR_E11_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_EMCR_E16_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_EMCR_E16_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_EMCR_E2_SHIFT                                                                           ((uint32_t)2U)
#define EDMA_TPCC_EMCR_E2_MASK                                                                            ((uint32_t)0x00000004U)

#define EDMA_TPCC_EMCR_E28_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_EMCR_E28_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_EMCR_E17_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_EMCR_E17_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_EMCR_E12_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_EMCR_E12_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_EMCR_E24_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_EMCR_E24_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_EMCR_E4_SHIFT                                                                           ((uint32_t)4U)
#define EDMA_TPCC_EMCR_E4_MASK                                                                            ((uint32_t)0x00000010U)

#define EDMA_TPCC_EMCR_E25_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_EMCR_E25_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_EMCR_E8_SHIFT                                                                           ((uint32_t)8U)
#define EDMA_TPCC_EMCR_E8_MASK                                                                            ((uint32_t)0x00000100U)

#define EDMA_TPCC_EMCR_E15_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_EMCR_E15_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_EMCR_E31_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_EMCR_E31_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_EMCR_E26_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_EMCR_E26_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_EMCR_E14_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_EMCR_E14_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_EMCR_E9_SHIFT                                                                           ((uint32_t)9U)
#define EDMA_TPCC_EMCR_E9_MASK                                                                            ((uint32_t)0x00000200U)

#define EDMA_TPCC_EMCR_E23_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_EMCR_E23_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_EMCR_E6_SHIFT                                                                           ((uint32_t)6U)
#define EDMA_TPCC_EMCR_E6_MASK                                                                            ((uint32_t)0x00000040U)

#define EDMA_TPCC_EMCR_E13_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_EMCR_E13_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_EMCR_E1_SHIFT                                                                           ((uint32_t)1U)
#define EDMA_TPCC_EMCR_E1_MASK                                                                            ((uint32_t)0x00000002U)

#define EDMA_TPCC_EMCR_E21_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_EMCR_E21_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_EMCR_E22_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_EMCR_E22_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_EMCR_E27_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_EMCR_E27_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_EMCR_E20_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_EMCR_E20_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_EMCR_E19_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_EMCR_E19_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_EMCR_E0_SHIFT                                                                           ((uint32_t)0U)
#define EDMA_TPCC_EMCR_E0_MASK                                                                            ((uint32_t)0x00000001U)

#define EDMA_TPCC_EMCR_E5_SHIFT                                                                           ((uint32_t)5U)
#define EDMA_TPCC_EMCR_E5_MASK                                                                            ((uint32_t)0x00000020U)

#define EDMA_TPCC_EMCR_E3_SHIFT                                                                           ((uint32_t)3U)
#define EDMA_TPCC_EMCR_E3_MASK                                                                            ((uint32_t)0x00000008U)

#define EDMA_TPCC_EMCR_E18_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_EMCR_E18_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_EMCRH_E41_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_EMCRH_E41_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_EMCRH_E60_SHIFT                                                                         ((uint32_t)28U)
#define EDMA_TPCC_EMCRH_E60_MASK                                                                          ((uint32_t)0x10000000U)

#define EDMA_TPCC_EMCRH_E43_SHIFT                                                                         ((uint32_t)11U)
#define EDMA_TPCC_EMCRH_E43_MASK                                                                          ((uint32_t)0x00000800U)

#define EDMA_TPCC_EMCRH_E63_SHIFT                                                                         ((uint32_t)31U)
#define EDMA_TPCC_EMCRH_E63_MASK                                                                          ((uint32_t)0x80000000U)

#define EDMA_TPCC_EMCRH_E55_SHIFT                                                                         ((uint32_t)23U)
#define EDMA_TPCC_EMCRH_E55_MASK                                                                          ((uint32_t)0x00800000U)

#define EDMA_TPCC_EMCRH_E38_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_EMCRH_E38_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_EMCRH_E62_SHIFT                                                                         ((uint32_t)30U)
#define EDMA_TPCC_EMCRH_E62_MASK                                                                          ((uint32_t)0x40000000U)

#define EDMA_TPCC_EMCRH_E34_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_EMCRH_E34_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_EMCRH_E46_SHIFT                                                                         ((uint32_t)14U)
#define EDMA_TPCC_EMCRH_E46_MASK                                                                          ((uint32_t)0x00004000U)

#define EDMA_TPCC_EMCRH_E42_SHIFT                                                                         ((uint32_t)10U)
#define EDMA_TPCC_EMCRH_E42_MASK                                                                          ((uint32_t)0x00000400U)

#define EDMA_TPCC_EMCRH_E48_SHIFT                                                                         ((uint32_t)16U)
#define EDMA_TPCC_EMCRH_E48_MASK                                                                          ((uint32_t)0x00010000U)

#define EDMA_TPCC_EMCRH_E32_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_EMCRH_E32_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_EMCRH_E44_SHIFT                                                                         ((uint32_t)12U)
#define EDMA_TPCC_EMCRH_E44_MASK                                                                          ((uint32_t)0x00001000U)

#define EDMA_TPCC_EMCRH_E50_SHIFT                                                                         ((uint32_t)18U)
#define EDMA_TPCC_EMCRH_E50_MASK                                                                          ((uint32_t)0x00040000U)

#define EDMA_TPCC_EMCRH_E53_SHIFT                                                                         ((uint32_t)21U)
#define EDMA_TPCC_EMCRH_E53_MASK                                                                          ((uint32_t)0x00200000U)

#define EDMA_TPCC_EMCRH_E37_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_EMCRH_E37_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_EMCRH_E45_SHIFT                                                                         ((uint32_t)13U)
#define EDMA_TPCC_EMCRH_E45_MASK                                                                          ((uint32_t)0x00002000U)

#define EDMA_TPCC_EMCRH_E59_SHIFT                                                                         ((uint32_t)27U)
#define EDMA_TPCC_EMCRH_E59_MASK                                                                          ((uint32_t)0x08000000U)

#define EDMA_TPCC_EMCRH_E58_SHIFT                                                                         ((uint32_t)26U)
#define EDMA_TPCC_EMCRH_E58_MASK                                                                          ((uint32_t)0x04000000U)

#define EDMA_TPCC_EMCRH_E40_SHIFT                                                                         ((uint32_t)8U)
#define EDMA_TPCC_EMCRH_E40_MASK                                                                          ((uint32_t)0x00000100U)

#define EDMA_TPCC_EMCRH_E54_SHIFT                                                                         ((uint32_t)22U)
#define EDMA_TPCC_EMCRH_E54_MASK                                                                          ((uint32_t)0x00400000U)

#define EDMA_TPCC_EMCRH_E49_SHIFT                                                                         ((uint32_t)17U)
#define EDMA_TPCC_EMCRH_E49_MASK                                                                          ((uint32_t)0x00020000U)

#define EDMA_TPCC_EMCRH_E33_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_EMCRH_E33_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_EMCRH_E47_SHIFT                                                                         ((uint32_t)15U)
#define EDMA_TPCC_EMCRH_E47_MASK                                                                          ((uint32_t)0x00008000U)

#define EDMA_TPCC_EMCRH_E36_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_EMCRH_E36_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_EMCRH_E56_SHIFT                                                                         ((uint32_t)24U)
#define EDMA_TPCC_EMCRH_E56_MASK                                                                          ((uint32_t)0x01000000U)

#define EDMA_TPCC_EMCRH_E57_SHIFT                                                                         ((uint32_t)25U)
#define EDMA_TPCC_EMCRH_E57_MASK                                                                          ((uint32_t)0x02000000U)

#define EDMA_TPCC_EMCRH_E51_SHIFT                                                                         ((uint32_t)19U)
#define EDMA_TPCC_EMCRH_E51_MASK                                                                          ((uint32_t)0x00080000U)

#define EDMA_TPCC_EMCRH_E61_SHIFT                                                                         ((uint32_t)29U)
#define EDMA_TPCC_EMCRH_E61_MASK                                                                          ((uint32_t)0x20000000U)

#define EDMA_TPCC_EMCRH_E39_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_EMCRH_E39_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_EMCRH_E52_SHIFT                                                                         ((uint32_t)20U)
#define EDMA_TPCC_EMCRH_E52_MASK                                                                          ((uint32_t)0x00100000U)

#define EDMA_TPCC_EMCRH_E35_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_EMCRH_E35_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_QEMR_E7_SHIFT                                                                           ((uint32_t)7U)
#define EDMA_TPCC_QEMR_E7_MASK                                                                            ((uint32_t)0x00000080U)

#define EDMA_TPCC_QEMR_E6_SHIFT                                                                           ((uint32_t)6U)
#define EDMA_TPCC_QEMR_E6_MASK                                                                            ((uint32_t)0x00000040U)

#define EDMA_TPCC_QEMR_E5_SHIFT                                                                           ((uint32_t)5U)
#define EDMA_TPCC_QEMR_E5_MASK                                                                            ((uint32_t)0x00000020U)

#define EDMA_TPCC_QEMR_E4_SHIFT                                                                           ((uint32_t)4U)
#define EDMA_TPCC_QEMR_E4_MASK                                                                            ((uint32_t)0x00000010U)

#define EDMA_TPCC_QEMR_E3_SHIFT                                                                           ((uint32_t)3U)
#define EDMA_TPCC_QEMR_E3_MASK                                                                            ((uint32_t)0x00000008U)

#define EDMA_TPCC_QEMR_E2_SHIFT                                                                           ((uint32_t)2U)
#define EDMA_TPCC_QEMR_E2_MASK                                                                            ((uint32_t)0x00000004U)

#define EDMA_TPCC_QEMR_E1_SHIFT                                                                           ((uint32_t)1U)
#define EDMA_TPCC_QEMR_E1_MASK                                                                            ((uint32_t)0x00000002U)

#define EDMA_TPCC_QEMR_E0_SHIFT                                                                           ((uint32_t)0U)
#define EDMA_TPCC_QEMR_E0_MASK                                                                            ((uint32_t)0x00000001U)

#define EDMA_TPCC_QEMR_RESERVED_0_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_QEMR_RESERVED_0_MASK                                                                    ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QEMCR_E7_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_QEMCR_E7_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_QEMCR_E6_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_QEMCR_E6_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_QEMCR_E5_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_QEMCR_E5_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_QEMCR_E4_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_QEMCR_E4_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_QEMCR_E3_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_QEMCR_E3_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_QEMCR_E2_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_QEMCR_E2_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_QEMCR_E1_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_QEMCR_E1_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_QEMCR_E0_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_QEMCR_E0_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_QEMCR_RESERVED_0_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_QEMCR_RESERVED_0_MASK                                                                   ((uint32_t)0xffffff00U)

#define EDMA_TPCC_CCERR_QTHRXCD0_SHIFT                                                                    ((uint32_t)0U)
#define EDMA_TPCC_CCERR_QTHRXCD0_MASK                                                                     ((uint32_t)0x00000001U)

#define EDMA_TPCC_CCERR_TCERR_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_CCERR_TCERR_MASK                                                                        ((uint32_t)0x00010000U)

#define EDMA_TPCC_CCERR_QTHRXCD1_SHIFT                                                                    ((uint32_t)1U)
#define EDMA_TPCC_CCERR_QTHRXCD1_MASK                                                                     ((uint32_t)0x00000002U)

#define EDMA_TPCC_CCERR_QTHRXCD2_SHIFT                                                                    ((uint32_t)2U)
#define EDMA_TPCC_CCERR_QTHRXCD2_MASK                                                                     ((uint32_t)0x00000004U)

#define EDMA_TPCC_CCERR_QTHRXCD3_SHIFT                                                                    ((uint32_t)3U)
#define EDMA_TPCC_CCERR_QTHRXCD3_MASK                                                                     ((uint32_t)0x00000008U)

#define EDMA_TPCC_CCERR_QTHRXCD4_SHIFT                                                                    ((uint32_t)4U)
#define EDMA_TPCC_CCERR_QTHRXCD4_MASK                                                                     ((uint32_t)0x00000010U)

#define EDMA_TPCC_CCERR_QTHRXCD5_SHIFT                                                                    ((uint32_t)5U)
#define EDMA_TPCC_CCERR_QTHRXCD5_MASK                                                                     ((uint32_t)0x00000020U)

#define EDMA_TPCC_CCERR_QTHRXCD6_SHIFT                                                                    ((uint32_t)6U)
#define EDMA_TPCC_CCERR_QTHRXCD6_MASK                                                                     ((uint32_t)0x00000040U)

#define EDMA_TPCC_CCERR_QTHRXCD7_SHIFT                                                                    ((uint32_t)7U)
#define EDMA_TPCC_CCERR_QTHRXCD7_MASK                                                                     ((uint32_t)0x00000080U)

#define EDMA_TPCC_CCERR_RESERVED_0_SHIFT                                                                  ((uint32_t)17U)
#define EDMA_TPCC_CCERR_RESERVED_0_MASK                                                                   ((uint32_t)0xfffe0000U)

#define EDMA_TPCC_CCERR_RESERVED_1_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_CCERR_RESERVED_1_MASK                                                                   ((uint32_t)0x0000ff00U)

#define EDMA_TPCC_CCERRCLR_QTHRXCD0_SHIFT                                                                 ((uint32_t)0U)
#define EDMA_TPCC_CCERRCLR_QTHRXCD0_MASK                                                                  ((uint32_t)0x00000001U)

#define EDMA_TPCC_CCERRCLR_QTHRXCD1_SHIFT                                                                 ((uint32_t)1U)
#define EDMA_TPCC_CCERRCLR_QTHRXCD1_MASK                                                                  ((uint32_t)0x00000002U)

#define EDMA_TPCC_CCERRCLR_QTHRXCD2_SHIFT                                                                 ((uint32_t)2U)
#define EDMA_TPCC_CCERRCLR_QTHRXCD2_MASK                                                                  ((uint32_t)0x00000004U)

#define EDMA_TPCC_CCERRCLR_QTHRXCD3_SHIFT                                                                 ((uint32_t)3U)
#define EDMA_TPCC_CCERRCLR_QTHRXCD3_MASK                                                                  ((uint32_t)0x00000008U)

#define EDMA_TPCC_CCERRCLR_QTHRXCD4_SHIFT                                                                 ((uint32_t)4U)
#define EDMA_TPCC_CCERRCLR_QTHRXCD4_MASK                                                                  ((uint32_t)0x00000010U)

#define EDMA_TPCC_CCERRCLR_QTHRXCD5_SHIFT                                                                 ((uint32_t)5U)
#define EDMA_TPCC_CCERRCLR_QTHRXCD5_MASK                                                                  ((uint32_t)0x00000020U)

#define EDMA_TPCC_CCERRCLR_QTHRXCD6_SHIFT                                                                 ((uint32_t)6U)
#define EDMA_TPCC_CCERRCLR_QTHRXCD6_MASK                                                                  ((uint32_t)0x00000040U)

#define EDMA_TPCC_CCERRCLR_QTHRXCD7_SHIFT                                                                 ((uint32_t)7U)
#define EDMA_TPCC_CCERRCLR_QTHRXCD7_MASK                                                                  ((uint32_t)0x00000080U)

#define EDMA_TPCC_CCERRCLR_TCERR_SHIFT                                                                    ((uint32_t)16U)
#define EDMA_TPCC_CCERRCLR_TCERR_MASK                                                                     ((uint32_t)0x00010000U)

#define EDMA_TPCC_CCERRCLR_RESERVED_1_SHIFT                                                               ((uint32_t)8U)
#define EDMA_TPCC_CCERRCLR_RESERVED_1_MASK                                                                ((uint32_t)0x0000ff00U)

#define EDMA_TPCC_CCERRCLR_RESERVED_0_SHIFT                                                               ((uint32_t)17U)
#define EDMA_TPCC_CCERRCLR_RESERVED_0_MASK                                                                ((uint32_t)0xfffe0000U)

#define EDMA_TPCC_EEVAL_EVAL_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_EEVAL_EVAL_MASK                                                                         ((uint32_t)0x00000001U)

#define EDMA_TPCC_EEVAL_RESERVED_0_SHIFT                                                                  ((uint32_t)2U)
#define EDMA_TPCC_EEVAL_RESERVED_0_MASK                                                                   ((uint32_t)0xfffffffcU)

#define EDMA_TPCC_EEVAL_RESERVED_1_SHIFT                                                                  ((uint32_t)1U)
#define EDMA_TPCC_EEVAL_RESERVED_1_MASK                                                                   ((uint32_t)0x00000002U)

#define EDMA_TPCC_DRAEM_E31_SHIFT                                                                         ((uint32_t)31U)
#define EDMA_TPCC_DRAEM_E31_MASK                                                                          ((uint32_t)0x80000000U)

#define EDMA_TPCC_DRAEM_E30_SHIFT                                                                         ((uint32_t)30U)
#define EDMA_TPCC_DRAEM_E30_MASK                                                                          ((uint32_t)0x40000000U)

#define EDMA_TPCC_DRAEM_E29_SHIFT                                                                         ((uint32_t)29U)
#define EDMA_TPCC_DRAEM_E29_MASK                                                                          ((uint32_t)0x20000000U)

#define EDMA_TPCC_DRAEM_E28_SHIFT                                                                         ((uint32_t)28U)
#define EDMA_TPCC_DRAEM_E28_MASK                                                                          ((uint32_t)0x10000000U)

#define EDMA_TPCC_DRAEM_E27_SHIFT                                                                         ((uint32_t)27U)
#define EDMA_TPCC_DRAEM_E27_MASK                                                                          ((uint32_t)0x08000000U)

#define EDMA_TPCC_DRAEM_E26_SHIFT                                                                         ((uint32_t)26U)
#define EDMA_TPCC_DRAEM_E26_MASK                                                                          ((uint32_t)0x04000000U)

#define EDMA_TPCC_DRAEM_E25_SHIFT                                                                         ((uint32_t)25U)
#define EDMA_TPCC_DRAEM_E25_MASK                                                                          ((uint32_t)0x02000000U)

#define EDMA_TPCC_DRAEM_E24_SHIFT                                                                         ((uint32_t)24U)
#define EDMA_TPCC_DRAEM_E24_MASK                                                                          ((uint32_t)0x01000000U)

#define EDMA_TPCC_DRAEM_E23_SHIFT                                                                         ((uint32_t)23U)
#define EDMA_TPCC_DRAEM_E23_MASK                                                                          ((uint32_t)0x00800000U)

#define EDMA_TPCC_DRAEM_E22_SHIFT                                                                         ((uint32_t)22U)
#define EDMA_TPCC_DRAEM_E22_MASK                                                                          ((uint32_t)0x00400000U)

#define EDMA_TPCC_DRAEM_E21_SHIFT                                                                         ((uint32_t)21U)
#define EDMA_TPCC_DRAEM_E21_MASK                                                                          ((uint32_t)0x00200000U)

#define EDMA_TPCC_DRAEM_E20_SHIFT                                                                         ((uint32_t)20U)
#define EDMA_TPCC_DRAEM_E20_MASK                                                                          ((uint32_t)0x00100000U)

#define EDMA_TPCC_DRAEM_E19_SHIFT                                                                         ((uint32_t)19U)
#define EDMA_TPCC_DRAEM_E19_MASK                                                                          ((uint32_t)0x00080000U)

#define EDMA_TPCC_DRAEM_E18_SHIFT                                                                         ((uint32_t)18U)
#define EDMA_TPCC_DRAEM_E18_MASK                                                                          ((uint32_t)0x00040000U)

#define EDMA_TPCC_DRAEM_E17_SHIFT                                                                         ((uint32_t)17U)
#define EDMA_TPCC_DRAEM_E17_MASK                                                                          ((uint32_t)0x00020000U)

#define EDMA_TPCC_DRAEM_E16_SHIFT                                                                         ((uint32_t)16U)
#define EDMA_TPCC_DRAEM_E16_MASK                                                                          ((uint32_t)0x00010000U)

#define EDMA_TPCC_DRAEM_E15_SHIFT                                                                         ((uint32_t)15U)
#define EDMA_TPCC_DRAEM_E15_MASK                                                                          ((uint32_t)0x00008000U)

#define EDMA_TPCC_DRAEM_E14_SHIFT                                                                         ((uint32_t)14U)
#define EDMA_TPCC_DRAEM_E14_MASK                                                                          ((uint32_t)0x00004000U)

#define EDMA_TPCC_DRAEM_E13_SHIFT                                                                         ((uint32_t)13U)
#define EDMA_TPCC_DRAEM_E13_MASK                                                                          ((uint32_t)0x00002000U)

#define EDMA_TPCC_DRAEM_E12_SHIFT                                                                         ((uint32_t)12U)
#define EDMA_TPCC_DRAEM_E12_MASK                                                                          ((uint32_t)0x00001000U)

#define EDMA_TPCC_DRAEM_E11_SHIFT                                                                         ((uint32_t)11U)
#define EDMA_TPCC_DRAEM_E11_MASK                                                                          ((uint32_t)0x00000800U)

#define EDMA_TPCC_DRAEM_E10_SHIFT                                                                         ((uint32_t)10U)
#define EDMA_TPCC_DRAEM_E10_MASK                                                                          ((uint32_t)0x00000400U)

#define EDMA_TPCC_DRAEM_E9_SHIFT                                                                          ((uint32_t)9U)
#define EDMA_TPCC_DRAEM_E9_MASK                                                                           ((uint32_t)0x00000200U)

#define EDMA_TPCC_DRAEM_E8_SHIFT                                                                          ((uint32_t)8U)
#define EDMA_TPCC_DRAEM_E8_MASK                                                                           ((uint32_t)0x00000100U)

#define EDMA_TPCC_DRAEM_E7_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_DRAEM_E7_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_DRAEM_E6_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_DRAEM_E6_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_DRAEM_E5_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_DRAEM_E5_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_DRAEM_E4_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_DRAEM_E4_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_DRAEM_E3_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_DRAEM_E3_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_DRAEM_E2_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_DRAEM_E2_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_DRAEM_E1_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_DRAEM_E1_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_DRAEM_E0_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_DRAEM_E0_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_DRAEHM_E32_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_DRAEHM_E32_MASK                                                                         ((uint32_t)0x00000001U)

#define EDMA_TPCC_DRAEHM_E33_SHIFT                                                                        ((uint32_t)1U)
#define EDMA_TPCC_DRAEHM_E33_MASK                                                                         ((uint32_t)0x00000002U)

#define EDMA_TPCC_DRAEHM_E34_SHIFT                                                                        ((uint32_t)2U)
#define EDMA_TPCC_DRAEHM_E34_MASK                                                                         ((uint32_t)0x00000004U)

#define EDMA_TPCC_DRAEHM_E35_SHIFT                                                                        ((uint32_t)3U)
#define EDMA_TPCC_DRAEHM_E35_MASK                                                                         ((uint32_t)0x00000008U)

#define EDMA_TPCC_DRAEHM_E36_SHIFT                                                                        ((uint32_t)4U)
#define EDMA_TPCC_DRAEHM_E36_MASK                                                                         ((uint32_t)0x00000010U)

#define EDMA_TPCC_DRAEHM_E37_SHIFT                                                                        ((uint32_t)5U)
#define EDMA_TPCC_DRAEHM_E37_MASK                                                                         ((uint32_t)0x00000020U)

#define EDMA_TPCC_DRAEHM_E38_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_DRAEHM_E38_MASK                                                                         ((uint32_t)0x00000040U)

#define EDMA_TPCC_DRAEHM_E39_SHIFT                                                                        ((uint32_t)7U)
#define EDMA_TPCC_DRAEHM_E39_MASK                                                                         ((uint32_t)0x00000080U)

#define EDMA_TPCC_DRAEHM_E40_SHIFT                                                                        ((uint32_t)8U)
#define EDMA_TPCC_DRAEHM_E40_MASK                                                                         ((uint32_t)0x00000100U)

#define EDMA_TPCC_DRAEHM_E41_SHIFT                                                                        ((uint32_t)9U)
#define EDMA_TPCC_DRAEHM_E41_MASK                                                                         ((uint32_t)0x00000200U)

#define EDMA_TPCC_DRAEHM_E42_SHIFT                                                                        ((uint32_t)10U)
#define EDMA_TPCC_DRAEHM_E42_MASK                                                                         ((uint32_t)0x00000400U)

#define EDMA_TPCC_DRAEHM_E43_SHIFT                                                                        ((uint32_t)11U)
#define EDMA_TPCC_DRAEHM_E43_MASK                                                                         ((uint32_t)0x00000800U)

#define EDMA_TPCC_DRAEHM_E44_SHIFT                                                                        ((uint32_t)12U)
#define EDMA_TPCC_DRAEHM_E44_MASK                                                                         ((uint32_t)0x00001000U)

#define EDMA_TPCC_DRAEHM_E45_SHIFT                                                                        ((uint32_t)13U)
#define EDMA_TPCC_DRAEHM_E45_MASK                                                                         ((uint32_t)0x00002000U)

#define EDMA_TPCC_DRAEHM_E46_SHIFT                                                                        ((uint32_t)14U)
#define EDMA_TPCC_DRAEHM_E46_MASK                                                                         ((uint32_t)0x00004000U)

#define EDMA_TPCC_DRAEHM_E47_SHIFT                                                                        ((uint32_t)15U)
#define EDMA_TPCC_DRAEHM_E47_MASK                                                                         ((uint32_t)0x00008000U)

#define EDMA_TPCC_DRAEHM_E48_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_DRAEHM_E48_MASK                                                                         ((uint32_t)0x00010000U)

#define EDMA_TPCC_DRAEHM_E49_SHIFT                                                                        ((uint32_t)17U)
#define EDMA_TPCC_DRAEHM_E49_MASK                                                                         ((uint32_t)0x00020000U)

#define EDMA_TPCC_DRAEHM_E50_SHIFT                                                                        ((uint32_t)18U)
#define EDMA_TPCC_DRAEHM_E50_MASK                                                                         ((uint32_t)0x00040000U)

#define EDMA_TPCC_DRAEHM_E51_SHIFT                                                                        ((uint32_t)19U)
#define EDMA_TPCC_DRAEHM_E51_MASK                                                                         ((uint32_t)0x00080000U)

#define EDMA_TPCC_DRAEHM_E52_SHIFT                                                                        ((uint32_t)20U)
#define EDMA_TPCC_DRAEHM_E52_MASK                                                                         ((uint32_t)0x00100000U)

#define EDMA_TPCC_DRAEHM_E53_SHIFT                                                                        ((uint32_t)21U)
#define EDMA_TPCC_DRAEHM_E53_MASK                                                                         ((uint32_t)0x00200000U)

#define EDMA_TPCC_DRAEHM_E54_SHIFT                                                                        ((uint32_t)22U)
#define EDMA_TPCC_DRAEHM_E54_MASK                                                                         ((uint32_t)0x00400000U)

#define EDMA_TPCC_DRAEHM_E55_SHIFT                                                                        ((uint32_t)23U)
#define EDMA_TPCC_DRAEHM_E55_MASK                                                                         ((uint32_t)0x00800000U)

#define EDMA_TPCC_DRAEHM_E56_SHIFT                                                                        ((uint32_t)24U)
#define EDMA_TPCC_DRAEHM_E56_MASK                                                                         ((uint32_t)0x01000000U)

#define EDMA_TPCC_DRAEHM_E57_SHIFT                                                                        ((uint32_t)25U)
#define EDMA_TPCC_DRAEHM_E57_MASK                                                                         ((uint32_t)0x02000000U)

#define EDMA_TPCC_DRAEHM_E58_SHIFT                                                                        ((uint32_t)26U)
#define EDMA_TPCC_DRAEHM_E58_MASK                                                                         ((uint32_t)0x04000000U)

#define EDMA_TPCC_DRAEHM_E59_SHIFT                                                                        ((uint32_t)27U)
#define EDMA_TPCC_DRAEHM_E59_MASK                                                                         ((uint32_t)0x08000000U)

#define EDMA_TPCC_DRAEHM_E60_SHIFT                                                                        ((uint32_t)28U)
#define EDMA_TPCC_DRAEHM_E60_MASK                                                                         ((uint32_t)0x10000000U)

#define EDMA_TPCC_DRAEHM_E61_SHIFT                                                                        ((uint32_t)29U)
#define EDMA_TPCC_DRAEHM_E61_MASK                                                                         ((uint32_t)0x20000000U)

#define EDMA_TPCC_DRAEHM_E62_SHIFT                                                                        ((uint32_t)30U)
#define EDMA_TPCC_DRAEHM_E62_MASK                                                                         ((uint32_t)0x40000000U)

#define EDMA_TPCC_DRAEHM_E63_SHIFT                                                                        ((uint32_t)31U)
#define EDMA_TPCC_DRAEHM_E63_MASK                                                                         ((uint32_t)0x80000000U)

#define EDMA_TPCC_QRAEN_E3_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_QRAEN_E3_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_QRAEN_E4_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_QRAEN_E4_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_QRAEN_E5_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_QRAEN_E5_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_QRAEN_E1_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_QRAEN_E1_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_QRAEN_E7_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_QRAEN_E7_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_QRAEN_E0_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_QRAEN_E0_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_QRAEN_E6_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_QRAEN_E6_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_QRAEN_E2_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_QRAEN_E2_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_QRAEN_RESERVED_0_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_QRAEN_RESERVED_0_MASK                                                                   ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE0_ENUM_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_QNE0_ENUM_MASK                                                                          ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE0_RESERVED_0_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_QNE0_RESERVED_0_MASK                                                                    ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE0_ETYPE_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_QNE0_ETYPE_MASK                                                                         ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE0_ETYPE_CHAINTRIG                                                                    ((uint32_t)2U)
#define EDMA_TPCC_QNE0_ETYPE_AUTOTRIG                                                                     ((uint32_t)3U)
#define EDMA_TPCC_QNE0_ETYPE_SOFTWARETRIG                                                                 ((uint32_t)1U)
#define EDMA_TPCC_QNE0_ETYPE_EVENTTRIG                                                                    ((uint32_t)0U)

#define EDMA_TPCC_QNE1_ENUM_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_QNE1_ENUM_MASK                                                                          ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE1_RESERVED_0_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_QNE1_RESERVED_0_MASK                                                                    ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE1_ETYPE_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_QNE1_ETYPE_MASK                                                                         ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE1_ETYPE_CHAINTRIG                                                                    ((uint32_t)2U)
#define EDMA_TPCC_QNE1_ETYPE_AUTOTRIG                                                                     ((uint32_t)3U)
#define EDMA_TPCC_QNE1_ETYPE_SOFTWARETRIG                                                                 ((uint32_t)1U)
#define EDMA_TPCC_QNE1_ETYPE_EVENTTRIG                                                                    ((uint32_t)0U)

#define EDMA_TPCC_QNE2_ENUM_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_QNE2_ENUM_MASK                                                                          ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE2_RESERVED_0_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_QNE2_RESERVED_0_MASK                                                                    ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE2_ETYPE_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_QNE2_ETYPE_MASK                                                                         ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE2_ETYPE_CHAINTRIG                                                                    ((uint32_t)2U)
#define EDMA_TPCC_QNE2_ETYPE_AUTOTRIG                                                                     ((uint32_t)3U)
#define EDMA_TPCC_QNE2_ETYPE_SOFTWARETRIG                                                                 ((uint32_t)1U)
#define EDMA_TPCC_QNE2_ETYPE_EVENTTRIG                                                                    ((uint32_t)0U)

#define EDMA_TPCC_QNE3_ENUM_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_QNE3_ENUM_MASK                                                                          ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE3_RESERVED_0_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_QNE3_RESERVED_0_MASK                                                                    ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE3_ETYPE_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_QNE3_ETYPE_MASK                                                                         ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE3_ETYPE_CHAINTRIG                                                                    ((uint32_t)2U)
#define EDMA_TPCC_QNE3_ETYPE_AUTOTRIG                                                                     ((uint32_t)3U)
#define EDMA_TPCC_QNE3_ETYPE_SOFTWARETRIG                                                                 ((uint32_t)1U)
#define EDMA_TPCC_QNE3_ETYPE_EVENTTRIG                                                                    ((uint32_t)0U)

#define EDMA_TPCC_QNE4_ENUM_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_QNE4_ENUM_MASK                                                                          ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE4_RESERVED_0_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_QNE4_RESERVED_0_MASK                                                                    ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE4_ETYPE_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_QNE4_ETYPE_MASK                                                                         ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE4_ETYPE_CHAINTRIG                                                                    ((uint32_t)2U)
#define EDMA_TPCC_QNE4_ETYPE_AUTOTRIG                                                                     ((uint32_t)3U)
#define EDMA_TPCC_QNE4_ETYPE_SOFTWARETRIG                                                                 ((uint32_t)1U)
#define EDMA_TPCC_QNE4_ETYPE_EVENTTRIG                                                                    ((uint32_t)0U)

#define EDMA_TPCC_QNE5_ENUM_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_QNE5_ENUM_MASK                                                                          ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE5_RESERVED_0_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_QNE5_RESERVED_0_MASK                                                                    ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE5_ETYPE_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_QNE5_ETYPE_MASK                                                                         ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE5_ETYPE_CHAINTRIG                                                                    ((uint32_t)2U)
#define EDMA_TPCC_QNE5_ETYPE_AUTOTRIG                                                                     ((uint32_t)3U)
#define EDMA_TPCC_QNE5_ETYPE_SOFTWARETRIG                                                                 ((uint32_t)1U)
#define EDMA_TPCC_QNE5_ETYPE_EVENTTRIG                                                                    ((uint32_t)0U)

#define EDMA_TPCC_QNE6_ENUM_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_QNE6_ENUM_MASK                                                                          ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE6_RESERVED_0_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_QNE6_RESERVED_0_MASK                                                                    ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE6_ETYPE_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_QNE6_ETYPE_MASK                                                                         ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE6_ETYPE_CHAINTRIG                                                                    ((uint32_t)2U)
#define EDMA_TPCC_QNE6_ETYPE_AUTOTRIG                                                                     ((uint32_t)3U)
#define EDMA_TPCC_QNE6_ETYPE_SOFTWARETRIG                                                                 ((uint32_t)1U)
#define EDMA_TPCC_QNE6_ETYPE_EVENTTRIG                                                                    ((uint32_t)0U)

#define EDMA_TPCC_QNE7_ENUM_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_QNE7_ENUM_MASK                                                                          ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE7_RESERVED_0_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_QNE7_RESERVED_0_MASK                                                                    ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE7_ETYPE_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_QNE7_ETYPE_MASK                                                                         ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE7_ETYPE_CHAINTRIG                                                                    ((uint32_t)2U)
#define EDMA_TPCC_QNE7_ETYPE_AUTOTRIG                                                                     ((uint32_t)3U)
#define EDMA_TPCC_QNE7_ETYPE_SOFTWARETRIG                                                                 ((uint32_t)1U)
#define EDMA_TPCC_QNE7_ETYPE_EVENTTRIG                                                                    ((uint32_t)0U)

#define EDMA_TPCC_QNE8_ENUM_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_QNE8_ENUM_MASK                                                                          ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE8_RESERVED_0_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_QNE8_RESERVED_0_MASK                                                                    ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE8_ETYPE_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_QNE8_ETYPE_MASK                                                                         ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE8_ETYPE_CHAINTRIG                                                                    ((uint32_t)2U)
#define EDMA_TPCC_QNE8_ETYPE_AUTOTRIG                                                                     ((uint32_t)3U)
#define EDMA_TPCC_QNE8_ETYPE_SOFTWARETRIG                                                                 ((uint32_t)1U)
#define EDMA_TPCC_QNE8_ETYPE_EVENTTRIG                                                                    ((uint32_t)0U)

#define EDMA_TPCC_QNE9_ENUM_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_QNE9_ENUM_MASK                                                                          ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE9_RESERVED_0_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_QNE9_RESERVED_0_MASK                                                                    ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE9_ETYPE_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_QNE9_ETYPE_MASK                                                                         ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE9_ETYPE_CHAINTRIG                                                                    ((uint32_t)2U)
#define EDMA_TPCC_QNE9_ETYPE_AUTOTRIG                                                                     ((uint32_t)3U)
#define EDMA_TPCC_QNE9_ETYPE_SOFTWARETRIG                                                                 ((uint32_t)1U)
#define EDMA_TPCC_QNE9_ETYPE_EVENTTRIG                                                                    ((uint32_t)0U)

#define EDMA_TPCC_QNE10_ENUM_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_QNE10_ENUM_MASK                                                                         ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE10_RESERVED_0_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_QNE10_RESERVED_0_MASK                                                                   ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE10_ETYPE_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_QNE10_ETYPE_MASK                                                                        ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE10_ETYPE_CHAINTRIG                                                                   ((uint32_t)2U)
#define EDMA_TPCC_QNE10_ETYPE_AUTOTRIG                                                                    ((uint32_t)3U)
#define EDMA_TPCC_QNE10_ETYPE_SOFTWARETRIG                                                                ((uint32_t)1U)
#define EDMA_TPCC_QNE10_ETYPE_EVENTTRIG                                                                   ((uint32_t)0U)

#define EDMA_TPCC_QNE11_ENUM_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_QNE11_ENUM_MASK                                                                         ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE11_RESERVED_0_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_QNE11_RESERVED_0_MASK                                                                   ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE11_ETYPE_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_QNE11_ETYPE_MASK                                                                        ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE11_ETYPE_CHAINTRIG                                                                   ((uint32_t)2U)
#define EDMA_TPCC_QNE11_ETYPE_AUTOTRIG                                                                    ((uint32_t)3U)
#define EDMA_TPCC_QNE11_ETYPE_SOFTWARETRIG                                                                ((uint32_t)1U)
#define EDMA_TPCC_QNE11_ETYPE_EVENTTRIG                                                                   ((uint32_t)0U)

#define EDMA_TPCC_QNE12_ENUM_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_QNE12_ENUM_MASK                                                                         ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE12_RESERVED_0_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_QNE12_RESERVED_0_MASK                                                                   ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE12_ETYPE_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_QNE12_ETYPE_MASK                                                                        ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE12_ETYPE_CHAINTRIG                                                                   ((uint32_t)2U)
#define EDMA_TPCC_QNE12_ETYPE_AUTOTRIG                                                                    ((uint32_t)3U)
#define EDMA_TPCC_QNE12_ETYPE_SOFTWARETRIG                                                                ((uint32_t)1U)
#define EDMA_TPCC_QNE12_ETYPE_EVENTTRIG                                                                   ((uint32_t)0U)

#define EDMA_TPCC_QNE13_ENUM_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_QNE13_ENUM_MASK                                                                         ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE13_RESERVED_0_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_QNE13_RESERVED_0_MASK                                                                   ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE13_ETYPE_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_QNE13_ETYPE_MASK                                                                        ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE13_ETYPE_CHAINTRIG                                                                   ((uint32_t)2U)
#define EDMA_TPCC_QNE13_ETYPE_AUTOTRIG                                                                    ((uint32_t)3U)
#define EDMA_TPCC_QNE13_ETYPE_SOFTWARETRIG                                                                ((uint32_t)1U)
#define EDMA_TPCC_QNE13_ETYPE_EVENTTRIG                                                                   ((uint32_t)0U)

#define EDMA_TPCC_QNE14_ENUM_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_QNE14_ENUM_MASK                                                                         ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE14_RESERVED_0_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_QNE14_RESERVED_0_MASK                                                                   ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE14_ETYPE_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_QNE14_ETYPE_MASK                                                                        ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE14_ETYPE_CHAINTRIG                                                                   ((uint32_t)2U)
#define EDMA_TPCC_QNE14_ETYPE_AUTOTRIG                                                                    ((uint32_t)3U)
#define EDMA_TPCC_QNE14_ETYPE_SOFTWARETRIG                                                                ((uint32_t)1U)
#define EDMA_TPCC_QNE14_ETYPE_EVENTTRIG                                                                   ((uint32_t)0U)

#define EDMA_TPCC_QNE15_ENUM_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_QNE15_ENUM_MASK                                                                         ((uint32_t)0x0000003fU)

#define EDMA_TPCC_QNE15_RESERVED_0_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_QNE15_RESERVED_0_MASK                                                                   ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QNE15_ETYPE_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_QNE15_ETYPE_MASK                                                                        ((uint32_t)0x000000c0U)
#define EDMA_TPCC_QNE15_ETYPE_CHAINTRIG                                                                   ((uint32_t)2U)
#define EDMA_TPCC_QNE15_ETYPE_AUTOTRIG                                                                    ((uint32_t)3U)
#define EDMA_TPCC_QNE15_ETYPE_SOFTWARETRIG                                                                ((uint32_t)1U)
#define EDMA_TPCC_QNE15_ETYPE_EVENTTRIG                                                                   ((uint32_t)0U)

#define EDMA_TPCC_QSTATN_STRTPTR_SHIFT                                                                    ((uint32_t)0U)
#define EDMA_TPCC_QSTATN_STRTPTR_MASK                                                                     ((uint32_t)0x0000000fU)

#define EDMA_TPCC_QSTATN_NUMVAL_SHIFT                                                                     ((uint32_t)8U)
#define EDMA_TPCC_QSTATN_NUMVAL_MASK                                                                      ((uint32_t)0x00001f00U)

#define EDMA_TPCC_QSTATN_WM_SHIFT                                                                         ((uint32_t)16U)
#define EDMA_TPCC_QSTATN_WM_MASK                                                                          ((uint32_t)0x001f0000U)

#define EDMA_TPCC_QSTATN_THRXCD_SHIFT                                                                     ((uint32_t)24U)
#define EDMA_TPCC_QSTATN_THRXCD_MASK                                                                      ((uint32_t)0x01000000U)

#define EDMA_TPCC_QSTATN_RESERVED_0_SHIFT                                                                 ((uint32_t)25U)
#define EDMA_TPCC_QSTATN_RESERVED_0_MASK                                                                  ((uint32_t)0xfe000000U)

#define EDMA_TPCC_QSTATN_RESERVED_1_SHIFT                                                                 ((uint32_t)21U)
#define EDMA_TPCC_QSTATN_RESERVED_1_MASK                                                                  ((uint32_t)0x00e00000U)

#define EDMA_TPCC_QSTATN_RESERVED_2_SHIFT                                                                 ((uint32_t)13U)
#define EDMA_TPCC_QSTATN_RESERVED_2_MASK                                                                  ((uint32_t)0x0000e000U)

#define EDMA_TPCC_QSTATN_RESERVED_4_SHIFT                                                                 ((uint32_t)4U)
#define EDMA_TPCC_QSTATN_RESERVED_4_MASK                                                                  ((uint32_t)0x000000f0U)

#define EDMA_TPCC_QWMTHRA_Q1_SHIFT                                                                        ((uint32_t)8U)
#define EDMA_TPCC_QWMTHRA_Q1_MASK                                                                         ((uint32_t)0x00001f00U)

#define EDMA_TPCC_QWMTHRA_Q0_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_QWMTHRA_Q0_MASK                                                                         ((uint32_t)0x0000001fU)

#define EDMA_TPCC_QWMTHRA_Q3_SHIFT                                                                        ((uint32_t)24U)
#define EDMA_TPCC_QWMTHRA_Q3_MASK                                                                         ((uint32_t)0x1f000000U)

#define EDMA_TPCC_QWMTHRA_Q2_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_QWMTHRA_Q2_MASK                                                                         ((uint32_t)0x001f0000U)

#define EDMA_TPCC_QWMTHRA_RESERVED_0_SHIFT                                                                ((uint32_t)29U)
#define EDMA_TPCC_QWMTHRA_RESERVED_0_MASK                                                                 ((uint32_t)0xe0000000U)

#define EDMA_TPCC_QWMTHRA_RESERVED_1_SHIFT                                                                ((uint32_t)21U)
#define EDMA_TPCC_QWMTHRA_RESERVED_1_MASK                                                                 ((uint32_t)0x00e00000U)

#define EDMA_TPCC_QWMTHRA_RESERVED_2_SHIFT                                                                ((uint32_t)13U)
#define EDMA_TPCC_QWMTHRA_RESERVED_2_MASK                                                                 ((uint32_t)0x0000e000U)

#define EDMA_TPCC_QWMTHRA_RESERVED_3_SHIFT                                                                ((uint32_t)5U)
#define EDMA_TPCC_QWMTHRA_RESERVED_3_MASK                                                                 ((uint32_t)0x000000e0U)

#define EDMA_TPCC_QWMTHRB_Q6_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_QWMTHRB_Q6_MASK                                                                         ((uint32_t)0x001f0000U)

#define EDMA_TPCC_QWMTHRB_Q7_SHIFT                                                                        ((uint32_t)24U)
#define EDMA_TPCC_QWMTHRB_Q7_MASK                                                                         ((uint32_t)0x1f000000U)

#define EDMA_TPCC_QWMTHRB_Q4_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_QWMTHRB_Q4_MASK                                                                         ((uint32_t)0x0000001fU)

#define EDMA_TPCC_QWMTHRB_Q5_SHIFT                                                                        ((uint32_t)8U)
#define EDMA_TPCC_QWMTHRB_Q5_MASK                                                                         ((uint32_t)0x00001f00U)

#define EDMA_TPCC_QWMTHRB_RESERVED_3_SHIFT                                                                ((uint32_t)5U)
#define EDMA_TPCC_QWMTHRB_RESERVED_3_MASK                                                                 ((uint32_t)0x000000e0U)

#define EDMA_TPCC_QWMTHRB_RESERVED_2_SHIFT                                                                ((uint32_t)13U)
#define EDMA_TPCC_QWMTHRB_RESERVED_2_MASK                                                                 ((uint32_t)0x0000e000U)

#define EDMA_TPCC_QWMTHRB_RESERVED_1_SHIFT                                                                ((uint32_t)21U)
#define EDMA_TPCC_QWMTHRB_RESERVED_1_MASK                                                                 ((uint32_t)0x00e00000U)

#define EDMA_TPCC_QWMTHRB_RESERVED_0_SHIFT                                                                ((uint32_t)29U)
#define EDMA_TPCC_QWMTHRB_RESERVED_0_MASK                                                                 ((uint32_t)0xe0000000U)

#define EDMA_TPCC_CCSTAT_EVTACTV_SHIFT                                                                    ((uint32_t)0U)
#define EDMA_TPCC_CCSTAT_EVTACTV_MASK                                                                     ((uint32_t)0x00000001U)

#define EDMA_TPCC_CCSTAT_QEVTACTV_SHIFT                                                                   ((uint32_t)1U)
#define EDMA_TPCC_CCSTAT_QEVTACTV_MASK                                                                    ((uint32_t)0x00000002U)

#define EDMA_TPCC_CCSTAT_TRACTV_SHIFT                                                                     ((uint32_t)2U)
#define EDMA_TPCC_CCSTAT_TRACTV_MASK                                                                      ((uint32_t)0x00000004U)

#define EDMA_TPCC_CCSTAT_WSTATACTV_SHIFT                                                                  ((uint32_t)3U)
#define EDMA_TPCC_CCSTAT_WSTATACTV_MASK                                                                   ((uint32_t)0x00000008U)

#define EDMA_TPCC_CCSTAT_ACTV_SHIFT                                                                       ((uint32_t)4U)
#define EDMA_TPCC_CCSTAT_ACTV_MASK                                                                        ((uint32_t)0x00000010U)

#define EDMA_TPCC_CCSTAT_COMPACTV_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_CCSTAT_COMPACTV_MASK                                                                    ((uint32_t)0x00003f00U)

#define EDMA_TPCC_CCSTAT_QUEACTV0_SHIFT                                                                   ((uint32_t)16U)
#define EDMA_TPCC_CCSTAT_QUEACTV0_MASK                                                                    ((uint32_t)0x00010000U)

#define EDMA_TPCC_CCSTAT_QUEACTV1_SHIFT                                                                   ((uint32_t)17U)
#define EDMA_TPCC_CCSTAT_QUEACTV1_MASK                                                                    ((uint32_t)0x00020000U)

#define EDMA_TPCC_CCSTAT_QUEACTV2_SHIFT                                                                   ((uint32_t)18U)
#define EDMA_TPCC_CCSTAT_QUEACTV2_MASK                                                                    ((uint32_t)0x00040000U)

#define EDMA_TPCC_CCSTAT_QUEACTV3_SHIFT                                                                   ((uint32_t)19U)
#define EDMA_TPCC_CCSTAT_QUEACTV3_MASK                                                                    ((uint32_t)0x00080000U)

#define EDMA_TPCC_CCSTAT_QUEACTV4_SHIFT                                                                   ((uint32_t)20U)
#define EDMA_TPCC_CCSTAT_QUEACTV4_MASK                                                                    ((uint32_t)0x00100000U)

#define EDMA_TPCC_CCSTAT_QUEACTV5_SHIFT                                                                   ((uint32_t)21U)
#define EDMA_TPCC_CCSTAT_QUEACTV5_MASK                                                                    ((uint32_t)0x00200000U)

#define EDMA_TPCC_CCSTAT_QUEACTV6_SHIFT                                                                   ((uint32_t)22U)
#define EDMA_TPCC_CCSTAT_QUEACTV6_MASK                                                                    ((uint32_t)0x00400000U)

#define EDMA_TPCC_CCSTAT_QUEACTV7_SHIFT                                                                   ((uint32_t)23U)
#define EDMA_TPCC_CCSTAT_QUEACTV7_MASK                                                                    ((uint32_t)0x00800000U)

#define EDMA_TPCC_CCSTAT_RESERVED_0_SHIFT                                                                 ((uint32_t)24U)
#define EDMA_TPCC_CCSTAT_RESERVED_0_MASK                                                                  ((uint32_t)0xff000000U)

#define EDMA_TPCC_CCSTAT_RESERVED_1_SHIFT                                                                 ((uint32_t)14U)
#define EDMA_TPCC_CCSTAT_RESERVED_1_MASK                                                                  ((uint32_t)0x0000c000U)

#define EDMA_TPCC_CCSTAT_RESERVED_2_SHIFT                                                                 ((uint32_t)5U)
#define EDMA_TPCC_CCSTAT_RESERVED_2_MASK                                                                  ((uint32_t)0x000000e0U)

#define EDMA_TPCC_CCSTAT_RESERVED_3_SHIFT                                                                 ((uint32_t)3U)
#define EDMA_TPCC_CCSTAT_RESERVED_3_MASK                                                                  ((uint32_t)0x00000008U)

#define EDMA_TPCC_AETCTL_TYPE_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_AETCTL_TYPE_MASK                                                                        ((uint32_t)0x00000040U)

#define EDMA_TPCC_AETCTL_STRTEVT_SHIFT                                                                    ((uint32_t)0U)
#define EDMA_TPCC_AETCTL_STRTEVT_MASK                                                                     ((uint32_t)0x0000003fU)

#define EDMA_TPCC_AETCTL_EN_SHIFT                                                                         ((uint32_t)31U)
#define EDMA_TPCC_AETCTL_EN_MASK                                                                          ((uint32_t)0x80000000U)

#define EDMA_TPCC_AETCTL_ENDINT_SHIFT                                                                     ((uint32_t)8U)
#define EDMA_TPCC_AETCTL_ENDINT_MASK                                                                      ((uint32_t)0x00003f00U)

#define EDMA_TPCC_AETCTL_RESERVED_0_SHIFT                                                                 ((uint32_t)14U)
#define EDMA_TPCC_AETCTL_RESERVED_0_MASK                                                                  ((uint32_t)0x7fffc000U)

#define EDMA_TPCC_AETCTL_RESERVED_1_SHIFT                                                                 ((uint32_t)7U)
#define EDMA_TPCC_AETCTL_RESERVED_1_MASK                                                                  ((uint32_t)0x00000080U)

#define EDMA_TPCC_AETSTAT_STAT_SHIFT                                                                      ((uint32_t)0U)
#define EDMA_TPCC_AETSTAT_STAT_MASK                                                                       ((uint32_t)0x00000001U)

#define EDMA_TPCC_AETSTAT_RESERVED_0_SHIFT                                                                ((uint32_t)1U)
#define EDMA_TPCC_AETSTAT_RESERVED_0_MASK                                                                 ((uint32_t)0xfffffffeU)

#define EDMA_TPCC_AETCMD_CLR_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_AETCMD_CLR_MASK                                                                         ((uint32_t)0x00000001U)

#define EDMA_TPCC_AETCMD_RESERVED_0_SHIFT                                                                 ((uint32_t)1U)
#define EDMA_TPCC_AETCMD_RESERVED_0_MASK                                                                  ((uint32_t)0xfffffffeU)

#define EDMA_TPCC_MPFAR_FADDR_SHIFT                                                                       ((uint32_t)0U)
#define EDMA_TPCC_MPFAR_FADDR_MASK                                                                        ((uint32_t)0xffffffffU)

#define EDMA_TPCC_MPFSR_FID_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_MPFSR_FID_MASK                                                                          ((uint32_t)0x00001e00U)

#define EDMA_TPCC_MPFSR_SECE_SHIFT                                                                        ((uint32_t)7U)
#define EDMA_TPCC_MPFSR_SECE_MASK                                                                         ((uint32_t)0x00000080U)

#define EDMA_TPCC_MPFSR_SXE_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_MPFSR_SXE_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_MPFSR_URE_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_MPFSR_URE_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_MPFSR_SRE_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_MPFSR_SRE_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_MPFSR_SWE_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_MPFSR_SWE_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_MPFSR_UWE_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_MPFSR_UWE_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_MPFSR_UXE_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_MPFSR_UXE_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_MPFSR_RESERVED_0_SHIFT                                                                  ((uint32_t)13U)
#define EDMA_TPCC_MPFSR_RESERVED_0_MASK                                                                   ((uint32_t)0xffffe000U)

#define EDMA_TPCC_MPFSR_RESERVED_1_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_MPFSR_RESERVED_1_MASK                                                                   ((uint32_t)0x00000100U)

#define EDMA_TPCC_MPFSR_RESERVED_2_SHIFT                                                                  ((uint32_t)6U)
#define EDMA_TPCC_MPFSR_RESERVED_2_MASK                                                                   ((uint32_t)0x00000040U)

#define EDMA_TPCC_MPFCR_MPFCLR_SHIFT                                                                      ((uint32_t)0U)
#define EDMA_TPCC_MPFCR_MPFCLR_MASK                                                                       ((uint32_t)0x00000001U)

#define EDMA_TPCC_MPFCR_RESERVED_0_SHIFT                                                                  ((uint32_t)1U)
#define EDMA_TPCC_MPFCR_RESERVED_0_MASK                                                                   ((uint32_t)0xfffffffeU)

#define EDMA_TPCC_MPPAG_EMU_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_MPPAG_EMU_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_MPPAG_EXT_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_MPPAG_EXT_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_MPPAG_SR_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_MPPAG_SR_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_MPPAG_AID4_SHIFT                                                                        ((uint32_t)14U)
#define EDMA_TPCC_MPPAG_AID4_MASK                                                                         ((uint32_t)0x00004000U)

#define EDMA_TPCC_MPPAG_UR_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_MPPAG_UR_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_MPPAG_AID5_SHIFT                                                                        ((uint32_t)15U)
#define EDMA_TPCC_MPPAG_AID5_MASK                                                                         ((uint32_t)0x00008000U)

#define EDMA_TPCC_MPPAG_NS_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_MPPAG_NS_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_MPPAG_SW_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_MPPAG_SW_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_MPPAG_UW_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_MPPAG_UW_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_MPPAG_AID0_SHIFT                                                                        ((uint32_t)10U)
#define EDMA_TPCC_MPPAG_AID0_MASK                                                                         ((uint32_t)0x00000400U)

#define EDMA_TPCC_MPPAG_AID1_SHIFT                                                                        ((uint32_t)11U)
#define EDMA_TPCC_MPPAG_AID1_MASK                                                                         ((uint32_t)0x00000800U)

#define EDMA_TPCC_MPPAG_SX_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_MPPAG_SX_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_MPPAG_AID2_SHIFT                                                                        ((uint32_t)12U)
#define EDMA_TPCC_MPPAG_AID2_MASK                                                                         ((uint32_t)0x00001000U)

#define EDMA_TPCC_MPPAG_UX_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_MPPAG_UX_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_MPPAG_AID3_SHIFT                                                                        ((uint32_t)13U)
#define EDMA_TPCC_MPPAG_AID3_MASK                                                                         ((uint32_t)0x00002000U)

#define EDMA_TPCC_MPPAG_RESERVED_0_SHIFT                                                                  ((uint32_t)16U)
#define EDMA_TPCC_MPPAG_RESERVED_0_MASK                                                                   ((uint32_t)0xffff0000U)

#define EDMA_TPCC_MPPAG_RESERVED_1_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_MPPAG_RESERVED_1_MASK                                                                   ((uint32_t)0x00000100U)

#define EDMA_TPCC_MPPAN_AID5_SHIFT                                                                        ((uint32_t)15U)
#define EDMA_TPCC_MPPAN_AID5_MASK                                                                         ((uint32_t)0x00008000U)

#define EDMA_TPCC_MPPAN_AID4_SHIFT                                                                        ((uint32_t)14U)
#define EDMA_TPCC_MPPAN_AID4_MASK                                                                         ((uint32_t)0x00004000U)

#define EDMA_TPCC_MPPAN_AID3_SHIFT                                                                        ((uint32_t)13U)
#define EDMA_TPCC_MPPAN_AID3_MASK                                                                         ((uint32_t)0x00002000U)

#define EDMA_TPCC_MPPAN_AID2_SHIFT                                                                        ((uint32_t)12U)
#define EDMA_TPCC_MPPAN_AID2_MASK                                                                         ((uint32_t)0x00001000U)

#define EDMA_TPCC_MPPAN_AID1_SHIFT                                                                        ((uint32_t)11U)
#define EDMA_TPCC_MPPAN_AID1_MASK                                                                         ((uint32_t)0x00000800U)

#define EDMA_TPCC_MPPAN_AID0_SHIFT                                                                        ((uint32_t)10U)
#define EDMA_TPCC_MPPAN_AID0_MASK                                                                         ((uint32_t)0x00000400U)

#define EDMA_TPCC_MPPAN_EXT_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_MPPAN_EXT_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_MPPAN_NS_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_MPPAN_NS_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_MPPAN_EMU_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_MPPAN_EMU_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_MPPAN_SR_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_MPPAN_SR_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_MPPAN_SW_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_MPPAN_SW_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_MPPAN_SX_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_MPPAN_SX_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_MPPAN_UR_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_MPPAN_UR_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_MPPAN_UW_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_MPPAN_UW_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_MPPAN_UX_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_MPPAN_UX_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_MPPAN_RESERVED_0_SHIFT                                                                  ((uint32_t)16U)
#define EDMA_TPCC_MPPAN_RESERVED_0_MASK                                                                   ((uint32_t)0xffff0000U)

#define EDMA_TPCC_MPPAN_RESERVED_1_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_MPPAN_RESERVED_1_MASK                                                                   ((uint32_t)0x00000100U)

#define EDMA_TPCC_ER_E22_SHIFT                                                                            ((uint32_t)22U)
#define EDMA_TPCC_ER_E22_MASK                                                                             ((uint32_t)0x00400000U)

#define EDMA_TPCC_ER_E2_SHIFT                                                                             ((uint32_t)2U)
#define EDMA_TPCC_ER_E2_MASK                                                                              ((uint32_t)0x00000004U)

#define EDMA_TPCC_ER_E19_SHIFT                                                                            ((uint32_t)19U)
#define EDMA_TPCC_ER_E19_MASK                                                                             ((uint32_t)0x00080000U)

#define EDMA_TPCC_ER_E5_SHIFT                                                                             ((uint32_t)5U)
#define EDMA_TPCC_ER_E5_MASK                                                                              ((uint32_t)0x00000020U)

#define EDMA_TPCC_ER_E29_SHIFT                                                                            ((uint32_t)29U)
#define EDMA_TPCC_ER_E29_MASK                                                                             ((uint32_t)0x20000000U)

#define EDMA_TPCC_ER_E18_SHIFT                                                                            ((uint32_t)18U)
#define EDMA_TPCC_ER_E18_MASK                                                                             ((uint32_t)0x00040000U)

#define EDMA_TPCC_ER_E6_SHIFT                                                                             ((uint32_t)6U)
#define EDMA_TPCC_ER_E6_MASK                                                                              ((uint32_t)0x00000040U)

#define EDMA_TPCC_ER_E21_SHIFT                                                                            ((uint32_t)21U)
#define EDMA_TPCC_ER_E21_MASK                                                                             ((uint32_t)0x00200000U)

#define EDMA_TPCC_ER_E3_SHIFT                                                                             ((uint32_t)3U)
#define EDMA_TPCC_ER_E3_MASK                                                                              ((uint32_t)0x00000008U)

#define EDMA_TPCC_ER_E31_SHIFT                                                                            ((uint32_t)31U)
#define EDMA_TPCC_ER_E31_MASK                                                                             ((uint32_t)0x80000000U)

#define EDMA_TPCC_ER_E20_SHIFT                                                                            ((uint32_t)20U)
#define EDMA_TPCC_ER_E20_MASK                                                                             ((uint32_t)0x00100000U)

#define EDMA_TPCC_ER_E4_SHIFT                                                                             ((uint32_t)4U)
#define EDMA_TPCC_ER_E4_MASK                                                                              ((uint32_t)0x00000010U)

#define EDMA_TPCC_ER_E9_SHIFT                                                                             ((uint32_t)9U)
#define EDMA_TPCC_ER_E9_MASK                                                                              ((uint32_t)0x00000200U)

#define EDMA_TPCC_ER_E28_SHIFT                                                                            ((uint32_t)28U)
#define EDMA_TPCC_ER_E28_MASK                                                                             ((uint32_t)0x10000000U)

#define EDMA_TPCC_ER_E14_SHIFT                                                                            ((uint32_t)14U)
#define EDMA_TPCC_ER_E14_MASK                                                                             ((uint32_t)0x00004000U)

#define EDMA_TPCC_ER_E10_SHIFT                                                                            ((uint32_t)10U)
#define EDMA_TPCC_ER_E10_MASK                                                                             ((uint32_t)0x00000400U)

#define EDMA_TPCC_ER_E27_SHIFT                                                                            ((uint32_t)27U)
#define EDMA_TPCC_ER_E27_MASK                                                                             ((uint32_t)0x08000000U)

#define EDMA_TPCC_ER_E7_SHIFT                                                                             ((uint32_t)7U)
#define EDMA_TPCC_ER_E7_MASK                                                                              ((uint32_t)0x00000080U)

#define EDMA_TPCC_ER_E17_SHIFT                                                                            ((uint32_t)17U)
#define EDMA_TPCC_ER_E17_MASK                                                                             ((uint32_t)0x00020000U)

#define EDMA_TPCC_ER_E8_SHIFT                                                                             ((uint32_t)8U)
#define EDMA_TPCC_ER_E8_MASK                                                                              ((uint32_t)0x00000100U)

#define EDMA_TPCC_ER_E16_SHIFT                                                                            ((uint32_t)16U)
#define EDMA_TPCC_ER_E16_MASK                                                                             ((uint32_t)0x00010000U)

#define EDMA_TPCC_ER_E30_SHIFT                                                                            ((uint32_t)30U)
#define EDMA_TPCC_ER_E30_MASK                                                                             ((uint32_t)0x40000000U)

#define EDMA_TPCC_ER_E24_SHIFT                                                                            ((uint32_t)24U)
#define EDMA_TPCC_ER_E24_MASK                                                                             ((uint32_t)0x01000000U)

#define EDMA_TPCC_ER_E23_SHIFT                                                                            ((uint32_t)23U)
#define EDMA_TPCC_ER_E23_MASK                                                                             ((uint32_t)0x00800000U)

#define EDMA_TPCC_ER_E0_SHIFT                                                                             ((uint32_t)0U)
#define EDMA_TPCC_ER_E0_MASK                                                                              ((uint32_t)0x00000001U)

#define EDMA_TPCC_ER_E13_SHIFT                                                                            ((uint32_t)13U)
#define EDMA_TPCC_ER_E13_MASK                                                                             ((uint32_t)0x00002000U)

#define EDMA_TPCC_ER_E11_SHIFT                                                                            ((uint32_t)11U)
#define EDMA_TPCC_ER_E11_MASK                                                                             ((uint32_t)0x00000800U)

#define EDMA_TPCC_ER_E26_SHIFT                                                                            ((uint32_t)26U)
#define EDMA_TPCC_ER_E26_MASK                                                                             ((uint32_t)0x04000000U)

#define EDMA_TPCC_ER_E1_SHIFT                                                                             ((uint32_t)1U)
#define EDMA_TPCC_ER_E1_MASK                                                                              ((uint32_t)0x00000002U)

#define EDMA_TPCC_ER_E12_SHIFT                                                                            ((uint32_t)12U)
#define EDMA_TPCC_ER_E12_MASK                                                                             ((uint32_t)0x00001000U)

#define EDMA_TPCC_ER_E25_SHIFT                                                                            ((uint32_t)25U)
#define EDMA_TPCC_ER_E25_MASK                                                                             ((uint32_t)0x02000000U)

#define EDMA_TPCC_ER_E15_SHIFT                                                                            ((uint32_t)15U)
#define EDMA_TPCC_ER_E15_MASK                                                                             ((uint32_t)0x00008000U)

#define EDMA_TPCC_ERH_E61_SHIFT                                                                           ((uint32_t)29U)
#define EDMA_TPCC_ERH_E61_MASK                                                                            ((uint32_t)0x20000000U)

#define EDMA_TPCC_ERH_E54_SHIFT                                                                           ((uint32_t)22U)
#define EDMA_TPCC_ERH_E54_MASK                                                                            ((uint32_t)0x00400000U)

#define EDMA_TPCC_ERH_E55_SHIFT                                                                           ((uint32_t)23U)
#define EDMA_TPCC_ERH_E55_MASK                                                                            ((uint32_t)0x00800000U)

#define EDMA_TPCC_ERH_E59_SHIFT                                                                           ((uint32_t)27U)
#define EDMA_TPCC_ERH_E59_MASK                                                                            ((uint32_t)0x08000000U)

#define EDMA_TPCC_ERH_E50_SHIFT                                                                           ((uint32_t)18U)
#define EDMA_TPCC_ERH_E50_MASK                                                                            ((uint32_t)0x00040000U)

#define EDMA_TPCC_ERH_E52_SHIFT                                                                           ((uint32_t)20U)
#define EDMA_TPCC_ERH_E52_MASK                                                                            ((uint32_t)0x00100000U)

#define EDMA_TPCC_ERH_E53_SHIFT                                                                           ((uint32_t)21U)
#define EDMA_TPCC_ERH_E53_MASK                                                                            ((uint32_t)0x00200000U)

#define EDMA_TPCC_ERH_E51_SHIFT                                                                           ((uint32_t)19U)
#define EDMA_TPCC_ERH_E51_MASK                                                                            ((uint32_t)0x00080000U)

#define EDMA_TPCC_ERH_E36_SHIFT                                                                           ((uint32_t)4U)
#define EDMA_TPCC_ERH_E36_MASK                                                                            ((uint32_t)0x00000010U)

#define EDMA_TPCC_ERH_E40_SHIFT                                                                           ((uint32_t)8U)
#define EDMA_TPCC_ERH_E40_MASK                                                                            ((uint32_t)0x00000100U)

#define EDMA_TPCC_ERH_E39_SHIFT                                                                           ((uint32_t)7U)
#define EDMA_TPCC_ERH_E39_MASK                                                                            ((uint32_t)0x00000080U)

#define EDMA_TPCC_ERH_E38_SHIFT                                                                           ((uint32_t)6U)
#define EDMA_TPCC_ERH_E38_MASK                                                                            ((uint32_t)0x00000040U)

#define EDMA_TPCC_ERH_E42_SHIFT                                                                           ((uint32_t)10U)
#define EDMA_TPCC_ERH_E42_MASK                                                                            ((uint32_t)0x00000400U)

#define EDMA_TPCC_ERH_E49_SHIFT                                                                           ((uint32_t)17U)
#define EDMA_TPCC_ERH_E49_MASK                                                                            ((uint32_t)0x00020000U)

#define EDMA_TPCC_ERH_E41_SHIFT                                                                           ((uint32_t)9U)
#define EDMA_TPCC_ERH_E41_MASK                                                                            ((uint32_t)0x00000200U)

#define EDMA_TPCC_ERH_E32_SHIFT                                                                           ((uint32_t)0U)
#define EDMA_TPCC_ERH_E32_MASK                                                                            ((uint32_t)0x00000001U)

#define EDMA_TPCC_ERH_E35_SHIFT                                                                           ((uint32_t)3U)
#define EDMA_TPCC_ERH_E35_MASK                                                                            ((uint32_t)0x00000008U)

#define EDMA_TPCC_ERH_E43_SHIFT                                                                           ((uint32_t)11U)
#define EDMA_TPCC_ERH_E43_MASK                                                                            ((uint32_t)0x00000800U)

#define EDMA_TPCC_ERH_E34_SHIFT                                                                           ((uint32_t)2U)
#define EDMA_TPCC_ERH_E34_MASK                                                                            ((uint32_t)0x00000004U)

#define EDMA_TPCC_ERH_E44_SHIFT                                                                           ((uint32_t)12U)
#define EDMA_TPCC_ERH_E44_MASK                                                                            ((uint32_t)0x00001000U)

#define EDMA_TPCC_ERH_E37_SHIFT                                                                           ((uint32_t)5U)
#define EDMA_TPCC_ERH_E37_MASK                                                                            ((uint32_t)0x00000020U)

#define EDMA_TPCC_ERH_E45_SHIFT                                                                           ((uint32_t)13U)
#define EDMA_TPCC_ERH_E45_MASK                                                                            ((uint32_t)0x00002000U)

#define EDMA_TPCC_ERH_E58_SHIFT                                                                           ((uint32_t)26U)
#define EDMA_TPCC_ERH_E58_MASK                                                                            ((uint32_t)0x04000000U)

#define EDMA_TPCC_ERH_E62_SHIFT                                                                           ((uint32_t)30U)
#define EDMA_TPCC_ERH_E62_MASK                                                                            ((uint32_t)0x40000000U)

#define EDMA_TPCC_ERH_E46_SHIFT                                                                           ((uint32_t)14U)
#define EDMA_TPCC_ERH_E46_MASK                                                                            ((uint32_t)0x00004000U)

#define EDMA_TPCC_ERH_E57_SHIFT                                                                           ((uint32_t)25U)
#define EDMA_TPCC_ERH_E57_MASK                                                                            ((uint32_t)0x02000000U)

#define EDMA_TPCC_ERH_E63_SHIFT                                                                           ((uint32_t)31U)
#define EDMA_TPCC_ERH_E63_MASK                                                                            ((uint32_t)0x80000000U)

#define EDMA_TPCC_ERH_E47_SHIFT                                                                           ((uint32_t)15U)
#define EDMA_TPCC_ERH_E47_MASK                                                                            ((uint32_t)0x00008000U)

#define EDMA_TPCC_ERH_E56_SHIFT                                                                           ((uint32_t)24U)
#define EDMA_TPCC_ERH_E56_MASK                                                                            ((uint32_t)0x01000000U)

#define EDMA_TPCC_ERH_E48_SHIFT                                                                           ((uint32_t)16U)
#define EDMA_TPCC_ERH_E48_MASK                                                                            ((uint32_t)0x00010000U)

#define EDMA_TPCC_ERH_E33_SHIFT                                                                           ((uint32_t)1U)
#define EDMA_TPCC_ERH_E33_MASK                                                                            ((uint32_t)0x00000002U)

#define EDMA_TPCC_ERH_E60_SHIFT                                                                           ((uint32_t)28U)
#define EDMA_TPCC_ERH_E60_MASK                                                                            ((uint32_t)0x10000000U)

#define EDMA_TPCC_ECR_E16_SHIFT                                                                           ((uint32_t)16U)
#define EDMA_TPCC_ECR_E16_MASK                                                                            ((uint32_t)0x00010000U)

#define EDMA_TPCC_ECR_E10_SHIFT                                                                           ((uint32_t)10U)
#define EDMA_TPCC_ECR_E10_MASK                                                                            ((uint32_t)0x00000400U)

#define EDMA_TPCC_ECR_E30_SHIFT                                                                           ((uint32_t)30U)
#define EDMA_TPCC_ECR_E30_MASK                                                                            ((uint32_t)0x40000000U)

#define EDMA_TPCC_ECR_E19_SHIFT                                                                           ((uint32_t)19U)
#define EDMA_TPCC_ECR_E19_MASK                                                                            ((uint32_t)0x00080000U)

#define EDMA_TPCC_ECR_E29_SHIFT                                                                           ((uint32_t)29U)
#define EDMA_TPCC_ECR_E29_MASK                                                                            ((uint32_t)0x20000000U)

#define EDMA_TPCC_ECR_E12_SHIFT                                                                           ((uint32_t)12U)
#define EDMA_TPCC_ECR_E12_MASK                                                                            ((uint32_t)0x00001000U)

#define EDMA_TPCC_ECR_E18_SHIFT                                                                           ((uint32_t)18U)
#define EDMA_TPCC_ECR_E18_MASK                                                                            ((uint32_t)0x00040000U)

#define EDMA_TPCC_ECR_E11_SHIFT                                                                           ((uint32_t)11U)
#define EDMA_TPCC_ECR_E11_MASK                                                                            ((uint32_t)0x00000800U)

#define EDMA_TPCC_ECR_E21_SHIFT                                                                           ((uint32_t)21U)
#define EDMA_TPCC_ECR_E21_MASK                                                                            ((uint32_t)0x00200000U)

#define EDMA_TPCC_ECR_E31_SHIFT                                                                           ((uint32_t)31U)
#define EDMA_TPCC_ECR_E31_MASK                                                                            ((uint32_t)0x80000000U)

#define EDMA_TPCC_ECR_E14_SHIFT                                                                           ((uint32_t)14U)
#define EDMA_TPCC_ECR_E14_MASK                                                                            ((uint32_t)0x00004000U)

#define EDMA_TPCC_ECR_E26_SHIFT                                                                           ((uint32_t)26U)
#define EDMA_TPCC_ECR_E26_MASK                                                                            ((uint32_t)0x04000000U)

#define EDMA_TPCC_ECR_E13_SHIFT                                                                           ((uint32_t)13U)
#define EDMA_TPCC_ECR_E13_MASK                                                                            ((uint32_t)0x00002000U)

#define EDMA_TPCC_ECR_E25_SHIFT                                                                           ((uint32_t)25U)
#define EDMA_TPCC_ECR_E25_MASK                                                                            ((uint32_t)0x02000000U)

#define EDMA_TPCC_ECR_E15_SHIFT                                                                           ((uint32_t)15U)
#define EDMA_TPCC_ECR_E15_MASK                                                                            ((uint32_t)0x00008000U)

#define EDMA_TPCC_ECR_E28_SHIFT                                                                           ((uint32_t)28U)
#define EDMA_TPCC_ECR_E28_MASK                                                                            ((uint32_t)0x10000000U)

#define EDMA_TPCC_ECR_E17_SHIFT                                                                           ((uint32_t)17U)
#define EDMA_TPCC_ECR_E17_MASK                                                                            ((uint32_t)0x00020000U)

#define EDMA_TPCC_ECR_E27_SHIFT                                                                           ((uint32_t)27U)
#define EDMA_TPCC_ECR_E27_MASK                                                                            ((uint32_t)0x08000000U)

#define EDMA_TPCC_ECR_E4_SHIFT                                                                            ((uint32_t)4U)
#define EDMA_TPCC_ECR_E4_MASK                                                                             ((uint32_t)0x00000010U)

#define EDMA_TPCC_ECR_E24_SHIFT                                                                           ((uint32_t)24U)
#define EDMA_TPCC_ECR_E24_MASK                                                                            ((uint32_t)0x01000000U)

#define EDMA_TPCC_ECR_E2_SHIFT                                                                            ((uint32_t)2U)
#define EDMA_TPCC_ECR_E2_MASK                                                                             ((uint32_t)0x00000004U)

#define EDMA_TPCC_ECR_E3_SHIFT                                                                            ((uint32_t)3U)
#define EDMA_TPCC_ECR_E3_MASK                                                                             ((uint32_t)0x00000008U)

#define EDMA_TPCC_ECR_E0_SHIFT                                                                            ((uint32_t)0U)
#define EDMA_TPCC_ECR_E0_MASK                                                                             ((uint32_t)0x00000001U)

#define EDMA_TPCC_ECR_E20_SHIFT                                                                           ((uint32_t)20U)
#define EDMA_TPCC_ECR_E20_MASK                                                                            ((uint32_t)0x00100000U)

#define EDMA_TPCC_ECR_E6_SHIFT                                                                            ((uint32_t)6U)
#define EDMA_TPCC_ECR_E6_MASK                                                                             ((uint32_t)0x00000040U)

#define EDMA_TPCC_ECR_E1_SHIFT                                                                            ((uint32_t)1U)
#define EDMA_TPCC_ECR_E1_MASK                                                                             ((uint32_t)0x00000002U)

#define EDMA_TPCC_ECR_E5_SHIFT                                                                            ((uint32_t)5U)
#define EDMA_TPCC_ECR_E5_MASK                                                                             ((uint32_t)0x00000020U)

#define EDMA_TPCC_ECR_E23_SHIFT                                                                           ((uint32_t)23U)
#define EDMA_TPCC_ECR_E23_MASK                                                                            ((uint32_t)0x00800000U)

#define EDMA_TPCC_ECR_E8_SHIFT                                                                            ((uint32_t)8U)
#define EDMA_TPCC_ECR_E8_MASK                                                                             ((uint32_t)0x00000100U)

#define EDMA_TPCC_ECR_E9_SHIFT                                                                            ((uint32_t)9U)
#define EDMA_TPCC_ECR_E9_MASK                                                                             ((uint32_t)0x00000200U)

#define EDMA_TPCC_ECR_E22_SHIFT                                                                           ((uint32_t)22U)
#define EDMA_TPCC_ECR_E22_MASK                                                                            ((uint32_t)0x00400000U)

#define EDMA_TPCC_ECR_E7_SHIFT                                                                            ((uint32_t)7U)
#define EDMA_TPCC_ECR_E7_MASK                                                                             ((uint32_t)0x00000080U)

#define EDMA_TPCC_ECRH_E50_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_ECRH_E50_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_ECRH_E36_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_ECRH_E36_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_ECRH_E60_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_ECRH_E60_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_ECRH_E49_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_ECRH_E49_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_ECRH_E37_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_ECRH_E37_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_ECRH_E48_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_ECRH_E48_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_ECRH_E58_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_ECRH_E58_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_ECRH_E38_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_ECRH_E38_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_ECRH_E63_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_ECRH_E63_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_ECRH_E47_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_ECRH_E47_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_ECRH_E39_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_ECRH_E39_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_ECRH_E32_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_ECRH_E32_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_ECRH_E51_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_ECRH_E51_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_ECRH_E33_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_ECRH_E33_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_ECRH_E34_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_ECRH_E34_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_ECRH_E35_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_ECRH_E35_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_ECRH_E42_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_ECRH_E42_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_ECRH_E52_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_ECRH_E52_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_ECRH_E41_SHIFT                                                                          ((uint32_t)9U)
#define EDMA_TPCC_ECRH_E41_MASK                                                                           ((uint32_t)0x00000200U)

#define EDMA_TPCC_ECRH_E55_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_ECRH_E55_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_ECRH_E53_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_ECRH_E53_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_ECRH_E46_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_ECRH_E46_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_ECRH_E62_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_ECRH_E62_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_ECRH_E40_SHIFT                                                                          ((uint32_t)8U)
#define EDMA_TPCC_ECRH_E40_MASK                                                                           ((uint32_t)0x00000100U)

#define EDMA_TPCC_ECRH_E56_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_ECRH_E56_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_ECRH_E61_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_ECRH_E61_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_ECRH_E45_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_ECRH_E45_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_ECRH_E59_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_ECRH_E59_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_ECRH_E44_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_ECRH_E44_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_ECRH_E54_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_ECRH_E54_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_ECRH_E43_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_ECRH_E43_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_ECRH_E57_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_ECRH_E57_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_ESR_E3_SHIFT                                                                            ((uint32_t)3U)
#define EDMA_TPCC_ESR_E3_MASK                                                                             ((uint32_t)0x00000008U)

#define EDMA_TPCC_ESR_E6_SHIFT                                                                            ((uint32_t)6U)
#define EDMA_TPCC_ESR_E6_MASK                                                                             ((uint32_t)0x00000040U)

#define EDMA_TPCC_ESR_E20_SHIFT                                                                           ((uint32_t)20U)
#define EDMA_TPCC_ESR_E20_MASK                                                                            ((uint32_t)0x00100000U)

#define EDMA_TPCC_ESR_E1_SHIFT                                                                            ((uint32_t)1U)
#define EDMA_TPCC_ESR_E1_MASK                                                                             ((uint32_t)0x00000002U)

#define EDMA_TPCC_ESR_E4_SHIFT                                                                            ((uint32_t)4U)
#define EDMA_TPCC_ESR_E4_MASK                                                                             ((uint32_t)0x00000010U)

#define EDMA_TPCC_ESR_E18_SHIFT                                                                           ((uint32_t)18U)
#define EDMA_TPCC_ESR_E18_MASK                                                                            ((uint32_t)0x00040000U)

#define EDMA_TPCC_ESR_E7_SHIFT                                                                            ((uint32_t)7U)
#define EDMA_TPCC_ESR_E7_MASK                                                                             ((uint32_t)0x00000080U)

#define EDMA_TPCC_ESR_E11_SHIFT                                                                           ((uint32_t)11U)
#define EDMA_TPCC_ESR_E11_MASK                                                                            ((uint32_t)0x00000800U)

#define EDMA_TPCC_ESR_E10_SHIFT                                                                           ((uint32_t)10U)
#define EDMA_TPCC_ESR_E10_MASK                                                                            ((uint32_t)0x00000400U)

#define EDMA_TPCC_ESR_E5_SHIFT                                                                            ((uint32_t)5U)
#define EDMA_TPCC_ESR_E5_MASK                                                                             ((uint32_t)0x00000020U)

#define EDMA_TPCC_ESR_E8_SHIFT                                                                            ((uint32_t)8U)
#define EDMA_TPCC_ESR_E8_MASK                                                                             ((uint32_t)0x00000100U)

#define EDMA_TPCC_ESR_E22_SHIFT                                                                           ((uint32_t)22U)
#define EDMA_TPCC_ESR_E22_MASK                                                                            ((uint32_t)0x00400000U)

#define EDMA_TPCC_ESR_E21_SHIFT                                                                           ((uint32_t)21U)
#define EDMA_TPCC_ESR_E21_MASK                                                                            ((uint32_t)0x00200000U)

#define EDMA_TPCC_ESR_E23_SHIFT                                                                           ((uint32_t)23U)
#define EDMA_TPCC_ESR_E23_MASK                                                                            ((uint32_t)0x00800000U)

#define EDMA_TPCC_ESR_E31_SHIFT                                                                           ((uint32_t)31U)
#define EDMA_TPCC_ESR_E31_MASK                                                                            ((uint32_t)0x80000000U)

#define EDMA_TPCC_ESR_E15_SHIFT                                                                           ((uint32_t)15U)
#define EDMA_TPCC_ESR_E15_MASK                                                                            ((uint32_t)0x00008000U)

#define EDMA_TPCC_ESR_E26_SHIFT                                                                           ((uint32_t)26U)
#define EDMA_TPCC_ESR_E26_MASK                                                                            ((uint32_t)0x04000000U)

#define EDMA_TPCC_ESR_E24_SHIFT                                                                           ((uint32_t)24U)
#define EDMA_TPCC_ESR_E24_MASK                                                                            ((uint32_t)0x01000000U)

#define EDMA_TPCC_ESR_E12_SHIFT                                                                           ((uint32_t)12U)
#define EDMA_TPCC_ESR_E12_MASK                                                                            ((uint32_t)0x00001000U)

#define EDMA_TPCC_ESR_E13_SHIFT                                                                           ((uint32_t)13U)
#define EDMA_TPCC_ESR_E13_MASK                                                                            ((uint32_t)0x00002000U)

#define EDMA_TPCC_ESR_E9_SHIFT                                                                            ((uint32_t)9U)
#define EDMA_TPCC_ESR_E9_MASK                                                                             ((uint32_t)0x00000200U)

#define EDMA_TPCC_ESR_E28_SHIFT                                                                           ((uint32_t)28U)
#define EDMA_TPCC_ESR_E28_MASK                                                                            ((uint32_t)0x10000000U)

#define EDMA_TPCC_ESR_E25_SHIFT                                                                           ((uint32_t)25U)
#define EDMA_TPCC_ESR_E25_MASK                                                                            ((uint32_t)0x02000000U)

#define EDMA_TPCC_ESR_E0_SHIFT                                                                            ((uint32_t)0U)
#define EDMA_TPCC_ESR_E0_MASK                                                                             ((uint32_t)0x00000001U)

#define EDMA_TPCC_ESR_E19_SHIFT                                                                           ((uint32_t)19U)
#define EDMA_TPCC_ESR_E19_MASK                                                                            ((uint32_t)0x00080000U)

#define EDMA_TPCC_ESR_E16_SHIFT                                                                           ((uint32_t)16U)
#define EDMA_TPCC_ESR_E16_MASK                                                                            ((uint32_t)0x00010000U)

#define EDMA_TPCC_ESR_E2_SHIFT                                                                            ((uint32_t)2U)
#define EDMA_TPCC_ESR_E2_MASK                                                                             ((uint32_t)0x00000004U)

#define EDMA_TPCC_ESR_E27_SHIFT                                                                           ((uint32_t)27U)
#define EDMA_TPCC_ESR_E27_MASK                                                                            ((uint32_t)0x08000000U)

#define EDMA_TPCC_ESR_E17_SHIFT                                                                           ((uint32_t)17U)
#define EDMA_TPCC_ESR_E17_MASK                                                                            ((uint32_t)0x00020000U)

#define EDMA_TPCC_ESR_E30_SHIFT                                                                           ((uint32_t)30U)
#define EDMA_TPCC_ESR_E30_MASK                                                                            ((uint32_t)0x40000000U)

#define EDMA_TPCC_ESR_E14_SHIFT                                                                           ((uint32_t)14U)
#define EDMA_TPCC_ESR_E14_MASK                                                                            ((uint32_t)0x00004000U)

#define EDMA_TPCC_ESR_E29_SHIFT                                                                           ((uint32_t)29U)
#define EDMA_TPCC_ESR_E29_MASK                                                                            ((uint32_t)0x20000000U)

#define EDMA_TPCC_ESRH_E41_SHIFT                                                                          ((uint32_t)9U)
#define EDMA_TPCC_ESRH_E41_MASK                                                                           ((uint32_t)0x00000200U)

#define EDMA_TPCC_ESRH_E57_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_ESRH_E57_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_ESRH_E46_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_ESRH_E46_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_ESRH_E42_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_ESRH_E42_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_ESRH_E56_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_ESRH_E56_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_ESRH_E33_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_ESRH_E33_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_ESRH_E43_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_ESRH_E43_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_ESRH_E55_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_ESRH_E55_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_ESRH_E32_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_ESRH_E32_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_ESRH_E48_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_ESRH_E48_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_ESRH_E44_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_ESRH_E44_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_ESRH_E45_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_ESRH_E45_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_ESRH_E49_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_ESRH_E49_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_ESRH_E61_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_ESRH_E61_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_ESRH_E52_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_ESRH_E52_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_ESRH_E63_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_ESRH_E63_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_ESRH_E34_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_ESRH_E34_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_ESRH_E47_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_ESRH_E47_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_ESRH_E60_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_ESRH_E60_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_ESRH_E59_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_ESRH_E59_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_ESRH_E50_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_ESRH_E50_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_ESRH_E58_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_ESRH_E58_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_ESRH_E53_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_ESRH_E53_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_ESRH_E35_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_ESRH_E35_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_ESRH_E51_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_ESRH_E51_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_ESRH_E54_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_ESRH_E54_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_ESRH_E36_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_ESRH_E36_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_ESRH_E62_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_ESRH_E62_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_ESRH_E37_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_ESRH_E37_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_ESRH_E38_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_ESRH_E38_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_ESRH_E39_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_ESRH_E39_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_ESRH_E40_SHIFT                                                                          ((uint32_t)8U)
#define EDMA_TPCC_ESRH_E40_MASK                                                                           ((uint32_t)0x00000100U)

#define EDMA_TPCC_CER_E6_SHIFT                                                                            ((uint32_t)6U)
#define EDMA_TPCC_CER_E6_MASK                                                                             ((uint32_t)0x00000040U)

#define EDMA_TPCC_CER_E25_SHIFT                                                                           ((uint32_t)25U)
#define EDMA_TPCC_CER_E25_MASK                                                                            ((uint32_t)0x02000000U)

#define EDMA_TPCC_CER_E18_SHIFT                                                                           ((uint32_t)18U)
#define EDMA_TPCC_CER_E18_MASK                                                                            ((uint32_t)0x00040000U)

#define EDMA_TPCC_CER_E7_SHIFT                                                                            ((uint32_t)7U)
#define EDMA_TPCC_CER_E7_MASK                                                                             ((uint32_t)0x00000080U)

#define EDMA_TPCC_CER_E24_SHIFT                                                                           ((uint32_t)24U)
#define EDMA_TPCC_CER_E24_MASK                                                                            ((uint32_t)0x01000000U)

#define EDMA_TPCC_CER_E31_SHIFT                                                                           ((uint32_t)31U)
#define EDMA_TPCC_CER_E31_MASK                                                                            ((uint32_t)0x80000000U)

#define EDMA_TPCC_CER_E8_SHIFT                                                                            ((uint32_t)8U)
#define EDMA_TPCC_CER_E8_MASK                                                                             ((uint32_t)0x00000100U)

#define EDMA_TPCC_CER_E26_SHIFT                                                                           ((uint32_t)26U)
#define EDMA_TPCC_CER_E26_MASK                                                                            ((uint32_t)0x04000000U)

#define EDMA_TPCC_CER_E29_SHIFT                                                                           ((uint32_t)29U)
#define EDMA_TPCC_CER_E29_MASK                                                                            ((uint32_t)0x20000000U)

#define EDMA_TPCC_CER_E9_SHIFT                                                                            ((uint32_t)9U)
#define EDMA_TPCC_CER_E9_MASK                                                                             ((uint32_t)0x00000200U)

#define EDMA_TPCC_CER_E30_SHIFT                                                                           ((uint32_t)30U)
#define EDMA_TPCC_CER_E30_MASK                                                                            ((uint32_t)0x40000000U)

#define EDMA_TPCC_CER_E10_SHIFT                                                                           ((uint32_t)10U)
#define EDMA_TPCC_CER_E10_MASK                                                                            ((uint32_t)0x00000400U)

#define EDMA_TPCC_CER_E28_SHIFT                                                                           ((uint32_t)28U)
#define EDMA_TPCC_CER_E28_MASK                                                                            ((uint32_t)0x10000000U)

#define EDMA_TPCC_CER_E11_SHIFT                                                                           ((uint32_t)11U)
#define EDMA_TPCC_CER_E11_MASK                                                                            ((uint32_t)0x00000800U)

#define EDMA_TPCC_CER_E27_SHIFT                                                                           ((uint32_t)27U)
#define EDMA_TPCC_CER_E27_MASK                                                                            ((uint32_t)0x08000000U)

#define EDMA_TPCC_CER_E0_SHIFT                                                                            ((uint32_t)0U)
#define EDMA_TPCC_CER_E0_MASK                                                                             ((uint32_t)0x00000001U)

#define EDMA_TPCC_CER_E12_SHIFT                                                                           ((uint32_t)12U)
#define EDMA_TPCC_CER_E12_MASK                                                                            ((uint32_t)0x00001000U)

#define EDMA_TPCC_CER_E1_SHIFT                                                                            ((uint32_t)1U)
#define EDMA_TPCC_CER_E1_MASK                                                                             ((uint32_t)0x00000002U)

#define EDMA_TPCC_CER_E13_SHIFT                                                                           ((uint32_t)13U)
#define EDMA_TPCC_CER_E13_MASK                                                                            ((uint32_t)0x00002000U)

#define EDMA_TPCC_CER_E19_SHIFT                                                                           ((uint32_t)19U)
#define EDMA_TPCC_CER_E19_MASK                                                                            ((uint32_t)0x00080000U)

#define EDMA_TPCC_CER_E2_SHIFT                                                                            ((uint32_t)2U)
#define EDMA_TPCC_CER_E2_MASK                                                                             ((uint32_t)0x00000004U)

#define EDMA_TPCC_CER_E14_SHIFT                                                                           ((uint32_t)14U)
#define EDMA_TPCC_CER_E14_MASK                                                                            ((uint32_t)0x00004000U)

#define EDMA_TPCC_CER_E3_SHIFT                                                                            ((uint32_t)3U)
#define EDMA_TPCC_CER_E3_MASK                                                                             ((uint32_t)0x00000008U)

#define EDMA_TPCC_CER_E15_SHIFT                                                                           ((uint32_t)15U)
#define EDMA_TPCC_CER_E15_MASK                                                                            ((uint32_t)0x00008000U)

#define EDMA_TPCC_CER_E21_SHIFT                                                                           ((uint32_t)21U)
#define EDMA_TPCC_CER_E21_MASK                                                                            ((uint32_t)0x00200000U)

#define EDMA_TPCC_CER_E20_SHIFT                                                                           ((uint32_t)20U)
#define EDMA_TPCC_CER_E20_MASK                                                                            ((uint32_t)0x00100000U)

#define EDMA_TPCC_CER_E4_SHIFT                                                                            ((uint32_t)4U)
#define EDMA_TPCC_CER_E4_MASK                                                                             ((uint32_t)0x00000010U)

#define EDMA_TPCC_CER_E23_SHIFT                                                                           ((uint32_t)23U)
#define EDMA_TPCC_CER_E23_MASK                                                                            ((uint32_t)0x00800000U)

#define EDMA_TPCC_CER_E16_SHIFT                                                                           ((uint32_t)16U)
#define EDMA_TPCC_CER_E16_MASK                                                                            ((uint32_t)0x00010000U)

#define EDMA_TPCC_CER_E5_SHIFT                                                                            ((uint32_t)5U)
#define EDMA_TPCC_CER_E5_MASK                                                                             ((uint32_t)0x00000020U)

#define EDMA_TPCC_CER_E22_SHIFT                                                                           ((uint32_t)22U)
#define EDMA_TPCC_CER_E22_MASK                                                                            ((uint32_t)0x00400000U)

#define EDMA_TPCC_CER_E17_SHIFT                                                                           ((uint32_t)17U)
#define EDMA_TPCC_CER_E17_MASK                                                                            ((uint32_t)0x00020000U)

#define EDMA_TPCC_CERH_E49_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_CERH_E49_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_CERH_E38_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_CERH_E38_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_CERH_E39_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_CERH_E39_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_CERH_E40_SHIFT                                                                          ((uint32_t)8U)
#define EDMA_TPCC_CERH_E40_MASK                                                                           ((uint32_t)0x00000100U)

#define EDMA_TPCC_CERH_E63_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_CERH_E63_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_CERH_E41_SHIFT                                                                          ((uint32_t)9U)
#define EDMA_TPCC_CERH_E41_MASK                                                                           ((uint32_t)0x00000200U)

#define EDMA_TPCC_CERH_E62_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_CERH_E62_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_CERH_E61_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_CERH_E61_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_CERH_E42_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_CERH_E42_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_CERH_E32_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_CERH_E32_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_CERH_E57_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_CERH_E57_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_CERH_E43_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_CERH_E43_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_CERH_E58_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_CERH_E58_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_CERH_E44_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_CERH_E44_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_CERH_E59_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_CERH_E59_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_CERH_E60_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_CERH_E60_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_CERH_E45_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_CERH_E45_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_CERH_E33_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_CERH_E33_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_CERH_E46_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_CERH_E46_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_CERH_E34_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_CERH_E34_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_CERH_E47_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_CERH_E47_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_CERH_E53_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_CERH_E53_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_CERH_E54_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_CERH_E54_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_CERH_E50_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_CERH_E50_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_CERH_E35_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_CERH_E35_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_CERH_E48_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_CERH_E48_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_CERH_E56_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_CERH_E56_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_CERH_E51_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_CERH_E51_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_CERH_E36_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_CERH_E36_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_CERH_E55_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_CERH_E55_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_CERH_E52_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_CERH_E52_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_CERH_E37_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_CERH_E37_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_EER_E11_SHIFT                                                                           ((uint32_t)11U)
#define EDMA_TPCC_EER_E11_MASK                                                                            ((uint32_t)0x00000800U)

#define EDMA_TPCC_EER_E24_SHIFT                                                                           ((uint32_t)24U)
#define EDMA_TPCC_EER_E24_MASK                                                                            ((uint32_t)0x01000000U)

#define EDMA_TPCC_EER_E10_SHIFT                                                                           ((uint32_t)10U)
#define EDMA_TPCC_EER_E10_MASK                                                                            ((uint32_t)0x00000400U)

#define EDMA_TPCC_EER_E12_SHIFT                                                                           ((uint32_t)12U)
#define EDMA_TPCC_EER_E12_MASK                                                                            ((uint32_t)0x00001000U)

#define EDMA_TPCC_EER_E25_SHIFT                                                                           ((uint32_t)25U)
#define EDMA_TPCC_EER_E25_MASK                                                                            ((uint32_t)0x02000000U)

#define EDMA_TPCC_EER_E9_SHIFT                                                                            ((uint32_t)9U)
#define EDMA_TPCC_EER_E9_MASK                                                                             ((uint32_t)0x00000200U)

#define EDMA_TPCC_EER_E21_SHIFT                                                                           ((uint32_t)21U)
#define EDMA_TPCC_EER_E21_MASK                                                                            ((uint32_t)0x00200000U)

#define EDMA_TPCC_EER_E22_SHIFT                                                                           ((uint32_t)22U)
#define EDMA_TPCC_EER_E22_MASK                                                                            ((uint32_t)0x00400000U)

#define EDMA_TPCC_EER_E0_SHIFT                                                                            ((uint32_t)0U)
#define EDMA_TPCC_EER_E0_MASK                                                                             ((uint32_t)0x00000001U)

#define EDMA_TPCC_EER_E23_SHIFT                                                                           ((uint32_t)23U)
#define EDMA_TPCC_EER_E23_MASK                                                                            ((uint32_t)0x00800000U)

#define EDMA_TPCC_EER_E19_SHIFT                                                                           ((uint32_t)19U)
#define EDMA_TPCC_EER_E19_MASK                                                                            ((uint32_t)0x00080000U)

#define EDMA_TPCC_EER_E20_SHIFT                                                                           ((uint32_t)20U)
#define EDMA_TPCC_EER_E20_MASK                                                                            ((uint32_t)0x00100000U)

#define EDMA_TPCC_EER_E29_SHIFT                                                                           ((uint32_t)29U)
#define EDMA_TPCC_EER_E29_MASK                                                                            ((uint32_t)0x20000000U)

#define EDMA_TPCC_EER_E30_SHIFT                                                                           ((uint32_t)30U)
#define EDMA_TPCC_EER_E30_MASK                                                                            ((uint32_t)0x40000000U)

#define EDMA_TPCC_EER_E18_SHIFT                                                                           ((uint32_t)18U)
#define EDMA_TPCC_EER_E18_MASK                                                                            ((uint32_t)0x00040000U)

#define EDMA_TPCC_EER_E31_SHIFT                                                                           ((uint32_t)31U)
#define EDMA_TPCC_EER_E31_MASK                                                                            ((uint32_t)0x80000000U)

#define EDMA_TPCC_EER_E5_SHIFT                                                                            ((uint32_t)5U)
#define EDMA_TPCC_EER_E5_MASK                                                                             ((uint32_t)0x00000020U)

#define EDMA_TPCC_EER_E6_SHIFT                                                                            ((uint32_t)6U)
#define EDMA_TPCC_EER_E6_MASK                                                                             ((uint32_t)0x00000040U)

#define EDMA_TPCC_EER_E8_SHIFT                                                                            ((uint32_t)8U)
#define EDMA_TPCC_EER_E8_MASK                                                                             ((uint32_t)0x00000100U)

#define EDMA_TPCC_EER_E7_SHIFT                                                                            ((uint32_t)7U)
#define EDMA_TPCC_EER_E7_MASK                                                                             ((uint32_t)0x00000080U)

#define EDMA_TPCC_EER_E28_SHIFT                                                                           ((uint32_t)28U)
#define EDMA_TPCC_EER_E28_MASK                                                                            ((uint32_t)0x10000000U)

#define EDMA_TPCC_EER_E3_SHIFT                                                                            ((uint32_t)3U)
#define EDMA_TPCC_EER_E3_MASK                                                                             ((uint32_t)0x00000008U)

#define EDMA_TPCC_EER_E2_SHIFT                                                                            ((uint32_t)2U)
#define EDMA_TPCC_EER_E2_MASK                                                                             ((uint32_t)0x00000004U)

#define EDMA_TPCC_EER_E1_SHIFT                                                                            ((uint32_t)1U)
#define EDMA_TPCC_EER_E1_MASK                                                                             ((uint32_t)0x00000002U)

#define EDMA_TPCC_EER_E13_SHIFT                                                                           ((uint32_t)13U)
#define EDMA_TPCC_EER_E13_MASK                                                                            ((uint32_t)0x00002000U)

#define EDMA_TPCC_EER_E17_SHIFT                                                                           ((uint32_t)17U)
#define EDMA_TPCC_EER_E17_MASK                                                                            ((uint32_t)0x00020000U)

#define EDMA_TPCC_EER_E26_SHIFT                                                                           ((uint32_t)26U)
#define EDMA_TPCC_EER_E26_MASK                                                                            ((uint32_t)0x04000000U)

#define EDMA_TPCC_EER_E14_SHIFT                                                                           ((uint32_t)14U)
#define EDMA_TPCC_EER_E14_MASK                                                                            ((uint32_t)0x00004000U)

#define EDMA_TPCC_EER_E16_SHIFT                                                                           ((uint32_t)16U)
#define EDMA_TPCC_EER_E16_MASK                                                                            ((uint32_t)0x00010000U)

#define EDMA_TPCC_EER_E27_SHIFT                                                                           ((uint32_t)27U)
#define EDMA_TPCC_EER_E27_MASK                                                                            ((uint32_t)0x08000000U)

#define EDMA_TPCC_EER_E4_SHIFT                                                                            ((uint32_t)4U)
#define EDMA_TPCC_EER_E4_MASK                                                                             ((uint32_t)0x00000010U)

#define EDMA_TPCC_EER_E15_SHIFT                                                                           ((uint32_t)15U)
#define EDMA_TPCC_EER_E15_MASK                                                                            ((uint32_t)0x00008000U)

#define EDMA_TPCC_EERH_E47_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_EERH_E47_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_EERH_E45_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_EERH_E45_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_EERH_E35_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_EERH_E35_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_EERH_E56_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_EERH_E56_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_EERH_E46_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_EERH_E46_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_EERH_E36_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_EERH_E36_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_EERH_E55_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_EERH_E55_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_EERH_E33_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_EERH_E33_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_EERH_E54_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_EERH_E54_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_EERH_E43_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_EERH_E43_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_EERH_E53_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_EERH_E53_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_EERH_E63_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_EERH_E63_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_EERH_E34_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_EERH_E34_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_EERH_E44_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_EERH_E44_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_EERH_E52_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_EERH_E52_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_EERH_E41_SHIFT                                                                          ((uint32_t)9U)
#define EDMA_TPCC_EERH_E41_MASK                                                                           ((uint32_t)0x00000200U)

#define EDMA_TPCC_EERH_E62_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_EERH_E62_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_EERH_E32_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_EERH_E32_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_EERH_E51_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_EERH_E51_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_EERH_E42_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_EERH_E42_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_EERH_E61_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_EERH_E61_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_EERH_E50_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_EERH_E50_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_EERH_E39_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_EERH_E39_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_EERH_E60_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_EERH_E60_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_EERH_E49_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_EERH_E49_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_EERH_E40_SHIFT                                                                          ((uint32_t)8U)
#define EDMA_TPCC_EERH_E40_MASK                                                                           ((uint32_t)0x00000100U)

#define EDMA_TPCC_EERH_E59_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_EERH_E59_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_EERH_E48_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_EERH_E48_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_EERH_E58_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_EERH_E58_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_EERH_E37_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_EERH_E37_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_EERH_E57_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_EERH_E57_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_EERH_E38_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_EERH_E38_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_EECR_E30_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_EECR_E30_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_EECR_E25_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_EECR_E25_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_EECR_E14_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_EECR_E14_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_EECR_E15_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_EECR_E15_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_EECR_E5_SHIFT                                                                           ((uint32_t)5U)
#define EDMA_TPCC_EECR_E5_MASK                                                                            ((uint32_t)0x00000020U)

#define EDMA_TPCC_EECR_E31_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_EECR_E31_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_EECR_E24_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_EECR_E24_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_EECR_E28_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_EECR_E28_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_EECR_E6_SHIFT                                                                           ((uint32_t)6U)
#define EDMA_TPCC_EECR_E6_MASK                                                                            ((uint32_t)0x00000040U)

#define EDMA_TPCC_EECR_E16_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_EECR_E16_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_EECR_E29_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_EECR_E29_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_EECR_E26_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_EECR_E26_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_EECR_E8_SHIFT                                                                           ((uint32_t)8U)
#define EDMA_TPCC_EECR_E8_MASK                                                                            ((uint32_t)0x00000100U)

#define EDMA_TPCC_EECR_E18_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_EECR_E18_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_EECR_E7_SHIFT                                                                           ((uint32_t)7U)
#define EDMA_TPCC_EECR_E7_MASK                                                                            ((uint32_t)0x00000080U)

#define EDMA_TPCC_EECR_E17_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_EECR_E17_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_EECR_E10_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_EECR_E10_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_EECR_E20_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_EECR_E20_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_EECR_E9_SHIFT                                                                           ((uint32_t)9U)
#define EDMA_TPCC_EECR_E9_MASK                                                                            ((uint32_t)0x00000200U)

#define EDMA_TPCC_EECR_E0_SHIFT                                                                           ((uint32_t)0U)
#define EDMA_TPCC_EECR_E0_MASK                                                                            ((uint32_t)0x00000001U)

#define EDMA_TPCC_EECR_E19_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_EECR_E19_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_EECR_E1_SHIFT                                                                           ((uint32_t)1U)
#define EDMA_TPCC_EECR_E1_MASK                                                                            ((uint32_t)0x00000002U)

#define EDMA_TPCC_EECR_E12_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_EECR_E12_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_EECR_E22_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_EECR_E22_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_EECR_E2_SHIFT                                                                           ((uint32_t)2U)
#define EDMA_TPCC_EECR_E2_MASK                                                                            ((uint32_t)0x00000004U)

#define EDMA_TPCC_EECR_E11_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_EECR_E11_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_EECR_E21_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_EECR_E21_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_EECR_E27_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_EECR_E27_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_EECR_E3_SHIFT                                                                           ((uint32_t)3U)
#define EDMA_TPCC_EECR_E3_MASK                                                                            ((uint32_t)0x00000008U)

#define EDMA_TPCC_EECR_E23_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_EECR_E23_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_EECR_E4_SHIFT                                                                           ((uint32_t)4U)
#define EDMA_TPCC_EECR_E4_MASK                                                                            ((uint32_t)0x00000010U)

#define EDMA_TPCC_EECR_E13_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_EECR_E13_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_EECRH_E62_SHIFT                                                                         ((uint32_t)30U)
#define EDMA_TPCC_EECRH_E62_MASK                                                                          ((uint32_t)0x40000000U)

#define EDMA_TPCC_EECRH_E37_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_EECRH_E37_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_EECRH_E51_SHIFT                                                                         ((uint32_t)19U)
#define EDMA_TPCC_EECRH_E51_MASK                                                                          ((uint32_t)0x00080000U)

#define EDMA_TPCC_EECRH_E36_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_EECRH_E36_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_EECRH_E50_SHIFT                                                                         ((uint32_t)18U)
#define EDMA_TPCC_EECRH_E50_MASK                                                                          ((uint32_t)0x00040000U)

#define EDMA_TPCC_EECRH_E35_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_EECRH_E35_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_EECRH_E63_SHIFT                                                                         ((uint32_t)31U)
#define EDMA_TPCC_EECRH_E63_MASK                                                                          ((uint32_t)0x80000000U)

#define EDMA_TPCC_EECRH_E54_SHIFT                                                                         ((uint32_t)22U)
#define EDMA_TPCC_EECRH_E54_MASK                                                                          ((uint32_t)0x00400000U)

#define EDMA_TPCC_EECRH_E58_SHIFT                                                                         ((uint32_t)26U)
#define EDMA_TPCC_EECRH_E58_MASK                                                                          ((uint32_t)0x04000000U)

#define EDMA_TPCC_EECRH_E48_SHIFT                                                                         ((uint32_t)16U)
#define EDMA_TPCC_EECRH_E48_MASK                                                                          ((uint32_t)0x00010000U)

#define EDMA_TPCC_EECRH_E59_SHIFT                                                                         ((uint32_t)27U)
#define EDMA_TPCC_EECRH_E59_MASK                                                                          ((uint32_t)0x08000000U)

#define EDMA_TPCC_EECRH_E53_SHIFT                                                                         ((uint32_t)21U)
#define EDMA_TPCC_EECRH_E53_MASK                                                                          ((uint32_t)0x00200000U)

#define EDMA_TPCC_EECRH_E49_SHIFT                                                                         ((uint32_t)17U)
#define EDMA_TPCC_EECRH_E49_MASK                                                                          ((uint32_t)0x00020000U)

#define EDMA_TPCC_EECRH_E60_SHIFT                                                                         ((uint32_t)28U)
#define EDMA_TPCC_EECRH_E60_MASK                                                                          ((uint32_t)0x10000000U)

#define EDMA_TPCC_EECRH_E61_SHIFT                                                                         ((uint32_t)29U)
#define EDMA_TPCC_EECRH_E61_MASK                                                                          ((uint32_t)0x20000000U)

#define EDMA_TPCC_EECRH_E52_SHIFT                                                                         ((uint32_t)20U)
#define EDMA_TPCC_EECRH_E52_MASK                                                                          ((uint32_t)0x00100000U)

#define EDMA_TPCC_EECRH_E44_SHIFT                                                                         ((uint32_t)12U)
#define EDMA_TPCC_EECRH_E44_MASK                                                                          ((uint32_t)0x00001000U)

#define EDMA_TPCC_EECRH_E34_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_EECRH_E34_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_EECRH_E43_SHIFT                                                                         ((uint32_t)11U)
#define EDMA_TPCC_EECRH_E43_MASK                                                                          ((uint32_t)0x00000800U)

#define EDMA_TPCC_EECRH_E33_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_EECRH_E33_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_EECRH_E55_SHIFT                                                                         ((uint32_t)23U)
#define EDMA_TPCC_EECRH_E55_MASK                                                                          ((uint32_t)0x00800000U)

#define EDMA_TPCC_EECRH_E42_SHIFT                                                                         ((uint32_t)10U)
#define EDMA_TPCC_EECRH_E42_MASK                                                                          ((uint32_t)0x00000400U)

#define EDMA_TPCC_EECRH_E56_SHIFT                                                                         ((uint32_t)24U)
#define EDMA_TPCC_EECRH_E56_MASK                                                                          ((uint32_t)0x01000000U)

#define EDMA_TPCC_EECRH_E32_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_EECRH_E32_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_EECRH_E41_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_EECRH_E41_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_EECRH_E57_SHIFT                                                                         ((uint32_t)25U)
#define EDMA_TPCC_EECRH_E57_MASK                                                                          ((uint32_t)0x02000000U)

#define EDMA_TPCC_EECRH_E47_SHIFT                                                                         ((uint32_t)15U)
#define EDMA_TPCC_EECRH_E47_MASK                                                                          ((uint32_t)0x00008000U)

#define EDMA_TPCC_EECRH_E40_SHIFT                                                                         ((uint32_t)8U)
#define EDMA_TPCC_EECRH_E40_MASK                                                                          ((uint32_t)0x00000100U)

#define EDMA_TPCC_EECRH_E46_SHIFT                                                                         ((uint32_t)14U)
#define EDMA_TPCC_EECRH_E46_MASK                                                                          ((uint32_t)0x00004000U)

#define EDMA_TPCC_EECRH_E39_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_EECRH_E39_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_EECRH_E45_SHIFT                                                                         ((uint32_t)13U)
#define EDMA_TPCC_EECRH_E45_MASK                                                                          ((uint32_t)0x00002000U)

#define EDMA_TPCC_EECRH_E38_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_EECRH_E38_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_EESR_E15_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_EESR_E15_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_EESR_E6_SHIFT                                                                           ((uint32_t)6U)
#define EDMA_TPCC_EESR_E6_MASK                                                                            ((uint32_t)0x00000040U)

#define EDMA_TPCC_EESR_E16_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_EESR_E16_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_EESR_E30_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_EESR_E30_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_EESR_E7_SHIFT                                                                           ((uint32_t)7U)
#define EDMA_TPCC_EESR_E7_MASK                                                                            ((uint32_t)0x00000080U)

#define EDMA_TPCC_EESR_E4_SHIFT                                                                           ((uint32_t)4U)
#define EDMA_TPCC_EESR_E4_MASK                                                                            ((uint32_t)0x00000010U)

#define EDMA_TPCC_EESR_E5_SHIFT                                                                           ((uint32_t)5U)
#define EDMA_TPCC_EESR_E5_MASK                                                                            ((uint32_t)0x00000020U)

#define EDMA_TPCC_EESR_E29_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_EESR_E29_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_EESR_E0_SHIFT                                                                           ((uint32_t)0U)
#define EDMA_TPCC_EESR_E0_MASK                                                                            ((uint32_t)0x00000001U)

#define EDMA_TPCC_EESR_E10_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_EESR_E10_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_EESR_E28_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_EESR_E28_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_EESR_E27_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_EESR_E27_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_EESR_E26_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_EESR_E26_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_EESR_E8_SHIFT                                                                           ((uint32_t)8U)
#define EDMA_TPCC_EESR_E8_MASK                                                                            ((uint32_t)0x00000100U)

#define EDMA_TPCC_EESR_E9_SHIFT                                                                           ((uint32_t)9U)
#define EDMA_TPCC_EESR_E9_MASK                                                                            ((uint32_t)0x00000200U)

#define EDMA_TPCC_EESR_E25_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_EESR_E25_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_EESR_E24_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_EESR_E24_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_EESR_E11_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_EESR_E11_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_EESR_E23_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_EESR_E23_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_EESR_E20_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_EESR_E20_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_EESR_E22_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_EESR_E22_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_EESR_E21_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_EESR_E21_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_EESR_E2_SHIFT                                                                           ((uint32_t)2U)
#define EDMA_TPCC_EESR_E2_MASK                                                                            ((uint32_t)0x00000004U)

#define EDMA_TPCC_EESR_E18_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_EESR_E18_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_EESR_E3_SHIFT                                                                           ((uint32_t)3U)
#define EDMA_TPCC_EESR_E3_MASK                                                                            ((uint32_t)0x00000008U)

#define EDMA_TPCC_EESR_E19_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_EESR_E19_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_EESR_E31_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_EESR_E31_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_EESR_E13_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_EESR_E13_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_EESR_E12_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_EESR_E12_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_EESR_E14_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_EESR_E14_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_EESR_E1_SHIFT                                                                           ((uint32_t)1U)
#define EDMA_TPCC_EESR_E1_MASK                                                                            ((uint32_t)0x00000002U)

#define EDMA_TPCC_EESR_E17_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_EESR_E17_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_EESRH_E33_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_EESRH_E33_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_EESRH_E35_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_EESRH_E35_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_EESRH_E44_SHIFT                                                                         ((uint32_t)12U)
#define EDMA_TPCC_EESRH_E44_MASK                                                                          ((uint32_t)0x00001000U)

#define EDMA_TPCC_EESRH_E32_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_EESRH_E32_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_EESRH_E43_SHIFT                                                                         ((uint32_t)11U)
#define EDMA_TPCC_EESRH_E43_MASK                                                                          ((uint32_t)0x00000800U)

#define EDMA_TPCC_EESRH_E55_SHIFT                                                                         ((uint32_t)23U)
#define EDMA_TPCC_EESRH_E55_MASK                                                                          ((uint32_t)0x00800000U)

#define EDMA_TPCC_EESRH_E42_SHIFT                                                                         ((uint32_t)10U)
#define EDMA_TPCC_EESRH_E42_MASK                                                                          ((uint32_t)0x00000400U)

#define EDMA_TPCC_EESRH_E54_SHIFT                                                                         ((uint32_t)22U)
#define EDMA_TPCC_EESRH_E54_MASK                                                                          ((uint32_t)0x00400000U)

#define EDMA_TPCC_EESRH_E53_SHIFT                                                                         ((uint32_t)21U)
#define EDMA_TPCC_EESRH_E53_MASK                                                                          ((uint32_t)0x00200000U)

#define EDMA_TPCC_EESRH_E56_SHIFT                                                                         ((uint32_t)24U)
#define EDMA_TPCC_EESRH_E56_MASK                                                                          ((uint32_t)0x01000000U)

#define EDMA_TPCC_EESRH_E41_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_EESRH_E41_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_EESRH_E40_SHIFT                                                                         ((uint32_t)8U)
#define EDMA_TPCC_EESRH_E40_MASK                                                                          ((uint32_t)0x00000100U)

#define EDMA_TPCC_EESRH_E57_SHIFT                                                                         ((uint32_t)25U)
#define EDMA_TPCC_EESRH_E57_MASK                                                                          ((uint32_t)0x02000000U)

#define EDMA_TPCC_EESRH_E52_SHIFT                                                                         ((uint32_t)20U)
#define EDMA_TPCC_EESRH_E52_MASK                                                                          ((uint32_t)0x00100000U)

#define EDMA_TPCC_EESRH_E34_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_EESRH_E34_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_EESRH_E39_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_EESRH_E39_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_EESRH_E58_SHIFT                                                                         ((uint32_t)26U)
#define EDMA_TPCC_EESRH_E58_MASK                                                                          ((uint32_t)0x04000000U)

#define EDMA_TPCC_EESRH_E51_SHIFT                                                                         ((uint32_t)19U)
#define EDMA_TPCC_EESRH_E51_MASK                                                                          ((uint32_t)0x00080000U)

#define EDMA_TPCC_EESRH_E36_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_EESRH_E36_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_EESRH_E38_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_EESRH_E38_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_EESRH_E59_SHIFT                                                                         ((uint32_t)27U)
#define EDMA_TPCC_EESRH_E59_MASK                                                                          ((uint32_t)0x08000000U)

#define EDMA_TPCC_EESRH_E50_SHIFT                                                                         ((uint32_t)18U)
#define EDMA_TPCC_EESRH_E50_MASK                                                                          ((uint32_t)0x00040000U)

#define EDMA_TPCC_EESRH_E37_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_EESRH_E37_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_EESRH_E60_SHIFT                                                                         ((uint32_t)28U)
#define EDMA_TPCC_EESRH_E60_MASK                                                                          ((uint32_t)0x10000000U)

#define EDMA_TPCC_EESRH_E49_SHIFT                                                                         ((uint32_t)17U)
#define EDMA_TPCC_EESRH_E49_MASK                                                                          ((uint32_t)0x00020000U)

#define EDMA_TPCC_EESRH_E61_SHIFT                                                                         ((uint32_t)29U)
#define EDMA_TPCC_EESRH_E61_MASK                                                                          ((uint32_t)0x20000000U)

#define EDMA_TPCC_EESRH_E48_SHIFT                                                                         ((uint32_t)16U)
#define EDMA_TPCC_EESRH_E48_MASK                                                                          ((uint32_t)0x00010000U)

#define EDMA_TPCC_EESRH_E62_SHIFT                                                                         ((uint32_t)30U)
#define EDMA_TPCC_EESRH_E62_MASK                                                                          ((uint32_t)0x40000000U)

#define EDMA_TPCC_EESRH_E47_SHIFT                                                                         ((uint32_t)15U)
#define EDMA_TPCC_EESRH_E47_MASK                                                                          ((uint32_t)0x00008000U)

#define EDMA_TPCC_EESRH_E63_SHIFT                                                                         ((uint32_t)31U)
#define EDMA_TPCC_EESRH_E63_MASK                                                                          ((uint32_t)0x80000000U)

#define EDMA_TPCC_EESRH_E46_SHIFT                                                                         ((uint32_t)14U)
#define EDMA_TPCC_EESRH_E46_MASK                                                                          ((uint32_t)0x00004000U)

#define EDMA_TPCC_EESRH_E45_SHIFT                                                                         ((uint32_t)13U)
#define EDMA_TPCC_EESRH_E45_MASK                                                                          ((uint32_t)0x00002000U)

#define EDMA_TPCC_SER_E0_SHIFT                                                                            ((uint32_t)0U)
#define EDMA_TPCC_SER_E0_MASK                                                                             ((uint32_t)0x00000001U)

#define EDMA_TPCC_SER_E13_SHIFT                                                                           ((uint32_t)13U)
#define EDMA_TPCC_SER_E13_MASK                                                                            ((uint32_t)0x00002000U)

#define EDMA_TPCC_SER_E21_SHIFT                                                                           ((uint32_t)21U)
#define EDMA_TPCC_SER_E21_MASK                                                                            ((uint32_t)0x00200000U)

#define EDMA_TPCC_SER_E14_SHIFT                                                                           ((uint32_t)14U)
#define EDMA_TPCC_SER_E14_MASK                                                                            ((uint32_t)0x00004000U)

#define EDMA_TPCC_SER_E31_SHIFT                                                                           ((uint32_t)31U)
#define EDMA_TPCC_SER_E31_MASK                                                                            ((uint32_t)0x80000000U)

#define EDMA_TPCC_SER_E1_SHIFT                                                                            ((uint32_t)1U)
#define EDMA_TPCC_SER_E1_MASK                                                                             ((uint32_t)0x00000002U)

#define EDMA_TPCC_SER_E11_SHIFT                                                                           ((uint32_t)11U)
#define EDMA_TPCC_SER_E11_MASK                                                                            ((uint32_t)0x00000800U)

#define EDMA_TPCC_SER_E19_SHIFT                                                                           ((uint32_t)19U)
#define EDMA_TPCC_SER_E19_MASK                                                                            ((uint32_t)0x00080000U)

#define EDMA_TPCC_SER_E20_SHIFT                                                                           ((uint32_t)20U)
#define EDMA_TPCC_SER_E20_MASK                                                                            ((uint32_t)0x00100000U)

#define EDMA_TPCC_SER_E12_SHIFT                                                                           ((uint32_t)12U)
#define EDMA_TPCC_SER_E12_MASK                                                                            ((uint32_t)0x00001000U)

#define EDMA_TPCC_SER_E3_SHIFT                                                                            ((uint32_t)3U)
#define EDMA_TPCC_SER_E3_MASK                                                                             ((uint32_t)0x00000008U)

#define EDMA_TPCC_SER_E4_SHIFT                                                                            ((uint32_t)4U)
#define EDMA_TPCC_SER_E4_MASK                                                                             ((uint32_t)0x00000010U)

#define EDMA_TPCC_SER_E24_SHIFT                                                                           ((uint32_t)24U)
#define EDMA_TPCC_SER_E24_MASK                                                                            ((uint32_t)0x01000000U)

#define EDMA_TPCC_SER_E2_SHIFT                                                                            ((uint32_t)2U)
#define EDMA_TPCC_SER_E2_MASK                                                                             ((uint32_t)0x00000004U)

#define EDMA_TPCC_SER_E22_SHIFT                                                                           ((uint32_t)22U)
#define EDMA_TPCC_SER_E22_MASK                                                                            ((uint32_t)0x00400000U)

#define EDMA_TPCC_SER_E23_SHIFT                                                                           ((uint32_t)23U)
#define EDMA_TPCC_SER_E23_MASK                                                                            ((uint32_t)0x00800000U)

#define EDMA_TPCC_SER_E25_SHIFT                                                                           ((uint32_t)25U)
#define EDMA_TPCC_SER_E25_MASK                                                                            ((uint32_t)0x02000000U)

#define EDMA_TPCC_SER_E26_SHIFT                                                                           ((uint32_t)26U)
#define EDMA_TPCC_SER_E26_MASK                                                                            ((uint32_t)0x04000000U)

#define EDMA_TPCC_SER_E6_SHIFT                                                                            ((uint32_t)6U)
#define EDMA_TPCC_SER_E6_MASK                                                                             ((uint32_t)0x00000040U)

#define EDMA_TPCC_SER_E5_SHIFT                                                                            ((uint32_t)5U)
#define EDMA_TPCC_SER_E5_MASK                                                                             ((uint32_t)0x00000020U)

#define EDMA_TPCC_SER_E8_SHIFT                                                                            ((uint32_t)8U)
#define EDMA_TPCC_SER_E8_MASK                                                                             ((uint32_t)0x00000100U)

#define EDMA_TPCC_SER_E17_SHIFT                                                                           ((uint32_t)17U)
#define EDMA_TPCC_SER_E17_MASK                                                                            ((uint32_t)0x00020000U)

#define EDMA_TPCC_SER_E29_SHIFT                                                                           ((uint32_t)29U)
#define EDMA_TPCC_SER_E29_MASK                                                                            ((uint32_t)0x20000000U)

#define EDMA_TPCC_SER_E18_SHIFT                                                                           ((uint32_t)18U)
#define EDMA_TPCC_SER_E18_MASK                                                                            ((uint32_t)0x00040000U)

#define EDMA_TPCC_SER_E30_SHIFT                                                                           ((uint32_t)30U)
#define EDMA_TPCC_SER_E30_MASK                                                                            ((uint32_t)0x40000000U)

#define EDMA_TPCC_SER_E7_SHIFT                                                                            ((uint32_t)7U)
#define EDMA_TPCC_SER_E7_MASK                                                                             ((uint32_t)0x00000080U)

#define EDMA_TPCC_SER_E10_SHIFT                                                                           ((uint32_t)10U)
#define EDMA_TPCC_SER_E10_MASK                                                                            ((uint32_t)0x00000400U)

#define EDMA_TPCC_SER_E15_SHIFT                                                                           ((uint32_t)15U)
#define EDMA_TPCC_SER_E15_MASK                                                                            ((uint32_t)0x00008000U)

#define EDMA_TPCC_SER_E27_SHIFT                                                                           ((uint32_t)27U)
#define EDMA_TPCC_SER_E27_MASK                                                                            ((uint32_t)0x08000000U)

#define EDMA_TPCC_SER_E9_SHIFT                                                                            ((uint32_t)9U)
#define EDMA_TPCC_SER_E9_MASK                                                                             ((uint32_t)0x00000200U)

#define EDMA_TPCC_SER_E16_SHIFT                                                                           ((uint32_t)16U)
#define EDMA_TPCC_SER_E16_MASK                                                                            ((uint32_t)0x00010000U)

#define EDMA_TPCC_SER_E28_SHIFT                                                                           ((uint32_t)28U)
#define EDMA_TPCC_SER_E28_MASK                                                                            ((uint32_t)0x10000000U)

#define EDMA_TPCC_SERH_E53_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_SERH_E53_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_SERH_E42_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_SERH_E42_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_SERH_E52_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_SERH_E52_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_SERH_E43_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_SERH_E43_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_SERH_E32_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_SERH_E32_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_SERH_E44_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_SERH_E44_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_SERH_E55_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_SERH_E55_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_SERH_E45_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_SERH_E45_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_SERH_E54_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_SERH_E54_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_SERH_E46_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_SERH_E46_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_SERH_E56_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_SERH_E56_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_SERH_E58_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_SERH_E58_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_SERH_E57_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_SERH_E57_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_SERH_E60_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_SERH_E60_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_SERH_E59_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_SERH_E59_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_SERH_E61_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_SERH_E61_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_SERH_E37_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_SERH_E37_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_SERH_E47_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_SERH_E47_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_SERH_E38_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_SERH_E38_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_SERH_E35_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_SERH_E35_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_SERH_E48_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_SERH_E48_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_SERH_E62_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_SERH_E62_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_SERH_E39_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_SERH_E39_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_SERH_E63_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_SERH_E63_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_SERH_E36_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_SERH_E36_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_SERH_E49_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_SERH_E49_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_SERH_E40_SHIFT                                                                          ((uint32_t)8U)
#define EDMA_TPCC_SERH_E40_MASK                                                                           ((uint32_t)0x00000100U)

#define EDMA_TPCC_SERH_E33_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_SERH_E33_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_SERH_E50_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_SERH_E50_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_SERH_E41_SHIFT                                                                          ((uint32_t)9U)
#define EDMA_TPCC_SERH_E41_MASK                                                                           ((uint32_t)0x00000200U)

#define EDMA_TPCC_SERH_E34_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_SERH_E34_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_SERH_E51_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_SERH_E51_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_SECR_E21_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_SECR_E21_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_SECR_E29_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_SECR_E29_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_SECR_E20_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_SECR_E20_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_SECR_E0_SHIFT                                                                           ((uint32_t)0U)
#define EDMA_TPCC_SECR_E0_MASK                                                                            ((uint32_t)0x00000001U)

#define EDMA_TPCC_SECR_E10_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_SECR_E10_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_SECR_E9_SHIFT                                                                           ((uint32_t)9U)
#define EDMA_TPCC_SECR_E9_MASK                                                                            ((uint32_t)0x00000200U)

#define EDMA_TPCC_SECR_E27_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_SECR_E27_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_SECR_E2_SHIFT                                                                           ((uint32_t)2U)
#define EDMA_TPCC_SECR_E2_MASK                                                                            ((uint32_t)0x00000004U)

#define EDMA_TPCC_SECR_E12_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_SECR_E12_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_SECR_E28_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_SECR_E28_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_SECR_E1_SHIFT                                                                           ((uint32_t)1U)
#define EDMA_TPCC_SECR_E1_MASK                                                                            ((uint32_t)0x00000002U)

#define EDMA_TPCC_SECR_E11_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_SECR_E11_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_SECR_E25_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_SECR_E25_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_SECR_E4_SHIFT                                                                           ((uint32_t)4U)
#define EDMA_TPCC_SECR_E4_MASK                                                                            ((uint32_t)0x00000010U)

#define EDMA_TPCC_SECR_E14_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_SECR_E14_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_SECR_E26_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_SECR_E26_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_SECR_E3_SHIFT                                                                           ((uint32_t)3U)
#define EDMA_TPCC_SECR_E3_MASK                                                                            ((uint32_t)0x00000008U)

#define EDMA_TPCC_SECR_E13_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_SECR_E13_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_SECR_E6_SHIFT                                                                           ((uint32_t)6U)
#define EDMA_TPCC_SECR_E6_MASK                                                                            ((uint32_t)0x00000040U)

#define EDMA_TPCC_SECR_E16_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_SECR_E16_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_SECR_E24_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_SECR_E24_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_SECR_E5_SHIFT                                                                           ((uint32_t)5U)
#define EDMA_TPCC_SECR_E5_MASK                                                                            ((uint32_t)0x00000020U)

#define EDMA_TPCC_SECR_E15_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_SECR_E15_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_SECR_E18_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_SECR_E18_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_SECR_E31_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_SECR_E31_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_SECR_E8_SHIFT                                                                           ((uint32_t)8U)
#define EDMA_TPCC_SECR_E8_MASK                                                                            ((uint32_t)0x00000100U)

#define EDMA_TPCC_SECR_E22_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_SECR_E22_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_SECR_E7_SHIFT                                                                           ((uint32_t)7U)
#define EDMA_TPCC_SECR_E7_MASK                                                                            ((uint32_t)0x00000080U)

#define EDMA_TPCC_SECR_E19_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_SECR_E19_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_SECR_E17_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_SECR_E17_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_SECR_E23_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_SECR_E23_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_SECR_E30_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_SECR_E30_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_SECRH_E34_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_SECRH_E34_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_SECRH_E44_SHIFT                                                                         ((uint32_t)12U)
#define EDMA_TPCC_SECRH_E44_MASK                                                                          ((uint32_t)0x00001000U)

#define EDMA_TPCC_SECRH_E54_SHIFT                                                                         ((uint32_t)22U)
#define EDMA_TPCC_SECRH_E54_MASK                                                                          ((uint32_t)0x00400000U)

#define EDMA_TPCC_SECRH_E33_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_SECRH_E33_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_SECRH_E43_SHIFT                                                                         ((uint32_t)11U)
#define EDMA_TPCC_SECRH_E43_MASK                                                                          ((uint32_t)0x00000800U)

#define EDMA_TPCC_SECRH_E53_SHIFT                                                                         ((uint32_t)21U)
#define EDMA_TPCC_SECRH_E53_MASK                                                                          ((uint32_t)0x00200000U)

#define EDMA_TPCC_SECRH_E58_SHIFT                                                                         ((uint32_t)26U)
#define EDMA_TPCC_SECRH_E58_MASK                                                                          ((uint32_t)0x04000000U)

#define EDMA_TPCC_SECRH_E32_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_SECRH_E32_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_SECRH_E63_SHIFT                                                                         ((uint32_t)31U)
#define EDMA_TPCC_SECRH_E63_MASK                                                                          ((uint32_t)0x80000000U)

#define EDMA_TPCC_SECRH_E57_SHIFT                                                                         ((uint32_t)25U)
#define EDMA_TPCC_SECRH_E57_MASK                                                                          ((uint32_t)0x02000000U)

#define EDMA_TPCC_SECRH_E56_SHIFT                                                                         ((uint32_t)24U)
#define EDMA_TPCC_SECRH_E56_MASK                                                                          ((uint32_t)0x01000000U)

#define EDMA_TPCC_SECRH_E55_SHIFT                                                                         ((uint32_t)23U)
#define EDMA_TPCC_SECRH_E55_MASK                                                                          ((uint32_t)0x00800000U)

#define EDMA_TPCC_SECRH_E52_SHIFT                                                                         ((uint32_t)20U)
#define EDMA_TPCC_SECRH_E52_MASK                                                                          ((uint32_t)0x00100000U)

#define EDMA_TPCC_SECRH_E42_SHIFT                                                                         ((uint32_t)10U)
#define EDMA_TPCC_SECRH_E42_MASK                                                                          ((uint32_t)0x00000400U)

#define EDMA_TPCC_SECRH_E51_SHIFT                                                                         ((uint32_t)19U)
#define EDMA_TPCC_SECRH_E51_MASK                                                                          ((uint32_t)0x00080000U)

#define EDMA_TPCC_SECRH_E41_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_SECRH_E41_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_SECRH_E50_SHIFT                                                                         ((uint32_t)18U)
#define EDMA_TPCC_SECRH_E50_MASK                                                                          ((uint32_t)0x00040000U)

#define EDMA_TPCC_SECRH_E40_SHIFT                                                                         ((uint32_t)8U)
#define EDMA_TPCC_SECRH_E40_MASK                                                                          ((uint32_t)0x00000100U)

#define EDMA_TPCC_SECRH_E49_SHIFT                                                                         ((uint32_t)17U)
#define EDMA_TPCC_SECRH_E49_MASK                                                                          ((uint32_t)0x00020000U)

#define EDMA_TPCC_SECRH_E39_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_SECRH_E39_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_SECRH_E48_SHIFT                                                                         ((uint32_t)16U)
#define EDMA_TPCC_SECRH_E48_MASK                                                                          ((uint32_t)0x00010000U)

#define EDMA_TPCC_SECRH_E38_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_SECRH_E38_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_SECRH_E59_SHIFT                                                                         ((uint32_t)27U)
#define EDMA_TPCC_SECRH_E59_MASK                                                                          ((uint32_t)0x08000000U)

#define EDMA_TPCC_SECRH_E47_SHIFT                                                                         ((uint32_t)15U)
#define EDMA_TPCC_SECRH_E47_MASK                                                                          ((uint32_t)0x00008000U)

#define EDMA_TPCC_SECRH_E37_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_SECRH_E37_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_SECRH_E60_SHIFT                                                                         ((uint32_t)28U)
#define EDMA_TPCC_SECRH_E60_MASK                                                                          ((uint32_t)0x10000000U)

#define EDMA_TPCC_SECRH_E36_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_SECRH_E36_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_SECRH_E46_SHIFT                                                                         ((uint32_t)14U)
#define EDMA_TPCC_SECRH_E46_MASK                                                                          ((uint32_t)0x00004000U)

#define EDMA_TPCC_SECRH_E61_SHIFT                                                                         ((uint32_t)29U)
#define EDMA_TPCC_SECRH_E61_MASK                                                                          ((uint32_t)0x20000000U)

#define EDMA_TPCC_SECRH_E35_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_SECRH_E35_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_SECRH_E62_SHIFT                                                                         ((uint32_t)30U)
#define EDMA_TPCC_SECRH_E62_MASK                                                                          ((uint32_t)0x40000000U)

#define EDMA_TPCC_SECRH_E45_SHIFT                                                                         ((uint32_t)13U)
#define EDMA_TPCC_SECRH_E45_MASK                                                                          ((uint32_t)0x00002000U)

#define EDMA_TPCC_IER_I15_SHIFT                                                                           ((uint32_t)15U)
#define EDMA_TPCC_IER_I15_MASK                                                                            ((uint32_t)0x00008000U)

#define EDMA_TPCC_IER_I30_SHIFT                                                                           ((uint32_t)30U)
#define EDMA_TPCC_IER_I30_MASK                                                                            ((uint32_t)0x40000000U)

#define EDMA_TPCC_IER_I14_SHIFT                                                                           ((uint32_t)14U)
#define EDMA_TPCC_IER_I14_MASK                                                                            ((uint32_t)0x00004000U)

#define EDMA_TPCC_IER_I29_SHIFT                                                                           ((uint32_t)29U)
#define EDMA_TPCC_IER_I29_MASK                                                                            ((uint32_t)0x20000000U)

#define EDMA_TPCC_IER_I7_SHIFT                                                                            ((uint32_t)7U)
#define EDMA_TPCC_IER_I7_MASK                                                                             ((uint32_t)0x00000080U)

#define EDMA_TPCC_IER_I28_SHIFT                                                                           ((uint32_t)28U)
#define EDMA_TPCC_IER_I28_MASK                                                                            ((uint32_t)0x10000000U)

#define EDMA_TPCC_IER_I17_SHIFT                                                                           ((uint32_t)17U)
#define EDMA_TPCC_IER_I17_MASK                                                                            ((uint32_t)0x00020000U)

#define EDMA_TPCC_IER_I16_SHIFT                                                                           ((uint32_t)16U)
#define EDMA_TPCC_IER_I16_MASK                                                                            ((uint32_t)0x00010000U)

#define EDMA_TPCC_IER_I27_SHIFT                                                                           ((uint32_t)27U)
#define EDMA_TPCC_IER_I27_MASK                                                                            ((uint32_t)0x08000000U)

#define EDMA_TPCC_IER_I0_SHIFT                                                                            ((uint32_t)0U)
#define EDMA_TPCC_IER_I0_MASK                                                                             ((uint32_t)0x00000001U)

#define EDMA_TPCC_IER_I1_SHIFT                                                                            ((uint32_t)1U)
#define EDMA_TPCC_IER_I1_MASK                                                                             ((uint32_t)0x00000002U)

#define EDMA_TPCC_IER_I13_SHIFT                                                                           ((uint32_t)13U)
#define EDMA_TPCC_IER_I13_MASK                                                                            ((uint32_t)0x00002000U)

#define EDMA_TPCC_IER_I2_SHIFT                                                                            ((uint32_t)2U)
#define EDMA_TPCC_IER_I2_MASK                                                                             ((uint32_t)0x00000004U)

#define EDMA_TPCC_IER_I31_SHIFT                                                                           ((uint32_t)31U)
#define EDMA_TPCC_IER_I31_MASK                                                                            ((uint32_t)0x80000000U)

#define EDMA_TPCC_IER_I22_SHIFT                                                                           ((uint32_t)22U)
#define EDMA_TPCC_IER_I22_MASK                                                                            ((uint32_t)0x00400000U)

#define EDMA_TPCC_IER_I3_SHIFT                                                                            ((uint32_t)3U)
#define EDMA_TPCC_IER_I3_MASK                                                                             ((uint32_t)0x00000008U)

#define EDMA_TPCC_IER_I26_SHIFT                                                                           ((uint32_t)26U)
#define EDMA_TPCC_IER_I26_MASK                                                                            ((uint32_t)0x04000000U)

#define EDMA_TPCC_IER_I5_SHIFT                                                                            ((uint32_t)5U)
#define EDMA_TPCC_IER_I5_MASK                                                                             ((uint32_t)0x00000020U)

#define EDMA_TPCC_IER_I19_SHIFT                                                                           ((uint32_t)19U)
#define EDMA_TPCC_IER_I19_MASK                                                                            ((uint32_t)0x00080000U)

#define EDMA_TPCC_IER_I8_SHIFT                                                                            ((uint32_t)8U)
#define EDMA_TPCC_IER_I8_MASK                                                                             ((uint32_t)0x00000100U)

#define EDMA_TPCC_IER_I25_SHIFT                                                                           ((uint32_t)25U)
#define EDMA_TPCC_IER_I25_MASK                                                                            ((uint32_t)0x02000000U)

#define EDMA_TPCC_IER_I4_SHIFT                                                                            ((uint32_t)4U)
#define EDMA_TPCC_IER_I4_MASK                                                                             ((uint32_t)0x00000010U)

#define EDMA_TPCC_IER_I18_SHIFT                                                                           ((uint32_t)18U)
#define EDMA_TPCC_IER_I18_MASK                                                                            ((uint32_t)0x00040000U)

#define EDMA_TPCC_IER_I9_SHIFT                                                                            ((uint32_t)9U)
#define EDMA_TPCC_IER_I9_MASK                                                                             ((uint32_t)0x00000200U)

#define EDMA_TPCC_IER_I21_SHIFT                                                                           ((uint32_t)21U)
#define EDMA_TPCC_IER_I21_MASK                                                                            ((uint32_t)0x00200000U)

#define EDMA_TPCC_IER_I24_SHIFT                                                                           ((uint32_t)24U)
#define EDMA_TPCC_IER_I24_MASK                                                                            ((uint32_t)0x01000000U)

#define EDMA_TPCC_IER_I10_SHIFT                                                                           ((uint32_t)10U)
#define EDMA_TPCC_IER_I10_MASK                                                                            ((uint32_t)0x00000400U)

#define EDMA_TPCC_IER_I12_SHIFT                                                                           ((uint32_t)12U)
#define EDMA_TPCC_IER_I12_MASK                                                                            ((uint32_t)0x00001000U)

#define EDMA_TPCC_IER_I23_SHIFT                                                                           ((uint32_t)23U)
#define EDMA_TPCC_IER_I23_MASK                                                                            ((uint32_t)0x00800000U)

#define EDMA_TPCC_IER_I20_SHIFT                                                                           ((uint32_t)20U)
#define EDMA_TPCC_IER_I20_MASK                                                                            ((uint32_t)0x00100000U)

#define EDMA_TPCC_IER_I6_SHIFT                                                                            ((uint32_t)6U)
#define EDMA_TPCC_IER_I6_MASK                                                                             ((uint32_t)0x00000040U)

#define EDMA_TPCC_IER_I11_SHIFT                                                                           ((uint32_t)11U)
#define EDMA_TPCC_IER_I11_MASK                                                                            ((uint32_t)0x00000800U)

#define EDMA_TPCC_IERH_I48_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_IERH_I48_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_IERH_I35_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_IERH_I35_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_IERH_I34_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_IERH_I34_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_IERH_I46_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_IERH_I46_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_IERH_I59_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_IERH_I59_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_IERH_I33_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_IERH_I33_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_IERH_I45_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_IERH_I45_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_IERH_I60_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_IERH_I60_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_IERH_I32_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_IERH_I32_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_IERH_I44_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_IERH_I44_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_IERH_I61_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_IERH_I61_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_IERH_I43_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_IERH_I43_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_IERH_I49_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_IERH_I49_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_IERH_I62_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_IERH_I62_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_IERH_I50_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_IERH_I50_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_IERH_I42_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_IERH_I42_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_IERH_I63_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_IERH_I63_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_IERH_I51_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_IERH_I51_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_IERH_I41_SHIFT                                                                          ((uint32_t)9U)
#define EDMA_TPCC_IERH_I41_MASK                                                                           ((uint32_t)0x00000200U)

#define EDMA_TPCC_IERH_I52_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_IERH_I52_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_IERH_I40_SHIFT                                                                          ((uint32_t)8U)
#define EDMA_TPCC_IERH_I40_MASK                                                                           ((uint32_t)0x00000100U)

#define EDMA_TPCC_IERH_I53_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_IERH_I53_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_IERH_I39_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_IERH_I39_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_IERH_I54_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_IERH_I54_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_IERH_I55_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_IERH_I55_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_IERH_I56_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_IERH_I56_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_IERH_I38_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_IERH_I38_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_IERH_I57_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_IERH_I57_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_IERH_I58_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_IERH_I58_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_IERH_I37_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_IERH_I37_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_IERH_I47_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_IERH_I47_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_IERH_I36_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_IERH_I36_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_IECR_I27_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_IECR_I27_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_IECR_I28_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_IECR_I28_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_IECR_I25_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_IECR_I25_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_IECR_I16_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_IECR_I16_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_IECR_I26_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_IECR_I26_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_IECR_I15_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_IECR_I15_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_IECR_I14_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_IECR_I14_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_IECR_I13_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_IECR_I13_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_IECR_I0_SHIFT                                                                           ((uint32_t)0U)
#define EDMA_TPCC_IECR_I0_MASK                                                                            ((uint32_t)0x00000001U)

#define EDMA_TPCC_IECR_I22_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_IECR_I22_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_IECR_I10_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_IECR_I10_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_IECR_I21_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_IECR_I21_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_IECR_I9_SHIFT                                                                           ((uint32_t)9U)
#define EDMA_TPCC_IECR_I9_MASK                                                                            ((uint32_t)0x00000200U)

#define EDMA_TPCC_IECR_I1_SHIFT                                                                           ((uint32_t)1U)
#define EDMA_TPCC_IECR_I1_MASK                                                                            ((uint32_t)0x00000002U)

#define EDMA_TPCC_IECR_I24_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_IECR_I24_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_IECR_I3_SHIFT                                                                           ((uint32_t)3U)
#define EDMA_TPCC_IECR_I3_MASK                                                                            ((uint32_t)0x00000008U)

#define EDMA_TPCC_IECR_I2_SHIFT                                                                           ((uint32_t)2U)
#define EDMA_TPCC_IECR_I2_MASK                                                                            ((uint32_t)0x00000004U)

#define EDMA_TPCC_IECR_I12_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_IECR_I12_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_IECR_I23_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_IECR_I23_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_IECR_I4_SHIFT                                                                           ((uint32_t)4U)
#define EDMA_TPCC_IECR_I4_MASK                                                                            ((uint32_t)0x00000010U)

#define EDMA_TPCC_IECR_I11_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_IECR_I11_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_IECR_I6_SHIFT                                                                           ((uint32_t)6U)
#define EDMA_TPCC_IECR_I6_MASK                                                                            ((uint32_t)0x00000040U)

#define EDMA_TPCC_IECR_I31_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_IECR_I31_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_IECR_I18_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_IECR_I18_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_IECR_I17_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_IECR_I17_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_IECR_I5_SHIFT                                                                           ((uint32_t)5U)
#define EDMA_TPCC_IECR_I5_MASK                                                                            ((uint32_t)0x00000020U)

#define EDMA_TPCC_IECR_I20_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_IECR_I20_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_IECR_I29_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_IECR_I29_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_IECR_I8_SHIFT                                                                           ((uint32_t)8U)
#define EDMA_TPCC_IECR_I8_MASK                                                                            ((uint32_t)0x00000100U)

#define EDMA_TPCC_IECR_I19_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_IECR_I19_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_IECR_I30_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_IECR_I30_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_IECR_I7_SHIFT                                                                           ((uint32_t)7U)
#define EDMA_TPCC_IECR_I7_MASK                                                                            ((uint32_t)0x00000080U)

#define EDMA_TPCC_IECRH_I35_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_IECRH_I35_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_IECRH_I48_SHIFT                                                                         ((uint32_t)16U)
#define EDMA_TPCC_IECRH_I48_MASK                                                                          ((uint32_t)0x00010000U)

#define EDMA_TPCC_IECRH_I56_SHIFT                                                                         ((uint32_t)24U)
#define EDMA_TPCC_IECRH_I56_MASK                                                                          ((uint32_t)0x01000000U)

#define EDMA_TPCC_IECRH_I34_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_IECRH_I34_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_IECRH_I47_SHIFT                                                                         ((uint32_t)15U)
#define EDMA_TPCC_IECRH_I47_MASK                                                                          ((uint32_t)0x00008000U)

#define EDMA_TPCC_IECRH_I46_SHIFT                                                                         ((uint32_t)14U)
#define EDMA_TPCC_IECRH_I46_MASK                                                                          ((uint32_t)0x00004000U)

#define EDMA_TPCC_IECRH_I55_SHIFT                                                                         ((uint32_t)23U)
#define EDMA_TPCC_IECRH_I55_MASK                                                                          ((uint32_t)0x00800000U)

#define EDMA_TPCC_IECRH_I45_SHIFT                                                                         ((uint32_t)13U)
#define EDMA_TPCC_IECRH_I45_MASK                                                                          ((uint32_t)0x00002000U)

#define EDMA_TPCC_IECRH_I58_SHIFT                                                                         ((uint32_t)26U)
#define EDMA_TPCC_IECRH_I58_MASK                                                                          ((uint32_t)0x04000000U)

#define EDMA_TPCC_IECRH_I32_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_IECRH_I32_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_IECRH_I44_SHIFT                                                                         ((uint32_t)12U)
#define EDMA_TPCC_IECRH_I44_MASK                                                                          ((uint32_t)0x00001000U)

#define EDMA_TPCC_IECRH_I33_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_IECRH_I33_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_IECRH_I57_SHIFT                                                                         ((uint32_t)25U)
#define EDMA_TPCC_IECRH_I57_MASK                                                                          ((uint32_t)0x02000000U)

#define EDMA_TPCC_IECRH_I43_SHIFT                                                                         ((uint32_t)11U)
#define EDMA_TPCC_IECRH_I43_MASK                                                                          ((uint32_t)0x00000800U)

#define EDMA_TPCC_IECRH_I60_SHIFT                                                                         ((uint32_t)28U)
#define EDMA_TPCC_IECRH_I60_MASK                                                                          ((uint32_t)0x10000000U)

#define EDMA_TPCC_IECRH_I42_SHIFT                                                                         ((uint32_t)10U)
#define EDMA_TPCC_IECRH_I42_MASK                                                                          ((uint32_t)0x00000400U)

#define EDMA_TPCC_IECRH_I59_SHIFT                                                                         ((uint32_t)27U)
#define EDMA_TPCC_IECRH_I59_MASK                                                                          ((uint32_t)0x08000000U)

#define EDMA_TPCC_IECRH_I41_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_IECRH_I41_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_IECRH_I62_SHIFT                                                                         ((uint32_t)30U)
#define EDMA_TPCC_IECRH_I62_MASK                                                                          ((uint32_t)0x40000000U)

#define EDMA_TPCC_IECRH_I61_SHIFT                                                                         ((uint32_t)29U)
#define EDMA_TPCC_IECRH_I61_MASK                                                                          ((uint32_t)0x20000000U)

#define EDMA_TPCC_IECRH_I52_SHIFT                                                                         ((uint32_t)20U)
#define EDMA_TPCC_IECRH_I52_MASK                                                                          ((uint32_t)0x00100000U)

#define EDMA_TPCC_IECRH_I38_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_IECRH_I38_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_IECRH_I40_SHIFT                                                                         ((uint32_t)8U)
#define EDMA_TPCC_IECRH_I40_MASK                                                                          ((uint32_t)0x00000100U)

#define EDMA_TPCC_IECRH_I51_SHIFT                                                                         ((uint32_t)19U)
#define EDMA_TPCC_IECRH_I51_MASK                                                                          ((uint32_t)0x00080000U)

#define EDMA_TPCC_IECRH_I50_SHIFT                                                                         ((uint32_t)18U)
#define EDMA_TPCC_IECRH_I50_MASK                                                                          ((uint32_t)0x00040000U)

#define EDMA_TPCC_IECRH_I63_SHIFT                                                                         ((uint32_t)31U)
#define EDMA_TPCC_IECRH_I63_MASK                                                                          ((uint32_t)0x80000000U)

#define EDMA_TPCC_IECRH_I39_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_IECRH_I39_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_IECRH_I54_SHIFT                                                                         ((uint32_t)22U)
#define EDMA_TPCC_IECRH_I54_MASK                                                                          ((uint32_t)0x00400000U)

#define EDMA_TPCC_IECRH_I36_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_IECRH_I36_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_IECRH_I53_SHIFT                                                                         ((uint32_t)21U)
#define EDMA_TPCC_IECRH_I53_MASK                                                                          ((uint32_t)0x00200000U)

#define EDMA_TPCC_IECRH_I49_SHIFT                                                                         ((uint32_t)17U)
#define EDMA_TPCC_IECRH_I49_MASK                                                                          ((uint32_t)0x00020000U)

#define EDMA_TPCC_IECRH_I37_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_IECRH_I37_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_IESR_I22_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_IESR_I22_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_IESR_I11_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_IESR_I11_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_IESR_I23_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_IESR_I23_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_IESR_I0_SHIFT                                                                           ((uint32_t)0U)
#define EDMA_TPCC_IESR_I0_MASK                                                                            ((uint32_t)0x00000001U)

#define EDMA_TPCC_IESR_I21_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_IESR_I21_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_IESR_I10_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_IESR_I10_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_IESR_I31_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_IESR_I31_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_IESR_I8_SHIFT                                                                           ((uint32_t)8U)
#define EDMA_TPCC_IESR_I8_MASK                                                                            ((uint32_t)0x00000100U)

#define EDMA_TPCC_IESR_I20_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_IESR_I20_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_IESR_I9_SHIFT                                                                           ((uint32_t)9U)
#define EDMA_TPCC_IESR_I9_MASK                                                                            ((uint32_t)0x00000200U)

#define EDMA_TPCC_IESR_I6_SHIFT                                                                           ((uint32_t)6U)
#define EDMA_TPCC_IESR_I6_MASK                                                                            ((uint32_t)0x00000040U)

#define EDMA_TPCC_IESR_I30_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_IESR_I30_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_IESR_I17_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_IESR_I17_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_IESR_I7_SHIFT                                                                           ((uint32_t)7U)
#define EDMA_TPCC_IESR_I7_MASK                                                                            ((uint32_t)0x00000080U)

#define EDMA_TPCC_IESR_I16_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_IESR_I16_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_IESR_I28_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_IESR_I28_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_IESR_I4_SHIFT                                                                           ((uint32_t)4U)
#define EDMA_TPCC_IESR_I4_MASK                                                                            ((uint32_t)0x00000010U)

#define EDMA_TPCC_IESR_I29_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_IESR_I29_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_IESR_I19_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_IESR_I19_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_IESR_I5_SHIFT                                                                           ((uint32_t)5U)
#define EDMA_TPCC_IESR_I5_MASK                                                                            ((uint32_t)0x00000020U)

#define EDMA_TPCC_IESR_I18_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_IESR_I18_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_IESR_I26_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_IESR_I26_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_IESR_I2_SHIFT                                                                           ((uint32_t)2U)
#define EDMA_TPCC_IESR_I2_MASK                                                                            ((uint32_t)0x00000004U)

#define EDMA_TPCC_IESR_I13_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_IESR_I13_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_IESR_I3_SHIFT                                                                           ((uint32_t)3U)
#define EDMA_TPCC_IESR_I3_MASK                                                                            ((uint32_t)0x00000008U)

#define EDMA_TPCC_IESR_I27_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_IESR_I27_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_IESR_I12_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_IESR_I12_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_IESR_I24_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_IESR_I24_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_IESR_I15_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_IESR_I15_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_IESR_I1_SHIFT                                                                           ((uint32_t)1U)
#define EDMA_TPCC_IESR_I1_MASK                                                                            ((uint32_t)0x00000002U)

#define EDMA_TPCC_IESR_I25_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_IESR_I25_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_IESR_I14_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_IESR_I14_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_IESRH_I52_SHIFT                                                                         ((uint32_t)20U)
#define EDMA_TPCC_IESRH_I52_MASK                                                                          ((uint32_t)0x00100000U)

#define EDMA_TPCC_IESRH_I41_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_IESRH_I41_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_IESRH_I53_SHIFT                                                                         ((uint32_t)21U)
#define EDMA_TPCC_IESRH_I53_MASK                                                                          ((uint32_t)0x00200000U)

#define EDMA_TPCC_IESRH_I42_SHIFT                                                                         ((uint32_t)10U)
#define EDMA_TPCC_IESRH_I42_MASK                                                                          ((uint32_t)0x00000400U)

#define EDMA_TPCC_IESRH_I54_SHIFT                                                                         ((uint32_t)22U)
#define EDMA_TPCC_IESRH_I54_MASK                                                                          ((uint32_t)0x00400000U)

#define EDMA_TPCC_IESRH_I43_SHIFT                                                                         ((uint32_t)11U)
#define EDMA_TPCC_IESRH_I43_MASK                                                                          ((uint32_t)0x00000800U)

#define EDMA_TPCC_IESRH_I55_SHIFT                                                                         ((uint32_t)23U)
#define EDMA_TPCC_IESRH_I55_MASK                                                                          ((uint32_t)0x00800000U)

#define EDMA_TPCC_IESRH_I44_SHIFT                                                                         ((uint32_t)12U)
#define EDMA_TPCC_IESRH_I44_MASK                                                                          ((uint32_t)0x00001000U)

#define EDMA_TPCC_IESRH_I33_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_IESRH_I33_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_IESRH_I56_SHIFT                                                                         ((uint32_t)24U)
#define EDMA_TPCC_IESRH_I56_MASK                                                                          ((uint32_t)0x01000000U)

#define EDMA_TPCC_IESRH_I45_SHIFT                                                                         ((uint32_t)13U)
#define EDMA_TPCC_IESRH_I45_MASK                                                                          ((uint32_t)0x00002000U)

#define EDMA_TPCC_IESRH_I57_SHIFT                                                                         ((uint32_t)25U)
#define EDMA_TPCC_IESRH_I57_MASK                                                                          ((uint32_t)0x02000000U)

#define EDMA_TPCC_IESRH_I32_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_IESRH_I32_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_IESRH_I46_SHIFT                                                                         ((uint32_t)14U)
#define EDMA_TPCC_IESRH_I46_MASK                                                                          ((uint32_t)0x00004000U)

#define EDMA_TPCC_IESRH_I35_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_IESRH_I35_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_IESRH_I58_SHIFT                                                                         ((uint32_t)26U)
#define EDMA_TPCC_IESRH_I58_MASK                                                                          ((uint32_t)0x04000000U)

#define EDMA_TPCC_IESRH_I47_SHIFT                                                                         ((uint32_t)15U)
#define EDMA_TPCC_IESRH_I47_MASK                                                                          ((uint32_t)0x00008000U)

#define EDMA_TPCC_IESRH_I34_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_IESRH_I34_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_IESRH_I59_SHIFT                                                                         ((uint32_t)27U)
#define EDMA_TPCC_IESRH_I59_MASK                                                                          ((uint32_t)0x08000000U)

#define EDMA_TPCC_IESRH_I48_SHIFT                                                                         ((uint32_t)16U)
#define EDMA_TPCC_IESRH_I48_MASK                                                                          ((uint32_t)0x00010000U)

#define EDMA_TPCC_IESRH_I60_SHIFT                                                                         ((uint32_t)28U)
#define EDMA_TPCC_IESRH_I60_MASK                                                                          ((uint32_t)0x10000000U)

#define EDMA_TPCC_IESRH_I37_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_IESRH_I37_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_IESRH_I49_SHIFT                                                                         ((uint32_t)17U)
#define EDMA_TPCC_IESRH_I49_MASK                                                                          ((uint32_t)0x00020000U)

#define EDMA_TPCC_IESRH_I36_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_IESRH_I36_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_IESRH_I50_SHIFT                                                                         ((uint32_t)18U)
#define EDMA_TPCC_IESRH_I50_MASK                                                                          ((uint32_t)0x00040000U)

#define EDMA_TPCC_IESRH_I39_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_IESRH_I39_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_IESRH_I38_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_IESRH_I38_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_IESRH_I63_SHIFT                                                                         ((uint32_t)31U)
#define EDMA_TPCC_IESRH_I63_MASK                                                                          ((uint32_t)0x80000000U)

#define EDMA_TPCC_IESRH_I62_SHIFT                                                                         ((uint32_t)30U)
#define EDMA_TPCC_IESRH_I62_MASK                                                                          ((uint32_t)0x40000000U)

#define EDMA_TPCC_IESRH_I40_SHIFT                                                                         ((uint32_t)8U)
#define EDMA_TPCC_IESRH_I40_MASK                                                                          ((uint32_t)0x00000100U)

#define EDMA_TPCC_IESRH_I61_SHIFT                                                                         ((uint32_t)29U)
#define EDMA_TPCC_IESRH_I61_MASK                                                                          ((uint32_t)0x20000000U)

#define EDMA_TPCC_IESRH_I51_SHIFT                                                                         ((uint32_t)19U)
#define EDMA_TPCC_IESRH_I51_MASK                                                                          ((uint32_t)0x00080000U)

#define EDMA_TPCC_IPR_I15_SHIFT                                                                           ((uint32_t)15U)
#define EDMA_TPCC_IPR_I15_MASK                                                                            ((uint32_t)0x00008000U)

#define EDMA_TPCC_IPR_I27_SHIFT                                                                           ((uint32_t)27U)
#define EDMA_TPCC_IPR_I27_MASK                                                                            ((uint32_t)0x08000000U)

#define EDMA_TPCC_IPR_I3_SHIFT                                                                            ((uint32_t)3U)
#define EDMA_TPCC_IPR_I3_MASK                                                                             ((uint32_t)0x00000008U)

#define EDMA_TPCC_IPR_I14_SHIFT                                                                           ((uint32_t)14U)
#define EDMA_TPCC_IPR_I14_MASK                                                                            ((uint32_t)0x00004000U)

#define EDMA_TPCC_IPR_I2_SHIFT                                                                            ((uint32_t)2U)
#define EDMA_TPCC_IPR_I2_MASK                                                                             ((uint32_t)0x00000004U)

#define EDMA_TPCC_IPR_I1_SHIFT                                                                            ((uint32_t)1U)
#define EDMA_TPCC_IPR_I1_MASK                                                                             ((uint32_t)0x00000002U)

#define EDMA_TPCC_IPR_I13_SHIFT                                                                           ((uint32_t)13U)
#define EDMA_TPCC_IPR_I13_MASK                                                                            ((uint32_t)0x00002000U)

#define EDMA_TPCC_IPR_I28_SHIFT                                                                           ((uint32_t)28U)
#define EDMA_TPCC_IPR_I28_MASK                                                                            ((uint32_t)0x10000000U)

#define EDMA_TPCC_IPR_I17_SHIFT                                                                           ((uint32_t)17U)
#define EDMA_TPCC_IPR_I17_MASK                                                                            ((uint32_t)0x00020000U)

#define EDMA_TPCC_IPR_I0_SHIFT                                                                            ((uint32_t)0U)
#define EDMA_TPCC_IPR_I0_MASK                                                                             ((uint32_t)0x00000001U)

#define EDMA_TPCC_IPR_I12_SHIFT                                                                           ((uint32_t)12U)
#define EDMA_TPCC_IPR_I12_MASK                                                                            ((uint32_t)0x00001000U)

#define EDMA_TPCC_IPR_I29_SHIFT                                                                           ((uint32_t)29U)
#define EDMA_TPCC_IPR_I29_MASK                                                                            ((uint32_t)0x20000000U)

#define EDMA_TPCC_IPR_I6_SHIFT                                                                            ((uint32_t)6U)
#define EDMA_TPCC_IPR_I6_MASK                                                                             ((uint32_t)0x00000040U)

#define EDMA_TPCC_IPR_I26_SHIFT                                                                           ((uint32_t)26U)
#define EDMA_TPCC_IPR_I26_MASK                                                                            ((uint32_t)0x04000000U)

#define EDMA_TPCC_IPR_I5_SHIFT                                                                            ((uint32_t)5U)
#define EDMA_TPCC_IPR_I5_MASK                                                                             ((uint32_t)0x00000020U)

#define EDMA_TPCC_IPR_I4_SHIFT                                                                            ((uint32_t)4U)
#define EDMA_TPCC_IPR_I4_MASK                                                                             ((uint32_t)0x00000010U)

#define EDMA_TPCC_IPR_I16_SHIFT                                                                           ((uint32_t)16U)
#define EDMA_TPCC_IPR_I16_MASK                                                                            ((uint32_t)0x00010000U)

#define EDMA_TPCC_IPR_I23_SHIFT                                                                           ((uint32_t)23U)
#define EDMA_TPCC_IPR_I23_MASK                                                                            ((uint32_t)0x00800000U)

#define EDMA_TPCC_IPR_I7_SHIFT                                                                            ((uint32_t)7U)
#define EDMA_TPCC_IPR_I7_MASK                                                                             ((uint32_t)0x00000080U)

#define EDMA_TPCC_IPR_I22_SHIFT                                                                           ((uint32_t)22U)
#define EDMA_TPCC_IPR_I22_MASK                                                                            ((uint32_t)0x00400000U)

#define EDMA_TPCC_IPR_I25_SHIFT                                                                           ((uint32_t)25U)
#define EDMA_TPCC_IPR_I25_MASK                                                                            ((uint32_t)0x02000000U)

#define EDMA_TPCC_IPR_I24_SHIFT                                                                           ((uint32_t)24U)
#define EDMA_TPCC_IPR_I24_MASK                                                                            ((uint32_t)0x01000000U)

#define EDMA_TPCC_IPR_I19_SHIFT                                                                           ((uint32_t)19U)
#define EDMA_TPCC_IPR_I19_MASK                                                                            ((uint32_t)0x00080000U)

#define EDMA_TPCC_IPR_I30_SHIFT                                                                           ((uint32_t)30U)
#define EDMA_TPCC_IPR_I30_MASK                                                                            ((uint32_t)0x40000000U)

#define EDMA_TPCC_IPR_I11_SHIFT                                                                           ((uint32_t)11U)
#define EDMA_TPCC_IPR_I11_MASK                                                                            ((uint32_t)0x00000800U)

#define EDMA_TPCC_IPR_I18_SHIFT                                                                           ((uint32_t)18U)
#define EDMA_TPCC_IPR_I18_MASK                                                                            ((uint32_t)0x00040000U)

#define EDMA_TPCC_IPR_I31_SHIFT                                                                           ((uint32_t)31U)
#define EDMA_TPCC_IPR_I31_MASK                                                                            ((uint32_t)0x80000000U)

#define EDMA_TPCC_IPR_I10_SHIFT                                                                           ((uint32_t)10U)
#define EDMA_TPCC_IPR_I10_MASK                                                                            ((uint32_t)0x00000400U)

#define EDMA_TPCC_IPR_I9_SHIFT                                                                            ((uint32_t)9U)
#define EDMA_TPCC_IPR_I9_MASK                                                                             ((uint32_t)0x00000200U)

#define EDMA_TPCC_IPR_I21_SHIFT                                                                           ((uint32_t)21U)
#define EDMA_TPCC_IPR_I21_MASK                                                                            ((uint32_t)0x00200000U)

#define EDMA_TPCC_IPR_I8_SHIFT                                                                            ((uint32_t)8U)
#define EDMA_TPCC_IPR_I8_MASK                                                                             ((uint32_t)0x00000100U)

#define EDMA_TPCC_IPR_I20_SHIFT                                                                           ((uint32_t)20U)
#define EDMA_TPCC_IPR_I20_MASK                                                                            ((uint32_t)0x00100000U)

#define EDMA_TPCC_IPRH_I53_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_IPRH_I53_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_IPRH_I41_SHIFT                                                                          ((uint32_t)9U)
#define EDMA_TPCC_IPRH_I41_MASK                                                                           ((uint32_t)0x00000200U)

#define EDMA_TPCC_IPRH_I52_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_IPRH_I52_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_IPRH_I40_SHIFT                                                                          ((uint32_t)8U)
#define EDMA_TPCC_IPRH_I40_MASK                                                                           ((uint32_t)0x00000100U)

#define EDMA_TPCC_IPRH_I51_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_IPRH_I51_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_IPRH_I39_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_IPRH_I39_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_IPRH_I32_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_IPRH_I32_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_IPRH_I50_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_IPRH_I50_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_IPRH_I33_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_IPRH_I33_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_IPRH_I34_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_IPRH_I34_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_IPRH_I49_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_IPRH_I49_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_IPRH_I60_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_IPRH_I60_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_IPRH_I47_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_IPRH_I47_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_IPRH_I35_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_IPRH_I35_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_IPRH_I36_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_IPRH_I36_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_IPRH_I59_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_IPRH_I59_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_IPRH_I48_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_IPRH_I48_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_IPRH_I37_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_IPRH_I37_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_IPRH_I61_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_IPRH_I61_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_IPRH_I38_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_IPRH_I38_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_IPRH_I58_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_IPRH_I58_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_IPRH_I46_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_IPRH_I46_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_IPRH_I45_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_IPRH_I45_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_IPRH_I57_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_IPRH_I57_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_IPRH_I44_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_IPRH_I44_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_IPRH_I56_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_IPRH_I56_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_IPRH_I63_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_IPRH_I63_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_IPRH_I43_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_IPRH_I43_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_IPRH_I55_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_IPRH_I55_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_IPRH_I62_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_IPRH_I62_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_IPRH_I42_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_IPRH_I42_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_IPRH_I54_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_IPRH_I54_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_ICR_I17_SHIFT                                                                           ((uint32_t)17U)
#define EDMA_TPCC_ICR_I17_MASK                                                                            ((uint32_t)0x00020000U)

#define EDMA_TPCC_ICR_I30_SHIFT                                                                           ((uint32_t)30U)
#define EDMA_TPCC_ICR_I30_MASK                                                                            ((uint32_t)0x40000000U)

#define EDMA_TPCC_ICR_I7_SHIFT                                                                            ((uint32_t)7U)
#define EDMA_TPCC_ICR_I7_MASK                                                                             ((uint32_t)0x00000080U)

#define EDMA_TPCC_ICR_I19_SHIFT                                                                           ((uint32_t)19U)
#define EDMA_TPCC_ICR_I19_MASK                                                                            ((uint32_t)0x00080000U)

#define EDMA_TPCC_ICR_I16_SHIFT                                                                           ((uint32_t)16U)
#define EDMA_TPCC_ICR_I16_MASK                                                                            ((uint32_t)0x00010000U)

#define EDMA_TPCC_ICR_I6_SHIFT                                                                            ((uint32_t)6U)
#define EDMA_TPCC_ICR_I6_MASK                                                                             ((uint32_t)0x00000040U)

#define EDMA_TPCC_ICR_I31_SHIFT                                                                           ((uint32_t)31U)
#define EDMA_TPCC_ICR_I31_MASK                                                                            ((uint32_t)0x80000000U)

#define EDMA_TPCC_ICR_I20_SHIFT                                                                           ((uint32_t)20U)
#define EDMA_TPCC_ICR_I20_MASK                                                                            ((uint32_t)0x00100000U)

#define EDMA_TPCC_ICR_I18_SHIFT                                                                           ((uint32_t)18U)
#define EDMA_TPCC_ICR_I18_MASK                                                                            ((uint32_t)0x00040000U)

#define EDMA_TPCC_ICR_I21_SHIFT                                                                           ((uint32_t)21U)
#define EDMA_TPCC_ICR_I21_MASK                                                                            ((uint32_t)0x00200000U)

#define EDMA_TPCC_ICR_I8_SHIFT                                                                            ((uint32_t)8U)
#define EDMA_TPCC_ICR_I8_MASK                                                                             ((uint32_t)0x00000100U)

#define EDMA_TPCC_ICR_I22_SHIFT                                                                           ((uint32_t)22U)
#define EDMA_TPCC_ICR_I22_MASK                                                                            ((uint32_t)0x00400000U)

#define EDMA_TPCC_ICR_I13_SHIFT                                                                           ((uint32_t)13U)
#define EDMA_TPCC_ICR_I13_MASK                                                                            ((uint32_t)0x00002000U)

#define EDMA_TPCC_ICR_I3_SHIFT                                                                            ((uint32_t)3U)
#define EDMA_TPCC_ICR_I3_MASK                                                                             ((uint32_t)0x00000008U)

#define EDMA_TPCC_ICR_I23_SHIFT                                                                           ((uint32_t)23U)
#define EDMA_TPCC_ICR_I23_MASK                                                                            ((uint32_t)0x00800000U)

#define EDMA_TPCC_ICR_I12_SHIFT                                                                           ((uint32_t)12U)
#define EDMA_TPCC_ICR_I12_MASK                                                                            ((uint32_t)0x00001000U)

#define EDMA_TPCC_ICR_I2_SHIFT                                                                            ((uint32_t)2U)
#define EDMA_TPCC_ICR_I2_MASK                                                                             ((uint32_t)0x00000004U)

#define EDMA_TPCC_ICR_I24_SHIFT                                                                           ((uint32_t)24U)
#define EDMA_TPCC_ICR_I24_MASK                                                                            ((uint32_t)0x01000000U)

#define EDMA_TPCC_ICR_I15_SHIFT                                                                           ((uint32_t)15U)
#define EDMA_TPCC_ICR_I15_MASK                                                                            ((uint32_t)0x00008000U)

#define EDMA_TPCC_ICR_I25_SHIFT                                                                           ((uint32_t)25U)
#define EDMA_TPCC_ICR_I25_MASK                                                                            ((uint32_t)0x02000000U)

#define EDMA_TPCC_ICR_I5_SHIFT                                                                            ((uint32_t)5U)
#define EDMA_TPCC_ICR_I5_MASK                                                                             ((uint32_t)0x00000020U)

#define EDMA_TPCC_ICR_I14_SHIFT                                                                           ((uint32_t)14U)
#define EDMA_TPCC_ICR_I14_MASK                                                                            ((uint32_t)0x00004000U)

#define EDMA_TPCC_ICR_I4_SHIFT                                                                            ((uint32_t)4U)
#define EDMA_TPCC_ICR_I4_MASK                                                                             ((uint32_t)0x00000010U)

#define EDMA_TPCC_ICR_I9_SHIFT                                                                            ((uint32_t)9U)
#define EDMA_TPCC_ICR_I9_MASK                                                                             ((uint32_t)0x00000200U)

#define EDMA_TPCC_ICR_I27_SHIFT                                                                           ((uint32_t)27U)
#define EDMA_TPCC_ICR_I27_MASK                                                                            ((uint32_t)0x08000000U)

#define EDMA_TPCC_ICR_I26_SHIFT                                                                           ((uint32_t)26U)
#define EDMA_TPCC_ICR_I26_MASK                                                                            ((uint32_t)0x04000000U)

#define EDMA_TPCC_ICR_I11_SHIFT                                                                           ((uint32_t)11U)
#define EDMA_TPCC_ICR_I11_MASK                                                                            ((uint32_t)0x00000800U)

#define EDMA_TPCC_ICR_I1_SHIFT                                                                            ((uint32_t)1U)
#define EDMA_TPCC_ICR_I1_MASK                                                                             ((uint32_t)0x00000002U)

#define EDMA_TPCC_ICR_I10_SHIFT                                                                           ((uint32_t)10U)
#define EDMA_TPCC_ICR_I10_MASK                                                                            ((uint32_t)0x00000400U)

#define EDMA_TPCC_ICR_I28_SHIFT                                                                           ((uint32_t)28U)
#define EDMA_TPCC_ICR_I28_MASK                                                                            ((uint32_t)0x10000000U)

#define EDMA_TPCC_ICR_I0_SHIFT                                                                            ((uint32_t)0U)
#define EDMA_TPCC_ICR_I0_MASK                                                                             ((uint32_t)0x00000001U)

#define EDMA_TPCC_ICR_I29_SHIFT                                                                           ((uint32_t)29U)
#define EDMA_TPCC_ICR_I29_MASK                                                                            ((uint32_t)0x20000000U)

#define EDMA_TPCC_ICRH_I37_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_ICRH_I37_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_ICRH_I47_SHIFT                                                                          ((uint32_t)15U)
#define EDMA_TPCC_ICRH_I47_MASK                                                                           ((uint32_t)0x00008000U)

#define EDMA_TPCC_ICRH_I53_SHIFT                                                                          ((uint32_t)21U)
#define EDMA_TPCC_ICRH_I53_MASK                                                                           ((uint32_t)0x00200000U)

#define EDMA_TPCC_ICRH_I36_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_ICRH_I36_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_ICRH_I63_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_ICRH_I63_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_ICRH_I46_SHIFT                                                                          ((uint32_t)14U)
#define EDMA_TPCC_ICRH_I46_MASK                                                                           ((uint32_t)0x00004000U)

#define EDMA_TPCC_ICRH_I39_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_ICRH_I39_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_ICRH_I49_SHIFT                                                                          ((uint32_t)17U)
#define EDMA_TPCC_ICRH_I49_MASK                                                                           ((uint32_t)0x00020000U)

#define EDMA_TPCC_ICRH_I38_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_ICRH_I38_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_ICRH_I48_SHIFT                                                                          ((uint32_t)16U)
#define EDMA_TPCC_ICRH_I48_MASK                                                                           ((uint32_t)0x00010000U)

#define EDMA_TPCC_ICRH_I41_SHIFT                                                                          ((uint32_t)9U)
#define EDMA_TPCC_ICRH_I41_MASK                                                                           ((uint32_t)0x00000200U)

#define EDMA_TPCC_ICRH_I51_SHIFT                                                                          ((uint32_t)19U)
#define EDMA_TPCC_ICRH_I51_MASK                                                                           ((uint32_t)0x00080000U)

#define EDMA_TPCC_ICRH_I40_SHIFT                                                                          ((uint32_t)8U)
#define EDMA_TPCC_ICRH_I40_MASK                                                                           ((uint32_t)0x00000100U)

#define EDMA_TPCC_ICRH_I50_SHIFT                                                                          ((uint32_t)18U)
#define EDMA_TPCC_ICRH_I50_MASK                                                                           ((uint32_t)0x00040000U)

#define EDMA_TPCC_ICRH_I42_SHIFT                                                                          ((uint32_t)10U)
#define EDMA_TPCC_ICRH_I42_MASK                                                                           ((uint32_t)0x00000400U)

#define EDMA_TPCC_ICRH_I62_SHIFT                                                                          ((uint32_t)30U)
#define EDMA_TPCC_ICRH_I62_MASK                                                                           ((uint32_t)0x40000000U)

#define EDMA_TPCC_ICRH_I52_SHIFT                                                                          ((uint32_t)20U)
#define EDMA_TPCC_ICRH_I52_MASK                                                                           ((uint32_t)0x00100000U)

#define EDMA_TPCC_ICRH_I61_SHIFT                                                                          ((uint32_t)29U)
#define EDMA_TPCC_ICRH_I61_MASK                                                                           ((uint32_t)0x20000000U)

#define EDMA_TPCC_ICRH_I32_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_ICRH_I32_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_ICRH_I60_SHIFT                                                                          ((uint32_t)28U)
#define EDMA_TPCC_ICRH_I60_MASK                                                                           ((uint32_t)0x10000000U)

#define EDMA_TPCC_ICRH_I59_SHIFT                                                                          ((uint32_t)27U)
#define EDMA_TPCC_ICRH_I59_MASK                                                                           ((uint32_t)0x08000000U)

#define EDMA_TPCC_ICRH_I58_SHIFT                                                                          ((uint32_t)26U)
#define EDMA_TPCC_ICRH_I58_MASK                                                                           ((uint32_t)0x04000000U)

#define EDMA_TPCC_ICRH_I57_SHIFT                                                                          ((uint32_t)25U)
#define EDMA_TPCC_ICRH_I57_MASK                                                                           ((uint32_t)0x02000000U)

#define EDMA_TPCC_ICRH_I33_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_ICRH_I33_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_ICRH_I43_SHIFT                                                                          ((uint32_t)11U)
#define EDMA_TPCC_ICRH_I43_MASK                                                                           ((uint32_t)0x00000800U)

#define EDMA_TPCC_ICRH_I56_SHIFT                                                                          ((uint32_t)24U)
#define EDMA_TPCC_ICRH_I56_MASK                                                                           ((uint32_t)0x01000000U)

#define EDMA_TPCC_ICRH_I35_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_ICRH_I35_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_ICRH_I55_SHIFT                                                                          ((uint32_t)23U)
#define EDMA_TPCC_ICRH_I55_MASK                                                                           ((uint32_t)0x00800000U)

#define EDMA_TPCC_ICRH_I45_SHIFT                                                                          ((uint32_t)13U)
#define EDMA_TPCC_ICRH_I45_MASK                                                                           ((uint32_t)0x00002000U)

#define EDMA_TPCC_ICRH_I34_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_ICRH_I34_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_ICRH_I54_SHIFT                                                                          ((uint32_t)22U)
#define EDMA_TPCC_ICRH_I54_MASK                                                                           ((uint32_t)0x00400000U)

#define EDMA_TPCC_ICRH_I44_SHIFT                                                                          ((uint32_t)12U)
#define EDMA_TPCC_ICRH_I44_MASK                                                                           ((uint32_t)0x00001000U)

#define EDMA_TPCC_IEVAL_SET_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_IEVAL_SET_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_IEVAL_EVAL_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_IEVAL_EVAL_MASK                                                                         ((uint32_t)0x00000001U)

#define EDMA_TPCC_IEVAL_RESERVED_0_SHIFT                                                                  ((uint32_t)2U)
#define EDMA_TPCC_IEVAL_RESERVED_0_MASK                                                                   ((uint32_t)0xfffffffcU)

#define EDMA_TPCC_QEER_E6_SHIFT                                                                           ((uint32_t)6U)
#define EDMA_TPCC_QEER_E6_MASK                                                                            ((uint32_t)0x00000040U)

#define EDMA_TPCC_QEER_E5_SHIFT                                                                           ((uint32_t)5U)
#define EDMA_TPCC_QEER_E5_MASK                                                                            ((uint32_t)0x00000020U)

#define EDMA_TPCC_QEER_E7_SHIFT                                                                           ((uint32_t)7U)
#define EDMA_TPCC_QEER_E7_MASK                                                                            ((uint32_t)0x00000080U)

#define EDMA_TPCC_QEER_E0_SHIFT                                                                           ((uint32_t)0U)
#define EDMA_TPCC_QEER_E0_MASK                                                                            ((uint32_t)0x00000001U)

#define EDMA_TPCC_QEER_E2_SHIFT                                                                           ((uint32_t)2U)
#define EDMA_TPCC_QEER_E2_MASK                                                                            ((uint32_t)0x00000004U)

#define EDMA_TPCC_QEER_E1_SHIFT                                                                           ((uint32_t)1U)
#define EDMA_TPCC_QEER_E1_MASK                                                                            ((uint32_t)0x00000002U)

#define EDMA_TPCC_QEER_E4_SHIFT                                                                           ((uint32_t)4U)
#define EDMA_TPCC_QEER_E4_MASK                                                                            ((uint32_t)0x00000010U)

#define EDMA_TPCC_QEER_E3_SHIFT                                                                           ((uint32_t)3U)
#define EDMA_TPCC_QEER_E3_MASK                                                                            ((uint32_t)0x00000008U)

#define EDMA_TPCC_QEER_RESERVED_0_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_QEER_RESERVED_0_MASK                                                                    ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QEECR_E3_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_QEECR_E3_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_QEECR_E2_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_QEECR_E2_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_QEECR_E1_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_QEECR_E1_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_QEECR_E4_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_QEECR_E4_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_QEECR_E0_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_QEECR_E0_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_QEECR_E6_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_QEECR_E6_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_QEECR_E5_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_QEECR_E5_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_QEECR_E7_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_QEECR_E7_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_QEECR_RESERVED_0_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_QEECR_RESERVED_0_MASK                                                                   ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QEESR_E5_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_QEESR_E5_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_QEESR_E3_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_QEESR_E3_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_QEESR_E6_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_QEESR_E6_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_QEESR_E4_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_QEESR_E4_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_QEESR_E1_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_QEESR_E1_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_QEESR_E2_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_QEESR_E2_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_QEESR_E0_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_QEESR_E0_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_QEESR_E7_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_QEESR_E7_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_QEESR_RESERVED_0_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_QEESR_RESERVED_0_MASK                                                                   ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QSER_E4_SHIFT                                                                           ((uint32_t)4U)
#define EDMA_TPCC_QSER_E4_MASK                                                                            ((uint32_t)0x00000010U)

#define EDMA_TPCC_QSER_E3_SHIFT                                                                           ((uint32_t)3U)
#define EDMA_TPCC_QSER_E3_MASK                                                                            ((uint32_t)0x00000008U)

#define EDMA_TPCC_QSER_E2_SHIFT                                                                           ((uint32_t)2U)
#define EDMA_TPCC_QSER_E2_MASK                                                                            ((uint32_t)0x00000004U)

#define EDMA_TPCC_QSER_E1_SHIFT                                                                           ((uint32_t)1U)
#define EDMA_TPCC_QSER_E1_MASK                                                                            ((uint32_t)0x00000002U)

#define EDMA_TPCC_QSER_E0_SHIFT                                                                           ((uint32_t)0U)
#define EDMA_TPCC_QSER_E0_MASK                                                                            ((uint32_t)0x00000001U)

#define EDMA_TPCC_QSER_E7_SHIFT                                                                           ((uint32_t)7U)
#define EDMA_TPCC_QSER_E7_MASK                                                                            ((uint32_t)0x00000080U)

#define EDMA_TPCC_QSER_E5_SHIFT                                                                           ((uint32_t)5U)
#define EDMA_TPCC_QSER_E5_MASK                                                                            ((uint32_t)0x00000020U)

#define EDMA_TPCC_QSER_E6_SHIFT                                                                           ((uint32_t)6U)
#define EDMA_TPCC_QSER_E6_MASK                                                                            ((uint32_t)0x00000040U)

#define EDMA_TPCC_QSER_RESERVED_0_SHIFT                                                                   ((uint32_t)8U)
#define EDMA_TPCC_QSER_RESERVED_0_MASK                                                                    ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QSECR_E5_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_QSECR_E5_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_QSECR_E6_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_QSECR_E6_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_QSECR_E7_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_QSECR_E7_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_QSECR_E0_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_QSECR_E0_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_QSECR_E2_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_QSECR_E2_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_QSECR_E1_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_QSECR_E1_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_QSECR_E4_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_QSECR_E4_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_QSECR_E3_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_QSECR_E3_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_QSECR_RESERVED_0_SHIFT                                                                  ((uint32_t)8U)
#define EDMA_TPCC_QSECR_RESERVED_0_MASK                                                                   ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QER_E7_SHIFT                                                                            ((uint32_t)7U)
#define EDMA_TPCC_QER_E7_MASK                                                                             ((uint32_t)0x00000080U)

#define EDMA_TPCC_QER_E6_SHIFT                                                                            ((uint32_t)6U)
#define EDMA_TPCC_QER_E6_MASK                                                                             ((uint32_t)0x00000040U)

#define EDMA_TPCC_QER_E5_SHIFT                                                                            ((uint32_t)5U)
#define EDMA_TPCC_QER_E5_MASK                                                                             ((uint32_t)0x00000020U)

#define EDMA_TPCC_QER_E3_SHIFT                                                                            ((uint32_t)3U)
#define EDMA_TPCC_QER_E3_MASK                                                                             ((uint32_t)0x00000008U)

#define EDMA_TPCC_QER_E4_SHIFT                                                                            ((uint32_t)4U)
#define EDMA_TPCC_QER_E4_MASK                                                                             ((uint32_t)0x00000010U)

#define EDMA_TPCC_QER_E1_SHIFT                                                                            ((uint32_t)1U)
#define EDMA_TPCC_QER_E1_MASK                                                                             ((uint32_t)0x00000002U)

#define EDMA_TPCC_QER_E2_SHIFT                                                                            ((uint32_t)2U)
#define EDMA_TPCC_QER_E2_MASK                                                                             ((uint32_t)0x00000004U)

#define EDMA_TPCC_QER_E0_SHIFT                                                                            ((uint32_t)0U)
#define EDMA_TPCC_QER_E0_MASK                                                                             ((uint32_t)0x00000001U)

#define EDMA_TPCC_QER_RESERVED_0_SHIFT                                                                    ((uint32_t)8U)
#define EDMA_TPCC_QER_RESERVED_0_MASK                                                                     ((uint32_t)0xffffff00U)

#define EDMA_TPCC_IESRH_RN_I52_SHIFT                                                                      ((uint32_t)20U)
#define EDMA_TPCC_IESRH_RN_I52_MASK                                                                       ((uint32_t)0x00100000U)

#define EDMA_TPCC_IESRH_RN_I41_SHIFT                                                                      ((uint32_t)9U)
#define EDMA_TPCC_IESRH_RN_I41_MASK                                                                       ((uint32_t)0x00000200U)

#define EDMA_TPCC_IESRH_RN_I53_SHIFT                                                                      ((uint32_t)21U)
#define EDMA_TPCC_IESRH_RN_I53_MASK                                                                       ((uint32_t)0x00200000U)

#define EDMA_TPCC_IESRH_RN_I42_SHIFT                                                                      ((uint32_t)10U)
#define EDMA_TPCC_IESRH_RN_I42_MASK                                                                       ((uint32_t)0x00000400U)

#define EDMA_TPCC_IESRH_RN_I54_SHIFT                                                                      ((uint32_t)22U)
#define EDMA_TPCC_IESRH_RN_I54_MASK                                                                       ((uint32_t)0x00400000U)

#define EDMA_TPCC_IESRH_RN_I43_SHIFT                                                                      ((uint32_t)11U)
#define EDMA_TPCC_IESRH_RN_I43_MASK                                                                       ((uint32_t)0x00000800U)

#define EDMA_TPCC_IESRH_RN_I55_SHIFT                                                                      ((uint32_t)23U)
#define EDMA_TPCC_IESRH_RN_I55_MASK                                                                       ((uint32_t)0x00800000U)

#define EDMA_TPCC_IESRH_RN_I44_SHIFT                                                                      ((uint32_t)12U)
#define EDMA_TPCC_IESRH_RN_I44_MASK                                                                       ((uint32_t)0x00001000U)

#define EDMA_TPCC_IESRH_RN_I33_SHIFT                                                                      ((uint32_t)1U)
#define EDMA_TPCC_IESRH_RN_I33_MASK                                                                       ((uint32_t)0x00000002U)

#define EDMA_TPCC_IESRH_RN_I56_SHIFT                                                                      ((uint32_t)24U)
#define EDMA_TPCC_IESRH_RN_I56_MASK                                                                       ((uint32_t)0x01000000U)

#define EDMA_TPCC_IESRH_RN_I45_SHIFT                                                                      ((uint32_t)13U)
#define EDMA_TPCC_IESRH_RN_I45_MASK                                                                       ((uint32_t)0x00002000U)

#define EDMA_TPCC_IESRH_RN_I57_SHIFT                                                                      ((uint32_t)25U)
#define EDMA_TPCC_IESRH_RN_I57_MASK                                                                       ((uint32_t)0x02000000U)

#define EDMA_TPCC_IESRH_RN_I32_SHIFT                                                                      ((uint32_t)0U)
#define EDMA_TPCC_IESRH_RN_I32_MASK                                                                       ((uint32_t)0x00000001U)

#define EDMA_TPCC_IESRH_RN_I46_SHIFT                                                                      ((uint32_t)14U)
#define EDMA_TPCC_IESRH_RN_I46_MASK                                                                       ((uint32_t)0x00004000U)

#define EDMA_TPCC_IESRH_RN_I35_SHIFT                                                                      ((uint32_t)3U)
#define EDMA_TPCC_IESRH_RN_I35_MASK                                                                       ((uint32_t)0x00000008U)

#define EDMA_TPCC_IESRH_RN_I58_SHIFT                                                                      ((uint32_t)26U)
#define EDMA_TPCC_IESRH_RN_I58_MASK                                                                       ((uint32_t)0x04000000U)

#define EDMA_TPCC_IESRH_RN_I47_SHIFT                                                                      ((uint32_t)15U)
#define EDMA_TPCC_IESRH_RN_I47_MASK                                                                       ((uint32_t)0x00008000U)

#define EDMA_TPCC_IESRH_RN_I34_SHIFT                                                                      ((uint32_t)2U)
#define EDMA_TPCC_IESRH_RN_I34_MASK                                                                       ((uint32_t)0x00000004U)

#define EDMA_TPCC_IESRH_RN_I59_SHIFT                                                                      ((uint32_t)27U)
#define EDMA_TPCC_IESRH_RN_I59_MASK                                                                       ((uint32_t)0x08000000U)

#define EDMA_TPCC_IESRH_RN_I48_SHIFT                                                                      ((uint32_t)16U)
#define EDMA_TPCC_IESRH_RN_I48_MASK                                                                       ((uint32_t)0x00010000U)

#define EDMA_TPCC_IESRH_RN_I60_SHIFT                                                                      ((uint32_t)28U)
#define EDMA_TPCC_IESRH_RN_I60_MASK                                                                       ((uint32_t)0x10000000U)

#define EDMA_TPCC_IESRH_RN_I37_SHIFT                                                                      ((uint32_t)5U)
#define EDMA_TPCC_IESRH_RN_I37_MASK                                                                       ((uint32_t)0x00000020U)

#define EDMA_TPCC_IESRH_RN_I49_SHIFT                                                                      ((uint32_t)17U)
#define EDMA_TPCC_IESRH_RN_I49_MASK                                                                       ((uint32_t)0x00020000U)

#define EDMA_TPCC_IESRH_RN_I36_SHIFT                                                                      ((uint32_t)4U)
#define EDMA_TPCC_IESRH_RN_I36_MASK                                                                       ((uint32_t)0x00000010U)

#define EDMA_TPCC_IESRH_RN_I50_SHIFT                                                                      ((uint32_t)18U)
#define EDMA_TPCC_IESRH_RN_I50_MASK                                                                       ((uint32_t)0x00040000U)

#define EDMA_TPCC_IESRH_RN_I39_SHIFT                                                                      ((uint32_t)7U)
#define EDMA_TPCC_IESRH_RN_I39_MASK                                                                       ((uint32_t)0x00000080U)

#define EDMA_TPCC_IESRH_RN_I38_SHIFT                                                                      ((uint32_t)6U)
#define EDMA_TPCC_IESRH_RN_I38_MASK                                                                       ((uint32_t)0x00000040U)

#define EDMA_TPCC_IESRH_RN_I63_SHIFT                                                                      ((uint32_t)31U)
#define EDMA_TPCC_IESRH_RN_I63_MASK                                                                       ((uint32_t)0x80000000U)

#define EDMA_TPCC_IESRH_RN_I62_SHIFT                                                                      ((uint32_t)30U)
#define EDMA_TPCC_IESRH_RN_I62_MASK                                                                       ((uint32_t)0x40000000U)

#define EDMA_TPCC_IESRH_RN_I40_SHIFT                                                                      ((uint32_t)8U)
#define EDMA_TPCC_IESRH_RN_I40_MASK                                                                       ((uint32_t)0x00000100U)

#define EDMA_TPCC_IESRH_RN_I61_SHIFT                                                                      ((uint32_t)29U)
#define EDMA_TPCC_IESRH_RN_I61_MASK                                                                       ((uint32_t)0x20000000U)

#define EDMA_TPCC_IESRH_RN_I51_SHIFT                                                                      ((uint32_t)19U)
#define EDMA_TPCC_IESRH_RN_I51_MASK                                                                       ((uint32_t)0x00080000U)

#define EDMA_TPCC_SER_RN_E0_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_SER_RN_E0_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_SER_RN_E13_SHIFT                                                                        ((uint32_t)13U)
#define EDMA_TPCC_SER_RN_E13_MASK                                                                         ((uint32_t)0x00002000U)

#define EDMA_TPCC_SER_RN_E21_SHIFT                                                                        ((uint32_t)21U)
#define EDMA_TPCC_SER_RN_E21_MASK                                                                         ((uint32_t)0x00200000U)

#define EDMA_TPCC_SER_RN_E14_SHIFT                                                                        ((uint32_t)14U)
#define EDMA_TPCC_SER_RN_E14_MASK                                                                         ((uint32_t)0x00004000U)

#define EDMA_TPCC_SER_RN_E31_SHIFT                                                                        ((uint32_t)31U)
#define EDMA_TPCC_SER_RN_E31_MASK                                                                         ((uint32_t)0x80000000U)

#define EDMA_TPCC_SER_RN_E1_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_SER_RN_E1_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_SER_RN_E11_SHIFT                                                                        ((uint32_t)11U)
#define EDMA_TPCC_SER_RN_E11_MASK                                                                         ((uint32_t)0x00000800U)

#define EDMA_TPCC_SER_RN_E19_SHIFT                                                                        ((uint32_t)19U)
#define EDMA_TPCC_SER_RN_E19_MASK                                                                         ((uint32_t)0x00080000U)

#define EDMA_TPCC_SER_RN_E20_SHIFT                                                                        ((uint32_t)20U)
#define EDMA_TPCC_SER_RN_E20_MASK                                                                         ((uint32_t)0x00100000U)

#define EDMA_TPCC_SER_RN_E12_SHIFT                                                                        ((uint32_t)12U)
#define EDMA_TPCC_SER_RN_E12_MASK                                                                         ((uint32_t)0x00001000U)

#define EDMA_TPCC_SER_RN_E3_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_SER_RN_E3_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_SER_RN_E4_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_SER_RN_E4_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_SER_RN_E24_SHIFT                                                                        ((uint32_t)24U)
#define EDMA_TPCC_SER_RN_E24_MASK                                                                         ((uint32_t)0x01000000U)

#define EDMA_TPCC_SER_RN_E2_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_SER_RN_E2_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_SER_RN_E22_SHIFT                                                                        ((uint32_t)22U)
#define EDMA_TPCC_SER_RN_E22_MASK                                                                         ((uint32_t)0x00400000U)

#define EDMA_TPCC_SER_RN_E23_SHIFT                                                                        ((uint32_t)23U)
#define EDMA_TPCC_SER_RN_E23_MASK                                                                         ((uint32_t)0x00800000U)

#define EDMA_TPCC_SER_RN_E25_SHIFT                                                                        ((uint32_t)25U)
#define EDMA_TPCC_SER_RN_E25_MASK                                                                         ((uint32_t)0x02000000U)

#define EDMA_TPCC_SER_RN_E26_SHIFT                                                                        ((uint32_t)26U)
#define EDMA_TPCC_SER_RN_E26_MASK                                                                         ((uint32_t)0x04000000U)

#define EDMA_TPCC_SER_RN_E6_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_SER_RN_E6_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_SER_RN_E5_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_SER_RN_E5_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_SER_RN_E8_SHIFT                                                                         ((uint32_t)8U)
#define EDMA_TPCC_SER_RN_E8_MASK                                                                          ((uint32_t)0x00000100U)

#define EDMA_TPCC_SER_RN_E17_SHIFT                                                                        ((uint32_t)17U)
#define EDMA_TPCC_SER_RN_E17_MASK                                                                         ((uint32_t)0x00020000U)

#define EDMA_TPCC_SER_RN_E29_SHIFT                                                                        ((uint32_t)29U)
#define EDMA_TPCC_SER_RN_E29_MASK                                                                         ((uint32_t)0x20000000U)

#define EDMA_TPCC_SER_RN_E18_SHIFT                                                                        ((uint32_t)18U)
#define EDMA_TPCC_SER_RN_E18_MASK                                                                         ((uint32_t)0x00040000U)

#define EDMA_TPCC_SER_RN_E30_SHIFT                                                                        ((uint32_t)30U)
#define EDMA_TPCC_SER_RN_E30_MASK                                                                         ((uint32_t)0x40000000U)

#define EDMA_TPCC_SER_RN_E7_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_SER_RN_E7_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_SER_RN_E10_SHIFT                                                                        ((uint32_t)10U)
#define EDMA_TPCC_SER_RN_E10_MASK                                                                         ((uint32_t)0x00000400U)

#define EDMA_TPCC_SER_RN_E15_SHIFT                                                                        ((uint32_t)15U)
#define EDMA_TPCC_SER_RN_E15_MASK                                                                         ((uint32_t)0x00008000U)

#define EDMA_TPCC_SER_RN_E27_SHIFT                                                                        ((uint32_t)27U)
#define EDMA_TPCC_SER_RN_E27_MASK                                                                         ((uint32_t)0x08000000U)

#define EDMA_TPCC_SER_RN_E9_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_SER_RN_E9_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_SER_RN_E16_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_SER_RN_E16_MASK                                                                         ((uint32_t)0x00010000U)

#define EDMA_TPCC_SER_RN_E28_SHIFT                                                                        ((uint32_t)28U)
#define EDMA_TPCC_SER_RN_E28_MASK                                                                         ((uint32_t)0x10000000U)

#define EDMA_TPCC_SERH_RN_E53_SHIFT                                                                       ((uint32_t)21U)
#define EDMA_TPCC_SERH_RN_E53_MASK                                                                        ((uint32_t)0x00200000U)

#define EDMA_TPCC_SERH_RN_E42_SHIFT                                                                       ((uint32_t)10U)
#define EDMA_TPCC_SERH_RN_E42_MASK                                                                        ((uint32_t)0x00000400U)

#define EDMA_TPCC_SERH_RN_E52_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_SERH_RN_E52_MASK                                                                        ((uint32_t)0x00100000U)

#define EDMA_TPCC_SERH_RN_E43_SHIFT                                                                       ((uint32_t)11U)
#define EDMA_TPCC_SERH_RN_E43_MASK                                                                        ((uint32_t)0x00000800U)

#define EDMA_TPCC_SERH_RN_E32_SHIFT                                                                       ((uint32_t)0U)
#define EDMA_TPCC_SERH_RN_E32_MASK                                                                        ((uint32_t)0x00000001U)

#define EDMA_TPCC_SERH_RN_E44_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_SERH_RN_E44_MASK                                                                        ((uint32_t)0x00001000U)

#define EDMA_TPCC_SERH_RN_E55_SHIFT                                                                       ((uint32_t)23U)
#define EDMA_TPCC_SERH_RN_E55_MASK                                                                        ((uint32_t)0x00800000U)

#define EDMA_TPCC_SERH_RN_E45_SHIFT                                                                       ((uint32_t)13U)
#define EDMA_TPCC_SERH_RN_E45_MASK                                                                        ((uint32_t)0x00002000U)

#define EDMA_TPCC_SERH_RN_E54_SHIFT                                                                       ((uint32_t)22U)
#define EDMA_TPCC_SERH_RN_E54_MASK                                                                        ((uint32_t)0x00400000U)

#define EDMA_TPCC_SERH_RN_E46_SHIFT                                                                       ((uint32_t)14U)
#define EDMA_TPCC_SERH_RN_E46_MASK                                                                        ((uint32_t)0x00004000U)

#define EDMA_TPCC_SERH_RN_E56_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_SERH_RN_E56_MASK                                                                        ((uint32_t)0x01000000U)

#define EDMA_TPCC_SERH_RN_E58_SHIFT                                                                       ((uint32_t)26U)
#define EDMA_TPCC_SERH_RN_E58_MASK                                                                        ((uint32_t)0x04000000U)

#define EDMA_TPCC_SERH_RN_E57_SHIFT                                                                       ((uint32_t)25U)
#define EDMA_TPCC_SERH_RN_E57_MASK                                                                        ((uint32_t)0x02000000U)

#define EDMA_TPCC_SERH_RN_E60_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_SERH_RN_E60_MASK                                                                        ((uint32_t)0x10000000U)

#define EDMA_TPCC_SERH_RN_E59_SHIFT                                                                       ((uint32_t)27U)
#define EDMA_TPCC_SERH_RN_E59_MASK                                                                        ((uint32_t)0x08000000U)

#define EDMA_TPCC_SERH_RN_E61_SHIFT                                                                       ((uint32_t)29U)
#define EDMA_TPCC_SERH_RN_E61_MASK                                                                        ((uint32_t)0x20000000U)

#define EDMA_TPCC_SERH_RN_E37_SHIFT                                                                       ((uint32_t)5U)
#define EDMA_TPCC_SERH_RN_E37_MASK                                                                        ((uint32_t)0x00000020U)

#define EDMA_TPCC_SERH_RN_E47_SHIFT                                                                       ((uint32_t)15U)
#define EDMA_TPCC_SERH_RN_E47_MASK                                                                        ((uint32_t)0x00008000U)

#define EDMA_TPCC_SERH_RN_E38_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_SERH_RN_E38_MASK                                                                        ((uint32_t)0x00000040U)

#define EDMA_TPCC_SERH_RN_E35_SHIFT                                                                       ((uint32_t)3U)
#define EDMA_TPCC_SERH_RN_E35_MASK                                                                        ((uint32_t)0x00000008U)

#define EDMA_TPCC_SERH_RN_E48_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_SERH_RN_E48_MASK                                                                        ((uint32_t)0x00010000U)

#define EDMA_TPCC_SERH_RN_E62_SHIFT                                                                       ((uint32_t)30U)
#define EDMA_TPCC_SERH_RN_E62_MASK                                                                        ((uint32_t)0x40000000U)

#define EDMA_TPCC_SERH_RN_E39_SHIFT                                                                       ((uint32_t)7U)
#define EDMA_TPCC_SERH_RN_E39_MASK                                                                        ((uint32_t)0x00000080U)

#define EDMA_TPCC_SERH_RN_E63_SHIFT                                                                       ((uint32_t)31U)
#define EDMA_TPCC_SERH_RN_E63_MASK                                                                        ((uint32_t)0x80000000U)

#define EDMA_TPCC_SERH_RN_E36_SHIFT                                                                       ((uint32_t)4U)
#define EDMA_TPCC_SERH_RN_E36_MASK                                                                        ((uint32_t)0x00000010U)

#define EDMA_TPCC_SERH_RN_E49_SHIFT                                                                       ((uint32_t)17U)
#define EDMA_TPCC_SERH_RN_E49_MASK                                                                        ((uint32_t)0x00020000U)

#define EDMA_TPCC_SERH_RN_E40_SHIFT                                                                       ((uint32_t)8U)
#define EDMA_TPCC_SERH_RN_E40_MASK                                                                        ((uint32_t)0x00000100U)

#define EDMA_TPCC_SERH_RN_E33_SHIFT                                                                       ((uint32_t)1U)
#define EDMA_TPCC_SERH_RN_E33_MASK                                                                        ((uint32_t)0x00000002U)

#define EDMA_TPCC_SERH_RN_E50_SHIFT                                                                       ((uint32_t)18U)
#define EDMA_TPCC_SERH_RN_E50_MASK                                                                        ((uint32_t)0x00040000U)

#define EDMA_TPCC_SERH_RN_E41_SHIFT                                                                       ((uint32_t)9U)
#define EDMA_TPCC_SERH_RN_E41_MASK                                                                        ((uint32_t)0x00000200U)

#define EDMA_TPCC_SERH_RN_E34_SHIFT                                                                       ((uint32_t)2U)
#define EDMA_TPCC_SERH_RN_E34_MASK                                                                        ((uint32_t)0x00000004U)

#define EDMA_TPCC_SERH_RN_E51_SHIFT                                                                       ((uint32_t)19U)
#define EDMA_TPCC_SERH_RN_E51_MASK                                                                        ((uint32_t)0x00080000U)

#define EDMA_TPCC_ESR_RN_E3_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_ESR_RN_E3_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_ESR_RN_E6_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_ESR_RN_E6_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_ESR_RN_E20_SHIFT                                                                        ((uint32_t)20U)
#define EDMA_TPCC_ESR_RN_E20_MASK                                                                         ((uint32_t)0x00100000U)

#define EDMA_TPCC_ESR_RN_E1_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_ESR_RN_E1_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_ESR_RN_E4_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_ESR_RN_E4_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_ESR_RN_E18_SHIFT                                                                        ((uint32_t)18U)
#define EDMA_TPCC_ESR_RN_E18_MASK                                                                         ((uint32_t)0x00040000U)

#define EDMA_TPCC_ESR_RN_E7_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_ESR_RN_E7_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_ESR_RN_E11_SHIFT                                                                        ((uint32_t)11U)
#define EDMA_TPCC_ESR_RN_E11_MASK                                                                         ((uint32_t)0x00000800U)

#define EDMA_TPCC_ESR_RN_E10_SHIFT                                                                        ((uint32_t)10U)
#define EDMA_TPCC_ESR_RN_E10_MASK                                                                         ((uint32_t)0x00000400U)

#define EDMA_TPCC_ESR_RN_E5_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_ESR_RN_E5_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_ESR_RN_E8_SHIFT                                                                         ((uint32_t)8U)
#define EDMA_TPCC_ESR_RN_E8_MASK                                                                          ((uint32_t)0x00000100U)

#define EDMA_TPCC_ESR_RN_E22_SHIFT                                                                        ((uint32_t)22U)
#define EDMA_TPCC_ESR_RN_E22_MASK                                                                         ((uint32_t)0x00400000U)

#define EDMA_TPCC_ESR_RN_E21_SHIFT                                                                        ((uint32_t)21U)
#define EDMA_TPCC_ESR_RN_E21_MASK                                                                         ((uint32_t)0x00200000U)

#define EDMA_TPCC_ESR_RN_E23_SHIFT                                                                        ((uint32_t)23U)
#define EDMA_TPCC_ESR_RN_E23_MASK                                                                         ((uint32_t)0x00800000U)

#define EDMA_TPCC_ESR_RN_E31_SHIFT                                                                        ((uint32_t)31U)
#define EDMA_TPCC_ESR_RN_E31_MASK                                                                         ((uint32_t)0x80000000U)

#define EDMA_TPCC_ESR_RN_E15_SHIFT                                                                        ((uint32_t)15U)
#define EDMA_TPCC_ESR_RN_E15_MASK                                                                         ((uint32_t)0x00008000U)

#define EDMA_TPCC_ESR_RN_E26_SHIFT                                                                        ((uint32_t)26U)
#define EDMA_TPCC_ESR_RN_E26_MASK                                                                         ((uint32_t)0x04000000U)

#define EDMA_TPCC_ESR_RN_E24_SHIFT                                                                        ((uint32_t)24U)
#define EDMA_TPCC_ESR_RN_E24_MASK                                                                         ((uint32_t)0x01000000U)

#define EDMA_TPCC_ESR_RN_E12_SHIFT                                                                        ((uint32_t)12U)
#define EDMA_TPCC_ESR_RN_E12_MASK                                                                         ((uint32_t)0x00001000U)

#define EDMA_TPCC_ESR_RN_E13_SHIFT                                                                        ((uint32_t)13U)
#define EDMA_TPCC_ESR_RN_E13_MASK                                                                         ((uint32_t)0x00002000U)

#define EDMA_TPCC_ESR_RN_E9_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_ESR_RN_E9_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_ESR_RN_E28_SHIFT                                                                        ((uint32_t)28U)
#define EDMA_TPCC_ESR_RN_E28_MASK                                                                         ((uint32_t)0x10000000U)

#define EDMA_TPCC_ESR_RN_E25_SHIFT                                                                        ((uint32_t)25U)
#define EDMA_TPCC_ESR_RN_E25_MASK                                                                         ((uint32_t)0x02000000U)

#define EDMA_TPCC_ESR_RN_E0_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_ESR_RN_E0_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_ESR_RN_E19_SHIFT                                                                        ((uint32_t)19U)
#define EDMA_TPCC_ESR_RN_E19_MASK                                                                         ((uint32_t)0x00080000U)

#define EDMA_TPCC_ESR_RN_E16_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_ESR_RN_E16_MASK                                                                         ((uint32_t)0x00010000U)

#define EDMA_TPCC_ESR_RN_E2_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_ESR_RN_E2_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_ESR_RN_E27_SHIFT                                                                        ((uint32_t)27U)
#define EDMA_TPCC_ESR_RN_E27_MASK                                                                         ((uint32_t)0x08000000U)

#define EDMA_TPCC_ESR_RN_E17_SHIFT                                                                        ((uint32_t)17U)
#define EDMA_TPCC_ESR_RN_E17_MASK                                                                         ((uint32_t)0x00020000U)

#define EDMA_TPCC_ESR_RN_E30_SHIFT                                                                        ((uint32_t)30U)
#define EDMA_TPCC_ESR_RN_E30_MASK                                                                         ((uint32_t)0x40000000U)

#define EDMA_TPCC_ESR_RN_E14_SHIFT                                                                        ((uint32_t)14U)
#define EDMA_TPCC_ESR_RN_E14_MASK                                                                         ((uint32_t)0x00004000U)

#define EDMA_TPCC_ESR_RN_E29_SHIFT                                                                        ((uint32_t)29U)
#define EDMA_TPCC_ESR_RN_E29_MASK                                                                         ((uint32_t)0x20000000U)

#define EDMA_TPCC_EECR_RN_E30_SHIFT                                                                       ((uint32_t)30U)
#define EDMA_TPCC_EECR_RN_E30_MASK                                                                        ((uint32_t)0x40000000U)

#define EDMA_TPCC_EECR_RN_E25_SHIFT                                                                       ((uint32_t)25U)
#define EDMA_TPCC_EECR_RN_E25_MASK                                                                        ((uint32_t)0x02000000U)

#define EDMA_TPCC_EECR_RN_E14_SHIFT                                                                       ((uint32_t)14U)
#define EDMA_TPCC_EECR_RN_E14_MASK                                                                        ((uint32_t)0x00004000U)

#define EDMA_TPCC_EECR_RN_E15_SHIFT                                                                       ((uint32_t)15U)
#define EDMA_TPCC_EECR_RN_E15_MASK                                                                        ((uint32_t)0x00008000U)

#define EDMA_TPCC_EECR_RN_E5_SHIFT                                                                        ((uint32_t)5U)
#define EDMA_TPCC_EECR_RN_E5_MASK                                                                         ((uint32_t)0x00000020U)

#define EDMA_TPCC_EECR_RN_E31_SHIFT                                                                       ((uint32_t)31U)
#define EDMA_TPCC_EECR_RN_E31_MASK                                                                        ((uint32_t)0x80000000U)

#define EDMA_TPCC_EECR_RN_E24_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_EECR_RN_E24_MASK                                                                        ((uint32_t)0x01000000U)

#define EDMA_TPCC_EECR_RN_E28_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_EECR_RN_E28_MASK                                                                        ((uint32_t)0x10000000U)

#define EDMA_TPCC_EECR_RN_E6_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_EECR_RN_E6_MASK                                                                         ((uint32_t)0x00000040U)

#define EDMA_TPCC_EECR_RN_E16_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_EECR_RN_E16_MASK                                                                        ((uint32_t)0x00010000U)

#define EDMA_TPCC_EECR_RN_E29_SHIFT                                                                       ((uint32_t)29U)
#define EDMA_TPCC_EECR_RN_E29_MASK                                                                        ((uint32_t)0x20000000U)

#define EDMA_TPCC_EECR_RN_E26_SHIFT                                                                       ((uint32_t)26U)
#define EDMA_TPCC_EECR_RN_E26_MASK                                                                        ((uint32_t)0x04000000U)

#define EDMA_TPCC_EECR_RN_E8_SHIFT                                                                        ((uint32_t)8U)
#define EDMA_TPCC_EECR_RN_E8_MASK                                                                         ((uint32_t)0x00000100U)

#define EDMA_TPCC_EECR_RN_E18_SHIFT                                                                       ((uint32_t)18U)
#define EDMA_TPCC_EECR_RN_E18_MASK                                                                        ((uint32_t)0x00040000U)

#define EDMA_TPCC_EECR_RN_E7_SHIFT                                                                        ((uint32_t)7U)
#define EDMA_TPCC_EECR_RN_E7_MASK                                                                         ((uint32_t)0x00000080U)

#define EDMA_TPCC_EECR_RN_E17_SHIFT                                                                       ((uint32_t)17U)
#define EDMA_TPCC_EECR_RN_E17_MASK                                                                        ((uint32_t)0x00020000U)

#define EDMA_TPCC_EECR_RN_E10_SHIFT                                                                       ((uint32_t)10U)
#define EDMA_TPCC_EECR_RN_E10_MASK                                                                        ((uint32_t)0x00000400U)

#define EDMA_TPCC_EECR_RN_E20_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_EECR_RN_E20_MASK                                                                        ((uint32_t)0x00100000U)

#define EDMA_TPCC_EECR_RN_E9_SHIFT                                                                        ((uint32_t)9U)
#define EDMA_TPCC_EECR_RN_E9_MASK                                                                         ((uint32_t)0x00000200U)

#define EDMA_TPCC_EECR_RN_E0_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_EECR_RN_E0_MASK                                                                         ((uint32_t)0x00000001U)

#define EDMA_TPCC_EECR_RN_E19_SHIFT                                                                       ((uint32_t)19U)
#define EDMA_TPCC_EECR_RN_E19_MASK                                                                        ((uint32_t)0x00080000U)

#define EDMA_TPCC_EECR_RN_E1_SHIFT                                                                        ((uint32_t)1U)
#define EDMA_TPCC_EECR_RN_E1_MASK                                                                         ((uint32_t)0x00000002U)

#define EDMA_TPCC_EECR_RN_E12_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_EECR_RN_E12_MASK                                                                        ((uint32_t)0x00001000U)

#define EDMA_TPCC_EECR_RN_E22_SHIFT                                                                       ((uint32_t)22U)
#define EDMA_TPCC_EECR_RN_E22_MASK                                                                        ((uint32_t)0x00400000U)

#define EDMA_TPCC_EECR_RN_E2_SHIFT                                                                        ((uint32_t)2U)
#define EDMA_TPCC_EECR_RN_E2_MASK                                                                         ((uint32_t)0x00000004U)

#define EDMA_TPCC_EECR_RN_E11_SHIFT                                                                       ((uint32_t)11U)
#define EDMA_TPCC_EECR_RN_E11_MASK                                                                        ((uint32_t)0x00000800U)

#define EDMA_TPCC_EECR_RN_E21_SHIFT                                                                       ((uint32_t)21U)
#define EDMA_TPCC_EECR_RN_E21_MASK                                                                        ((uint32_t)0x00200000U)

#define EDMA_TPCC_EECR_RN_E27_SHIFT                                                                       ((uint32_t)27U)
#define EDMA_TPCC_EECR_RN_E27_MASK                                                                        ((uint32_t)0x08000000U)

#define EDMA_TPCC_EECR_RN_E3_SHIFT                                                                        ((uint32_t)3U)
#define EDMA_TPCC_EECR_RN_E3_MASK                                                                         ((uint32_t)0x00000008U)

#define EDMA_TPCC_EECR_RN_E23_SHIFT                                                                       ((uint32_t)23U)
#define EDMA_TPCC_EECR_RN_E23_MASK                                                                        ((uint32_t)0x00800000U)

#define EDMA_TPCC_EECR_RN_E4_SHIFT                                                                        ((uint32_t)4U)
#define EDMA_TPCC_EECR_RN_E4_MASK                                                                         ((uint32_t)0x00000010U)

#define EDMA_TPCC_EECR_RN_E13_SHIFT                                                                       ((uint32_t)13U)
#define EDMA_TPCC_EECR_RN_E13_MASK                                                                        ((uint32_t)0x00002000U)

#define EDMA_TPCC_ER_RN_E22_SHIFT                                                                         ((uint32_t)22U)
#define EDMA_TPCC_ER_RN_E22_MASK                                                                          ((uint32_t)0x00400000U)

#define EDMA_TPCC_ER_RN_E2_SHIFT                                                                          ((uint32_t)2U)
#define EDMA_TPCC_ER_RN_E2_MASK                                                                           ((uint32_t)0x00000004U)

#define EDMA_TPCC_ER_RN_E19_SHIFT                                                                         ((uint32_t)19U)
#define EDMA_TPCC_ER_RN_E19_MASK                                                                          ((uint32_t)0x00080000U)

#define EDMA_TPCC_ER_RN_E5_SHIFT                                                                          ((uint32_t)5U)
#define EDMA_TPCC_ER_RN_E5_MASK                                                                           ((uint32_t)0x00000020U)

#define EDMA_TPCC_ER_RN_E29_SHIFT                                                                         ((uint32_t)29U)
#define EDMA_TPCC_ER_RN_E29_MASK                                                                          ((uint32_t)0x20000000U)

#define EDMA_TPCC_ER_RN_E18_SHIFT                                                                         ((uint32_t)18U)
#define EDMA_TPCC_ER_RN_E18_MASK                                                                          ((uint32_t)0x00040000U)

#define EDMA_TPCC_ER_RN_E6_SHIFT                                                                          ((uint32_t)6U)
#define EDMA_TPCC_ER_RN_E6_MASK                                                                           ((uint32_t)0x00000040U)

#define EDMA_TPCC_ER_RN_E21_SHIFT                                                                         ((uint32_t)21U)
#define EDMA_TPCC_ER_RN_E21_MASK                                                                          ((uint32_t)0x00200000U)

#define EDMA_TPCC_ER_RN_E3_SHIFT                                                                          ((uint32_t)3U)
#define EDMA_TPCC_ER_RN_E3_MASK                                                                           ((uint32_t)0x00000008U)

#define EDMA_TPCC_ER_RN_E31_SHIFT                                                                         ((uint32_t)31U)
#define EDMA_TPCC_ER_RN_E31_MASK                                                                          ((uint32_t)0x80000000U)

#define EDMA_TPCC_ER_RN_E20_SHIFT                                                                         ((uint32_t)20U)
#define EDMA_TPCC_ER_RN_E20_MASK                                                                          ((uint32_t)0x00100000U)

#define EDMA_TPCC_ER_RN_E4_SHIFT                                                                          ((uint32_t)4U)
#define EDMA_TPCC_ER_RN_E4_MASK                                                                           ((uint32_t)0x00000010U)

#define EDMA_TPCC_ER_RN_E9_SHIFT                                                                          ((uint32_t)9U)
#define EDMA_TPCC_ER_RN_E9_MASK                                                                           ((uint32_t)0x00000200U)

#define EDMA_TPCC_ER_RN_E28_SHIFT                                                                         ((uint32_t)28U)
#define EDMA_TPCC_ER_RN_E28_MASK                                                                          ((uint32_t)0x10000000U)

#define EDMA_TPCC_ER_RN_E14_SHIFT                                                                         ((uint32_t)14U)
#define EDMA_TPCC_ER_RN_E14_MASK                                                                          ((uint32_t)0x00004000U)

#define EDMA_TPCC_ER_RN_E10_SHIFT                                                                         ((uint32_t)10U)
#define EDMA_TPCC_ER_RN_E10_MASK                                                                          ((uint32_t)0x00000400U)

#define EDMA_TPCC_ER_RN_E27_SHIFT                                                                         ((uint32_t)27U)
#define EDMA_TPCC_ER_RN_E27_MASK                                                                          ((uint32_t)0x08000000U)

#define EDMA_TPCC_ER_RN_E7_SHIFT                                                                          ((uint32_t)7U)
#define EDMA_TPCC_ER_RN_E7_MASK                                                                           ((uint32_t)0x00000080U)

#define EDMA_TPCC_ER_RN_E17_SHIFT                                                                         ((uint32_t)17U)
#define EDMA_TPCC_ER_RN_E17_MASK                                                                          ((uint32_t)0x00020000U)

#define EDMA_TPCC_ER_RN_E8_SHIFT                                                                          ((uint32_t)8U)
#define EDMA_TPCC_ER_RN_E8_MASK                                                                           ((uint32_t)0x00000100U)

#define EDMA_TPCC_ER_RN_E16_SHIFT                                                                         ((uint32_t)16U)
#define EDMA_TPCC_ER_RN_E16_MASK                                                                          ((uint32_t)0x00010000U)

#define EDMA_TPCC_ER_RN_E30_SHIFT                                                                         ((uint32_t)30U)
#define EDMA_TPCC_ER_RN_E30_MASK                                                                          ((uint32_t)0x40000000U)

#define EDMA_TPCC_ER_RN_E24_SHIFT                                                                         ((uint32_t)24U)
#define EDMA_TPCC_ER_RN_E24_MASK                                                                          ((uint32_t)0x01000000U)

#define EDMA_TPCC_ER_RN_E23_SHIFT                                                                         ((uint32_t)23U)
#define EDMA_TPCC_ER_RN_E23_MASK                                                                          ((uint32_t)0x00800000U)

#define EDMA_TPCC_ER_RN_E0_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_ER_RN_E0_MASK                                                                           ((uint32_t)0x00000001U)

#define EDMA_TPCC_ER_RN_E13_SHIFT                                                                         ((uint32_t)13U)
#define EDMA_TPCC_ER_RN_E13_MASK                                                                          ((uint32_t)0x00002000U)

#define EDMA_TPCC_ER_RN_E11_SHIFT                                                                         ((uint32_t)11U)
#define EDMA_TPCC_ER_RN_E11_MASK                                                                          ((uint32_t)0x00000800U)

#define EDMA_TPCC_ER_RN_E26_SHIFT                                                                         ((uint32_t)26U)
#define EDMA_TPCC_ER_RN_E26_MASK                                                                          ((uint32_t)0x04000000U)

#define EDMA_TPCC_ER_RN_E1_SHIFT                                                                          ((uint32_t)1U)
#define EDMA_TPCC_ER_RN_E1_MASK                                                                           ((uint32_t)0x00000002U)

#define EDMA_TPCC_ER_RN_E12_SHIFT                                                                         ((uint32_t)12U)
#define EDMA_TPCC_ER_RN_E12_MASK                                                                          ((uint32_t)0x00001000U)

#define EDMA_TPCC_ER_RN_E25_SHIFT                                                                         ((uint32_t)25U)
#define EDMA_TPCC_ER_RN_E25_MASK                                                                          ((uint32_t)0x02000000U)

#define EDMA_TPCC_ER_RN_E15_SHIFT                                                                         ((uint32_t)15U)
#define EDMA_TPCC_ER_RN_E15_MASK                                                                          ((uint32_t)0x00008000U)

#define EDMA_TPCC_ICRH_RN_I37_SHIFT                                                                       ((uint32_t)5U)
#define EDMA_TPCC_ICRH_RN_I37_MASK                                                                        ((uint32_t)0x00000020U)

#define EDMA_TPCC_ICRH_RN_I47_SHIFT                                                                       ((uint32_t)15U)
#define EDMA_TPCC_ICRH_RN_I47_MASK                                                                        ((uint32_t)0x00008000U)

#define EDMA_TPCC_ICRH_RN_I53_SHIFT                                                                       ((uint32_t)21U)
#define EDMA_TPCC_ICRH_RN_I53_MASK                                                                        ((uint32_t)0x00200000U)

#define EDMA_TPCC_ICRH_RN_I36_SHIFT                                                                       ((uint32_t)4U)
#define EDMA_TPCC_ICRH_RN_I36_MASK                                                                        ((uint32_t)0x00000010U)

#define EDMA_TPCC_ICRH_RN_I63_SHIFT                                                                       ((uint32_t)31U)
#define EDMA_TPCC_ICRH_RN_I63_MASK                                                                        ((uint32_t)0x80000000U)

#define EDMA_TPCC_ICRH_RN_I46_SHIFT                                                                       ((uint32_t)14U)
#define EDMA_TPCC_ICRH_RN_I46_MASK                                                                        ((uint32_t)0x00004000U)

#define EDMA_TPCC_ICRH_RN_I39_SHIFT                                                                       ((uint32_t)7U)
#define EDMA_TPCC_ICRH_RN_I39_MASK                                                                        ((uint32_t)0x00000080U)

#define EDMA_TPCC_ICRH_RN_I49_SHIFT                                                                       ((uint32_t)17U)
#define EDMA_TPCC_ICRH_RN_I49_MASK                                                                        ((uint32_t)0x00020000U)

#define EDMA_TPCC_ICRH_RN_I38_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_ICRH_RN_I38_MASK                                                                        ((uint32_t)0x00000040U)

#define EDMA_TPCC_ICRH_RN_I48_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_ICRH_RN_I48_MASK                                                                        ((uint32_t)0x00010000U)

#define EDMA_TPCC_ICRH_RN_I41_SHIFT                                                                       ((uint32_t)9U)
#define EDMA_TPCC_ICRH_RN_I41_MASK                                                                        ((uint32_t)0x00000200U)

#define EDMA_TPCC_ICRH_RN_I51_SHIFT                                                                       ((uint32_t)19U)
#define EDMA_TPCC_ICRH_RN_I51_MASK                                                                        ((uint32_t)0x00080000U)

#define EDMA_TPCC_ICRH_RN_I40_SHIFT                                                                       ((uint32_t)8U)
#define EDMA_TPCC_ICRH_RN_I40_MASK                                                                        ((uint32_t)0x00000100U)

#define EDMA_TPCC_ICRH_RN_I50_SHIFT                                                                       ((uint32_t)18U)
#define EDMA_TPCC_ICRH_RN_I50_MASK                                                                        ((uint32_t)0x00040000U)

#define EDMA_TPCC_ICRH_RN_I42_SHIFT                                                                       ((uint32_t)10U)
#define EDMA_TPCC_ICRH_RN_I42_MASK                                                                        ((uint32_t)0x00000400U)

#define EDMA_TPCC_ICRH_RN_I62_SHIFT                                                                       ((uint32_t)30U)
#define EDMA_TPCC_ICRH_RN_I62_MASK                                                                        ((uint32_t)0x40000000U)

#define EDMA_TPCC_ICRH_RN_I52_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_ICRH_RN_I52_MASK                                                                        ((uint32_t)0x00100000U)

#define EDMA_TPCC_ICRH_RN_I61_SHIFT                                                                       ((uint32_t)29U)
#define EDMA_TPCC_ICRH_RN_I61_MASK                                                                        ((uint32_t)0x20000000U)

#define EDMA_TPCC_ICRH_RN_I32_SHIFT                                                                       ((uint32_t)0U)
#define EDMA_TPCC_ICRH_RN_I32_MASK                                                                        ((uint32_t)0x00000001U)

#define EDMA_TPCC_ICRH_RN_I60_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_ICRH_RN_I60_MASK                                                                        ((uint32_t)0x10000000U)

#define EDMA_TPCC_ICRH_RN_I59_SHIFT                                                                       ((uint32_t)27U)
#define EDMA_TPCC_ICRH_RN_I59_MASK                                                                        ((uint32_t)0x08000000U)

#define EDMA_TPCC_ICRH_RN_I58_SHIFT                                                                       ((uint32_t)26U)
#define EDMA_TPCC_ICRH_RN_I58_MASK                                                                        ((uint32_t)0x04000000U)

#define EDMA_TPCC_ICRH_RN_I57_SHIFT                                                                       ((uint32_t)25U)
#define EDMA_TPCC_ICRH_RN_I57_MASK                                                                        ((uint32_t)0x02000000U)

#define EDMA_TPCC_ICRH_RN_I33_SHIFT                                                                       ((uint32_t)1U)
#define EDMA_TPCC_ICRH_RN_I33_MASK                                                                        ((uint32_t)0x00000002U)

#define EDMA_TPCC_ICRH_RN_I43_SHIFT                                                                       ((uint32_t)11U)
#define EDMA_TPCC_ICRH_RN_I43_MASK                                                                        ((uint32_t)0x00000800U)

#define EDMA_TPCC_ICRH_RN_I56_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_ICRH_RN_I56_MASK                                                                        ((uint32_t)0x01000000U)

#define EDMA_TPCC_ICRH_RN_I35_SHIFT                                                                       ((uint32_t)3U)
#define EDMA_TPCC_ICRH_RN_I35_MASK                                                                        ((uint32_t)0x00000008U)

#define EDMA_TPCC_ICRH_RN_I55_SHIFT                                                                       ((uint32_t)23U)
#define EDMA_TPCC_ICRH_RN_I55_MASK                                                                        ((uint32_t)0x00800000U)

#define EDMA_TPCC_ICRH_RN_I45_SHIFT                                                                       ((uint32_t)13U)
#define EDMA_TPCC_ICRH_RN_I45_MASK                                                                        ((uint32_t)0x00002000U)

#define EDMA_TPCC_ICRH_RN_I34_SHIFT                                                                       ((uint32_t)2U)
#define EDMA_TPCC_ICRH_RN_I34_MASK                                                                        ((uint32_t)0x00000004U)

#define EDMA_TPCC_ICRH_RN_I54_SHIFT                                                                       ((uint32_t)22U)
#define EDMA_TPCC_ICRH_RN_I54_MASK                                                                        ((uint32_t)0x00400000U)

#define EDMA_TPCC_ICRH_RN_I44_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_ICRH_RN_I44_MASK                                                                        ((uint32_t)0x00001000U)

#define EDMA_TPCC_EECRH_RN_E62_SHIFT                                                                      ((uint32_t)30U)
#define EDMA_TPCC_EECRH_RN_E62_MASK                                                                       ((uint32_t)0x40000000U)

#define EDMA_TPCC_EECRH_RN_E37_SHIFT                                                                      ((uint32_t)5U)
#define EDMA_TPCC_EECRH_RN_E37_MASK                                                                       ((uint32_t)0x00000020U)

#define EDMA_TPCC_EECRH_RN_E51_SHIFT                                                                      ((uint32_t)19U)
#define EDMA_TPCC_EECRH_RN_E51_MASK                                                                       ((uint32_t)0x00080000U)

#define EDMA_TPCC_EECRH_RN_E36_SHIFT                                                                      ((uint32_t)4U)
#define EDMA_TPCC_EECRH_RN_E36_MASK                                                                       ((uint32_t)0x00000010U)

#define EDMA_TPCC_EECRH_RN_E50_SHIFT                                                                      ((uint32_t)18U)
#define EDMA_TPCC_EECRH_RN_E50_MASK                                                                       ((uint32_t)0x00040000U)

#define EDMA_TPCC_EECRH_RN_E35_SHIFT                                                                      ((uint32_t)3U)
#define EDMA_TPCC_EECRH_RN_E35_MASK                                                                       ((uint32_t)0x00000008U)

#define EDMA_TPCC_EECRH_RN_E63_SHIFT                                                                      ((uint32_t)31U)
#define EDMA_TPCC_EECRH_RN_E63_MASK                                                                       ((uint32_t)0x80000000U)

#define EDMA_TPCC_EECRH_RN_E54_SHIFT                                                                      ((uint32_t)22U)
#define EDMA_TPCC_EECRH_RN_E54_MASK                                                                       ((uint32_t)0x00400000U)

#define EDMA_TPCC_EECRH_RN_E58_SHIFT                                                                      ((uint32_t)26U)
#define EDMA_TPCC_EECRH_RN_E58_MASK                                                                       ((uint32_t)0x04000000U)

#define EDMA_TPCC_EECRH_RN_E48_SHIFT                                                                      ((uint32_t)16U)
#define EDMA_TPCC_EECRH_RN_E48_MASK                                                                       ((uint32_t)0x00010000U)

#define EDMA_TPCC_EECRH_RN_E59_SHIFT                                                                      ((uint32_t)27U)
#define EDMA_TPCC_EECRH_RN_E59_MASK                                                                       ((uint32_t)0x08000000U)

#define EDMA_TPCC_EECRH_RN_E53_SHIFT                                                                      ((uint32_t)21U)
#define EDMA_TPCC_EECRH_RN_E53_MASK                                                                       ((uint32_t)0x00200000U)

#define EDMA_TPCC_EECRH_RN_E49_SHIFT                                                                      ((uint32_t)17U)
#define EDMA_TPCC_EECRH_RN_E49_MASK                                                                       ((uint32_t)0x00020000U)

#define EDMA_TPCC_EECRH_RN_E60_SHIFT                                                                      ((uint32_t)28U)
#define EDMA_TPCC_EECRH_RN_E60_MASK                                                                       ((uint32_t)0x10000000U)

#define EDMA_TPCC_EECRH_RN_E61_SHIFT                                                                      ((uint32_t)29U)
#define EDMA_TPCC_EECRH_RN_E61_MASK                                                                       ((uint32_t)0x20000000U)

#define EDMA_TPCC_EECRH_RN_E52_SHIFT                                                                      ((uint32_t)20U)
#define EDMA_TPCC_EECRH_RN_E52_MASK                                                                       ((uint32_t)0x00100000U)

#define EDMA_TPCC_EECRH_RN_E44_SHIFT                                                                      ((uint32_t)12U)
#define EDMA_TPCC_EECRH_RN_E44_MASK                                                                       ((uint32_t)0x00001000U)

#define EDMA_TPCC_EECRH_RN_E34_SHIFT                                                                      ((uint32_t)2U)
#define EDMA_TPCC_EECRH_RN_E34_MASK                                                                       ((uint32_t)0x00000004U)

#define EDMA_TPCC_EECRH_RN_E43_SHIFT                                                                      ((uint32_t)11U)
#define EDMA_TPCC_EECRH_RN_E43_MASK                                                                       ((uint32_t)0x00000800U)

#define EDMA_TPCC_EECRH_RN_E33_SHIFT                                                                      ((uint32_t)1U)
#define EDMA_TPCC_EECRH_RN_E33_MASK                                                                       ((uint32_t)0x00000002U)

#define EDMA_TPCC_EECRH_RN_E55_SHIFT                                                                      ((uint32_t)23U)
#define EDMA_TPCC_EECRH_RN_E55_MASK                                                                       ((uint32_t)0x00800000U)

#define EDMA_TPCC_EECRH_RN_E42_SHIFT                                                                      ((uint32_t)10U)
#define EDMA_TPCC_EECRH_RN_E42_MASK                                                                       ((uint32_t)0x00000400U)

#define EDMA_TPCC_EECRH_RN_E56_SHIFT                                                                      ((uint32_t)24U)
#define EDMA_TPCC_EECRH_RN_E56_MASK                                                                       ((uint32_t)0x01000000U)

#define EDMA_TPCC_EECRH_RN_E32_SHIFT                                                                      ((uint32_t)0U)
#define EDMA_TPCC_EECRH_RN_E32_MASK                                                                       ((uint32_t)0x00000001U)

#define EDMA_TPCC_EECRH_RN_E41_SHIFT                                                                      ((uint32_t)9U)
#define EDMA_TPCC_EECRH_RN_E41_MASK                                                                       ((uint32_t)0x00000200U)

#define EDMA_TPCC_EECRH_RN_E57_SHIFT                                                                      ((uint32_t)25U)
#define EDMA_TPCC_EECRH_RN_E57_MASK                                                                       ((uint32_t)0x02000000U)

#define EDMA_TPCC_EECRH_RN_E47_SHIFT                                                                      ((uint32_t)15U)
#define EDMA_TPCC_EECRH_RN_E47_MASK                                                                       ((uint32_t)0x00008000U)

#define EDMA_TPCC_EECRH_RN_E40_SHIFT                                                                      ((uint32_t)8U)
#define EDMA_TPCC_EECRH_RN_E40_MASK                                                                       ((uint32_t)0x00000100U)

#define EDMA_TPCC_EECRH_RN_E46_SHIFT                                                                      ((uint32_t)14U)
#define EDMA_TPCC_EECRH_RN_E46_MASK                                                                       ((uint32_t)0x00004000U)

#define EDMA_TPCC_EECRH_RN_E39_SHIFT                                                                      ((uint32_t)7U)
#define EDMA_TPCC_EECRH_RN_E39_MASK                                                                       ((uint32_t)0x00000080U)

#define EDMA_TPCC_EECRH_RN_E45_SHIFT                                                                      ((uint32_t)13U)
#define EDMA_TPCC_EECRH_RN_E45_MASK                                                                       ((uint32_t)0x00002000U)

#define EDMA_TPCC_EECRH_RN_E38_SHIFT                                                                      ((uint32_t)6U)
#define EDMA_TPCC_EECRH_RN_E38_MASK                                                                       ((uint32_t)0x00000040U)

#define EDMA_TPCC_IESR_RN_I22_SHIFT                                                                       ((uint32_t)22U)
#define EDMA_TPCC_IESR_RN_I22_MASK                                                                        ((uint32_t)0x00400000U)

#define EDMA_TPCC_IESR_RN_I11_SHIFT                                                                       ((uint32_t)11U)
#define EDMA_TPCC_IESR_RN_I11_MASK                                                                        ((uint32_t)0x00000800U)

#define EDMA_TPCC_IESR_RN_I23_SHIFT                                                                       ((uint32_t)23U)
#define EDMA_TPCC_IESR_RN_I23_MASK                                                                        ((uint32_t)0x00800000U)

#define EDMA_TPCC_IESR_RN_I0_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_IESR_RN_I0_MASK                                                                         ((uint32_t)0x00000001U)

#define EDMA_TPCC_IESR_RN_I21_SHIFT                                                                       ((uint32_t)21U)
#define EDMA_TPCC_IESR_RN_I21_MASK                                                                        ((uint32_t)0x00200000U)

#define EDMA_TPCC_IESR_RN_I10_SHIFT                                                                       ((uint32_t)10U)
#define EDMA_TPCC_IESR_RN_I10_MASK                                                                        ((uint32_t)0x00000400U)

#define EDMA_TPCC_IESR_RN_I31_SHIFT                                                                       ((uint32_t)31U)
#define EDMA_TPCC_IESR_RN_I31_MASK                                                                        ((uint32_t)0x80000000U)

#define EDMA_TPCC_IESR_RN_I8_SHIFT                                                                        ((uint32_t)8U)
#define EDMA_TPCC_IESR_RN_I8_MASK                                                                         ((uint32_t)0x00000100U)

#define EDMA_TPCC_IESR_RN_I20_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_IESR_RN_I20_MASK                                                                        ((uint32_t)0x00100000U)

#define EDMA_TPCC_IESR_RN_I9_SHIFT                                                                        ((uint32_t)9U)
#define EDMA_TPCC_IESR_RN_I9_MASK                                                                         ((uint32_t)0x00000200U)

#define EDMA_TPCC_IESR_RN_I6_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_IESR_RN_I6_MASK                                                                         ((uint32_t)0x00000040U)

#define EDMA_TPCC_IESR_RN_I30_SHIFT                                                                       ((uint32_t)30U)
#define EDMA_TPCC_IESR_RN_I30_MASK                                                                        ((uint32_t)0x40000000U)

#define EDMA_TPCC_IESR_RN_I17_SHIFT                                                                       ((uint32_t)17U)
#define EDMA_TPCC_IESR_RN_I17_MASK                                                                        ((uint32_t)0x00020000U)

#define EDMA_TPCC_IESR_RN_I7_SHIFT                                                                        ((uint32_t)7U)
#define EDMA_TPCC_IESR_RN_I7_MASK                                                                         ((uint32_t)0x00000080U)

#define EDMA_TPCC_IESR_RN_I16_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_IESR_RN_I16_MASK                                                                        ((uint32_t)0x00010000U)

#define EDMA_TPCC_IESR_RN_I28_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_IESR_RN_I28_MASK                                                                        ((uint32_t)0x10000000U)

#define EDMA_TPCC_IESR_RN_I4_SHIFT                                                                        ((uint32_t)4U)
#define EDMA_TPCC_IESR_RN_I4_MASK                                                                         ((uint32_t)0x00000010U)

#define EDMA_TPCC_IESR_RN_I29_SHIFT                                                                       ((uint32_t)29U)
#define EDMA_TPCC_IESR_RN_I29_MASK                                                                        ((uint32_t)0x20000000U)

#define EDMA_TPCC_IESR_RN_I19_SHIFT                                                                       ((uint32_t)19U)
#define EDMA_TPCC_IESR_RN_I19_MASK                                                                        ((uint32_t)0x00080000U)

#define EDMA_TPCC_IESR_RN_I5_SHIFT                                                                        ((uint32_t)5U)
#define EDMA_TPCC_IESR_RN_I5_MASK                                                                         ((uint32_t)0x00000020U)

#define EDMA_TPCC_IESR_RN_I18_SHIFT                                                                       ((uint32_t)18U)
#define EDMA_TPCC_IESR_RN_I18_MASK                                                                        ((uint32_t)0x00040000U)

#define EDMA_TPCC_IESR_RN_I26_SHIFT                                                                       ((uint32_t)26U)
#define EDMA_TPCC_IESR_RN_I26_MASK                                                                        ((uint32_t)0x04000000U)

#define EDMA_TPCC_IESR_RN_I2_SHIFT                                                                        ((uint32_t)2U)
#define EDMA_TPCC_IESR_RN_I2_MASK                                                                         ((uint32_t)0x00000004U)

#define EDMA_TPCC_IESR_RN_I13_SHIFT                                                                       ((uint32_t)13U)
#define EDMA_TPCC_IESR_RN_I13_MASK                                                                        ((uint32_t)0x00002000U)

#define EDMA_TPCC_IESR_RN_I3_SHIFT                                                                        ((uint32_t)3U)
#define EDMA_TPCC_IESR_RN_I3_MASK                                                                         ((uint32_t)0x00000008U)

#define EDMA_TPCC_IESR_RN_I27_SHIFT                                                                       ((uint32_t)27U)
#define EDMA_TPCC_IESR_RN_I27_MASK                                                                        ((uint32_t)0x08000000U)

#define EDMA_TPCC_IESR_RN_I12_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_IESR_RN_I12_MASK                                                                        ((uint32_t)0x00001000U)

#define EDMA_TPCC_IESR_RN_I24_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_IESR_RN_I24_MASK                                                                        ((uint32_t)0x01000000U)

#define EDMA_TPCC_IESR_RN_I15_SHIFT                                                                       ((uint32_t)15U)
#define EDMA_TPCC_IESR_RN_I15_MASK                                                                        ((uint32_t)0x00008000U)

#define EDMA_TPCC_IESR_RN_I1_SHIFT                                                                        ((uint32_t)1U)
#define EDMA_TPCC_IESR_RN_I1_MASK                                                                         ((uint32_t)0x00000002U)

#define EDMA_TPCC_IESR_RN_I25_SHIFT                                                                       ((uint32_t)25U)
#define EDMA_TPCC_IESR_RN_I25_MASK                                                                        ((uint32_t)0x02000000U)

#define EDMA_TPCC_IESR_RN_I14_SHIFT                                                                       ((uint32_t)14U)
#define EDMA_TPCC_IESR_RN_I14_MASK                                                                        ((uint32_t)0x00004000U)

#define EDMA_TPCC_SECR_RN_E21_SHIFT                                                                       ((uint32_t)21U)
#define EDMA_TPCC_SECR_RN_E21_MASK                                                                        ((uint32_t)0x00200000U)

#define EDMA_TPCC_SECR_RN_E29_SHIFT                                                                       ((uint32_t)29U)
#define EDMA_TPCC_SECR_RN_E29_MASK                                                                        ((uint32_t)0x20000000U)

#define EDMA_TPCC_SECR_RN_E20_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_SECR_RN_E20_MASK                                                                        ((uint32_t)0x00100000U)

#define EDMA_TPCC_SECR_RN_E0_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_SECR_RN_E0_MASK                                                                         ((uint32_t)0x00000001U)

#define EDMA_TPCC_SECR_RN_E10_SHIFT                                                                       ((uint32_t)10U)
#define EDMA_TPCC_SECR_RN_E10_MASK                                                                        ((uint32_t)0x00000400U)

#define EDMA_TPCC_SECR_RN_E9_SHIFT                                                                        ((uint32_t)9U)
#define EDMA_TPCC_SECR_RN_E9_MASK                                                                         ((uint32_t)0x00000200U)

#define EDMA_TPCC_SECR_RN_E27_SHIFT                                                                       ((uint32_t)27U)
#define EDMA_TPCC_SECR_RN_E27_MASK                                                                        ((uint32_t)0x08000000U)

#define EDMA_TPCC_SECR_RN_E2_SHIFT                                                                        ((uint32_t)2U)
#define EDMA_TPCC_SECR_RN_E2_MASK                                                                         ((uint32_t)0x00000004U)

#define EDMA_TPCC_SECR_RN_E12_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_SECR_RN_E12_MASK                                                                        ((uint32_t)0x00001000U)

#define EDMA_TPCC_SECR_RN_E28_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_SECR_RN_E28_MASK                                                                        ((uint32_t)0x10000000U)

#define EDMA_TPCC_SECR_RN_E1_SHIFT                                                                        ((uint32_t)1U)
#define EDMA_TPCC_SECR_RN_E1_MASK                                                                         ((uint32_t)0x00000002U)

#define EDMA_TPCC_SECR_RN_E11_SHIFT                                                                       ((uint32_t)11U)
#define EDMA_TPCC_SECR_RN_E11_MASK                                                                        ((uint32_t)0x00000800U)

#define EDMA_TPCC_SECR_RN_E25_SHIFT                                                                       ((uint32_t)25U)
#define EDMA_TPCC_SECR_RN_E25_MASK                                                                        ((uint32_t)0x02000000U)

#define EDMA_TPCC_SECR_RN_E4_SHIFT                                                                        ((uint32_t)4U)
#define EDMA_TPCC_SECR_RN_E4_MASK                                                                         ((uint32_t)0x00000010U)

#define EDMA_TPCC_SECR_RN_E14_SHIFT                                                                       ((uint32_t)14U)
#define EDMA_TPCC_SECR_RN_E14_MASK                                                                        ((uint32_t)0x00004000U)

#define EDMA_TPCC_SECR_RN_E26_SHIFT                                                                       ((uint32_t)26U)
#define EDMA_TPCC_SECR_RN_E26_MASK                                                                        ((uint32_t)0x04000000U)

#define EDMA_TPCC_SECR_RN_E3_SHIFT                                                                        ((uint32_t)3U)
#define EDMA_TPCC_SECR_RN_E3_MASK                                                                         ((uint32_t)0x00000008U)

#define EDMA_TPCC_SECR_RN_E13_SHIFT                                                                       ((uint32_t)13U)
#define EDMA_TPCC_SECR_RN_E13_MASK                                                                        ((uint32_t)0x00002000U)

#define EDMA_TPCC_SECR_RN_E6_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_SECR_RN_E6_MASK                                                                         ((uint32_t)0x00000040U)

#define EDMA_TPCC_SECR_RN_E16_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_SECR_RN_E16_MASK                                                                        ((uint32_t)0x00010000U)

#define EDMA_TPCC_SECR_RN_E24_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_SECR_RN_E24_MASK                                                                        ((uint32_t)0x01000000U)

#define EDMA_TPCC_SECR_RN_E5_SHIFT                                                                        ((uint32_t)5U)
#define EDMA_TPCC_SECR_RN_E5_MASK                                                                         ((uint32_t)0x00000020U)

#define EDMA_TPCC_SECR_RN_E15_SHIFT                                                                       ((uint32_t)15U)
#define EDMA_TPCC_SECR_RN_E15_MASK                                                                        ((uint32_t)0x00008000U)

#define EDMA_TPCC_SECR_RN_E18_SHIFT                                                                       ((uint32_t)18U)
#define EDMA_TPCC_SECR_RN_E18_MASK                                                                        ((uint32_t)0x00040000U)

#define EDMA_TPCC_SECR_RN_E31_SHIFT                                                                       ((uint32_t)31U)
#define EDMA_TPCC_SECR_RN_E31_MASK                                                                        ((uint32_t)0x80000000U)

#define EDMA_TPCC_SECR_RN_E8_SHIFT                                                                        ((uint32_t)8U)
#define EDMA_TPCC_SECR_RN_E8_MASK                                                                         ((uint32_t)0x00000100U)

#define EDMA_TPCC_SECR_RN_E22_SHIFT                                                                       ((uint32_t)22U)
#define EDMA_TPCC_SECR_RN_E22_MASK                                                                        ((uint32_t)0x00400000U)

#define EDMA_TPCC_SECR_RN_E7_SHIFT                                                                        ((uint32_t)7U)
#define EDMA_TPCC_SECR_RN_E7_MASK                                                                         ((uint32_t)0x00000080U)

#define EDMA_TPCC_SECR_RN_E19_SHIFT                                                                       ((uint32_t)19U)
#define EDMA_TPCC_SECR_RN_E19_MASK                                                                        ((uint32_t)0x00080000U)

#define EDMA_TPCC_SECR_RN_E17_SHIFT                                                                       ((uint32_t)17U)
#define EDMA_TPCC_SECR_RN_E17_MASK                                                                        ((uint32_t)0x00020000U)

#define EDMA_TPCC_SECR_RN_E23_SHIFT                                                                       ((uint32_t)23U)
#define EDMA_TPCC_SECR_RN_E23_MASK                                                                        ((uint32_t)0x00800000U)

#define EDMA_TPCC_SECR_RN_E30_SHIFT                                                                       ((uint32_t)30U)
#define EDMA_TPCC_SECR_RN_E30_MASK                                                                        ((uint32_t)0x40000000U)

#define EDMA_TPCC_EESR_RN_E15_SHIFT                                                                       ((uint32_t)15U)
#define EDMA_TPCC_EESR_RN_E15_MASK                                                                        ((uint32_t)0x00008000U)

#define EDMA_TPCC_EESR_RN_E6_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_EESR_RN_E6_MASK                                                                         ((uint32_t)0x00000040U)

#define EDMA_TPCC_EESR_RN_E16_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_EESR_RN_E16_MASK                                                                        ((uint32_t)0x00010000U)

#define EDMA_TPCC_EESR_RN_E30_SHIFT                                                                       ((uint32_t)30U)
#define EDMA_TPCC_EESR_RN_E30_MASK                                                                        ((uint32_t)0x40000000U)

#define EDMA_TPCC_EESR_RN_E7_SHIFT                                                                        ((uint32_t)7U)
#define EDMA_TPCC_EESR_RN_E7_MASK                                                                         ((uint32_t)0x00000080U)

#define EDMA_TPCC_EESR_RN_E4_SHIFT                                                                        ((uint32_t)4U)
#define EDMA_TPCC_EESR_RN_E4_MASK                                                                         ((uint32_t)0x00000010U)

#define EDMA_TPCC_EESR_RN_E5_SHIFT                                                                        ((uint32_t)5U)
#define EDMA_TPCC_EESR_RN_E5_MASK                                                                         ((uint32_t)0x00000020U)

#define EDMA_TPCC_EESR_RN_E29_SHIFT                                                                       ((uint32_t)29U)
#define EDMA_TPCC_EESR_RN_E29_MASK                                                                        ((uint32_t)0x20000000U)

#define EDMA_TPCC_EESR_RN_E0_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_EESR_RN_E0_MASK                                                                         ((uint32_t)0x00000001U)

#define EDMA_TPCC_EESR_RN_E10_SHIFT                                                                       ((uint32_t)10U)
#define EDMA_TPCC_EESR_RN_E10_MASK                                                                        ((uint32_t)0x00000400U)

#define EDMA_TPCC_EESR_RN_E28_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_EESR_RN_E28_MASK                                                                        ((uint32_t)0x10000000U)

#define EDMA_TPCC_EESR_RN_E27_SHIFT                                                                       ((uint32_t)27U)
#define EDMA_TPCC_EESR_RN_E27_MASK                                                                        ((uint32_t)0x08000000U)

#define EDMA_TPCC_EESR_RN_E26_SHIFT                                                                       ((uint32_t)26U)
#define EDMA_TPCC_EESR_RN_E26_MASK                                                                        ((uint32_t)0x04000000U)

#define EDMA_TPCC_EESR_RN_E8_SHIFT                                                                        ((uint32_t)8U)
#define EDMA_TPCC_EESR_RN_E8_MASK                                                                         ((uint32_t)0x00000100U)

#define EDMA_TPCC_EESR_RN_E9_SHIFT                                                                        ((uint32_t)9U)
#define EDMA_TPCC_EESR_RN_E9_MASK                                                                         ((uint32_t)0x00000200U)

#define EDMA_TPCC_EESR_RN_E25_SHIFT                                                                       ((uint32_t)25U)
#define EDMA_TPCC_EESR_RN_E25_MASK                                                                        ((uint32_t)0x02000000U)

#define EDMA_TPCC_EESR_RN_E24_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_EESR_RN_E24_MASK                                                                        ((uint32_t)0x01000000U)

#define EDMA_TPCC_EESR_RN_E11_SHIFT                                                                       ((uint32_t)11U)
#define EDMA_TPCC_EESR_RN_E11_MASK                                                                        ((uint32_t)0x00000800U)

#define EDMA_TPCC_EESR_RN_E23_SHIFT                                                                       ((uint32_t)23U)
#define EDMA_TPCC_EESR_RN_E23_MASK                                                                        ((uint32_t)0x00800000U)

#define EDMA_TPCC_EESR_RN_E20_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_EESR_RN_E20_MASK                                                                        ((uint32_t)0x00100000U)

#define EDMA_TPCC_EESR_RN_E22_SHIFT                                                                       ((uint32_t)22U)
#define EDMA_TPCC_EESR_RN_E22_MASK                                                                        ((uint32_t)0x00400000U)

#define EDMA_TPCC_EESR_RN_E21_SHIFT                                                                       ((uint32_t)21U)
#define EDMA_TPCC_EESR_RN_E21_MASK                                                                        ((uint32_t)0x00200000U)

#define EDMA_TPCC_EESR_RN_E2_SHIFT                                                                        ((uint32_t)2U)
#define EDMA_TPCC_EESR_RN_E2_MASK                                                                         ((uint32_t)0x00000004U)

#define EDMA_TPCC_EESR_RN_E18_SHIFT                                                                       ((uint32_t)18U)
#define EDMA_TPCC_EESR_RN_E18_MASK                                                                        ((uint32_t)0x00040000U)

#define EDMA_TPCC_EESR_RN_E3_SHIFT                                                                        ((uint32_t)3U)
#define EDMA_TPCC_EESR_RN_E3_MASK                                                                         ((uint32_t)0x00000008U)

#define EDMA_TPCC_EESR_RN_E19_SHIFT                                                                       ((uint32_t)19U)
#define EDMA_TPCC_EESR_RN_E19_MASK                                                                        ((uint32_t)0x00080000U)

#define EDMA_TPCC_EESR_RN_E31_SHIFT                                                                       ((uint32_t)31U)
#define EDMA_TPCC_EESR_RN_E31_MASK                                                                        ((uint32_t)0x80000000U)

#define EDMA_TPCC_EESR_RN_E13_SHIFT                                                                       ((uint32_t)13U)
#define EDMA_TPCC_EESR_RN_E13_MASK                                                                        ((uint32_t)0x00002000U)

#define EDMA_TPCC_EESR_RN_E12_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_EESR_RN_E12_MASK                                                                        ((uint32_t)0x00001000U)

#define EDMA_TPCC_EESR_RN_E14_SHIFT                                                                       ((uint32_t)14U)
#define EDMA_TPCC_EESR_RN_E14_MASK                                                                        ((uint32_t)0x00004000U)

#define EDMA_TPCC_EESR_RN_E1_SHIFT                                                                        ((uint32_t)1U)
#define EDMA_TPCC_EESR_RN_E1_MASK                                                                         ((uint32_t)0x00000002U)

#define EDMA_TPCC_EESR_RN_E17_SHIFT                                                                       ((uint32_t)17U)
#define EDMA_TPCC_EESR_RN_E17_MASK                                                                        ((uint32_t)0x00020000U)

#define EDMA_TPCC_QER_RN_E7_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_QER_RN_E7_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_QER_RN_E6_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_QER_RN_E6_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_QER_RN_E5_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_QER_RN_E5_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_QER_RN_E3_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_QER_RN_E3_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_QER_RN_E4_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_QER_RN_E4_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_QER_RN_E1_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_QER_RN_E1_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_QER_RN_E2_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_QER_RN_E2_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_QER_RN_E0_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_QER_RN_E0_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_QER_RN_RESERVED_0_SHIFT                                                                 ((uint32_t)8U)
#define EDMA_TPCC_QER_RN_RESERVED_0_MASK                                                                  ((uint32_t)0xffffff00U)

#define EDMA_TPCC_SECRH_RN_E34_SHIFT                                                                      ((uint32_t)2U)
#define EDMA_TPCC_SECRH_RN_E34_MASK                                                                       ((uint32_t)0x00000004U)

#define EDMA_TPCC_SECRH_RN_E44_SHIFT                                                                      ((uint32_t)12U)
#define EDMA_TPCC_SECRH_RN_E44_MASK                                                                       ((uint32_t)0x00001000U)

#define EDMA_TPCC_SECRH_RN_E54_SHIFT                                                                      ((uint32_t)22U)
#define EDMA_TPCC_SECRH_RN_E54_MASK                                                                       ((uint32_t)0x00400000U)

#define EDMA_TPCC_SECRH_RN_E33_SHIFT                                                                      ((uint32_t)1U)
#define EDMA_TPCC_SECRH_RN_E33_MASK                                                                       ((uint32_t)0x00000002U)

#define EDMA_TPCC_SECRH_RN_E43_SHIFT                                                                      ((uint32_t)11U)
#define EDMA_TPCC_SECRH_RN_E43_MASK                                                                       ((uint32_t)0x00000800U)

#define EDMA_TPCC_SECRH_RN_E53_SHIFT                                                                      ((uint32_t)21U)
#define EDMA_TPCC_SECRH_RN_E53_MASK                                                                       ((uint32_t)0x00200000U)

#define EDMA_TPCC_SECRH_RN_E58_SHIFT                                                                      ((uint32_t)26U)
#define EDMA_TPCC_SECRH_RN_E58_MASK                                                                       ((uint32_t)0x04000000U)

#define EDMA_TPCC_SECRH_RN_E32_SHIFT                                                                      ((uint32_t)0U)
#define EDMA_TPCC_SECRH_RN_E32_MASK                                                                       ((uint32_t)0x00000001U)

#define EDMA_TPCC_SECRH_RN_E63_SHIFT                                                                      ((uint32_t)31U)
#define EDMA_TPCC_SECRH_RN_E63_MASK                                                                       ((uint32_t)0x80000000U)

#define EDMA_TPCC_SECRH_RN_E57_SHIFT                                                                      ((uint32_t)25U)
#define EDMA_TPCC_SECRH_RN_E57_MASK                                                                       ((uint32_t)0x02000000U)

#define EDMA_TPCC_SECRH_RN_E56_SHIFT                                                                      ((uint32_t)24U)
#define EDMA_TPCC_SECRH_RN_E56_MASK                                                                       ((uint32_t)0x01000000U)

#define EDMA_TPCC_SECRH_RN_E55_SHIFT                                                                      ((uint32_t)23U)
#define EDMA_TPCC_SECRH_RN_E55_MASK                                                                       ((uint32_t)0x00800000U)

#define EDMA_TPCC_SECRH_RN_E52_SHIFT                                                                      ((uint32_t)20U)
#define EDMA_TPCC_SECRH_RN_E52_MASK                                                                       ((uint32_t)0x00100000U)

#define EDMA_TPCC_SECRH_RN_E42_SHIFT                                                                      ((uint32_t)10U)
#define EDMA_TPCC_SECRH_RN_E42_MASK                                                                       ((uint32_t)0x00000400U)

#define EDMA_TPCC_SECRH_RN_E51_SHIFT                                                                      ((uint32_t)19U)
#define EDMA_TPCC_SECRH_RN_E51_MASK                                                                       ((uint32_t)0x00080000U)

#define EDMA_TPCC_SECRH_RN_E41_SHIFT                                                                      ((uint32_t)9U)
#define EDMA_TPCC_SECRH_RN_E41_MASK                                                                       ((uint32_t)0x00000200U)

#define EDMA_TPCC_SECRH_RN_E50_SHIFT                                                                      ((uint32_t)18U)
#define EDMA_TPCC_SECRH_RN_E50_MASK                                                                       ((uint32_t)0x00040000U)

#define EDMA_TPCC_SECRH_RN_E40_SHIFT                                                                      ((uint32_t)8U)
#define EDMA_TPCC_SECRH_RN_E40_MASK                                                                       ((uint32_t)0x00000100U)

#define EDMA_TPCC_SECRH_RN_E49_SHIFT                                                                      ((uint32_t)17U)
#define EDMA_TPCC_SECRH_RN_E49_MASK                                                                       ((uint32_t)0x00020000U)

#define EDMA_TPCC_SECRH_RN_E39_SHIFT                                                                      ((uint32_t)7U)
#define EDMA_TPCC_SECRH_RN_E39_MASK                                                                       ((uint32_t)0x00000080U)

#define EDMA_TPCC_SECRH_RN_E48_SHIFT                                                                      ((uint32_t)16U)
#define EDMA_TPCC_SECRH_RN_E48_MASK                                                                       ((uint32_t)0x00010000U)

#define EDMA_TPCC_SECRH_RN_E38_SHIFT                                                                      ((uint32_t)6U)
#define EDMA_TPCC_SECRH_RN_E38_MASK                                                                       ((uint32_t)0x00000040U)

#define EDMA_TPCC_SECRH_RN_E59_SHIFT                                                                      ((uint32_t)27U)
#define EDMA_TPCC_SECRH_RN_E59_MASK                                                                       ((uint32_t)0x08000000U)

#define EDMA_TPCC_SECRH_RN_E47_SHIFT                                                                      ((uint32_t)15U)
#define EDMA_TPCC_SECRH_RN_E47_MASK                                                                       ((uint32_t)0x00008000U)

#define EDMA_TPCC_SECRH_RN_E37_SHIFT                                                                      ((uint32_t)5U)
#define EDMA_TPCC_SECRH_RN_E37_MASK                                                                       ((uint32_t)0x00000020U)

#define EDMA_TPCC_SECRH_RN_E60_SHIFT                                                                      ((uint32_t)28U)
#define EDMA_TPCC_SECRH_RN_E60_MASK                                                                       ((uint32_t)0x10000000U)

#define EDMA_TPCC_SECRH_RN_E36_SHIFT                                                                      ((uint32_t)4U)
#define EDMA_TPCC_SECRH_RN_E36_MASK                                                                       ((uint32_t)0x00000010U)

#define EDMA_TPCC_SECRH_RN_E46_SHIFT                                                                      ((uint32_t)14U)
#define EDMA_TPCC_SECRH_RN_E46_MASK                                                                       ((uint32_t)0x00004000U)

#define EDMA_TPCC_SECRH_RN_E61_SHIFT                                                                      ((uint32_t)29U)
#define EDMA_TPCC_SECRH_RN_E61_MASK                                                                       ((uint32_t)0x20000000U)

#define EDMA_TPCC_SECRH_RN_E35_SHIFT                                                                      ((uint32_t)3U)
#define EDMA_TPCC_SECRH_RN_E35_MASK                                                                       ((uint32_t)0x00000008U)

#define EDMA_TPCC_SECRH_RN_E62_SHIFT                                                                      ((uint32_t)30U)
#define EDMA_TPCC_SECRH_RN_E62_MASK                                                                       ((uint32_t)0x40000000U)

#define EDMA_TPCC_SECRH_RN_E45_SHIFT                                                                      ((uint32_t)13U)
#define EDMA_TPCC_SECRH_RN_E45_MASK                                                                       ((uint32_t)0x00002000U)

#define EDMA_TPCC_EESRH_RN_E33_SHIFT                                                                      ((uint32_t)1U)
#define EDMA_TPCC_EESRH_RN_E33_MASK                                                                       ((uint32_t)0x00000002U)

#define EDMA_TPCC_EESRH_RN_E35_SHIFT                                                                      ((uint32_t)3U)
#define EDMA_TPCC_EESRH_RN_E35_MASK                                                                       ((uint32_t)0x00000008U)

#define EDMA_TPCC_EESRH_RN_E44_SHIFT                                                                      ((uint32_t)12U)
#define EDMA_TPCC_EESRH_RN_E44_MASK                                                                       ((uint32_t)0x00001000U)

#define EDMA_TPCC_EESRH_RN_E32_SHIFT                                                                      ((uint32_t)0U)
#define EDMA_TPCC_EESRH_RN_E32_MASK                                                                       ((uint32_t)0x00000001U)

#define EDMA_TPCC_EESRH_RN_E43_SHIFT                                                                      ((uint32_t)11U)
#define EDMA_TPCC_EESRH_RN_E43_MASK                                                                       ((uint32_t)0x00000800U)

#define EDMA_TPCC_EESRH_RN_E55_SHIFT                                                                      ((uint32_t)23U)
#define EDMA_TPCC_EESRH_RN_E55_MASK                                                                       ((uint32_t)0x00800000U)

#define EDMA_TPCC_EESRH_RN_E42_SHIFT                                                                      ((uint32_t)10U)
#define EDMA_TPCC_EESRH_RN_E42_MASK                                                                       ((uint32_t)0x00000400U)

#define EDMA_TPCC_EESRH_RN_E54_SHIFT                                                                      ((uint32_t)22U)
#define EDMA_TPCC_EESRH_RN_E54_MASK                                                                       ((uint32_t)0x00400000U)

#define EDMA_TPCC_EESRH_RN_E53_SHIFT                                                                      ((uint32_t)21U)
#define EDMA_TPCC_EESRH_RN_E53_MASK                                                                       ((uint32_t)0x00200000U)

#define EDMA_TPCC_EESRH_RN_E56_SHIFT                                                                      ((uint32_t)24U)
#define EDMA_TPCC_EESRH_RN_E56_MASK                                                                       ((uint32_t)0x01000000U)

#define EDMA_TPCC_EESRH_RN_E41_SHIFT                                                                      ((uint32_t)9U)
#define EDMA_TPCC_EESRH_RN_E41_MASK                                                                       ((uint32_t)0x00000200U)

#define EDMA_TPCC_EESRH_RN_E40_SHIFT                                                                      ((uint32_t)8U)
#define EDMA_TPCC_EESRH_RN_E40_MASK                                                                       ((uint32_t)0x00000100U)

#define EDMA_TPCC_EESRH_RN_E57_SHIFT                                                                      ((uint32_t)25U)
#define EDMA_TPCC_EESRH_RN_E57_MASK                                                                       ((uint32_t)0x02000000U)

#define EDMA_TPCC_EESRH_RN_E52_SHIFT                                                                      ((uint32_t)20U)
#define EDMA_TPCC_EESRH_RN_E52_MASK                                                                       ((uint32_t)0x00100000U)

#define EDMA_TPCC_EESRH_RN_E34_SHIFT                                                                      ((uint32_t)2U)
#define EDMA_TPCC_EESRH_RN_E34_MASK                                                                       ((uint32_t)0x00000004U)

#define EDMA_TPCC_EESRH_RN_E39_SHIFT                                                                      ((uint32_t)7U)
#define EDMA_TPCC_EESRH_RN_E39_MASK                                                                       ((uint32_t)0x00000080U)

#define EDMA_TPCC_EESRH_RN_E58_SHIFT                                                                      ((uint32_t)26U)
#define EDMA_TPCC_EESRH_RN_E58_MASK                                                                       ((uint32_t)0x04000000U)

#define EDMA_TPCC_EESRH_RN_E51_SHIFT                                                                      ((uint32_t)19U)
#define EDMA_TPCC_EESRH_RN_E51_MASK                                                                       ((uint32_t)0x00080000U)

#define EDMA_TPCC_EESRH_RN_E36_SHIFT                                                                      ((uint32_t)4U)
#define EDMA_TPCC_EESRH_RN_E36_MASK                                                                       ((uint32_t)0x00000010U)

#define EDMA_TPCC_EESRH_RN_E38_SHIFT                                                                      ((uint32_t)6U)
#define EDMA_TPCC_EESRH_RN_E38_MASK                                                                       ((uint32_t)0x00000040U)

#define EDMA_TPCC_EESRH_RN_E59_SHIFT                                                                      ((uint32_t)27U)
#define EDMA_TPCC_EESRH_RN_E59_MASK                                                                       ((uint32_t)0x08000000U)

#define EDMA_TPCC_EESRH_RN_E50_SHIFT                                                                      ((uint32_t)18U)
#define EDMA_TPCC_EESRH_RN_E50_MASK                                                                       ((uint32_t)0x00040000U)

#define EDMA_TPCC_EESRH_RN_E37_SHIFT                                                                      ((uint32_t)5U)
#define EDMA_TPCC_EESRH_RN_E37_MASK                                                                       ((uint32_t)0x00000020U)

#define EDMA_TPCC_EESRH_RN_E60_SHIFT                                                                      ((uint32_t)28U)
#define EDMA_TPCC_EESRH_RN_E60_MASK                                                                       ((uint32_t)0x10000000U)

#define EDMA_TPCC_EESRH_RN_E49_SHIFT                                                                      ((uint32_t)17U)
#define EDMA_TPCC_EESRH_RN_E49_MASK                                                                       ((uint32_t)0x00020000U)

#define EDMA_TPCC_EESRH_RN_E61_SHIFT                                                                      ((uint32_t)29U)
#define EDMA_TPCC_EESRH_RN_E61_MASK                                                                       ((uint32_t)0x20000000U)

#define EDMA_TPCC_EESRH_RN_E48_SHIFT                                                                      ((uint32_t)16U)
#define EDMA_TPCC_EESRH_RN_E48_MASK                                                                       ((uint32_t)0x00010000U)

#define EDMA_TPCC_EESRH_RN_E62_SHIFT                                                                      ((uint32_t)30U)
#define EDMA_TPCC_EESRH_RN_E62_MASK                                                                       ((uint32_t)0x40000000U)

#define EDMA_TPCC_EESRH_RN_E47_SHIFT                                                                      ((uint32_t)15U)
#define EDMA_TPCC_EESRH_RN_E47_MASK                                                                       ((uint32_t)0x00008000U)

#define EDMA_TPCC_EESRH_RN_E63_SHIFT                                                                      ((uint32_t)31U)
#define EDMA_TPCC_EESRH_RN_E63_MASK                                                                       ((uint32_t)0x80000000U)

#define EDMA_TPCC_EESRH_RN_E46_SHIFT                                                                      ((uint32_t)14U)
#define EDMA_TPCC_EESRH_RN_E46_MASK                                                                       ((uint32_t)0x00004000U)

#define EDMA_TPCC_EESRH_RN_E45_SHIFT                                                                      ((uint32_t)13U)
#define EDMA_TPCC_EESRH_RN_E45_MASK                                                                       ((uint32_t)0x00002000U)

#define EDMA_TPCC_IER_RN_I15_SHIFT                                                                        ((uint32_t)15U)
#define EDMA_TPCC_IER_RN_I15_MASK                                                                         ((uint32_t)0x00008000U)

#define EDMA_TPCC_IER_RN_I30_SHIFT                                                                        ((uint32_t)30U)
#define EDMA_TPCC_IER_RN_I30_MASK                                                                         ((uint32_t)0x40000000U)

#define EDMA_TPCC_IER_RN_I14_SHIFT                                                                        ((uint32_t)14U)
#define EDMA_TPCC_IER_RN_I14_MASK                                                                         ((uint32_t)0x00004000U)

#define EDMA_TPCC_IER_RN_I29_SHIFT                                                                        ((uint32_t)29U)
#define EDMA_TPCC_IER_RN_I29_MASK                                                                         ((uint32_t)0x20000000U)

#define EDMA_TPCC_IER_RN_I7_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_IER_RN_I7_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_IER_RN_I28_SHIFT                                                                        ((uint32_t)28U)
#define EDMA_TPCC_IER_RN_I28_MASK                                                                         ((uint32_t)0x10000000U)

#define EDMA_TPCC_IER_RN_I17_SHIFT                                                                        ((uint32_t)17U)
#define EDMA_TPCC_IER_RN_I17_MASK                                                                         ((uint32_t)0x00020000U)

#define EDMA_TPCC_IER_RN_I16_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_IER_RN_I16_MASK                                                                         ((uint32_t)0x00010000U)

#define EDMA_TPCC_IER_RN_I27_SHIFT                                                                        ((uint32_t)27U)
#define EDMA_TPCC_IER_RN_I27_MASK                                                                         ((uint32_t)0x08000000U)

#define EDMA_TPCC_IER_RN_I0_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_IER_RN_I0_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_IER_RN_I1_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_IER_RN_I1_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_IER_RN_I13_SHIFT                                                                        ((uint32_t)13U)
#define EDMA_TPCC_IER_RN_I13_MASK                                                                         ((uint32_t)0x00002000U)

#define EDMA_TPCC_IER_RN_I2_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_IER_RN_I2_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_IER_RN_I31_SHIFT                                                                        ((uint32_t)31U)
#define EDMA_TPCC_IER_RN_I31_MASK                                                                         ((uint32_t)0x80000000U)

#define EDMA_TPCC_IER_RN_I22_SHIFT                                                                        ((uint32_t)22U)
#define EDMA_TPCC_IER_RN_I22_MASK                                                                         ((uint32_t)0x00400000U)

#define EDMA_TPCC_IER_RN_I3_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_IER_RN_I3_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_IER_RN_I26_SHIFT                                                                        ((uint32_t)26U)
#define EDMA_TPCC_IER_RN_I26_MASK                                                                         ((uint32_t)0x04000000U)

#define EDMA_TPCC_IER_RN_I5_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_IER_RN_I5_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_IER_RN_I19_SHIFT                                                                        ((uint32_t)19U)
#define EDMA_TPCC_IER_RN_I19_MASK                                                                         ((uint32_t)0x00080000U)

#define EDMA_TPCC_IER_RN_I8_SHIFT                                                                         ((uint32_t)8U)
#define EDMA_TPCC_IER_RN_I8_MASK                                                                          ((uint32_t)0x00000100U)

#define EDMA_TPCC_IER_RN_I25_SHIFT                                                                        ((uint32_t)25U)
#define EDMA_TPCC_IER_RN_I25_MASK                                                                         ((uint32_t)0x02000000U)

#define EDMA_TPCC_IER_RN_I4_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_IER_RN_I4_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_IER_RN_I18_SHIFT                                                                        ((uint32_t)18U)
#define EDMA_TPCC_IER_RN_I18_MASK                                                                         ((uint32_t)0x00040000U)

#define EDMA_TPCC_IER_RN_I9_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_IER_RN_I9_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_IER_RN_I21_SHIFT                                                                        ((uint32_t)21U)
#define EDMA_TPCC_IER_RN_I21_MASK                                                                         ((uint32_t)0x00200000U)

#define EDMA_TPCC_IER_RN_I24_SHIFT                                                                        ((uint32_t)24U)
#define EDMA_TPCC_IER_RN_I24_MASK                                                                         ((uint32_t)0x01000000U)

#define EDMA_TPCC_IER_RN_I10_SHIFT                                                                        ((uint32_t)10U)
#define EDMA_TPCC_IER_RN_I10_MASK                                                                         ((uint32_t)0x00000400U)

#define EDMA_TPCC_IER_RN_I12_SHIFT                                                                        ((uint32_t)12U)
#define EDMA_TPCC_IER_RN_I12_MASK                                                                         ((uint32_t)0x00001000U)

#define EDMA_TPCC_IER_RN_I23_SHIFT                                                                        ((uint32_t)23U)
#define EDMA_TPCC_IER_RN_I23_MASK                                                                         ((uint32_t)0x00800000U)

#define EDMA_TPCC_IER_RN_I20_SHIFT                                                                        ((uint32_t)20U)
#define EDMA_TPCC_IER_RN_I20_MASK                                                                         ((uint32_t)0x00100000U)

#define EDMA_TPCC_IER_RN_I6_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_IER_RN_I6_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_IER_RN_I11_SHIFT                                                                        ((uint32_t)11U)
#define EDMA_TPCC_IER_RN_I11_MASK                                                                         ((uint32_t)0x00000800U)

#define EDMA_TPCC_QEECR_RN_E3_SHIFT                                                                       ((uint32_t)3U)
#define EDMA_TPCC_QEECR_RN_E3_MASK                                                                        ((uint32_t)0x00000008U)

#define EDMA_TPCC_QEECR_RN_E2_SHIFT                                                                       ((uint32_t)2U)
#define EDMA_TPCC_QEECR_RN_E2_MASK                                                                        ((uint32_t)0x00000004U)

#define EDMA_TPCC_QEECR_RN_E1_SHIFT                                                                       ((uint32_t)1U)
#define EDMA_TPCC_QEECR_RN_E1_MASK                                                                        ((uint32_t)0x00000002U)

#define EDMA_TPCC_QEECR_RN_E4_SHIFT                                                                       ((uint32_t)4U)
#define EDMA_TPCC_QEECR_RN_E4_MASK                                                                        ((uint32_t)0x00000010U)

#define EDMA_TPCC_QEECR_RN_E0_SHIFT                                                                       ((uint32_t)0U)
#define EDMA_TPCC_QEECR_RN_E0_MASK                                                                        ((uint32_t)0x00000001U)

#define EDMA_TPCC_QEECR_RN_E6_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_QEECR_RN_E6_MASK                                                                        ((uint32_t)0x00000040U)

#define EDMA_TPCC_QEECR_RN_E5_SHIFT                                                                       ((uint32_t)5U)
#define EDMA_TPCC_QEECR_RN_E5_MASK                                                                        ((uint32_t)0x00000020U)

#define EDMA_TPCC_QEECR_RN_E7_SHIFT                                                                       ((uint32_t)7U)
#define EDMA_TPCC_QEECR_RN_E7_MASK                                                                        ((uint32_t)0x00000080U)

#define EDMA_TPCC_QEECR_RN_RESERVED_0_SHIFT                                                               ((uint32_t)8U)
#define EDMA_TPCC_QEECR_RN_RESERVED_0_MASK                                                                ((uint32_t)0xffffff00U)

#define EDMA_TPCC_EER_RN_E11_SHIFT                                                                        ((uint32_t)11U)
#define EDMA_TPCC_EER_RN_E11_MASK                                                                         ((uint32_t)0x00000800U)

#define EDMA_TPCC_EER_RN_E24_SHIFT                                                                        ((uint32_t)24U)
#define EDMA_TPCC_EER_RN_E24_MASK                                                                         ((uint32_t)0x01000000U)

#define EDMA_TPCC_EER_RN_E10_SHIFT                                                                        ((uint32_t)10U)
#define EDMA_TPCC_EER_RN_E10_MASK                                                                         ((uint32_t)0x00000400U)

#define EDMA_TPCC_EER_RN_E12_SHIFT                                                                        ((uint32_t)12U)
#define EDMA_TPCC_EER_RN_E12_MASK                                                                         ((uint32_t)0x00001000U)

#define EDMA_TPCC_EER_RN_E25_SHIFT                                                                        ((uint32_t)25U)
#define EDMA_TPCC_EER_RN_E25_MASK                                                                         ((uint32_t)0x02000000U)

#define EDMA_TPCC_EER_RN_E9_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_EER_RN_E9_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_EER_RN_E21_SHIFT                                                                        ((uint32_t)21U)
#define EDMA_TPCC_EER_RN_E21_MASK                                                                         ((uint32_t)0x00200000U)

#define EDMA_TPCC_EER_RN_E22_SHIFT                                                                        ((uint32_t)22U)
#define EDMA_TPCC_EER_RN_E22_MASK                                                                         ((uint32_t)0x00400000U)

#define EDMA_TPCC_EER_RN_E0_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_EER_RN_E0_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_EER_RN_E23_SHIFT                                                                        ((uint32_t)23U)
#define EDMA_TPCC_EER_RN_E23_MASK                                                                         ((uint32_t)0x00800000U)

#define EDMA_TPCC_EER_RN_E19_SHIFT                                                                        ((uint32_t)19U)
#define EDMA_TPCC_EER_RN_E19_MASK                                                                         ((uint32_t)0x00080000U)

#define EDMA_TPCC_EER_RN_E20_SHIFT                                                                        ((uint32_t)20U)
#define EDMA_TPCC_EER_RN_E20_MASK                                                                         ((uint32_t)0x00100000U)

#define EDMA_TPCC_EER_RN_E29_SHIFT                                                                        ((uint32_t)29U)
#define EDMA_TPCC_EER_RN_E29_MASK                                                                         ((uint32_t)0x20000000U)

#define EDMA_TPCC_EER_RN_E30_SHIFT                                                                        ((uint32_t)30U)
#define EDMA_TPCC_EER_RN_E30_MASK                                                                         ((uint32_t)0x40000000U)

#define EDMA_TPCC_EER_RN_E18_SHIFT                                                                        ((uint32_t)18U)
#define EDMA_TPCC_EER_RN_E18_MASK                                                                         ((uint32_t)0x00040000U)

#define EDMA_TPCC_EER_RN_E31_SHIFT                                                                        ((uint32_t)31U)
#define EDMA_TPCC_EER_RN_E31_MASK                                                                         ((uint32_t)0x80000000U)

#define EDMA_TPCC_EER_RN_E5_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_EER_RN_E5_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_EER_RN_E6_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_EER_RN_E6_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_EER_RN_E8_SHIFT                                                                         ((uint32_t)8U)
#define EDMA_TPCC_EER_RN_E8_MASK                                                                          ((uint32_t)0x00000100U)

#define EDMA_TPCC_EER_RN_E7_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_EER_RN_E7_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_EER_RN_E28_SHIFT                                                                        ((uint32_t)28U)
#define EDMA_TPCC_EER_RN_E28_MASK                                                                         ((uint32_t)0x10000000U)

#define EDMA_TPCC_EER_RN_E3_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_EER_RN_E3_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_EER_RN_E2_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_EER_RN_E2_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_EER_RN_E1_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_EER_RN_E1_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_EER_RN_E13_SHIFT                                                                        ((uint32_t)13U)
#define EDMA_TPCC_EER_RN_E13_MASK                                                                         ((uint32_t)0x00002000U)

#define EDMA_TPCC_EER_RN_E17_SHIFT                                                                        ((uint32_t)17U)
#define EDMA_TPCC_EER_RN_E17_MASK                                                                         ((uint32_t)0x00020000U)

#define EDMA_TPCC_EER_RN_E26_SHIFT                                                                        ((uint32_t)26U)
#define EDMA_TPCC_EER_RN_E26_MASK                                                                         ((uint32_t)0x04000000U)

#define EDMA_TPCC_EER_RN_E14_SHIFT                                                                        ((uint32_t)14U)
#define EDMA_TPCC_EER_RN_E14_MASK                                                                         ((uint32_t)0x00004000U)

#define EDMA_TPCC_EER_RN_E16_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_EER_RN_E16_MASK                                                                         ((uint32_t)0x00010000U)

#define EDMA_TPCC_EER_RN_E27_SHIFT                                                                        ((uint32_t)27U)
#define EDMA_TPCC_EER_RN_E27_MASK                                                                         ((uint32_t)0x08000000U)

#define EDMA_TPCC_EER_RN_E4_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_EER_RN_E4_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_EER_RN_E15_SHIFT                                                                        ((uint32_t)15U)
#define EDMA_TPCC_EER_RN_E15_MASK                                                                         ((uint32_t)0x00008000U)

#define EDMA_TPCC_CERH_RN_E49_SHIFT                                                                       ((uint32_t)17U)
#define EDMA_TPCC_CERH_RN_E49_MASK                                                                        ((uint32_t)0x00020000U)

#define EDMA_TPCC_CERH_RN_E38_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_CERH_RN_E38_MASK                                                                        ((uint32_t)0x00000040U)

#define EDMA_TPCC_CERH_RN_E39_SHIFT                                                                       ((uint32_t)7U)
#define EDMA_TPCC_CERH_RN_E39_MASK                                                                        ((uint32_t)0x00000080U)

#define EDMA_TPCC_CERH_RN_E40_SHIFT                                                                       ((uint32_t)8U)
#define EDMA_TPCC_CERH_RN_E40_MASK                                                                        ((uint32_t)0x00000100U)

#define EDMA_TPCC_CERH_RN_E63_SHIFT                                                                       ((uint32_t)31U)
#define EDMA_TPCC_CERH_RN_E63_MASK                                                                        ((uint32_t)0x80000000U)

#define EDMA_TPCC_CERH_RN_E41_SHIFT                                                                       ((uint32_t)9U)
#define EDMA_TPCC_CERH_RN_E41_MASK                                                                        ((uint32_t)0x00000200U)

#define EDMA_TPCC_CERH_RN_E62_SHIFT                                                                       ((uint32_t)30U)
#define EDMA_TPCC_CERH_RN_E62_MASK                                                                        ((uint32_t)0x40000000U)

#define EDMA_TPCC_CERH_RN_E61_SHIFT                                                                       ((uint32_t)29U)
#define EDMA_TPCC_CERH_RN_E61_MASK                                                                        ((uint32_t)0x20000000U)

#define EDMA_TPCC_CERH_RN_E42_SHIFT                                                                       ((uint32_t)10U)
#define EDMA_TPCC_CERH_RN_E42_MASK                                                                        ((uint32_t)0x00000400U)

#define EDMA_TPCC_CERH_RN_E32_SHIFT                                                                       ((uint32_t)0U)
#define EDMA_TPCC_CERH_RN_E32_MASK                                                                        ((uint32_t)0x00000001U)

#define EDMA_TPCC_CERH_RN_E57_SHIFT                                                                       ((uint32_t)25U)
#define EDMA_TPCC_CERH_RN_E57_MASK                                                                        ((uint32_t)0x02000000U)

#define EDMA_TPCC_CERH_RN_E43_SHIFT                                                                       ((uint32_t)11U)
#define EDMA_TPCC_CERH_RN_E43_MASK                                                                        ((uint32_t)0x00000800U)

#define EDMA_TPCC_CERH_RN_E58_SHIFT                                                                       ((uint32_t)26U)
#define EDMA_TPCC_CERH_RN_E58_MASK                                                                        ((uint32_t)0x04000000U)

#define EDMA_TPCC_CERH_RN_E44_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_CERH_RN_E44_MASK                                                                        ((uint32_t)0x00001000U)

#define EDMA_TPCC_CERH_RN_E59_SHIFT                                                                       ((uint32_t)27U)
#define EDMA_TPCC_CERH_RN_E59_MASK                                                                        ((uint32_t)0x08000000U)

#define EDMA_TPCC_CERH_RN_E60_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_CERH_RN_E60_MASK                                                                        ((uint32_t)0x10000000U)

#define EDMA_TPCC_CERH_RN_E45_SHIFT                                                                       ((uint32_t)13U)
#define EDMA_TPCC_CERH_RN_E45_MASK                                                                        ((uint32_t)0x00002000U)

#define EDMA_TPCC_CERH_RN_E33_SHIFT                                                                       ((uint32_t)1U)
#define EDMA_TPCC_CERH_RN_E33_MASK                                                                        ((uint32_t)0x00000002U)

#define EDMA_TPCC_CERH_RN_E46_SHIFT                                                                       ((uint32_t)14U)
#define EDMA_TPCC_CERH_RN_E46_MASK                                                                        ((uint32_t)0x00004000U)

#define EDMA_TPCC_CERH_RN_E34_SHIFT                                                                       ((uint32_t)2U)
#define EDMA_TPCC_CERH_RN_E34_MASK                                                                        ((uint32_t)0x00000004U)

#define EDMA_TPCC_CERH_RN_E47_SHIFT                                                                       ((uint32_t)15U)
#define EDMA_TPCC_CERH_RN_E47_MASK                                                                        ((uint32_t)0x00008000U)

#define EDMA_TPCC_CERH_RN_E53_SHIFT                                                                       ((uint32_t)21U)
#define EDMA_TPCC_CERH_RN_E53_MASK                                                                        ((uint32_t)0x00200000U)

#define EDMA_TPCC_CERH_RN_E54_SHIFT                                                                       ((uint32_t)22U)
#define EDMA_TPCC_CERH_RN_E54_MASK                                                                        ((uint32_t)0x00400000U)

#define EDMA_TPCC_CERH_RN_E50_SHIFT                                                                       ((uint32_t)18U)
#define EDMA_TPCC_CERH_RN_E50_MASK                                                                        ((uint32_t)0x00040000U)

#define EDMA_TPCC_CERH_RN_E35_SHIFT                                                                       ((uint32_t)3U)
#define EDMA_TPCC_CERH_RN_E35_MASK                                                                        ((uint32_t)0x00000008U)

#define EDMA_TPCC_CERH_RN_E48_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_CERH_RN_E48_MASK                                                                        ((uint32_t)0x00010000U)

#define EDMA_TPCC_CERH_RN_E56_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_CERH_RN_E56_MASK                                                                        ((uint32_t)0x01000000U)

#define EDMA_TPCC_CERH_RN_E51_SHIFT                                                                       ((uint32_t)19U)
#define EDMA_TPCC_CERH_RN_E51_MASK                                                                        ((uint32_t)0x00080000U)

#define EDMA_TPCC_CERH_RN_E36_SHIFT                                                                       ((uint32_t)4U)
#define EDMA_TPCC_CERH_RN_E36_MASK                                                                        ((uint32_t)0x00000010U)

#define EDMA_TPCC_CERH_RN_E55_SHIFT                                                                       ((uint32_t)23U)
#define EDMA_TPCC_CERH_RN_E55_MASK                                                                        ((uint32_t)0x00800000U)

#define EDMA_TPCC_CERH_RN_E52_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_CERH_RN_E52_MASK                                                                        ((uint32_t)0x00100000U)

#define EDMA_TPCC_CERH_RN_E37_SHIFT                                                                       ((uint32_t)5U)
#define EDMA_TPCC_CERH_RN_E37_MASK                                                                        ((uint32_t)0x00000020U)

#define EDMA_TPCC_QEER_RN_E6_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_QEER_RN_E6_MASK                                                                         ((uint32_t)0x00000040U)

#define EDMA_TPCC_QEER_RN_E5_SHIFT                                                                        ((uint32_t)5U)
#define EDMA_TPCC_QEER_RN_E5_MASK                                                                         ((uint32_t)0x00000020U)

#define EDMA_TPCC_QEER_RN_E7_SHIFT                                                                        ((uint32_t)7U)
#define EDMA_TPCC_QEER_RN_E7_MASK                                                                         ((uint32_t)0x00000080U)

#define EDMA_TPCC_QEER_RN_E0_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_QEER_RN_E0_MASK                                                                         ((uint32_t)0x00000001U)

#define EDMA_TPCC_QEER_RN_E2_SHIFT                                                                        ((uint32_t)2U)
#define EDMA_TPCC_QEER_RN_E2_MASK                                                                         ((uint32_t)0x00000004U)

#define EDMA_TPCC_QEER_RN_E1_SHIFT                                                                        ((uint32_t)1U)
#define EDMA_TPCC_QEER_RN_E1_MASK                                                                         ((uint32_t)0x00000002U)

#define EDMA_TPCC_QEER_RN_E4_SHIFT                                                                        ((uint32_t)4U)
#define EDMA_TPCC_QEER_RN_E4_MASK                                                                         ((uint32_t)0x00000010U)

#define EDMA_TPCC_QEER_RN_E3_SHIFT                                                                        ((uint32_t)3U)
#define EDMA_TPCC_QEER_RN_E3_MASK                                                                         ((uint32_t)0x00000008U)

#define EDMA_TPCC_QEER_RN_RESERVED_0_SHIFT                                                                ((uint32_t)8U)
#define EDMA_TPCC_QEER_RN_RESERVED_0_MASK                                                                 ((uint32_t)0xffffff00U)

#define EDMA_TPCC_QSECR_RN_E5_SHIFT                                                                       ((uint32_t)5U)
#define EDMA_TPCC_QSECR_RN_E5_MASK                                                                        ((uint32_t)0x00000020U)

#define EDMA_TPCC_QSECR_RN_E6_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_QSECR_RN_E6_MASK                                                                        ((uint32_t)0x00000040U)

#define EDMA_TPCC_QSECR_RN_E7_SHIFT                                                                       ((uint32_t)7U)
#define EDMA_TPCC_QSECR_RN_E7_MASK                                                                        ((uint32_t)0x00000080U)

#define EDMA_TPCC_QSECR_RN_E0_SHIFT                                                                       ((uint32_t)0U)
#define EDMA_TPCC_QSECR_RN_E0_MASK                                                                        ((uint32_t)0x00000001U)

#define EDMA_TPCC_QSECR_RN_E2_SHIFT                                                                       ((uint32_t)2U)
#define EDMA_TPCC_QSECR_RN_E2_MASK                                                                        ((uint32_t)0x00000004U)

#define EDMA_TPCC_QSECR_RN_E1_SHIFT                                                                       ((uint32_t)1U)
#define EDMA_TPCC_QSECR_RN_E1_MASK                                                                        ((uint32_t)0x00000002U)

#define EDMA_TPCC_QSECR_RN_E4_SHIFT                                                                       ((uint32_t)4U)
#define EDMA_TPCC_QSECR_RN_E4_MASK                                                                        ((uint32_t)0x00000010U)

#define EDMA_TPCC_QSECR_RN_E3_SHIFT                                                                       ((uint32_t)3U)
#define EDMA_TPCC_QSECR_RN_E3_MASK                                                                        ((uint32_t)0x00000008U)

#define EDMA_TPCC_QSECR_RN_RESERVED_0_SHIFT                                                               ((uint32_t)8U)
#define EDMA_TPCC_QSECR_RN_RESERVED_0_MASK                                                                ((uint32_t)0xffffff00U)

#define EDMA_TPCC_ECRH_RN_E50_SHIFT                                                                       ((uint32_t)18U)
#define EDMA_TPCC_ECRH_RN_E50_MASK                                                                        ((uint32_t)0x00040000U)

#define EDMA_TPCC_ECRH_RN_E36_SHIFT                                                                       ((uint32_t)4U)
#define EDMA_TPCC_ECRH_RN_E36_MASK                                                                        ((uint32_t)0x00000010U)

#define EDMA_TPCC_ECRH_RN_E60_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_ECRH_RN_E60_MASK                                                                        ((uint32_t)0x10000000U)

#define EDMA_TPCC_ECRH_RN_E49_SHIFT                                                                       ((uint32_t)17U)
#define EDMA_TPCC_ECRH_RN_E49_MASK                                                                        ((uint32_t)0x00020000U)

#define EDMA_TPCC_ECRH_RN_E37_SHIFT                                                                       ((uint32_t)5U)
#define EDMA_TPCC_ECRH_RN_E37_MASK                                                                        ((uint32_t)0x00000020U)

#define EDMA_TPCC_ECRH_RN_E48_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_ECRH_RN_E48_MASK                                                                        ((uint32_t)0x00010000U)

#define EDMA_TPCC_ECRH_RN_E58_SHIFT                                                                       ((uint32_t)26U)
#define EDMA_TPCC_ECRH_RN_E58_MASK                                                                        ((uint32_t)0x04000000U)

#define EDMA_TPCC_ECRH_RN_E38_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_ECRH_RN_E38_MASK                                                                        ((uint32_t)0x00000040U)

#define EDMA_TPCC_ECRH_RN_E63_SHIFT                                                                       ((uint32_t)31U)
#define EDMA_TPCC_ECRH_RN_E63_MASK                                                                        ((uint32_t)0x80000000U)

#define EDMA_TPCC_ECRH_RN_E47_SHIFT                                                                       ((uint32_t)15U)
#define EDMA_TPCC_ECRH_RN_E47_MASK                                                                        ((uint32_t)0x00008000U)

#define EDMA_TPCC_ECRH_RN_E39_SHIFT                                                                       ((uint32_t)7U)
#define EDMA_TPCC_ECRH_RN_E39_MASK                                                                        ((uint32_t)0x00000080U)

#define EDMA_TPCC_ECRH_RN_E32_SHIFT                                                                       ((uint32_t)0U)
#define EDMA_TPCC_ECRH_RN_E32_MASK                                                                        ((uint32_t)0x00000001U)

#define EDMA_TPCC_ECRH_RN_E51_SHIFT                                                                       ((uint32_t)19U)
#define EDMA_TPCC_ECRH_RN_E51_MASK                                                                        ((uint32_t)0x00080000U)

#define EDMA_TPCC_ECRH_RN_E33_SHIFT                                                                       ((uint32_t)1U)
#define EDMA_TPCC_ECRH_RN_E33_MASK                                                                        ((uint32_t)0x00000002U)

#define EDMA_TPCC_ECRH_RN_E34_SHIFT                                                                       ((uint32_t)2U)
#define EDMA_TPCC_ECRH_RN_E34_MASK                                                                        ((uint32_t)0x00000004U)

#define EDMA_TPCC_ECRH_RN_E35_SHIFT                                                                       ((uint32_t)3U)
#define EDMA_TPCC_ECRH_RN_E35_MASK                                                                        ((uint32_t)0x00000008U)

#define EDMA_TPCC_ECRH_RN_E42_SHIFT                                                                       ((uint32_t)10U)
#define EDMA_TPCC_ECRH_RN_E42_MASK                                                                        ((uint32_t)0x00000400U)

#define EDMA_TPCC_ECRH_RN_E52_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_ECRH_RN_E52_MASK                                                                        ((uint32_t)0x00100000U)

#define EDMA_TPCC_ECRH_RN_E41_SHIFT                                                                       ((uint32_t)9U)
#define EDMA_TPCC_ECRH_RN_E41_MASK                                                                        ((uint32_t)0x00000200U)

#define EDMA_TPCC_ECRH_RN_E55_SHIFT                                                                       ((uint32_t)23U)
#define EDMA_TPCC_ECRH_RN_E55_MASK                                                                        ((uint32_t)0x00800000U)

#define EDMA_TPCC_ECRH_RN_E53_SHIFT                                                                       ((uint32_t)21U)
#define EDMA_TPCC_ECRH_RN_E53_MASK                                                                        ((uint32_t)0x00200000U)

#define EDMA_TPCC_ECRH_RN_E46_SHIFT                                                                       ((uint32_t)14U)
#define EDMA_TPCC_ECRH_RN_E46_MASK                                                                        ((uint32_t)0x00004000U)

#define EDMA_TPCC_ECRH_RN_E62_SHIFT                                                                       ((uint32_t)30U)
#define EDMA_TPCC_ECRH_RN_E62_MASK                                                                        ((uint32_t)0x40000000U)

#define EDMA_TPCC_ECRH_RN_E40_SHIFT                                                                       ((uint32_t)8U)
#define EDMA_TPCC_ECRH_RN_E40_MASK                                                                        ((uint32_t)0x00000100U)

#define EDMA_TPCC_ECRH_RN_E56_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_ECRH_RN_E56_MASK                                                                        ((uint32_t)0x01000000U)

#define EDMA_TPCC_ECRH_RN_E61_SHIFT                                                                       ((uint32_t)29U)
#define EDMA_TPCC_ECRH_RN_E61_MASK                                                                        ((uint32_t)0x20000000U)

#define EDMA_TPCC_ECRH_RN_E45_SHIFT                                                                       ((uint32_t)13U)
#define EDMA_TPCC_ECRH_RN_E45_MASK                                                                        ((uint32_t)0x00002000U)

#define EDMA_TPCC_ECRH_RN_E59_SHIFT                                                                       ((uint32_t)27U)
#define EDMA_TPCC_ECRH_RN_E59_MASK                                                                        ((uint32_t)0x08000000U)

#define EDMA_TPCC_ECRH_RN_E44_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_ECRH_RN_E44_MASK                                                                        ((uint32_t)0x00001000U)

#define EDMA_TPCC_ECRH_RN_E54_SHIFT                                                                       ((uint32_t)22U)
#define EDMA_TPCC_ECRH_RN_E54_MASK                                                                        ((uint32_t)0x00400000U)

#define EDMA_TPCC_ECRH_RN_E43_SHIFT                                                                       ((uint32_t)11U)
#define EDMA_TPCC_ECRH_RN_E43_MASK                                                                        ((uint32_t)0x00000800U)

#define EDMA_TPCC_ECRH_RN_E57_SHIFT                                                                       ((uint32_t)25U)
#define EDMA_TPCC_ECRH_RN_E57_MASK                                                                        ((uint32_t)0x02000000U)

#define EDMA_TPCC_ICR_RN_I17_SHIFT                                                                        ((uint32_t)17U)
#define EDMA_TPCC_ICR_RN_I17_MASK                                                                         ((uint32_t)0x00020000U)

#define EDMA_TPCC_ICR_RN_I30_SHIFT                                                                        ((uint32_t)30U)
#define EDMA_TPCC_ICR_RN_I30_MASK                                                                         ((uint32_t)0x40000000U)

#define EDMA_TPCC_ICR_RN_I7_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_ICR_RN_I7_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_ICR_RN_I19_SHIFT                                                                        ((uint32_t)19U)
#define EDMA_TPCC_ICR_RN_I19_MASK                                                                         ((uint32_t)0x00080000U)

#define EDMA_TPCC_ICR_RN_I16_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_ICR_RN_I16_MASK                                                                         ((uint32_t)0x00010000U)

#define EDMA_TPCC_ICR_RN_I6_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_ICR_RN_I6_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_ICR_RN_I31_SHIFT                                                                        ((uint32_t)31U)
#define EDMA_TPCC_ICR_RN_I31_MASK                                                                         ((uint32_t)0x80000000U)

#define EDMA_TPCC_ICR_RN_I20_SHIFT                                                                        ((uint32_t)20U)
#define EDMA_TPCC_ICR_RN_I20_MASK                                                                         ((uint32_t)0x00100000U)

#define EDMA_TPCC_ICR_RN_I18_SHIFT                                                                        ((uint32_t)18U)
#define EDMA_TPCC_ICR_RN_I18_MASK                                                                         ((uint32_t)0x00040000U)

#define EDMA_TPCC_ICR_RN_I21_SHIFT                                                                        ((uint32_t)21U)
#define EDMA_TPCC_ICR_RN_I21_MASK                                                                         ((uint32_t)0x00200000U)

#define EDMA_TPCC_ICR_RN_I8_SHIFT                                                                         ((uint32_t)8U)
#define EDMA_TPCC_ICR_RN_I8_MASK                                                                          ((uint32_t)0x00000100U)

#define EDMA_TPCC_ICR_RN_I22_SHIFT                                                                        ((uint32_t)22U)
#define EDMA_TPCC_ICR_RN_I22_MASK                                                                         ((uint32_t)0x00400000U)

#define EDMA_TPCC_ICR_RN_I13_SHIFT                                                                        ((uint32_t)13U)
#define EDMA_TPCC_ICR_RN_I13_MASK                                                                         ((uint32_t)0x00002000U)

#define EDMA_TPCC_ICR_RN_I3_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_ICR_RN_I3_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_ICR_RN_I23_SHIFT                                                                        ((uint32_t)23U)
#define EDMA_TPCC_ICR_RN_I23_MASK                                                                         ((uint32_t)0x00800000U)

#define EDMA_TPCC_ICR_RN_I12_SHIFT                                                                        ((uint32_t)12U)
#define EDMA_TPCC_ICR_RN_I12_MASK                                                                         ((uint32_t)0x00001000U)

#define EDMA_TPCC_ICR_RN_I2_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_ICR_RN_I2_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_ICR_RN_I24_SHIFT                                                                        ((uint32_t)24U)
#define EDMA_TPCC_ICR_RN_I24_MASK                                                                         ((uint32_t)0x01000000U)

#define EDMA_TPCC_ICR_RN_I15_SHIFT                                                                        ((uint32_t)15U)
#define EDMA_TPCC_ICR_RN_I15_MASK                                                                         ((uint32_t)0x00008000U)

#define EDMA_TPCC_ICR_RN_I25_SHIFT                                                                        ((uint32_t)25U)
#define EDMA_TPCC_ICR_RN_I25_MASK                                                                         ((uint32_t)0x02000000U)

#define EDMA_TPCC_ICR_RN_I5_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_ICR_RN_I5_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_ICR_RN_I14_SHIFT                                                                        ((uint32_t)14U)
#define EDMA_TPCC_ICR_RN_I14_MASK                                                                         ((uint32_t)0x00004000U)

#define EDMA_TPCC_ICR_RN_I4_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_ICR_RN_I4_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_ICR_RN_I9_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_ICR_RN_I9_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_ICR_RN_I27_SHIFT                                                                        ((uint32_t)27U)
#define EDMA_TPCC_ICR_RN_I27_MASK                                                                         ((uint32_t)0x08000000U)

#define EDMA_TPCC_ICR_RN_I26_SHIFT                                                                        ((uint32_t)26U)
#define EDMA_TPCC_ICR_RN_I26_MASK                                                                         ((uint32_t)0x04000000U)

#define EDMA_TPCC_ICR_RN_I11_SHIFT                                                                        ((uint32_t)11U)
#define EDMA_TPCC_ICR_RN_I11_MASK                                                                         ((uint32_t)0x00000800U)

#define EDMA_TPCC_ICR_RN_I1_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_ICR_RN_I1_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_ICR_RN_I10_SHIFT                                                                        ((uint32_t)10U)
#define EDMA_TPCC_ICR_RN_I10_MASK                                                                         ((uint32_t)0x00000400U)

#define EDMA_TPCC_ICR_RN_I28_SHIFT                                                                        ((uint32_t)28U)
#define EDMA_TPCC_ICR_RN_I28_MASK                                                                         ((uint32_t)0x10000000U)

#define EDMA_TPCC_ICR_RN_I0_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_ICR_RN_I0_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_ICR_RN_I29_SHIFT                                                                        ((uint32_t)29U)
#define EDMA_TPCC_ICR_RN_I29_MASK                                                                         ((uint32_t)0x20000000U)

#define EDMA_TPCC_IPRH_RN_I53_SHIFT                                                                       ((uint32_t)21U)
#define EDMA_TPCC_IPRH_RN_I53_MASK                                                                        ((uint32_t)0x00200000U)

#define EDMA_TPCC_IPRH_RN_I41_SHIFT                                                                       ((uint32_t)9U)
#define EDMA_TPCC_IPRH_RN_I41_MASK                                                                        ((uint32_t)0x00000200U)

#define EDMA_TPCC_IPRH_RN_I52_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_IPRH_RN_I52_MASK                                                                        ((uint32_t)0x00100000U)

#define EDMA_TPCC_IPRH_RN_I40_SHIFT                                                                       ((uint32_t)8U)
#define EDMA_TPCC_IPRH_RN_I40_MASK                                                                        ((uint32_t)0x00000100U)

#define EDMA_TPCC_IPRH_RN_I51_SHIFT                                                                       ((uint32_t)19U)
#define EDMA_TPCC_IPRH_RN_I51_MASK                                                                        ((uint32_t)0x00080000U)

#define EDMA_TPCC_IPRH_RN_I39_SHIFT                                                                       ((uint32_t)7U)
#define EDMA_TPCC_IPRH_RN_I39_MASK                                                                        ((uint32_t)0x00000080U)

#define EDMA_TPCC_IPRH_RN_I32_SHIFT                                                                       ((uint32_t)0U)
#define EDMA_TPCC_IPRH_RN_I32_MASK                                                                        ((uint32_t)0x00000001U)

#define EDMA_TPCC_IPRH_RN_I50_SHIFT                                                                       ((uint32_t)18U)
#define EDMA_TPCC_IPRH_RN_I50_MASK                                                                        ((uint32_t)0x00040000U)

#define EDMA_TPCC_IPRH_RN_I33_SHIFT                                                                       ((uint32_t)1U)
#define EDMA_TPCC_IPRH_RN_I33_MASK                                                                        ((uint32_t)0x00000002U)

#define EDMA_TPCC_IPRH_RN_I34_SHIFT                                                                       ((uint32_t)2U)
#define EDMA_TPCC_IPRH_RN_I34_MASK                                                                        ((uint32_t)0x00000004U)

#define EDMA_TPCC_IPRH_RN_I49_SHIFT                                                                       ((uint32_t)17U)
#define EDMA_TPCC_IPRH_RN_I49_MASK                                                                        ((uint32_t)0x00020000U)

#define EDMA_TPCC_IPRH_RN_I60_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_IPRH_RN_I60_MASK                                                                        ((uint32_t)0x10000000U)

#define EDMA_TPCC_IPRH_RN_I47_SHIFT                                                                       ((uint32_t)15U)
#define EDMA_TPCC_IPRH_RN_I47_MASK                                                                        ((uint32_t)0x00008000U)

#define EDMA_TPCC_IPRH_RN_I35_SHIFT                                                                       ((uint32_t)3U)
#define EDMA_TPCC_IPRH_RN_I35_MASK                                                                        ((uint32_t)0x00000008U)

#define EDMA_TPCC_IPRH_RN_I36_SHIFT                                                                       ((uint32_t)4U)
#define EDMA_TPCC_IPRH_RN_I36_MASK                                                                        ((uint32_t)0x00000010U)

#define EDMA_TPCC_IPRH_RN_I59_SHIFT                                                                       ((uint32_t)27U)
#define EDMA_TPCC_IPRH_RN_I59_MASK                                                                        ((uint32_t)0x08000000U)

#define EDMA_TPCC_IPRH_RN_I48_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_IPRH_RN_I48_MASK                                                                        ((uint32_t)0x00010000U)

#define EDMA_TPCC_IPRH_RN_I37_SHIFT                                                                       ((uint32_t)5U)
#define EDMA_TPCC_IPRH_RN_I37_MASK                                                                        ((uint32_t)0x00000020U)

#define EDMA_TPCC_IPRH_RN_I61_SHIFT                                                                       ((uint32_t)29U)
#define EDMA_TPCC_IPRH_RN_I61_MASK                                                                        ((uint32_t)0x20000000U)

#define EDMA_TPCC_IPRH_RN_I38_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_IPRH_RN_I38_MASK                                                                        ((uint32_t)0x00000040U)

#define EDMA_TPCC_IPRH_RN_I58_SHIFT                                                                       ((uint32_t)26U)
#define EDMA_TPCC_IPRH_RN_I58_MASK                                                                        ((uint32_t)0x04000000U)

#define EDMA_TPCC_IPRH_RN_I46_SHIFT                                                                       ((uint32_t)14U)
#define EDMA_TPCC_IPRH_RN_I46_MASK                                                                        ((uint32_t)0x00004000U)

#define EDMA_TPCC_IPRH_RN_I45_SHIFT                                                                       ((uint32_t)13U)
#define EDMA_TPCC_IPRH_RN_I45_MASK                                                                        ((uint32_t)0x00002000U)

#define EDMA_TPCC_IPRH_RN_I57_SHIFT                                                                       ((uint32_t)25U)
#define EDMA_TPCC_IPRH_RN_I57_MASK                                                                        ((uint32_t)0x02000000U)

#define EDMA_TPCC_IPRH_RN_I44_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_IPRH_RN_I44_MASK                                                                        ((uint32_t)0x00001000U)

#define EDMA_TPCC_IPRH_RN_I56_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_IPRH_RN_I56_MASK                                                                        ((uint32_t)0x01000000U)

#define EDMA_TPCC_IPRH_RN_I63_SHIFT                                                                       ((uint32_t)31U)
#define EDMA_TPCC_IPRH_RN_I63_MASK                                                                        ((uint32_t)0x80000000U)

#define EDMA_TPCC_IPRH_RN_I43_SHIFT                                                                       ((uint32_t)11U)
#define EDMA_TPCC_IPRH_RN_I43_MASK                                                                        ((uint32_t)0x00000800U)

#define EDMA_TPCC_IPRH_RN_I55_SHIFT                                                                       ((uint32_t)23U)
#define EDMA_TPCC_IPRH_RN_I55_MASK                                                                        ((uint32_t)0x00800000U)

#define EDMA_TPCC_IPRH_RN_I62_SHIFT                                                                       ((uint32_t)30U)
#define EDMA_TPCC_IPRH_RN_I62_MASK                                                                        ((uint32_t)0x40000000U)

#define EDMA_TPCC_IPRH_RN_I42_SHIFT                                                                       ((uint32_t)10U)
#define EDMA_TPCC_IPRH_RN_I42_MASK                                                                        ((uint32_t)0x00000400U)

#define EDMA_TPCC_IPRH_RN_I54_SHIFT                                                                       ((uint32_t)22U)
#define EDMA_TPCC_IPRH_RN_I54_MASK                                                                        ((uint32_t)0x00400000U)

#define EDMA_TPCC_CER_RN_E6_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_CER_RN_E6_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_CER_RN_E25_SHIFT                                                                        ((uint32_t)25U)
#define EDMA_TPCC_CER_RN_E25_MASK                                                                         ((uint32_t)0x02000000U)

#define EDMA_TPCC_CER_RN_E18_SHIFT                                                                        ((uint32_t)18U)
#define EDMA_TPCC_CER_RN_E18_MASK                                                                         ((uint32_t)0x00040000U)

#define EDMA_TPCC_CER_RN_E7_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_CER_RN_E7_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_CER_RN_E24_SHIFT                                                                        ((uint32_t)24U)
#define EDMA_TPCC_CER_RN_E24_MASK                                                                         ((uint32_t)0x01000000U)

#define EDMA_TPCC_CER_RN_E31_SHIFT                                                                        ((uint32_t)31U)
#define EDMA_TPCC_CER_RN_E31_MASK                                                                         ((uint32_t)0x80000000U)

#define EDMA_TPCC_CER_RN_E8_SHIFT                                                                         ((uint32_t)8U)
#define EDMA_TPCC_CER_RN_E8_MASK                                                                          ((uint32_t)0x00000100U)

#define EDMA_TPCC_CER_RN_E26_SHIFT                                                                        ((uint32_t)26U)
#define EDMA_TPCC_CER_RN_E26_MASK                                                                         ((uint32_t)0x04000000U)

#define EDMA_TPCC_CER_RN_E29_SHIFT                                                                        ((uint32_t)29U)
#define EDMA_TPCC_CER_RN_E29_MASK                                                                         ((uint32_t)0x20000000U)

#define EDMA_TPCC_CER_RN_E9_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_CER_RN_E9_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_CER_RN_E30_SHIFT                                                                        ((uint32_t)30U)
#define EDMA_TPCC_CER_RN_E30_MASK                                                                         ((uint32_t)0x40000000U)

#define EDMA_TPCC_CER_RN_E10_SHIFT                                                                        ((uint32_t)10U)
#define EDMA_TPCC_CER_RN_E10_MASK                                                                         ((uint32_t)0x00000400U)

#define EDMA_TPCC_CER_RN_E28_SHIFT                                                                        ((uint32_t)28U)
#define EDMA_TPCC_CER_RN_E28_MASK                                                                         ((uint32_t)0x10000000U)

#define EDMA_TPCC_CER_RN_E11_SHIFT                                                                        ((uint32_t)11U)
#define EDMA_TPCC_CER_RN_E11_MASK                                                                         ((uint32_t)0x00000800U)

#define EDMA_TPCC_CER_RN_E27_SHIFT                                                                        ((uint32_t)27U)
#define EDMA_TPCC_CER_RN_E27_MASK                                                                         ((uint32_t)0x08000000U)

#define EDMA_TPCC_CER_RN_E0_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_CER_RN_E0_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_CER_RN_E12_SHIFT                                                                        ((uint32_t)12U)
#define EDMA_TPCC_CER_RN_E12_MASK                                                                         ((uint32_t)0x00001000U)

#define EDMA_TPCC_CER_RN_E1_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_CER_RN_E1_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_CER_RN_E13_SHIFT                                                                        ((uint32_t)13U)
#define EDMA_TPCC_CER_RN_E13_MASK                                                                         ((uint32_t)0x00002000U)

#define EDMA_TPCC_CER_RN_E19_SHIFT                                                                        ((uint32_t)19U)
#define EDMA_TPCC_CER_RN_E19_MASK                                                                         ((uint32_t)0x00080000U)

#define EDMA_TPCC_CER_RN_E2_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_CER_RN_E2_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_CER_RN_E14_SHIFT                                                                        ((uint32_t)14U)
#define EDMA_TPCC_CER_RN_E14_MASK                                                                         ((uint32_t)0x00004000U)

#define EDMA_TPCC_CER_RN_E3_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_CER_RN_E3_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_CER_RN_E15_SHIFT                                                                        ((uint32_t)15U)
#define EDMA_TPCC_CER_RN_E15_MASK                                                                         ((uint32_t)0x00008000U)

#define EDMA_TPCC_CER_RN_E21_SHIFT                                                                        ((uint32_t)21U)
#define EDMA_TPCC_CER_RN_E21_MASK                                                                         ((uint32_t)0x00200000U)

#define EDMA_TPCC_CER_RN_E20_SHIFT                                                                        ((uint32_t)20U)
#define EDMA_TPCC_CER_RN_E20_MASK                                                                         ((uint32_t)0x00100000U)

#define EDMA_TPCC_CER_RN_E4_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_CER_RN_E4_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_CER_RN_E23_SHIFT                                                                        ((uint32_t)23U)
#define EDMA_TPCC_CER_RN_E23_MASK                                                                         ((uint32_t)0x00800000U)

#define EDMA_TPCC_CER_RN_E16_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_CER_RN_E16_MASK                                                                         ((uint32_t)0x00010000U)

#define EDMA_TPCC_CER_RN_E5_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_CER_RN_E5_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_CER_RN_E22_SHIFT                                                                        ((uint32_t)22U)
#define EDMA_TPCC_CER_RN_E22_MASK                                                                         ((uint32_t)0x00400000U)

#define EDMA_TPCC_CER_RN_E17_SHIFT                                                                        ((uint32_t)17U)
#define EDMA_TPCC_CER_RN_E17_MASK                                                                         ((uint32_t)0x00020000U)

#define EDMA_TPCC_IECRH_RN_I35_SHIFT                                                                      ((uint32_t)3U)
#define EDMA_TPCC_IECRH_RN_I35_MASK                                                                       ((uint32_t)0x00000008U)

#define EDMA_TPCC_IECRH_RN_I48_SHIFT                                                                      ((uint32_t)16U)
#define EDMA_TPCC_IECRH_RN_I48_MASK                                                                       ((uint32_t)0x00010000U)

#define EDMA_TPCC_IECRH_RN_I56_SHIFT                                                                      ((uint32_t)24U)
#define EDMA_TPCC_IECRH_RN_I56_MASK                                                                       ((uint32_t)0x01000000U)

#define EDMA_TPCC_IECRH_RN_I34_SHIFT                                                                      ((uint32_t)2U)
#define EDMA_TPCC_IECRH_RN_I34_MASK                                                                       ((uint32_t)0x00000004U)

#define EDMA_TPCC_IECRH_RN_I47_SHIFT                                                                      ((uint32_t)15U)
#define EDMA_TPCC_IECRH_RN_I47_MASK                                                                       ((uint32_t)0x00008000U)

#define EDMA_TPCC_IECRH_RN_I46_SHIFT                                                                      ((uint32_t)14U)
#define EDMA_TPCC_IECRH_RN_I46_MASK                                                                       ((uint32_t)0x00004000U)

#define EDMA_TPCC_IECRH_RN_I55_SHIFT                                                                      ((uint32_t)23U)
#define EDMA_TPCC_IECRH_RN_I55_MASK                                                                       ((uint32_t)0x00800000U)

#define EDMA_TPCC_IECRH_RN_I45_SHIFT                                                                      ((uint32_t)13U)
#define EDMA_TPCC_IECRH_RN_I45_MASK                                                                       ((uint32_t)0x00002000U)

#define EDMA_TPCC_IECRH_RN_I58_SHIFT                                                                      ((uint32_t)26U)
#define EDMA_TPCC_IECRH_RN_I58_MASK                                                                       ((uint32_t)0x04000000U)

#define EDMA_TPCC_IECRH_RN_I32_SHIFT                                                                      ((uint32_t)0U)
#define EDMA_TPCC_IECRH_RN_I32_MASK                                                                       ((uint32_t)0x00000001U)

#define EDMA_TPCC_IECRH_RN_I44_SHIFT                                                                      ((uint32_t)12U)
#define EDMA_TPCC_IECRH_RN_I44_MASK                                                                       ((uint32_t)0x00001000U)

#define EDMA_TPCC_IECRH_RN_I33_SHIFT                                                                      ((uint32_t)1U)
#define EDMA_TPCC_IECRH_RN_I33_MASK                                                                       ((uint32_t)0x00000002U)

#define EDMA_TPCC_IECRH_RN_I57_SHIFT                                                                      ((uint32_t)25U)
#define EDMA_TPCC_IECRH_RN_I57_MASK                                                                       ((uint32_t)0x02000000U)

#define EDMA_TPCC_IECRH_RN_I43_SHIFT                                                                      ((uint32_t)11U)
#define EDMA_TPCC_IECRH_RN_I43_MASK                                                                       ((uint32_t)0x00000800U)

#define EDMA_TPCC_IECRH_RN_I60_SHIFT                                                                      ((uint32_t)28U)
#define EDMA_TPCC_IECRH_RN_I60_MASK                                                                       ((uint32_t)0x10000000U)

#define EDMA_TPCC_IECRH_RN_I42_SHIFT                                                                      ((uint32_t)10U)
#define EDMA_TPCC_IECRH_RN_I42_MASK                                                                       ((uint32_t)0x00000400U)

#define EDMA_TPCC_IECRH_RN_I59_SHIFT                                                                      ((uint32_t)27U)
#define EDMA_TPCC_IECRH_RN_I59_MASK                                                                       ((uint32_t)0x08000000U)

#define EDMA_TPCC_IECRH_RN_I41_SHIFT                                                                      ((uint32_t)9U)
#define EDMA_TPCC_IECRH_RN_I41_MASK                                                                       ((uint32_t)0x00000200U)

#define EDMA_TPCC_IECRH_RN_I62_SHIFT                                                                      ((uint32_t)30U)
#define EDMA_TPCC_IECRH_RN_I62_MASK                                                                       ((uint32_t)0x40000000U)

#define EDMA_TPCC_IECRH_RN_I61_SHIFT                                                                      ((uint32_t)29U)
#define EDMA_TPCC_IECRH_RN_I61_MASK                                                                       ((uint32_t)0x20000000U)

#define EDMA_TPCC_IECRH_RN_I52_SHIFT                                                                      ((uint32_t)20U)
#define EDMA_TPCC_IECRH_RN_I52_MASK                                                                       ((uint32_t)0x00100000U)

#define EDMA_TPCC_IECRH_RN_I38_SHIFT                                                                      ((uint32_t)6U)
#define EDMA_TPCC_IECRH_RN_I38_MASK                                                                       ((uint32_t)0x00000040U)

#define EDMA_TPCC_IECRH_RN_I40_SHIFT                                                                      ((uint32_t)8U)
#define EDMA_TPCC_IECRH_RN_I40_MASK                                                                       ((uint32_t)0x00000100U)

#define EDMA_TPCC_IECRH_RN_I51_SHIFT                                                                      ((uint32_t)19U)
#define EDMA_TPCC_IECRH_RN_I51_MASK                                                                       ((uint32_t)0x00080000U)

#define EDMA_TPCC_IECRH_RN_I50_SHIFT                                                                      ((uint32_t)18U)
#define EDMA_TPCC_IECRH_RN_I50_MASK                                                                       ((uint32_t)0x00040000U)

#define EDMA_TPCC_IECRH_RN_I63_SHIFT                                                                      ((uint32_t)31U)
#define EDMA_TPCC_IECRH_RN_I63_MASK                                                                       ((uint32_t)0x80000000U)

#define EDMA_TPCC_IECRH_RN_I39_SHIFT                                                                      ((uint32_t)7U)
#define EDMA_TPCC_IECRH_RN_I39_MASK                                                                       ((uint32_t)0x00000080U)

#define EDMA_TPCC_IECRH_RN_I54_SHIFT                                                                      ((uint32_t)22U)
#define EDMA_TPCC_IECRH_RN_I54_MASK                                                                       ((uint32_t)0x00400000U)

#define EDMA_TPCC_IECRH_RN_I36_SHIFT                                                                      ((uint32_t)4U)
#define EDMA_TPCC_IECRH_RN_I36_MASK                                                                       ((uint32_t)0x00000010U)

#define EDMA_TPCC_IECRH_RN_I53_SHIFT                                                                      ((uint32_t)21U)
#define EDMA_TPCC_IECRH_RN_I53_MASK                                                                       ((uint32_t)0x00200000U)

#define EDMA_TPCC_IECRH_RN_I49_SHIFT                                                                      ((uint32_t)17U)
#define EDMA_TPCC_IECRH_RN_I49_MASK                                                                       ((uint32_t)0x00020000U)

#define EDMA_TPCC_IECRH_RN_I37_SHIFT                                                                      ((uint32_t)5U)
#define EDMA_TPCC_IECRH_RN_I37_MASK                                                                       ((uint32_t)0x00000020U)

#define EDMA_TPCC_IECR_RN_I27_SHIFT                                                                       ((uint32_t)27U)
#define EDMA_TPCC_IECR_RN_I27_MASK                                                                        ((uint32_t)0x08000000U)

#define EDMA_TPCC_IECR_RN_I28_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_IECR_RN_I28_MASK                                                                        ((uint32_t)0x10000000U)

#define EDMA_TPCC_IECR_RN_I25_SHIFT                                                                       ((uint32_t)25U)
#define EDMA_TPCC_IECR_RN_I25_MASK                                                                        ((uint32_t)0x02000000U)

#define EDMA_TPCC_IECR_RN_I16_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_IECR_RN_I16_MASK                                                                        ((uint32_t)0x00010000U)

#define EDMA_TPCC_IECR_RN_I26_SHIFT                                                                       ((uint32_t)26U)
#define EDMA_TPCC_IECR_RN_I26_MASK                                                                        ((uint32_t)0x04000000U)

#define EDMA_TPCC_IECR_RN_I15_SHIFT                                                                       ((uint32_t)15U)
#define EDMA_TPCC_IECR_RN_I15_MASK                                                                        ((uint32_t)0x00008000U)

#define EDMA_TPCC_IECR_RN_I14_SHIFT                                                                       ((uint32_t)14U)
#define EDMA_TPCC_IECR_RN_I14_MASK                                                                        ((uint32_t)0x00004000U)

#define EDMA_TPCC_IECR_RN_I13_SHIFT                                                                       ((uint32_t)13U)
#define EDMA_TPCC_IECR_RN_I13_MASK                                                                        ((uint32_t)0x00002000U)

#define EDMA_TPCC_IECR_RN_I0_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_IECR_RN_I0_MASK                                                                         ((uint32_t)0x00000001U)

#define EDMA_TPCC_IECR_RN_I22_SHIFT                                                                       ((uint32_t)22U)
#define EDMA_TPCC_IECR_RN_I22_MASK                                                                        ((uint32_t)0x00400000U)

#define EDMA_TPCC_IECR_RN_I10_SHIFT                                                                       ((uint32_t)10U)
#define EDMA_TPCC_IECR_RN_I10_MASK                                                                        ((uint32_t)0x00000400U)

#define EDMA_TPCC_IECR_RN_I21_SHIFT                                                                       ((uint32_t)21U)
#define EDMA_TPCC_IECR_RN_I21_MASK                                                                        ((uint32_t)0x00200000U)

#define EDMA_TPCC_IECR_RN_I9_SHIFT                                                                        ((uint32_t)9U)
#define EDMA_TPCC_IECR_RN_I9_MASK                                                                         ((uint32_t)0x00000200U)

#define EDMA_TPCC_IECR_RN_I1_SHIFT                                                                        ((uint32_t)1U)
#define EDMA_TPCC_IECR_RN_I1_MASK                                                                         ((uint32_t)0x00000002U)

#define EDMA_TPCC_IECR_RN_I24_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_IECR_RN_I24_MASK                                                                        ((uint32_t)0x01000000U)

#define EDMA_TPCC_IECR_RN_I3_SHIFT                                                                        ((uint32_t)3U)
#define EDMA_TPCC_IECR_RN_I3_MASK                                                                         ((uint32_t)0x00000008U)

#define EDMA_TPCC_IECR_RN_I2_SHIFT                                                                        ((uint32_t)2U)
#define EDMA_TPCC_IECR_RN_I2_MASK                                                                         ((uint32_t)0x00000004U)

#define EDMA_TPCC_IECR_RN_I12_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_IECR_RN_I12_MASK                                                                        ((uint32_t)0x00001000U)

#define EDMA_TPCC_IECR_RN_I23_SHIFT                                                                       ((uint32_t)23U)
#define EDMA_TPCC_IECR_RN_I23_MASK                                                                        ((uint32_t)0x00800000U)

#define EDMA_TPCC_IECR_RN_I4_SHIFT                                                                        ((uint32_t)4U)
#define EDMA_TPCC_IECR_RN_I4_MASK                                                                         ((uint32_t)0x00000010U)

#define EDMA_TPCC_IECR_RN_I11_SHIFT                                                                       ((uint32_t)11U)
#define EDMA_TPCC_IECR_RN_I11_MASK                                                                        ((uint32_t)0x00000800U)

#define EDMA_TPCC_IECR_RN_I6_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_IECR_RN_I6_MASK                                                                         ((uint32_t)0x00000040U)

#define EDMA_TPCC_IECR_RN_I31_SHIFT                                                                       ((uint32_t)31U)
#define EDMA_TPCC_IECR_RN_I31_MASK                                                                        ((uint32_t)0x80000000U)

#define EDMA_TPCC_IECR_RN_I18_SHIFT                                                                       ((uint32_t)18U)
#define EDMA_TPCC_IECR_RN_I18_MASK                                                                        ((uint32_t)0x00040000U)

#define EDMA_TPCC_IECR_RN_I17_SHIFT                                                                       ((uint32_t)17U)
#define EDMA_TPCC_IECR_RN_I17_MASK                                                                        ((uint32_t)0x00020000U)

#define EDMA_TPCC_IECR_RN_I5_SHIFT                                                                        ((uint32_t)5U)
#define EDMA_TPCC_IECR_RN_I5_MASK                                                                         ((uint32_t)0x00000020U)

#define EDMA_TPCC_IECR_RN_I20_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_IECR_RN_I20_MASK                                                                        ((uint32_t)0x00100000U)

#define EDMA_TPCC_IECR_RN_I29_SHIFT                                                                       ((uint32_t)29U)
#define EDMA_TPCC_IECR_RN_I29_MASK                                                                        ((uint32_t)0x20000000U)

#define EDMA_TPCC_IECR_RN_I8_SHIFT                                                                        ((uint32_t)8U)
#define EDMA_TPCC_IECR_RN_I8_MASK                                                                         ((uint32_t)0x00000100U)

#define EDMA_TPCC_IECR_RN_I19_SHIFT                                                                       ((uint32_t)19U)
#define EDMA_TPCC_IECR_RN_I19_MASK                                                                        ((uint32_t)0x00080000U)

#define EDMA_TPCC_IECR_RN_I30_SHIFT                                                                       ((uint32_t)30U)
#define EDMA_TPCC_IECR_RN_I30_MASK                                                                        ((uint32_t)0x40000000U)

#define EDMA_TPCC_IECR_RN_I7_SHIFT                                                                        ((uint32_t)7U)
#define EDMA_TPCC_IECR_RN_I7_MASK                                                                         ((uint32_t)0x00000080U)

#define EDMA_TPCC_QSER_RN_E4_SHIFT                                                                        ((uint32_t)4U)
#define EDMA_TPCC_QSER_RN_E4_MASK                                                                         ((uint32_t)0x00000010U)

#define EDMA_TPCC_QSER_RN_E3_SHIFT                                                                        ((uint32_t)3U)
#define EDMA_TPCC_QSER_RN_E3_MASK                                                                         ((uint32_t)0x00000008U)

#define EDMA_TPCC_QSER_RN_E2_SHIFT                                                                        ((uint32_t)2U)
#define EDMA_TPCC_QSER_RN_E2_MASK                                                                         ((uint32_t)0x00000004U)

#define EDMA_TPCC_QSER_RN_E1_SHIFT                                                                        ((uint32_t)1U)
#define EDMA_TPCC_QSER_RN_E1_MASK                                                                         ((uint32_t)0x00000002U)

#define EDMA_TPCC_QSER_RN_E0_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_QSER_RN_E0_MASK                                                                         ((uint32_t)0x00000001U)

#define EDMA_TPCC_QSER_RN_E7_SHIFT                                                                        ((uint32_t)7U)
#define EDMA_TPCC_QSER_RN_E7_MASK                                                                         ((uint32_t)0x00000080U)

#define EDMA_TPCC_QSER_RN_E5_SHIFT                                                                        ((uint32_t)5U)
#define EDMA_TPCC_QSER_RN_E5_MASK                                                                         ((uint32_t)0x00000020U)

#define EDMA_TPCC_QSER_RN_E6_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_QSER_RN_E6_MASK                                                                         ((uint32_t)0x00000040U)

#define EDMA_TPCC_QSER_RN_RESERVED_0_SHIFT                                                                ((uint32_t)8U)
#define EDMA_TPCC_QSER_RN_RESERVED_0_MASK                                                                 ((uint32_t)0xffffff00U)

#define EDMA_TPCC_IERH_RN_I48_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_IERH_RN_I48_MASK                                                                        ((uint32_t)0x00010000U)

#define EDMA_TPCC_IERH_RN_I35_SHIFT                                                                       ((uint32_t)3U)
#define EDMA_TPCC_IERH_RN_I35_MASK                                                                        ((uint32_t)0x00000008U)

#define EDMA_TPCC_IERH_RN_I34_SHIFT                                                                       ((uint32_t)2U)
#define EDMA_TPCC_IERH_RN_I34_MASK                                                                        ((uint32_t)0x00000004U)

#define EDMA_TPCC_IERH_RN_I46_SHIFT                                                                       ((uint32_t)14U)
#define EDMA_TPCC_IERH_RN_I46_MASK                                                                        ((uint32_t)0x00004000U)

#define EDMA_TPCC_IERH_RN_I59_SHIFT                                                                       ((uint32_t)27U)
#define EDMA_TPCC_IERH_RN_I59_MASK                                                                        ((uint32_t)0x08000000U)

#define EDMA_TPCC_IERH_RN_I33_SHIFT                                                                       ((uint32_t)1U)
#define EDMA_TPCC_IERH_RN_I33_MASK                                                                        ((uint32_t)0x00000002U)

#define EDMA_TPCC_IERH_RN_I45_SHIFT                                                                       ((uint32_t)13U)
#define EDMA_TPCC_IERH_RN_I45_MASK                                                                        ((uint32_t)0x00002000U)

#define EDMA_TPCC_IERH_RN_I60_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_IERH_RN_I60_MASK                                                                        ((uint32_t)0x10000000U)

#define EDMA_TPCC_IERH_RN_I32_SHIFT                                                                       ((uint32_t)0U)
#define EDMA_TPCC_IERH_RN_I32_MASK                                                                        ((uint32_t)0x00000001U)

#define EDMA_TPCC_IERH_RN_I44_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_IERH_RN_I44_MASK                                                                        ((uint32_t)0x00001000U)

#define EDMA_TPCC_IERH_RN_I61_SHIFT                                                                       ((uint32_t)29U)
#define EDMA_TPCC_IERH_RN_I61_MASK                                                                        ((uint32_t)0x20000000U)

#define EDMA_TPCC_IERH_RN_I43_SHIFT                                                                       ((uint32_t)11U)
#define EDMA_TPCC_IERH_RN_I43_MASK                                                                        ((uint32_t)0x00000800U)

#define EDMA_TPCC_IERH_RN_I49_SHIFT                                                                       ((uint32_t)17U)
#define EDMA_TPCC_IERH_RN_I49_MASK                                                                        ((uint32_t)0x00020000U)

#define EDMA_TPCC_IERH_RN_I62_SHIFT                                                                       ((uint32_t)30U)
#define EDMA_TPCC_IERH_RN_I62_MASK                                                                        ((uint32_t)0x40000000U)

#define EDMA_TPCC_IERH_RN_I50_SHIFT                                                                       ((uint32_t)18U)
#define EDMA_TPCC_IERH_RN_I50_MASK                                                                        ((uint32_t)0x00040000U)

#define EDMA_TPCC_IERH_RN_I42_SHIFT                                                                       ((uint32_t)10U)
#define EDMA_TPCC_IERH_RN_I42_MASK                                                                        ((uint32_t)0x00000400U)

#define EDMA_TPCC_IERH_RN_I63_SHIFT                                                                       ((uint32_t)31U)
#define EDMA_TPCC_IERH_RN_I63_MASK                                                                        ((uint32_t)0x80000000U)

#define EDMA_TPCC_IERH_RN_I51_SHIFT                                                                       ((uint32_t)19U)
#define EDMA_TPCC_IERH_RN_I51_MASK                                                                        ((uint32_t)0x00080000U)

#define EDMA_TPCC_IERH_RN_I41_SHIFT                                                                       ((uint32_t)9U)
#define EDMA_TPCC_IERH_RN_I41_MASK                                                                        ((uint32_t)0x00000200U)

#define EDMA_TPCC_IERH_RN_I52_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_IERH_RN_I52_MASK                                                                        ((uint32_t)0x00100000U)

#define EDMA_TPCC_IERH_RN_I40_SHIFT                                                                       ((uint32_t)8U)
#define EDMA_TPCC_IERH_RN_I40_MASK                                                                        ((uint32_t)0x00000100U)

#define EDMA_TPCC_IERH_RN_I53_SHIFT                                                                       ((uint32_t)21U)
#define EDMA_TPCC_IERH_RN_I53_MASK                                                                        ((uint32_t)0x00200000U)

#define EDMA_TPCC_IERH_RN_I39_SHIFT                                                                       ((uint32_t)7U)
#define EDMA_TPCC_IERH_RN_I39_MASK                                                                        ((uint32_t)0x00000080U)

#define EDMA_TPCC_IERH_RN_I54_SHIFT                                                                       ((uint32_t)22U)
#define EDMA_TPCC_IERH_RN_I54_MASK                                                                        ((uint32_t)0x00400000U)

#define EDMA_TPCC_IERH_RN_I55_SHIFT                                                                       ((uint32_t)23U)
#define EDMA_TPCC_IERH_RN_I55_MASK                                                                        ((uint32_t)0x00800000U)

#define EDMA_TPCC_IERH_RN_I56_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_IERH_RN_I56_MASK                                                                        ((uint32_t)0x01000000U)

#define EDMA_TPCC_IERH_RN_I38_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_IERH_RN_I38_MASK                                                                        ((uint32_t)0x00000040U)

#define EDMA_TPCC_IERH_RN_I57_SHIFT                                                                       ((uint32_t)25U)
#define EDMA_TPCC_IERH_RN_I57_MASK                                                                        ((uint32_t)0x02000000U)

#define EDMA_TPCC_IERH_RN_I58_SHIFT                                                                       ((uint32_t)26U)
#define EDMA_TPCC_IERH_RN_I58_MASK                                                                        ((uint32_t)0x04000000U)

#define EDMA_TPCC_IERH_RN_I37_SHIFT                                                                       ((uint32_t)5U)
#define EDMA_TPCC_IERH_RN_I37_MASK                                                                        ((uint32_t)0x00000020U)

#define EDMA_TPCC_IERH_RN_I47_SHIFT                                                                       ((uint32_t)15U)
#define EDMA_TPCC_IERH_RN_I47_MASK                                                                        ((uint32_t)0x00008000U)

#define EDMA_TPCC_IERH_RN_I36_SHIFT                                                                       ((uint32_t)4U)
#define EDMA_TPCC_IERH_RN_I36_MASK                                                                        ((uint32_t)0x00000010U)

#define EDMA_TPCC_ECR_RN_E16_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_ECR_RN_E16_MASK                                                                         ((uint32_t)0x00010000U)

#define EDMA_TPCC_ECR_RN_E10_SHIFT                                                                        ((uint32_t)10U)
#define EDMA_TPCC_ECR_RN_E10_MASK                                                                         ((uint32_t)0x00000400U)

#define EDMA_TPCC_ECR_RN_E30_SHIFT                                                                        ((uint32_t)30U)
#define EDMA_TPCC_ECR_RN_E30_MASK                                                                         ((uint32_t)0x40000000U)

#define EDMA_TPCC_ECR_RN_E19_SHIFT                                                                        ((uint32_t)19U)
#define EDMA_TPCC_ECR_RN_E19_MASK                                                                         ((uint32_t)0x00080000U)

#define EDMA_TPCC_ECR_RN_E29_SHIFT                                                                        ((uint32_t)29U)
#define EDMA_TPCC_ECR_RN_E29_MASK                                                                         ((uint32_t)0x20000000U)

#define EDMA_TPCC_ECR_RN_E12_SHIFT                                                                        ((uint32_t)12U)
#define EDMA_TPCC_ECR_RN_E12_MASK                                                                         ((uint32_t)0x00001000U)

#define EDMA_TPCC_ECR_RN_E18_SHIFT                                                                        ((uint32_t)18U)
#define EDMA_TPCC_ECR_RN_E18_MASK                                                                         ((uint32_t)0x00040000U)

#define EDMA_TPCC_ECR_RN_E11_SHIFT                                                                        ((uint32_t)11U)
#define EDMA_TPCC_ECR_RN_E11_MASK                                                                         ((uint32_t)0x00000800U)

#define EDMA_TPCC_ECR_RN_E21_SHIFT                                                                        ((uint32_t)21U)
#define EDMA_TPCC_ECR_RN_E21_MASK                                                                         ((uint32_t)0x00200000U)

#define EDMA_TPCC_ECR_RN_E31_SHIFT                                                                        ((uint32_t)31U)
#define EDMA_TPCC_ECR_RN_E31_MASK                                                                         ((uint32_t)0x80000000U)

#define EDMA_TPCC_ECR_RN_E14_SHIFT                                                                        ((uint32_t)14U)
#define EDMA_TPCC_ECR_RN_E14_MASK                                                                         ((uint32_t)0x00004000U)

#define EDMA_TPCC_ECR_RN_E26_SHIFT                                                                        ((uint32_t)26U)
#define EDMA_TPCC_ECR_RN_E26_MASK                                                                         ((uint32_t)0x04000000U)

#define EDMA_TPCC_ECR_RN_E13_SHIFT                                                                        ((uint32_t)13U)
#define EDMA_TPCC_ECR_RN_E13_MASK                                                                         ((uint32_t)0x00002000U)

#define EDMA_TPCC_ECR_RN_E25_SHIFT                                                                        ((uint32_t)25U)
#define EDMA_TPCC_ECR_RN_E25_MASK                                                                         ((uint32_t)0x02000000U)

#define EDMA_TPCC_ECR_RN_E15_SHIFT                                                                        ((uint32_t)15U)
#define EDMA_TPCC_ECR_RN_E15_MASK                                                                         ((uint32_t)0x00008000U)

#define EDMA_TPCC_ECR_RN_E28_SHIFT                                                                        ((uint32_t)28U)
#define EDMA_TPCC_ECR_RN_E28_MASK                                                                         ((uint32_t)0x10000000U)

#define EDMA_TPCC_ECR_RN_E17_SHIFT                                                                        ((uint32_t)17U)
#define EDMA_TPCC_ECR_RN_E17_MASK                                                                         ((uint32_t)0x00020000U)

#define EDMA_TPCC_ECR_RN_E27_SHIFT                                                                        ((uint32_t)27U)
#define EDMA_TPCC_ECR_RN_E27_MASK                                                                         ((uint32_t)0x08000000U)

#define EDMA_TPCC_ECR_RN_E4_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_ECR_RN_E4_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_ECR_RN_E24_SHIFT                                                                        ((uint32_t)24U)
#define EDMA_TPCC_ECR_RN_E24_MASK                                                                         ((uint32_t)0x01000000U)

#define EDMA_TPCC_ECR_RN_E2_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_ECR_RN_E2_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_ECR_RN_E3_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_ECR_RN_E3_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_ECR_RN_E0_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_ECR_RN_E0_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_ECR_RN_E20_SHIFT                                                                        ((uint32_t)20U)
#define EDMA_TPCC_ECR_RN_E20_MASK                                                                         ((uint32_t)0x00100000U)

#define EDMA_TPCC_ECR_RN_E6_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_ECR_RN_E6_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_ECR_RN_E1_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_ECR_RN_E1_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_ECR_RN_E5_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_ECR_RN_E5_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_ECR_RN_E23_SHIFT                                                                        ((uint32_t)23U)
#define EDMA_TPCC_ECR_RN_E23_MASK                                                                         ((uint32_t)0x00800000U)

#define EDMA_TPCC_ECR_RN_E8_SHIFT                                                                         ((uint32_t)8U)
#define EDMA_TPCC_ECR_RN_E8_MASK                                                                          ((uint32_t)0x00000100U)

#define EDMA_TPCC_ECR_RN_E9_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_ECR_RN_E9_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_ECR_RN_E22_SHIFT                                                                        ((uint32_t)22U)
#define EDMA_TPCC_ECR_RN_E22_MASK                                                                         ((uint32_t)0x00400000U)

#define EDMA_TPCC_ECR_RN_E7_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_ECR_RN_E7_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_EERH_RN_E47_SHIFT                                                                       ((uint32_t)15U)
#define EDMA_TPCC_EERH_RN_E47_MASK                                                                        ((uint32_t)0x00008000U)

#define EDMA_TPCC_EERH_RN_E45_SHIFT                                                                       ((uint32_t)13U)
#define EDMA_TPCC_EERH_RN_E45_MASK                                                                        ((uint32_t)0x00002000U)

#define EDMA_TPCC_EERH_RN_E35_SHIFT                                                                       ((uint32_t)3U)
#define EDMA_TPCC_EERH_RN_E35_MASK                                                                        ((uint32_t)0x00000008U)

#define EDMA_TPCC_EERH_RN_E56_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_EERH_RN_E56_MASK                                                                        ((uint32_t)0x01000000U)

#define EDMA_TPCC_EERH_RN_E46_SHIFT                                                                       ((uint32_t)14U)
#define EDMA_TPCC_EERH_RN_E46_MASK                                                                        ((uint32_t)0x00004000U)

#define EDMA_TPCC_EERH_RN_E36_SHIFT                                                                       ((uint32_t)4U)
#define EDMA_TPCC_EERH_RN_E36_MASK                                                                        ((uint32_t)0x00000010U)

#define EDMA_TPCC_EERH_RN_E55_SHIFT                                                                       ((uint32_t)23U)
#define EDMA_TPCC_EERH_RN_E55_MASK                                                                        ((uint32_t)0x00800000U)

#define EDMA_TPCC_EERH_RN_E33_SHIFT                                                                       ((uint32_t)1U)
#define EDMA_TPCC_EERH_RN_E33_MASK                                                                        ((uint32_t)0x00000002U)

#define EDMA_TPCC_EERH_RN_E54_SHIFT                                                                       ((uint32_t)22U)
#define EDMA_TPCC_EERH_RN_E54_MASK                                                                        ((uint32_t)0x00400000U)

#define EDMA_TPCC_EERH_RN_E43_SHIFT                                                                       ((uint32_t)11U)
#define EDMA_TPCC_EERH_RN_E43_MASK                                                                        ((uint32_t)0x00000800U)

#define EDMA_TPCC_EERH_RN_E53_SHIFT                                                                       ((uint32_t)21U)
#define EDMA_TPCC_EERH_RN_E53_MASK                                                                        ((uint32_t)0x00200000U)

#define EDMA_TPCC_EERH_RN_E63_SHIFT                                                                       ((uint32_t)31U)
#define EDMA_TPCC_EERH_RN_E63_MASK                                                                        ((uint32_t)0x80000000U)

#define EDMA_TPCC_EERH_RN_E34_SHIFT                                                                       ((uint32_t)2U)
#define EDMA_TPCC_EERH_RN_E34_MASK                                                                        ((uint32_t)0x00000004U)

#define EDMA_TPCC_EERH_RN_E44_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_EERH_RN_E44_MASK                                                                        ((uint32_t)0x00001000U)

#define EDMA_TPCC_EERH_RN_E52_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_EERH_RN_E52_MASK                                                                        ((uint32_t)0x00100000U)

#define EDMA_TPCC_EERH_RN_E41_SHIFT                                                                       ((uint32_t)9U)
#define EDMA_TPCC_EERH_RN_E41_MASK                                                                        ((uint32_t)0x00000200U)

#define EDMA_TPCC_EERH_RN_E62_SHIFT                                                                       ((uint32_t)30U)
#define EDMA_TPCC_EERH_RN_E62_MASK                                                                        ((uint32_t)0x40000000U)

#define EDMA_TPCC_EERH_RN_E32_SHIFT                                                                       ((uint32_t)0U)
#define EDMA_TPCC_EERH_RN_E32_MASK                                                                        ((uint32_t)0x00000001U)

#define EDMA_TPCC_EERH_RN_E51_SHIFT                                                                       ((uint32_t)19U)
#define EDMA_TPCC_EERH_RN_E51_MASK                                                                        ((uint32_t)0x00080000U)

#define EDMA_TPCC_EERH_RN_E42_SHIFT                                                                       ((uint32_t)10U)
#define EDMA_TPCC_EERH_RN_E42_MASK                                                                        ((uint32_t)0x00000400U)

#define EDMA_TPCC_EERH_RN_E61_SHIFT                                                                       ((uint32_t)29U)
#define EDMA_TPCC_EERH_RN_E61_MASK                                                                        ((uint32_t)0x20000000U)

#define EDMA_TPCC_EERH_RN_E50_SHIFT                                                                       ((uint32_t)18U)
#define EDMA_TPCC_EERH_RN_E50_MASK                                                                        ((uint32_t)0x00040000U)

#define EDMA_TPCC_EERH_RN_E39_SHIFT                                                                       ((uint32_t)7U)
#define EDMA_TPCC_EERH_RN_E39_MASK                                                                        ((uint32_t)0x00000080U)

#define EDMA_TPCC_EERH_RN_E60_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_EERH_RN_E60_MASK                                                                        ((uint32_t)0x10000000U)

#define EDMA_TPCC_EERH_RN_E49_SHIFT                                                                       ((uint32_t)17U)
#define EDMA_TPCC_EERH_RN_E49_MASK                                                                        ((uint32_t)0x00020000U)

#define EDMA_TPCC_EERH_RN_E40_SHIFT                                                                       ((uint32_t)8U)
#define EDMA_TPCC_EERH_RN_E40_MASK                                                                        ((uint32_t)0x00000100U)

#define EDMA_TPCC_EERH_RN_E59_SHIFT                                                                       ((uint32_t)27U)
#define EDMA_TPCC_EERH_RN_E59_MASK                                                                        ((uint32_t)0x08000000U)

#define EDMA_TPCC_EERH_RN_E48_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_EERH_RN_E48_MASK                                                                        ((uint32_t)0x00010000U)

#define EDMA_TPCC_EERH_RN_E58_SHIFT                                                                       ((uint32_t)26U)
#define EDMA_TPCC_EERH_RN_E58_MASK                                                                        ((uint32_t)0x04000000U)

#define EDMA_TPCC_EERH_RN_E37_SHIFT                                                                       ((uint32_t)5U)
#define EDMA_TPCC_EERH_RN_E37_MASK                                                                        ((uint32_t)0x00000020U)

#define EDMA_TPCC_EERH_RN_E57_SHIFT                                                                       ((uint32_t)25U)
#define EDMA_TPCC_EERH_RN_E57_MASK                                                                        ((uint32_t)0x02000000U)

#define EDMA_TPCC_EERH_RN_E38_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_EERH_RN_E38_MASK                                                                        ((uint32_t)0x00000040U)

#define EDMA_TPCC_IPR_RN_I15_SHIFT                                                                        ((uint32_t)15U)
#define EDMA_TPCC_IPR_RN_I15_MASK                                                                         ((uint32_t)0x00008000U)

#define EDMA_TPCC_IPR_RN_I27_SHIFT                                                                        ((uint32_t)27U)
#define EDMA_TPCC_IPR_RN_I27_MASK                                                                         ((uint32_t)0x08000000U)

#define EDMA_TPCC_IPR_RN_I3_SHIFT                                                                         ((uint32_t)3U)
#define EDMA_TPCC_IPR_RN_I3_MASK                                                                          ((uint32_t)0x00000008U)

#define EDMA_TPCC_IPR_RN_I14_SHIFT                                                                        ((uint32_t)14U)
#define EDMA_TPCC_IPR_RN_I14_MASK                                                                         ((uint32_t)0x00004000U)

#define EDMA_TPCC_IPR_RN_I2_SHIFT                                                                         ((uint32_t)2U)
#define EDMA_TPCC_IPR_RN_I2_MASK                                                                          ((uint32_t)0x00000004U)

#define EDMA_TPCC_IPR_RN_I1_SHIFT                                                                         ((uint32_t)1U)
#define EDMA_TPCC_IPR_RN_I1_MASK                                                                          ((uint32_t)0x00000002U)

#define EDMA_TPCC_IPR_RN_I13_SHIFT                                                                        ((uint32_t)13U)
#define EDMA_TPCC_IPR_RN_I13_MASK                                                                         ((uint32_t)0x00002000U)

#define EDMA_TPCC_IPR_RN_I28_SHIFT                                                                        ((uint32_t)28U)
#define EDMA_TPCC_IPR_RN_I28_MASK                                                                         ((uint32_t)0x10000000U)

#define EDMA_TPCC_IPR_RN_I17_SHIFT                                                                        ((uint32_t)17U)
#define EDMA_TPCC_IPR_RN_I17_MASK                                                                         ((uint32_t)0x00020000U)

#define EDMA_TPCC_IPR_RN_I0_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_IPR_RN_I0_MASK                                                                          ((uint32_t)0x00000001U)

#define EDMA_TPCC_IPR_RN_I12_SHIFT                                                                        ((uint32_t)12U)
#define EDMA_TPCC_IPR_RN_I12_MASK                                                                         ((uint32_t)0x00001000U)

#define EDMA_TPCC_IPR_RN_I29_SHIFT                                                                        ((uint32_t)29U)
#define EDMA_TPCC_IPR_RN_I29_MASK                                                                         ((uint32_t)0x20000000U)

#define EDMA_TPCC_IPR_RN_I6_SHIFT                                                                         ((uint32_t)6U)
#define EDMA_TPCC_IPR_RN_I6_MASK                                                                          ((uint32_t)0x00000040U)

#define EDMA_TPCC_IPR_RN_I26_SHIFT                                                                        ((uint32_t)26U)
#define EDMA_TPCC_IPR_RN_I26_MASK                                                                         ((uint32_t)0x04000000U)

#define EDMA_TPCC_IPR_RN_I5_SHIFT                                                                         ((uint32_t)5U)
#define EDMA_TPCC_IPR_RN_I5_MASK                                                                          ((uint32_t)0x00000020U)

#define EDMA_TPCC_IPR_RN_I4_SHIFT                                                                         ((uint32_t)4U)
#define EDMA_TPCC_IPR_RN_I4_MASK                                                                          ((uint32_t)0x00000010U)

#define EDMA_TPCC_IPR_RN_I16_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_IPR_RN_I16_MASK                                                                         ((uint32_t)0x00010000U)

#define EDMA_TPCC_IPR_RN_I23_SHIFT                                                                        ((uint32_t)23U)
#define EDMA_TPCC_IPR_RN_I23_MASK                                                                         ((uint32_t)0x00800000U)

#define EDMA_TPCC_IPR_RN_I7_SHIFT                                                                         ((uint32_t)7U)
#define EDMA_TPCC_IPR_RN_I7_MASK                                                                          ((uint32_t)0x00000080U)

#define EDMA_TPCC_IPR_RN_I22_SHIFT                                                                        ((uint32_t)22U)
#define EDMA_TPCC_IPR_RN_I22_MASK                                                                         ((uint32_t)0x00400000U)

#define EDMA_TPCC_IPR_RN_I25_SHIFT                                                                        ((uint32_t)25U)
#define EDMA_TPCC_IPR_RN_I25_MASK                                                                         ((uint32_t)0x02000000U)

#define EDMA_TPCC_IPR_RN_I24_SHIFT                                                                        ((uint32_t)24U)
#define EDMA_TPCC_IPR_RN_I24_MASK                                                                         ((uint32_t)0x01000000U)

#define EDMA_TPCC_IPR_RN_I19_SHIFT                                                                        ((uint32_t)19U)
#define EDMA_TPCC_IPR_RN_I19_MASK                                                                         ((uint32_t)0x00080000U)

#define EDMA_TPCC_IPR_RN_I30_SHIFT                                                                        ((uint32_t)30U)
#define EDMA_TPCC_IPR_RN_I30_MASK                                                                         ((uint32_t)0x40000000U)

#define EDMA_TPCC_IPR_RN_I11_SHIFT                                                                        ((uint32_t)11U)
#define EDMA_TPCC_IPR_RN_I11_MASK                                                                         ((uint32_t)0x00000800U)

#define EDMA_TPCC_IPR_RN_I18_SHIFT                                                                        ((uint32_t)18U)
#define EDMA_TPCC_IPR_RN_I18_MASK                                                                         ((uint32_t)0x00040000U)

#define EDMA_TPCC_IPR_RN_I31_SHIFT                                                                        ((uint32_t)31U)
#define EDMA_TPCC_IPR_RN_I31_MASK                                                                         ((uint32_t)0x80000000U)

#define EDMA_TPCC_IPR_RN_I10_SHIFT                                                                        ((uint32_t)10U)
#define EDMA_TPCC_IPR_RN_I10_MASK                                                                         ((uint32_t)0x00000400U)

#define EDMA_TPCC_IPR_RN_I9_SHIFT                                                                         ((uint32_t)9U)
#define EDMA_TPCC_IPR_RN_I9_MASK                                                                          ((uint32_t)0x00000200U)

#define EDMA_TPCC_IPR_RN_I21_SHIFT                                                                        ((uint32_t)21U)
#define EDMA_TPCC_IPR_RN_I21_MASK                                                                         ((uint32_t)0x00200000U)

#define EDMA_TPCC_IPR_RN_I8_SHIFT                                                                         ((uint32_t)8U)
#define EDMA_TPCC_IPR_RN_I8_MASK                                                                          ((uint32_t)0x00000100U)

#define EDMA_TPCC_IPR_RN_I20_SHIFT                                                                        ((uint32_t)20U)
#define EDMA_TPCC_IPR_RN_I20_MASK                                                                         ((uint32_t)0x00100000U)

#define EDMA_TPCC_ESRH_RN_E41_SHIFT                                                                       ((uint32_t)9U)
#define EDMA_TPCC_ESRH_RN_E41_MASK                                                                        ((uint32_t)0x00000200U)

#define EDMA_TPCC_ESRH_RN_E57_SHIFT                                                                       ((uint32_t)25U)
#define EDMA_TPCC_ESRH_RN_E57_MASK                                                                        ((uint32_t)0x02000000U)

#define EDMA_TPCC_ESRH_RN_E46_SHIFT                                                                       ((uint32_t)14U)
#define EDMA_TPCC_ESRH_RN_E46_MASK                                                                        ((uint32_t)0x00004000U)

#define EDMA_TPCC_ESRH_RN_E42_SHIFT                                                                       ((uint32_t)10U)
#define EDMA_TPCC_ESRH_RN_E42_MASK                                                                        ((uint32_t)0x00000400U)

#define EDMA_TPCC_ESRH_RN_E56_SHIFT                                                                       ((uint32_t)24U)
#define EDMA_TPCC_ESRH_RN_E56_MASK                                                                        ((uint32_t)0x01000000U)

#define EDMA_TPCC_ESRH_RN_E33_SHIFT                                                                       ((uint32_t)1U)
#define EDMA_TPCC_ESRH_RN_E33_MASK                                                                        ((uint32_t)0x00000002U)

#define EDMA_TPCC_ESRH_RN_E43_SHIFT                                                                       ((uint32_t)11U)
#define EDMA_TPCC_ESRH_RN_E43_MASK                                                                        ((uint32_t)0x00000800U)

#define EDMA_TPCC_ESRH_RN_E55_SHIFT                                                                       ((uint32_t)23U)
#define EDMA_TPCC_ESRH_RN_E55_MASK                                                                        ((uint32_t)0x00800000U)

#define EDMA_TPCC_ESRH_RN_E32_SHIFT                                                                       ((uint32_t)0U)
#define EDMA_TPCC_ESRH_RN_E32_MASK                                                                        ((uint32_t)0x00000001U)

#define EDMA_TPCC_ESRH_RN_E48_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_ESRH_RN_E48_MASK                                                                        ((uint32_t)0x00010000U)

#define EDMA_TPCC_ESRH_RN_E44_SHIFT                                                                       ((uint32_t)12U)
#define EDMA_TPCC_ESRH_RN_E44_MASK                                                                        ((uint32_t)0x00001000U)

#define EDMA_TPCC_ESRH_RN_E45_SHIFT                                                                       ((uint32_t)13U)
#define EDMA_TPCC_ESRH_RN_E45_MASK                                                                        ((uint32_t)0x00002000U)

#define EDMA_TPCC_ESRH_RN_E49_SHIFT                                                                       ((uint32_t)17U)
#define EDMA_TPCC_ESRH_RN_E49_MASK                                                                        ((uint32_t)0x00020000U)

#define EDMA_TPCC_ESRH_RN_E61_SHIFT                                                                       ((uint32_t)29U)
#define EDMA_TPCC_ESRH_RN_E61_MASK                                                                        ((uint32_t)0x20000000U)

#define EDMA_TPCC_ESRH_RN_E52_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_ESRH_RN_E52_MASK                                                                        ((uint32_t)0x00100000U)

#define EDMA_TPCC_ESRH_RN_E63_SHIFT                                                                       ((uint32_t)31U)
#define EDMA_TPCC_ESRH_RN_E63_MASK                                                                        ((uint32_t)0x80000000U)

#define EDMA_TPCC_ESRH_RN_E34_SHIFT                                                                       ((uint32_t)2U)
#define EDMA_TPCC_ESRH_RN_E34_MASK                                                                        ((uint32_t)0x00000004U)

#define EDMA_TPCC_ESRH_RN_E47_SHIFT                                                                       ((uint32_t)15U)
#define EDMA_TPCC_ESRH_RN_E47_MASK                                                                        ((uint32_t)0x00008000U)

#define EDMA_TPCC_ESRH_RN_E60_SHIFT                                                                       ((uint32_t)28U)
#define EDMA_TPCC_ESRH_RN_E60_MASK                                                                        ((uint32_t)0x10000000U)

#define EDMA_TPCC_ESRH_RN_E59_SHIFT                                                                       ((uint32_t)27U)
#define EDMA_TPCC_ESRH_RN_E59_MASK                                                                        ((uint32_t)0x08000000U)

#define EDMA_TPCC_ESRH_RN_E50_SHIFT                                                                       ((uint32_t)18U)
#define EDMA_TPCC_ESRH_RN_E50_MASK                                                                        ((uint32_t)0x00040000U)

#define EDMA_TPCC_ESRH_RN_E58_SHIFT                                                                       ((uint32_t)26U)
#define EDMA_TPCC_ESRH_RN_E58_MASK                                                                        ((uint32_t)0x04000000U)

#define EDMA_TPCC_ESRH_RN_E53_SHIFT                                                                       ((uint32_t)21U)
#define EDMA_TPCC_ESRH_RN_E53_MASK                                                                        ((uint32_t)0x00200000U)

#define EDMA_TPCC_ESRH_RN_E35_SHIFT                                                                       ((uint32_t)3U)
#define EDMA_TPCC_ESRH_RN_E35_MASK                                                                        ((uint32_t)0x00000008U)

#define EDMA_TPCC_ESRH_RN_E51_SHIFT                                                                       ((uint32_t)19U)
#define EDMA_TPCC_ESRH_RN_E51_MASK                                                                        ((uint32_t)0x00080000U)

#define EDMA_TPCC_ESRH_RN_E54_SHIFT                                                                       ((uint32_t)22U)
#define EDMA_TPCC_ESRH_RN_E54_MASK                                                                        ((uint32_t)0x00400000U)

#define EDMA_TPCC_ESRH_RN_E36_SHIFT                                                                       ((uint32_t)4U)
#define EDMA_TPCC_ESRH_RN_E36_MASK                                                                        ((uint32_t)0x00000010U)

#define EDMA_TPCC_ESRH_RN_E62_SHIFT                                                                       ((uint32_t)30U)
#define EDMA_TPCC_ESRH_RN_E62_MASK                                                                        ((uint32_t)0x40000000U)

#define EDMA_TPCC_ESRH_RN_E37_SHIFT                                                                       ((uint32_t)5U)
#define EDMA_TPCC_ESRH_RN_E37_MASK                                                                        ((uint32_t)0x00000020U)

#define EDMA_TPCC_ESRH_RN_E38_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_ESRH_RN_E38_MASK                                                                        ((uint32_t)0x00000040U)

#define EDMA_TPCC_ESRH_RN_E39_SHIFT                                                                       ((uint32_t)7U)
#define EDMA_TPCC_ESRH_RN_E39_MASK                                                                        ((uint32_t)0x00000080U)

#define EDMA_TPCC_ESRH_RN_E40_SHIFT                                                                       ((uint32_t)8U)
#define EDMA_TPCC_ESRH_RN_E40_MASK                                                                        ((uint32_t)0x00000100U)

#define EDMA_TPCC_QEESR_RN_E5_SHIFT                                                                       ((uint32_t)5U)
#define EDMA_TPCC_QEESR_RN_E5_MASK                                                                        ((uint32_t)0x00000020U)

#define EDMA_TPCC_QEESR_RN_E3_SHIFT                                                                       ((uint32_t)3U)
#define EDMA_TPCC_QEESR_RN_E3_MASK                                                                        ((uint32_t)0x00000008U)

#define EDMA_TPCC_QEESR_RN_E6_SHIFT                                                                       ((uint32_t)6U)
#define EDMA_TPCC_QEESR_RN_E6_MASK                                                                        ((uint32_t)0x00000040U)

#define EDMA_TPCC_QEESR_RN_E4_SHIFT                                                                       ((uint32_t)4U)
#define EDMA_TPCC_QEESR_RN_E4_MASK                                                                        ((uint32_t)0x00000010U)

#define EDMA_TPCC_QEESR_RN_E1_SHIFT                                                                       ((uint32_t)1U)
#define EDMA_TPCC_QEESR_RN_E1_MASK                                                                        ((uint32_t)0x00000002U)

#define EDMA_TPCC_QEESR_RN_E2_SHIFT                                                                       ((uint32_t)2U)
#define EDMA_TPCC_QEESR_RN_E2_MASK                                                                        ((uint32_t)0x00000004U)

#define EDMA_TPCC_QEESR_RN_E0_SHIFT                                                                       ((uint32_t)0U)
#define EDMA_TPCC_QEESR_RN_E0_MASK                                                                        ((uint32_t)0x00000001U)

#define EDMA_TPCC_QEESR_RN_E7_SHIFT                                                                       ((uint32_t)7U)
#define EDMA_TPCC_QEESR_RN_E7_MASK                                                                        ((uint32_t)0x00000080U)

#define EDMA_TPCC_QEESR_RN_RESERVED_0_SHIFT                                                               ((uint32_t)8U)
#define EDMA_TPCC_QEESR_RN_RESERVED_0_MASK                                                                ((uint32_t)0xffffff00U)

#define EDMA_TPCC_ERH_RN_E61_SHIFT                                                                        ((uint32_t)29U)
#define EDMA_TPCC_ERH_RN_E61_MASK                                                                         ((uint32_t)0x20000000U)

#define EDMA_TPCC_ERH_RN_E54_SHIFT                                                                        ((uint32_t)22U)
#define EDMA_TPCC_ERH_RN_E54_MASK                                                                         ((uint32_t)0x00400000U)

#define EDMA_TPCC_ERH_RN_E55_SHIFT                                                                        ((uint32_t)23U)
#define EDMA_TPCC_ERH_RN_E55_MASK                                                                         ((uint32_t)0x00800000U)

#define EDMA_TPCC_ERH_RN_E59_SHIFT                                                                        ((uint32_t)27U)
#define EDMA_TPCC_ERH_RN_E59_MASK                                                                         ((uint32_t)0x08000000U)

#define EDMA_TPCC_ERH_RN_E50_SHIFT                                                                        ((uint32_t)18U)
#define EDMA_TPCC_ERH_RN_E50_MASK                                                                         ((uint32_t)0x00040000U)

#define EDMA_TPCC_ERH_RN_E52_SHIFT                                                                        ((uint32_t)20U)
#define EDMA_TPCC_ERH_RN_E52_MASK                                                                         ((uint32_t)0x00100000U)

#define EDMA_TPCC_ERH_RN_E53_SHIFT                                                                        ((uint32_t)21U)
#define EDMA_TPCC_ERH_RN_E53_MASK                                                                         ((uint32_t)0x00200000U)

#define EDMA_TPCC_ERH_RN_E51_SHIFT                                                                        ((uint32_t)19U)
#define EDMA_TPCC_ERH_RN_E51_MASK                                                                         ((uint32_t)0x00080000U)

#define EDMA_TPCC_ERH_RN_E36_SHIFT                                                                        ((uint32_t)4U)
#define EDMA_TPCC_ERH_RN_E36_MASK                                                                         ((uint32_t)0x00000010U)

#define EDMA_TPCC_ERH_RN_E40_SHIFT                                                                        ((uint32_t)8U)
#define EDMA_TPCC_ERH_RN_E40_MASK                                                                         ((uint32_t)0x00000100U)

#define EDMA_TPCC_ERH_RN_E39_SHIFT                                                                        ((uint32_t)7U)
#define EDMA_TPCC_ERH_RN_E39_MASK                                                                         ((uint32_t)0x00000080U)

#define EDMA_TPCC_ERH_RN_E38_SHIFT                                                                        ((uint32_t)6U)
#define EDMA_TPCC_ERH_RN_E38_MASK                                                                         ((uint32_t)0x00000040U)

#define EDMA_TPCC_ERH_RN_E42_SHIFT                                                                        ((uint32_t)10U)
#define EDMA_TPCC_ERH_RN_E42_MASK                                                                         ((uint32_t)0x00000400U)

#define EDMA_TPCC_ERH_RN_E49_SHIFT                                                                        ((uint32_t)17U)
#define EDMA_TPCC_ERH_RN_E49_MASK                                                                         ((uint32_t)0x00020000U)

#define EDMA_TPCC_ERH_RN_E41_SHIFT                                                                        ((uint32_t)9U)
#define EDMA_TPCC_ERH_RN_E41_MASK                                                                         ((uint32_t)0x00000200U)

#define EDMA_TPCC_ERH_RN_E32_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_ERH_RN_E32_MASK                                                                         ((uint32_t)0x00000001U)

#define EDMA_TPCC_ERH_RN_E35_SHIFT                                                                        ((uint32_t)3U)
#define EDMA_TPCC_ERH_RN_E35_MASK                                                                         ((uint32_t)0x00000008U)

#define EDMA_TPCC_ERH_RN_E43_SHIFT                                                                        ((uint32_t)11U)
#define EDMA_TPCC_ERH_RN_E43_MASK                                                                         ((uint32_t)0x00000800U)

#define EDMA_TPCC_ERH_RN_E34_SHIFT                                                                        ((uint32_t)2U)
#define EDMA_TPCC_ERH_RN_E34_MASK                                                                         ((uint32_t)0x00000004U)

#define EDMA_TPCC_ERH_RN_E44_SHIFT                                                                        ((uint32_t)12U)
#define EDMA_TPCC_ERH_RN_E44_MASK                                                                         ((uint32_t)0x00001000U)

#define EDMA_TPCC_ERH_RN_E37_SHIFT                                                                        ((uint32_t)5U)
#define EDMA_TPCC_ERH_RN_E37_MASK                                                                         ((uint32_t)0x00000020U)

#define EDMA_TPCC_ERH_RN_E45_SHIFT                                                                        ((uint32_t)13U)
#define EDMA_TPCC_ERH_RN_E45_MASK                                                                         ((uint32_t)0x00002000U)

#define EDMA_TPCC_ERH_RN_E58_SHIFT                                                                        ((uint32_t)26U)
#define EDMA_TPCC_ERH_RN_E58_MASK                                                                         ((uint32_t)0x04000000U)

#define EDMA_TPCC_ERH_RN_E62_SHIFT                                                                        ((uint32_t)30U)
#define EDMA_TPCC_ERH_RN_E62_MASK                                                                         ((uint32_t)0x40000000U)

#define EDMA_TPCC_ERH_RN_E46_SHIFT                                                                        ((uint32_t)14U)
#define EDMA_TPCC_ERH_RN_E46_MASK                                                                         ((uint32_t)0x00004000U)

#define EDMA_TPCC_ERH_RN_E57_SHIFT                                                                        ((uint32_t)25U)
#define EDMA_TPCC_ERH_RN_E57_MASK                                                                         ((uint32_t)0x02000000U)

#define EDMA_TPCC_ERH_RN_E63_SHIFT                                                                        ((uint32_t)31U)
#define EDMA_TPCC_ERH_RN_E63_MASK                                                                         ((uint32_t)0x80000000U)

#define EDMA_TPCC_ERH_RN_E47_SHIFT                                                                        ((uint32_t)15U)
#define EDMA_TPCC_ERH_RN_E47_MASK                                                                         ((uint32_t)0x00008000U)

#define EDMA_TPCC_ERH_RN_E56_SHIFT                                                                        ((uint32_t)24U)
#define EDMA_TPCC_ERH_RN_E56_MASK                                                                         ((uint32_t)0x01000000U)

#define EDMA_TPCC_ERH_RN_E48_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_ERH_RN_E48_MASK                                                                         ((uint32_t)0x00010000U)

#define EDMA_TPCC_ERH_RN_E33_SHIFT                                                                        ((uint32_t)1U)
#define EDMA_TPCC_ERH_RN_E33_MASK                                                                         ((uint32_t)0x00000002U)

#define EDMA_TPCC_ERH_RN_E60_SHIFT                                                                        ((uint32_t)28U)
#define EDMA_TPCC_ERH_RN_E60_MASK                                                                         ((uint32_t)0x10000000U)

#define EDMA_TPCC_IEVAL_RN_SET_SHIFT                                                                      ((uint32_t)1U)
#define EDMA_TPCC_IEVAL_RN_SET_MASK                                                                       ((uint32_t)0x00000002U)

#define EDMA_TPCC_IEVAL_RN_EVAL_SHIFT                                                                     ((uint32_t)0U)
#define EDMA_TPCC_IEVAL_RN_EVAL_MASK                                                                      ((uint32_t)0x00000001U)

#define EDMA_TPCC_IEVAL_RN_RESERVED_0_SHIFT                                                               ((uint32_t)2U)
#define EDMA_TPCC_IEVAL_RN_RESERVED_0_MASK                                                                ((uint32_t)0xfffffffcU)

#define EDMA_TPCC_OPT_PRIV_SHIFT                                                                          ((uint32_t)31U)
#define EDMA_TPCC_OPT_PRIV_MASK                                                                           ((uint32_t)0x80000000U)

#define EDMA_TPCC_OPT_SECURE_SHIFT                                                                        ((uint32_t)30U)
#define EDMA_TPCC_OPT_SECURE_MASK                                                                         ((uint32_t)0x40000000U)

#define EDMA_TPCC_OPT_PRIVID_SHIFT                                                                        ((uint32_t)24U)
#define EDMA_TPCC_OPT_PRIVID_MASK                                                                         ((uint32_t)0x0f000000U)

#define EDMA_TPCC_OPT_ITCCHEN_SHIFT                                                                       ((uint32_t)23U)
#define EDMA_TPCC_OPT_ITCCHEN_MASK                                                                        ((uint32_t)0x00800000U)

#define EDMA_TPCC_OPT_TCCHEN_SHIFT                                                                        ((uint32_t)22U)
#define EDMA_TPCC_OPT_TCCHEN_MASK                                                                         ((uint32_t)0x00400000U)

#define EDMA_TPCC_OPT_ITCINTEN_SHIFT                                                                      ((uint32_t)21U)
#define EDMA_TPCC_OPT_ITCINTEN_MASK                                                                       ((uint32_t)0x00200000U)

#define EDMA_TPCC_OPT_TCINTEN_SHIFT                                                                       ((uint32_t)20U)
#define EDMA_TPCC_OPT_TCINTEN_MASK                                                                        ((uint32_t)0x00100000U)

#define EDMA_TPCC_OPT_WIMODE_SHIFT                                                                        ((uint32_t)19U)
#define EDMA_TPCC_OPT_WIMODE_MASK                                                                         ((uint32_t)0x00080000U)

#define EDMA_TPCC_OPT_TCC_SHIFT                                                                           ((uint32_t)12U)
#define EDMA_TPCC_OPT_TCC_MASK                                                                            ((uint32_t)0x0003f000U)

#define EDMA_TPCC_OPT_TCCMODE_SHIFT                                                                       ((uint32_t)11U)
#define EDMA_TPCC_OPT_TCCMODE_MASK                                                                        ((uint32_t)0x00000800U)

#define EDMA_TPCC_OPT_FWID_SHIFT                                                                          ((uint32_t)8U)
#define EDMA_TPCC_OPT_FWID_MASK                                                                           ((uint32_t)0x00000700U)
#define EDMA_TPCC_OPT_FWID_FIFOWIDTH256BIT                                                                ((uint32_t)5U)
#define EDMA_TPCC_OPT_FWID_FIFOWIDTH128BIT                                                                ((uint32_t)4U)
#define EDMA_TPCC_OPT_FWID_FIFOWIDTH64BIT                                                                 ((uint32_t)3U)
#define EDMA_TPCC_OPT_FWID_FIFOWIDTH32BIT                                                                 ((uint32_t)2U)
#define EDMA_TPCC_OPT_FWID_FIFOWIDTH16BIT                                                                 ((uint32_t)1U)
#define EDMA_TPCC_OPT_FWID_FIFOWIDTH8BIT                                                                  ((uint32_t)0U)

#define EDMA_TPCC_OPT_STATIC_SHIFT                                                                        ((uint32_t)3U)
#define EDMA_TPCC_OPT_STATIC_MASK                                                                         ((uint32_t)0x00000008U)

#define EDMA_TPCC_OPT_SYNCDIM_SHIFT                                                                       ((uint32_t)2U)
#define EDMA_TPCC_OPT_SYNCDIM_MASK                                                                        ((uint32_t)0x00000004U)

#define EDMA_TPCC_OPT_DAM_SHIFT                                                                           ((uint32_t)1U)
#define EDMA_TPCC_OPT_DAM_MASK                                                                            ((uint32_t)0x00000002U)

#define EDMA_TPCC_OPT_SAM_SHIFT                                                                           ((uint32_t)0U)
#define EDMA_TPCC_OPT_SAM_MASK                                                                            ((uint32_t)0x00000001U)

#define EDMA_TPCC_OPT_RESERVED_0_SHIFT                                                                    ((uint32_t)28U)
#define EDMA_TPCC_OPT_RESERVED_0_MASK                                                                     ((uint32_t)0x30000000U)

#define EDMA_TPCC_OPT_RESERVED_1_SHIFT                                                                    ((uint32_t)18U)
#define EDMA_TPCC_OPT_RESERVED_1_MASK                                                                     ((uint32_t)0x00040000U)

#define EDMA_TPCC_OPT_RESERVED_2_SHIFT                                                                    ((uint32_t)4U)
#define EDMA_TPCC_OPT_RESERVED_2_MASK                                                                     ((uint32_t)0x000000f0U)

#define EDMA_TPCC_SRC_SRC_SHIFT                                                                           ((uint32_t)0U)
#define EDMA_TPCC_SRC_SRC_MASK                                                                            ((uint32_t)0xffffffffU)

#define EDMA_TPCC_ABCNT_ACNT_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_ABCNT_ACNT_MASK                                                                         ((uint32_t)0x0000ffffU)

#define EDMA_TPCC_ABCNT_BCNT_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_ABCNT_BCNT_MASK                                                                         ((uint32_t)0xffff0000U)

#define EDMA_TPCC_BIDX_SBIDX_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_BIDX_SBIDX_MASK                                                                         ((uint32_t)0x0000ffffU)

#define EDMA_TPCC_BIDX_DBIDX_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_BIDX_DBIDX_MASK                                                                         ((uint32_t)0xffff0000U)

#define EDMA_TPCC_LNK_BCNTRLD_SHIFT                                                                       ((uint32_t)16U)
#define EDMA_TPCC_LNK_BCNTRLD_MASK                                                                        ((uint32_t)0xffff0000U)

#define EDMA_TPCC_LNK_LINK_SHIFT                                                                          ((uint32_t)0U)
#define EDMA_TPCC_LNK_LINK_MASK                                                                           ((uint32_t)0x0000ffffU)

#define EDMA_TPCC_CIDX_SCIDX_SHIFT                                                                        ((uint32_t)0U)
#define EDMA_TPCC_CIDX_SCIDX_MASK                                                                         ((uint32_t)0x0000ffffU)

#define EDMA_TPCC_CIDX_DCIDX_SHIFT                                                                        ((uint32_t)16U)
#define EDMA_TPCC_CIDX_DCIDX_MASK                                                                         ((uint32_t)0xffff0000U)

#define EDMA_TPCC_CCNT_CCNT_SHIFT                                                                         ((uint32_t)0U)
#define EDMA_TPCC_CCNT_CCNT_MASK                                                                          ((uint32_t)0x0000ffffU)

#define EDMA_TPCC_CCNT_RESERVED_0_SHIFT                                                                   ((uint32_t)16U)
#define EDMA_TPCC_CCNT_RESERVED_0_MASK                                                                    ((uint32_t)0xffff0000U)

#define EDMA_TPCC_DST_DST_SHIFT                                                                           ((uint32_t)0U)
#define EDMA_TPCC_DST_DST_MASK                                                                            ((uint32_t)0xffffffffU)

#ifdef __cplusplus
}
#endif
#endif  /* _HW_EDMA_TPCC_H_ */
