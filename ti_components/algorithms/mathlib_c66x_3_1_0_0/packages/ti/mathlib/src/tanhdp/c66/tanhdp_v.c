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
/* tanhdp_v.c - Double precision floating point hyperbolic tangent         */
/*              optimized inlined C implementation (w/ intrinsics)         */
/*              vector version                                             */
/* ======================================================================= */

#include "tanhdp.h"
#include "tanhdp_i.h"


#ifdef __cplusplus
#pragma CODE_SECTION(".text:optvec")
#else
#pragma CODE_SECTION(tanhdp_v, ".text:optvec");
#endif

/* ====================================================================== */
/* The type of calculation for tanh(x) depends on the value of x:         */
/*   x_abs < 0.3, res = pol_est_tanhdp_i ( input x)                       */
/*                                                                        */
/*   x_abs >= 0.3, res = -1 + 2 / (1 + e^(-2x))                           */
/*                                                                        */
/*   x_abs > 19.0, res = 1.0 (maximum value for tanh)                     */
/* where x_abs is the absolute value of the input and res is the          */
/* calculated value for tanh(x). This is repeated for every value in the  */
/* array.                                                                 */
/* ====================================================================== */

void tanhdp_v (double * restrict a, double * restrict output, int size)
{
  const double maxTanh     =  1.0;
  const double limit       =  19.0;
  const double negTwo      = -2.0;
  const double pol_bound   =  0.3;
  double res, x, x_abs, temp, sign;
  double small_range, mid_range;
  int i, cond1, cond2;

  /* Vector loop */
  for (i = 0; i < size; i++) {
    sign = 1.0;
    x = a[i];

    x_abs = _fabs(x);
    cond1 = (x_abs < pol_bound);
    cond2 = (x_abs > limit);

    if(x < 0){
      sign = -sign;
    }

    /* Calculate two possible answers, then set the right result
     * depending on the value of the input x */

    /* |x| < 0.5 */
    small_range = pol_est_tanhdp_i(x_abs);             /* calculation for very small input */

    /* 0.5 < |x|<= 19 */
    temp = exp_tanhdp_i(negTwo * x_abs);               /* e^(-2x) */
    temp++;
    mid_range = divdp_tanhdp_i(2,temp) - 1;            /* -1 + 2 / (1 + e^(-2x)) */

    res = (cond1)* small_range + (!cond1) * mid_range;
    res = (cond2) * maxTanh + (!cond2) * res;          /* reached maximum value */


    output[i] = res * sign;                     /* restore sign */
  }
}

/* ======================================================================== */
/*  End of file: tanhdp_v.c                                                 */
/* ======================================================================== */
