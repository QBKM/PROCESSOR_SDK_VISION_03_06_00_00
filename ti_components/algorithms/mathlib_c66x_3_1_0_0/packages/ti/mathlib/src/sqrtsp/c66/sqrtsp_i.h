/* ======================================================================== *
 * MATHLIB -- TI Floating-Point Math Function Library                       *
 *                                                                          *
 *                                                                          *
 * Copyright (C) 2011 Texas Instruments Incorporated - http://www.ti.com/   *
 *                                                                          *
 *                                                                          *
 *  Redistribution and use in source and binary forms, with or without      *
 *  modification, are permitted provided that the following conditions      *
 *  are met:                                                                *
 *                                                                          *
 *    Redistributions of source code must retain the above copyright        *
 *    notice, this list of conditions and the following disclaimer.         *
 *                                                                          *
 *    Redistributions in binary form must reproduce the above copyright     *
 *    notice, this list of conditions and the following disclaimer in the   *
 *    documentation and/or other materials provided with the                *
 *    distribution.                                                         *
 *                                                                          *
 *    Neither the name of Texas Instruments Incorporated nor the names of   *
 *    its contributors may be used to endorse or promote products derived   *
 *    from this software without specific prior written permission.         *
 *                                                                          *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS     *
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT       *
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR   *
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT    *
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,   *
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT        *
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,   *
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY   *
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT     *
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE   *
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.    *
 * ======================================================================== */

/* ======================================================================= */
/* sqrtsp_i.h - single precision floating point sqrt                       */
/*              optimized inlined C implementation (w/ intrinsics)         */
/* ======================================================================= */

#ifndef SQRTSP_I_
#define SQRTSP_I_ 1

#include <ti/mathlib/src/common/common.h>
#include <float.h>

#ifdef __cplusplus
#pragma CODE_SECTION(".text:optci")
#else
#pragma CODE_SECTION(sqrtsp_i, ".text:optci");
#endif

/* =========================================================================== */
/* The sqrtsp function returns the square root of a real floating-point value. */
/* Newton-Rhapson algorithm is applied for better precision.                   */
/* =========================================================================== */

static inline float sqrtsp_i (float a)
{
  const float  Half  = 0.5f;
  const float  OneP5 = 1.5f;
  float  x, y;
  int i;

  x = _rsqrsp(a);

  #pragma UNROLL(1)
  for(i=0; i< 2; i++){
    x = x * (OneP5 - (a * x * x * Half));
  }
  y = a * x;

  if (a <= 0.0f) {
    y = 0.0f;
  }
  if (a > FLT_MAX) {
    y = FLT_MAX;
  }

  return (y);
}

#endif /* SQRTSP_I_ */

/* ======================================================================== */
/*  End of file: sqrtsp_i.h                                                 */
/* ======================================================================== */
