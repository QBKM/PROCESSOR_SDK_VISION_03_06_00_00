;**********************************************************************
;* SDPBK_T2.ASM - STACK DEPTH PROFILER BOOK KEEPING - v16.9.2         *
;*                                                                    *
;* Copyright (c) 1996-2017 Texas Instruments Incorporated             *
;* http://www.ti.com/                                                 *
;*                                                                    *
;*  Redistribution and  use in source  and binary forms, with  or without *
;*  modification,  are permitted provided  that the  following conditions *
;*  are met:                                                          *
;*                                                                    *
;*     Redistributions  of source  code must  retain the  above copyright *
;*     notice, this list of conditions and the following disclaimer.  *
;*                                                                    *
;*     Redistributions in binary form  must reproduce the above copyright *
;*     notice, this  list of conditions  and the following  disclaimer in *
;*     the  documentation  and/or   other  materials  provided  with  the *
;*     distribution.                                                  *
;*                                                                    *
;*     Neither the  name of Texas Instruments Incorporated  nor the names *
;*     of its  contributors may  be used to  endorse or  promote products *
;*     derived  from   this  software  without   specific  prior  written *
;*     permission.                                                    *
;*                                                                    *
;*  THIS SOFTWARE  IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS *
;*  "AS IS"  AND ANY  EXPRESS OR IMPLIED  WARRANTIES, INCLUDING,  BUT NOT *
;*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR *
;*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT *
;*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, *
;*  SPECIAL,  EXEMPLARY,  OR CONSEQUENTIAL  DAMAGES  (INCLUDING, BUT  NOT *
;*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, *
;*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY *
;*  THEORY OF  LIABILITY, WHETHER IN CONTRACT, STRICT  LIABILITY, OR TORT *
;*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE *
;*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. *
;*                                                                    *
;**********************************************************************
;**********************************************************************
; C$SDPBK: Book-keeping routine for Stack depth analysis. Keeps track of
; 	   the maximum stack usage by an application.
;**********************************************************************
	.thumb

	.if !__TI_EABI_ASSEMBLER
	.clink
	.endif

	.global C$SDPBK
	.thumbfunc C$SDPBK

; Subtract the current SP from the initial SP (stored in _main_func_sp).
; If larger than the value currently stored in _max_stack_required,
; then write this new size into _max_stack_required.

C$SDPBK: .asmfunc stack_usage(12)
        PUSH      {V1,V2,V3}
	MOV 	  V1, SP	
	MOVS	  V3, #12
	ADDS	  V1,V3
	LDR	  V3, c_mf_sp
	LDR	  V2, [V3]
	LDR	  V3, max_sreq
	LDR	  V3, [V3]
	SUBS	  V2, V2, V1
	CMP	  V2,V3
	ITT	  GT
	 LDRGT	  V3, max_sreq
	 STRGT	  V2, [V3]
	POP	  {V3,V2,V1}
	BX	  LR
	.endasmfunc

           .align  4
max_sreq   .field    	   _max_stack_required,32
	   .align 4
c_mf_sp	   .field  	   _main_func_sp,32

	.global _max_stack_required
	.global _main_func_sp
	
