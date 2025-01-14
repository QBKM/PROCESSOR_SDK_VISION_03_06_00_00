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
/* acossp_v.c - Single precision floating point arc_cosine                 */
/*              optimized inlined C implementation (w/ intrinsics)         */
/*              vector version                                             */
/* ======================================================================= */

#include "acossp.h"


#ifdef __cplusplus
#pragma CODE_SECTION(".text:optvec")
#else
#pragma CODE_SECTION(acossp_v, ".text:optvec");
#endif

/* ====================================================================== */
/* The type of calculation for acos(x) depends on the value of x, and     */
/* it's based on asin(x), acos(x) = pi/2 - asin(x).                       */
/*                                                                        */
/* for x_abs <= 1/sqrt(2), res = pi/2 - pol_est_acossp_i (input x)        */
/* for x_abs > 1/sqrt(2),  res = pi/2 -(pi/2 - pol_est_acossp_i (input z))*/
/*                           z = sqrt(1 - x^2)                            */
/* where x_abs is the absolute value of the input, a is calculated as     */
/* shown above and it's used as an input for the polynomial, and res is   */
/* the value for acos(x). This is repeated for every value in the array.  */
/* ====================================================================== */

void acossp_v (float * restrict a, float * restrict output, int size)
{
  const float pi2   =  1.570796327f;          /* pi/2 */
  const float rsqr2 =  0.7071067811f;         /* 1/sqrt(2) */
  float res, x, x_abs, temp, z, sign;
  float pol1, pol2;
  int i;

  /* Vector loop */
  for (i = 0; i < size; i++) {
    x = a[i];
    sign = 1.0;
    x_abs = _fabsf(x);

    pol1 =pol_est_acossp_i(x_abs);            /* |x| <= 1/sqrt(2) */

    /* assume |x| > 1/sqrt(2) */
    temp = 1.0f - (x*x);
    z = sqrtsp_acossp_i(temp);                /* z = sqrt(1 - x^2) */
    pol2 = pol_est_acossp_i(z);
    res = pi2 - pol2;

    /* set the result to the right answer */
    if(x_abs <= rsqr2){                       /* |x| <= 1/sqrt(2) */
      res = pol1;
    }
    if(x < 0.0f){
      sign = -sign;                           /* sign var */
    }

    res = pi2 - res * sign;                   /* restore sign for quadrants 2 & 3*/

    output[i] = res;
  }
}

/* ======================================================================== */
/*  End of file: acossp_v.c                                                */
/* ======================================================================== */
