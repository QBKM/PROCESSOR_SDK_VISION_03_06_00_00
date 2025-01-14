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
/* cosdp_i.h - double precision floating point cosine                      */
/*              optimized inlined C implementation (w/ intrinsics)         */
/* ======================================================================= */

#ifndef COSDP_I_H_
#define COSDP_I_H_ 1

#include <ti/mathlib/src/common/common.h>

#ifdef __cplusplus
#pragma DATA_SECTION(".text:optci")
#else
#pragma CODE_SECTION(cosdp_i, ".text:optci");
#endif

static inline double cosdp_i (double a)
{
  double  C1     =  3.1416015625;
  double  C2     = -8.908910206761537356617e-6;
  double  r8     =  2.7204790957888846175e-15;
  double  r7     = -7.6429178068910467734e-13;
  double  r6     =  1.6058936490371589114e-10;
  double  r5     = -2.5052106798274584544e-8;
  double  r4     =  2.7557319210152756119e-6;
  double  r3     = -1.9841269841201840457e-4;
  double  r2     =  8.3333333333331650314e-3;
  double  r1     = -1.6666666666666665052e-1;
  double  MAX    =  1.073741824e+09;
  double  HalfPI =  1.57079632679489661923;
  double  InvPI  =  0.31830988618379067154;
  double  Sign   =  1.0;
  double  X, Z, F, F2, G, R;
  int     N;

  F = _fabs(a) + HalfPI;
  
  if (F > MAX) {
    F = HalfPI;
  }

  X = F * InvPI;            /* X = Y * (1/PI)  */
  N = _dpint(X);
  Z = (N);                  /* Z = double (N)  */
  
  if ((N&1) != 0) {
    Sign = -Sign; 	        /* neg. quadrants  */
  }
  
  F  = (F - (Z*C1)) - (Z*C2);
  R  = _fabs(F);
  F2 = F*F;
  G  = F2*F2;
  R = (((G*r8 + r6)*G + r4)*G + r2)*G;
	X = (((G*r7 + r5)*G + r3)*G + r1)*F2;
	R = R + X;
  G = (F + F*R)*Sign;  

  return (G);           
}

#endif /* COSDP_I_H_ */

/* ======================================================================== */
/*  End of file: cosdp_i.h                                                  */
/* ======================================================================== */

