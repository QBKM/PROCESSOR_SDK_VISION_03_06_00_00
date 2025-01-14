;******************************************************************************
;* TMS320C6x C/C++ Codegen                                          PC v7.4.2 *
;* Date/Time created: Mon Nov 04 23:05:14 2013                                *
;******************************************************************************
	.compiler_opts --abi=eabi --c64p_l1d_workaround=off --endian=big --hll_source=on --long_precision_bits=32 --mem_model:code=near --mem_model:const=data --mem_model:data=far --object_format=elf --silicon_version=6600 --symdebug:none 

;******************************************************************************
;* GLOBAL FILE PARAMETERS                                                     *
;*                                                                            *
;*   Architecture      : TMS320C66xx                                          *
;*   Optimization      : Enabled at level 3                                   *
;*   Optimizing for    : Speed                                                *
;*                       Based on options: -o3, no -ms                        *
;*   Endian            : Big                                                  *
;*   Interrupt Thrshld : Disabled                                             *
;*   Data Access Model : Far                                                  *
;*   Pipelining        : Enabled                                              *
;*   Speculate Loads   : Enabled with threshold = 0                           *
;*   Memory Aliases    : Presume are aliases (pessimistic)                    *
;*   Debug Info        : No Debug Info                                        *
;*                                                                            *
;******************************************************************************

	.asg	A15, FP
	.asg	B14, DP
	.asg	B15, SP
	.global	$bss

	.global	a
	.sect	".fardata:a", RW
	.clink
	.align	8
	.elfsym	a,SYM_SIZE(40)
a:
	.word	04476e6ddh		; a[0] @ 0
	.word	043b50493h		; a[1] @ 32
	.word	0439400b5h		; a[2] @ 64
	.word	0431e7a78h		; a[3] @ 96
	.word	044627782h		; a[4] @ 128
	.word	04433b225h		; a[5] @ 160
	.word	0440c0d41h		; a[6] @ 192
	.word	04404a940h		; a[7] @ 224
	.word	0433db9c4h		; a[8] @ 256
	.word	0442b64bbh		; a[9] @ 288

;	C:\MATHLIB_Tools\CCSV5_4_0\ccsv5\tools\compiler\c6000_7.4.2\bin\opt6x.exe C:\\DOCUME~1\\a0868396\\LOCALS~1\\Temp\\099162 C:\\DOCUME~1\\a0868396\\LOCALS~1\\Temp\\099164 
	.sect	".text"
	.clink
	.global	main

;******************************************************************************
;* FUNCTION NAME: main                                                        *
;*                                                                            *
;*   Regs Modified     : A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,   *
;*                           A15,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,   *
;*                           B13,SP,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,  *
;*                           A26,A27,A28,A29,A30,A31,B16,B17,B18,B19,B20,B21, *
;*                           B22,B23,B24,B25,B26,B27,B28,B29,B30,B31          *
;*   Regs Used         : A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,   *
;*                           A15,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,   *
;*                           B13,DP,SP,A16,A17,A18,A19,A20,A21,A22,A23,A24,   *
;*                           A25,A26,A27,A28,A29,A30,A31,B16,B17,B18,B19,B20, *
;*                           B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31      *
;*   Local Frame Size  : 8 Args + 4 Auto + 56 Save = 68 byte                  *
;******************************************************************************
main:
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12
           STW     .D2T1   A11,*SP--(8)      ; |90| 
           STW     .D2T1   A10,*SP--(8)      ; |90| 
           STDW    .D2T2   B13:B12,*SP--     ; |90| 
           STDW    .D2T2   B11:B10,*SP--     ; |90| 
           STDW    .D2T1   A15:A14,*SP--     ; |90| 

           STDW    .D2T1   A13:A12,*SP--     ; |90| 
||         MVKL    .S1     $C$SL1+0,A4

           STW     .D2T2   B3,*SP--(24)      ; |90| 
||         CALLP   .S2     driver_init,B3
||         MVKH    .S1     $C$SL1+0,A4

$C$RL0:    ; CALL OCCURS {driver_init} {0}   ; |98| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 3

           MVK     .L2     0xa,B4
||         MVKL    .S1     a,A12

           MVKH    .S1     a,A12
||         MVKL    .S2     output,B13

           CALL    .S1     sqrtf             ; |107| 
||         MV      .L1     A12,A10
||         MV      .D1X    B4,A11
||         MVKH    .S2     output,B13
||         ZERO    .L2     B10

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L1:    
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D1T1   *A10++,A4         ; |107| 
           ADDKPC  .S2     $C$RL1,B3,3       ; |107| 
$C$RL1:    ; CALL OCCURS {sqrtf} {0}         ; |107| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           LDW     .D2T2   *B13,B4           ; |107| 
||         SUB     .L1     A11,1,A0          ; |106| 
||         SUB     .S1     A11,1,A11         ; |106| 

   [ A0]   BNOP    .S1     $C$L1,3           ; |106| 

           ADD     .L2     B10,B4,B4         ; |107| 
||         ADD     .S2     4,B10,B10         ; |106| 

   [ A0]   CALL    .S1     sqrtf             ; |107| 
||         STW     .D2T1   A4,*B4            ; |107| 
|| [!A0]   MVK     .L2     0xa,B4

           ; BRANCHCC OCCURS {$C$L1}         ; |106| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 2

           ZERO    .L2     B10
||         MV      .L1     A12,A11
||         ADD     .S2     4,B13,B11

           MV      .L1X    B4,A10
||         CALL    .S1     sqrtsp            ; |110| 

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L2:    
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D1T1   *A12++,A4         ; |110| 
           ADDKPC  .S2     $C$RL2,B3,3       ; |110| 
$C$RL2:    ; CALL OCCURS {sqrtsp} {0}        ; |110| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           LDW     .D2T2   *B11,B4           ; |110| 
||         SUB     .L1     A10,1,A0          ; |109| 
||         SUB     .S1     A10,1,A10         ; |109| 

   [ A0]   BNOP    .S1     $C$L2,3           ; |109| 

           ADD     .L2     B10,B4,B4         ; |110| 
||         ADD     .S2     4,B10,B10         ; |109| 

   [ A0]   CALL    .S1     sqrtsp            ; |110| 
||         STW     .D2T1   A4,*B4            ; |110| 
|| [!A0]   MVK     .L2     0xa,B4

           ; BRANCHCC OCCURS {$C$L2}         ; |109| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 2

           ZERO    .L2     B10
||         MV      .L1     A11,A12
||         ADD     .S2     4,B11,B11

           MV      .L1X    B4,A10
||         CALL    .S1     sqrtsp_c          ; |113| 

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L3:    
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D1T1   *A12++,A4         ; |113| 
           ADDKPC  .S2     $C$RL3,B3,3       ; |113| 
$C$RL3:    ; CALL OCCURS {sqrtsp_c} {0}      ; |113| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           LDW     .D2T2   *B11,B4           ; |113| 
||         SUB     .L1     A10,1,A0          ; |112| 
||         SUB     .S1     A10,1,A10         ; |112| 

   [ A0]   BNOP    .S2     $C$L3,3           ; |112| 
|| [!A0]   ADD     .L1X    4,B11,A12
|| [!A0]   MVKL    .S1     0x7f7fffff,A14

           ADD     .L2     B10,B4,B4         ; |113| 
||         ADD     .S2     4,B10,B10         ; |112| 

   [ A0]   CALL    .S1     sqrtsp_c          ; |113| 
||         STW     .D2T1   A4,*B4            ; |113| 

           ; BRANCHCC OCCURS {$C$L3}         ; |112| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 2

           MVK     .L2     0xa,B1            ; |115| 
||         LDW     .D1T1   *A12,A3
||         ZERO    .L1     A13
||         SUB     .S1     A11,4,A6

           MVKH    .S1     0x7f7fffff,A14
||         ZERO    .L1     A31

;** --------------------------------------------------------------------------*
;**   BEGIN LOOP $C$L4
;** --------------------------------------------------------------------------*
$C$L4:    
;          EXCLUSIVE CPU CYCLES: 6
           LDW     .D1T1   *++A6,A4          ; |116| 
           MVK     .L2     0x2,B0            ; |69| 
           NOP             3
           RSQRSP  .S1     A4,A5             ; |66| 
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*
;*      Loop found in file               : C:/builds/DEV_TI_MATHLIB_3_1_0_0/mathlib/ti/mathlib/src/sqrtsp/sqrtsp_d.c
;*      Loop inlined from                : ../../../../../../../ti/mathlib/src/sqrtsp/c66/sqrtsp_i.h
;*      Loop source line                 : 69
;*      Loop opening brace source line   : 69
;*      Loop closing brace source line   : 71
;*      Known Minimum Trip Count         : 2                    
;*      Known Maximum Trip Count         : 2                    
;*      Known Max Trip Count Factor      : 2
;*      Loop Carried Dependency Bound(^) : 22
;*      Unpartitioned Resource Bound     : 2
;*      Partitioned Resource Bound(*)    : 2
;*      Resource Partition:
;*                                A-side   B-side
;*      .L units                     0        0     
;*      .S units                     0        0     
;*      .D units                     0        0     
;*      .M units                     2*       2*    
;*      .X cross paths               1        1     
;*      .T address paths             0        0     
;*      Long read paths              0        0     
;*      Long write paths             0        0     
;*      Logical  ops (.LS)           1        0     (.L or .S unit)
;*      Addition ops (.LSD)          0        1     (.L or .S or .D unit)
;*      Bound(.L .S .LS)             1        0     
;*      Bound(.L .S .D .LS .LSD)     1        1     
;*
;*      Disqualified loop: Loop carried dependency bound too large
;*----------------------------------------------------------------------------*
$C$L5:    
;          EXCLUSIVE CPU CYCLES: 19
           MPYSP   .M1     A5,A4,A7          ; |70| 
           ZERO    .L1     A8
           SET     .S1     A8,0x18,0x1d,A8
           SUB     .L2     B0,1,B0           ; |69| 
           MPYSP   .M1     A5,A7,A7          ; |70| 
           NOP             3
           MPYSP   .M1     A8,A7,A7          ; |70| 
           SET     .S1     A31,0x16,0x1d,A8
           NOP             2
           FSUBSP  .L1     A8,A7,A7          ; |70| 
   [ B0]   BNOP    .S1     $C$L5,1           ; |69| 
           MPYSP   .M1     A7,A5,A5          ; |70| 
           NOP             3
           ; BRANCHCC OCCURS {$C$L5}         ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           SUB     .L2     B1,1,B1           ; |115| 
||         MPYSP   .M1     A5,A4,A5          ; |72| 
||         MV      .L1     A14,A7            ; |74| 
||         CMPGTSP .S1     A4,A13,A1         ; |74| 

   [ B1]   BNOP    .S2     $C$L4,2           ; |115| 
||         CMPGTSP .S1     A4,A7,A0          ; |77| 

   [!A1]   MV      .L1     A13,A5            ; |75| 
   [ A0]   MV      .L1     A7,A5             ; |75| 

   [!B1]   CALL    .S1     sqrtsp_v          ; |118| 
||         STW     .D1T1   A5,*A3++          ; |116| 

           ; BRANCHCC OCCURS {$C$L4}         ; |115| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D2T2   *+B13(16),B4      ; |118| 
           MV      .L1     A11,A4            ; |118| 
           MVK     .L1     0xa,A6            ; |118| 
           ADDKPC  .S2     $C$RL4,B3,1       ; |118| 
$C$RL4:    ; CALL OCCURS {sqrtsp_v} {0}      ; |118| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 46
           MVKL    .S2     0x3ee4f8b5,B7
           MVKL    .S2     0x88e368f1,B6
           MVKH    .S2     0x3ee4f8b5,B7

           LDW     .D2T1   *B13,A4           ; |66| 
||         MVKH    .S2     0x88e368f1,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T2   *+B13(4),B4       ; |66| 
||         MVK     .L1     0xa,A6            ; |66| 
||         MVK     .S1     0x1,A8            ; |66| 

$C$RL5:    ; CALL OCCURS {isequal} {0}       ; |66| 
           MVKL    .S2     fcn_pass,B6
           MVKL    .S2     0x3ee4f8b5,B7
           MVKH    .S2     fcn_pass,B6
           MVKH    .S2     0x3ee4f8b5,B7

           STW     .D2T1   A4,*+B6(4)        ; |66| 
||         MVKL    .S2     0x88e368f1,B6

           LDW     .D2T2   *+B13(8),B4       ; |67| 
||         MVKH    .S2     0x88e368f1,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T1   *B13,A4           ; |67| 
||         MVK     .L1     0xa,A6            ; |67| 
||         MVK     .S1     0x1,A8            ; |67| 

$C$RL6:    ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     fcn_pass,B5
           MVKL    .S2     0x3ee4f8b5,B7
           MVKL    .S2     0x88e368f1,B6
           MVKH    .S2     fcn_pass,B5
           MVKH    .S2     0x3ee4f8b5,B7

           MV      .L1X    B13,A3
||         STW     .D2T1   A4,*+B5(8)        ; |67| 
||         MVKH    .S2     0x88e368f1,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A3,A4            ; |68| 
||         LDW     .D2T2   *+B13(12),B4      ; |68| 
||         MVK     .L1     0xa,A6            ; |68| 
||         MVK     .S1     0x1,A8            ; |68| 

$C$RL7:    ; CALL OCCURS {isequal} {0}       ; |68| 
           MVKL    .S2     fcn_pass,B5
           MVKL    .S2     0x3ee4f8b5,B7
           MVKL    .S2     0x88e368f1,B6
           MVKH    .S2     fcn_pass,B5
           MVKH    .S2     0x3ee4f8b5,B7

           MV      .L1X    B13,A10
||         ADD     .L2X    4,A12,B12
||         STW     .D2T1   A4,*+B5(12)       ; |68| 
||         MVKH    .S2     0x88e368f1,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A10,A4           ; |69| 
||         LDW     .D2T2   *B12,B4           ; |69| 
||         MVK     .L1     0xa,A6            ; |69| 
||         MVK     .S1     0x1,A8            ; |69| 

$C$RL8:    ; CALL OCCURS {isequal} {0}       ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 15
           MVKL    .S1     fcn_pass,A3
           MVKH    .S1     fcn_pass,A3
           NOP             1
           ADD     .L2X    4,A3,B11
           LDW     .D2T2   *B11,B0           ; |72| 
           MV      .L2X    A3,B4             ; |72| 
           ADD     .L2X    8,A3,B10
           STW     .D2T1   A4,*+B4(16)       ; |69| 
           NOP             1

   [!B0]   MVKL    .S1     all_pass,A4
|| [!B0]   B       .S2     $C$L6             ; |72| 
||         MV      .L2     B0,B1             ; guard predicate rewrite
|| [!B0]   MV      .L1     A13,A3

   [!B0]   CALL    .S2     print_test_results ; |122| 
|| [!B0]   MVKH    .S1     all_pass,A4
|| [ B0]   LDW     .D2T2   *B10,B0           ; |72| 

   [ B1]   ADD     .L2     4,B10,B4
           NOP             3
           ; BRANCHCC OCCURS {$C$L6}         ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10
   [ B0]   LDW     .D2T2   *B4,B4            ; |72| 
           CMPEQ   .L1     A4,0,A3           ; |72| 
           XOR     .L1     1,A3,A3           ; |72| 
   [!B0]   MV      .L1     A13,A0            ; |72| 
           NOP             1
   [ B0]   CMPEQ   .L2     B4,0,B4           ; |72| 
   [ B0]   XOR     .L2     1,B4,B4           ; |72| 
           NOP             1

   [ B0]   AND     .L1X    A3,B4,A0          ; |72| 
||         MVK     .S1     0x1,A3            ; |72| 

   [!A0]   MV      .L1     A13,A3
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           CALL    .S1     print_test_results ; |122| 
           MVKL    .S1     all_pass,A4
           MVKH    .S1     all_pass,A4
           NOP             2
;** --------------------------------------------------------------------------*
$C$L6:    
;          EXCLUSIVE CPU CYCLES: 1

           STW     .D1T1   A3,*A4            ; |72| 
||         MVK     .L1     0x1,A4            ; |122| 
||         ADDKPC  .S2     $C$RL9,B3,0       ; |122| 

$C$RL9:    ; CALL OCCURS {print_test_results} {0}  ; |122| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10

           MVKL    .S2     a_sc,B4
||         ZERO    .L2     B6

           ZERO    .L2     B7
||         MVKH    .S2     0xbf800000,B6

           SET     .S2     B7,0x17,0x1d,B7

           MVKH    .S2     a_sc,B4
||         ZERO    .L1     A6

           ZERO    .L1     A4
||         MVKH    .S1     0xff800000,A6
||         ADD     .D1     1,A14,A7
||         STDW    .D2T2   B7:B6,*+B4(16)    ; |134| 

           MVKH    .S1     0x80000000,A4
||         MV      .L1     A13,A5            ; |130| 
||         STDW    .D2T1   A7:A6,*+B4(8)     ; |132| 

           ADD     .L1     -1,A4,A9
||         MVK     .S1     -1,A8             ; |136| 
||         STDW    .D2T1   A5:A4,*B4         ; |130| 

           SUB     .L1X    B4,4,A15
||         STDW    .D2T1   A9:A8,*+B4(24)    ; |136| 
||         MVK     .L2     0x8,B4            ; |138| 

           MV      .L1     A13,A11           ; |130| 
           MV      .L1X    B4,A14            ; |132| 
;** --------------------------------------------------------------------------*
;**   BEGIN LOOP $C$L7
;** --------------------------------------------------------------------------*
$C$L7:    
;          EXCLUSIVE CPU CYCLES: 7
           LDW     .D1T1   *++A15,A3         ; |139| 
           CALL    .S1     sqrt              ; |139| 
           ADDKPC  .S2     $C$RL10,B3,2      ; |139| 
           SPDP    .S1     A3,A5:A4          ; |139| 
           NOP             1
$C$RL10:   ; CALL OCCURS {sqrt} {0}          ; |139| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 20
           MV      .L2     B13,B4            ; |139| 
           LDW     .D2T2   *B4,B4            ; |139| 
           DPSP    .L1     A5:A4,A3          ; |139| 
           NOP             3
           ADD     .L1X    A11,B4,A4         ; |139| 
           STW     .D1T1   A3,*A4            ; |139| 
           LDW     .D1T2   *A15,B4           ; |140| 
           NOP             4
           CMPGTSP .S2X    B4,A13,B0         ; |140| 
   [!B0]   B       .S1     $C$L8             ; |140| 
   [ B0]   CALL    .S1     sqrtsp            ; |140| 
   [!B0]   CALL    .S1     sqrt              ; |140| 
   [!B0]   SPDP    .S2     B4,B5:B4          ; |140| 
           NOP             2
           ; BRANCHCC OCCURS {$C$L8}         ; |140| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 1

           MV      .L1X    B4,A4             ; |140| 
||         ADDKPC  .S2     $C$RL11,B3,0      ; |140| 

$C$RL11:   ; CALL OCCURS {sqrtsp} {0}        ; |140| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 8
           SPDP    .S1     A4,A5:A4          ; |140| 
           LDW     .D1T2   *+A10(4),B5       ; |140| 

           BNOP    .S1     $C$L9,3           ; |140| 
||         DPSP    .L1     A5:A4,A3          ; |140| 

           ADD     .L2X    A11,B5,B5         ; |140| 
           MV      .L2X    A3,B4             ; |140| 
           ; BRANCH OCCURS {$C$L9}           ; |140| 
;** --------------------------------------------------------------------------*
$C$L8:    
;          EXCLUSIVE CPU CYCLES: 2
           DADD    .L1X    0,B5:B4,A5:A4     ; |140| 
           ADDKPC  .S2     $C$RL12,B3,0      ; |140| 
$C$RL12:   ; CALL OCCURS {sqrt} {0}          ; |140| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7
           LDW     .D1T2   *+A10(4),B5       ; |140| 
           DPSP    .L1     A5:A4,A3          ; |140| 
           NOP             3
           ADD     .L2X    A11,B5,B5         ; |140| 
           MV      .L2X    A3,B4             ; |140| 
;** --------------------------------------------------------------------------*
$C$L9:    
;          EXCLUSIVE CPU CYCLES: 6

           CALL    .S1     sqrtsp_c          ; |141| 
||         STW     .D2T2   B4,*B5            ; |140| 

           LDW     .D1T1   *A15,A4           ; |141| 
           ADDKPC  .S2     $C$RL13,B3,3      ; |141| 
$C$RL13:   ; CALL OCCURS {sqrtsp_c} {0}      ; |141| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 13
           LDW     .D1T1   *+A10(8),A3       ; |141| 
           MVK     .L2     0x2,B0            ; |69| 
           ZERO    .L1     A31
           ZERO    .L1     A30
           NOP             1
           ADD     .L1     A11,A3,A3         ; |141| 
           STW     .D1T1   A4,*A3            ; |141| 
           LDW     .D1T1   *A15,A3           ; |142| 
           NOP             4
           RSQRSP  .S1     A3,A4             ; |66| 
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*
;*      Loop found in file               : C:/builds/DEV_TI_MATHLIB_3_1_0_0/mathlib/ti/mathlib/src/sqrtsp/sqrtsp_d.c
;*      Loop inlined from                : ../../../../../../../ti/mathlib/src/sqrtsp/c66/sqrtsp_i.h
;*      Loop source line                 : 69
;*      Loop opening brace source line   : 69
;*      Loop closing brace source line   : 71
;*      Known Minimum Trip Count         : 2                    
;*      Known Maximum Trip Count         : 2                    
;*      Known Max Trip Count Factor      : 2
;*      Loop Carried Dependency Bound(^) : 22
;*      Unpartitioned Resource Bound     : 2
;*      Partitioned Resource Bound(*)    : 2
;*      Resource Partition:
;*                                A-side   B-side
;*      .L units                     0        0     
;*      .S units                     0        0     
;*      .D units                     0        0     
;*      .M units                     2*       2*    
;*      .X cross paths               1        1     
;*      .T address paths             0        0     
;*      Long read paths              0        0     
;*      Long write paths             0        0     
;*      Logical  ops (.LS)           1        0     (.L or .S unit)
;*      Addition ops (.LSD)          0        1     (.L or .S or .D unit)
;*      Bound(.L .S .LS)             1        0     
;*      Bound(.L .S .D .LS .LSD)     1        1     
;*
;*      Disqualified loop: Loop carried dependency bound too large
;*----------------------------------------------------------------------------*
$C$L10:    
;          EXCLUSIVE CPU CYCLES: 19
           MPYSP   .M1     A4,A3,A5          ; |70| 
           SUB     .L2     B0,1,B0           ; |69| 
           NOP             2
           MPYSP   .M1     A4,A5,A6          ; |70| 
           SET     .S1     A31,0x18,0x1d,A5
           NOP             2
           MPYSP   .M1     A5,A6,A6          ; |70| 
           SET     .S1     A30,0x16,0x1d,A5
           NOP             2
           FSUBSP  .L1     A5,A6,A5          ; |70| 
   [ B0]   BNOP    .S1     $C$L10,1          ; |69| 
           MPYSP   .M1     A5,A4,A4          ; |70| 
           NOP             3
           ; BRANCHCC OCCURS {$C$L10}        ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 8

           SUB     .L1     A14,1,A1          ; |138| 
||         LDW     .D1T1   *A12,A6           ; |142| 
||         MPYSP   .M1     A4,A3,A4          ; |72| 
||         MVKL    .S1     0x7f7fffff,A5

           MVKH    .S1     0x7f7fffff,A5
||         SUB     .L1     A14,1,A14         ; |138| 

   [ A1]   B       .S2     $C$L7             ; |138| 
||         CMPGTSP .S1     A3,A13,A0         ; |74| 

           MVKL    .S1     0x7f7fffff,A31

   [!A0]   MV      .L1     A13,A4            ; |75| 
||         CMPGTSP .S1     A3,A5,A2          ; |77| 

           MVKH    .S1     0x7f7fffff,A31
||         ADD     .L1     A11,A6,A5         ; |142| 
||         ADD     .D1     4,A11,A11         ; |138| 

   [ A2]   MV      .L1     A31,A4            ; |78| 

           STW     .D1T1   A4,*A5            ; |142| 
|| [!A1]   CALL    .S1     sqrtsp_v          ; |144| 

           ; BRANCHCC OCCURS {$C$L7}         ; |138| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D2T2   *+B13(16),B4      ; |144| 
           MVKL    .S1     a_sc,A4
           MVKH    .S1     a_sc,A4
           MVK     .L1     0x8,A6            ; |144| 
           ADDKPC  .S2     $C$RL14,B3,0      ; |144| 
$C$RL14:   ; CALL OCCURS {sqrtsp_v} {0}      ; |144| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 46
           MVKL    .S2     0x3ee4f8b5,B7
           MVKL    .S2     0x88e368f1,B6
           MVKH    .S2     0x3ee4f8b5,B7

           LDW     .D2T1   *B13,A4           ; |66| 
||         MVKH    .S2     0x88e368f1,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T2   *+B13(4),B4       ; |66| 
||         MVK     .L1     0x8,A6            ; |66| 
||         MVK     .S1     0x1,A8            ; |66| 

$C$RL15:   ; CALL OCCURS {isequal} {0}       ; |66| 
           MVKL    .S2     fcn_pass,B5
           MVKL    .S2     0x3ee4f8b5,B7
           MVKH    .S2     fcn_pass,B5
           MVKL    .S2     0x88e368f1,B6

           LDW     .D2T2   *+B13(8),B4       ; |67| 
||         MVKH    .S2     0x3ee4f8b5,B7

           STW     .D2T1   A4,*+B5(4)        ; |66| 
||         MVKH    .S2     0x88e368f1,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T1   *B13,A4           ; |67| 
||         MVK     .L1     0x8,A6            ; |67| 
||         MVK     .S1     0x1,A8            ; |67| 

$C$RL16:   ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     fcn_pass,B5
           MVKL    .S2     0x3ee4f8b5,B7
           MVKL    .S2     0x88e368f1,B6
           MVKH    .S2     fcn_pass,B5
           MVKH    .S2     0x3ee4f8b5,B7

           STW     .D2T1   A4,*+B5(8)        ; |67| 
||         MVKH    .S2     0x88e368f1,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A10,A4           ; |68| 
||         LDW     .D2T2   *+B13(12),B4      ; |68| 
||         MVK     .L1     0x8,A6            ; |68| 
||         MVK     .S1     0x1,A8            ; |68| 

$C$RL17:   ; CALL OCCURS {isequal} {0}       ; |68| 
           MVKL    .S2     fcn_pass,B4
           MVKL    .S2     0x88e368f1,B6
           MVKL    .S2     0x3ee4f8b5,B7
           MVKH    .S2     fcn_pass,B4

           MV      .L1X    B12,A11           ; |68| 
||         MVKH    .S2     0x88e368f1,B6

           MV      .L1     A10,A3            ; |69| 
||         STW     .D2T1   A4,*+B4(12)       ; |68| 
||         LDW     .D1T2   *A11,B4           ; |69| 
||         MVKH    .S2     0x3ee4f8b5,B7

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A3,A4            ; |69| 
||         MVK     .L1     0x8,A6            ; |69| 
||         MVK     .S1     0x1,A8            ; |69| 

$C$RL18:   ; CALL OCCURS {isequal} {0}       ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12
           MV      .L1X    B11,A15           ; |134| 
           LDW     .D1T1   *A15,A0           ; |72| 
           MVKL    .S2     fcn_pass,B4
           MVKH    .S2     fcn_pass,B4
           STW     .D2T1   A4,*+B4(16)       ; |69| 
           NOP             1

   [!A0]   B       .S1     $C$L11            ; |72| 
|| [ A0]   LDW     .D2T2   *B10,B0           ; |72| 

   [!A0]   CALL    .S1     print_test_results ; |148| 
   [ A0]   ADD     .L2     4,B10,B4
   [!A0]   MVKL    .S2     all_pass,B4
   [!A0]   MV      .L2X    A13,B5
   [!A0]   MVKH    .S2     all_pass,B4
           ; BRANCHCC OCCURS {$C$L11}        ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10
   [ B0]   LDW     .D2T2   *B4,B4            ; |72| 
           CMPEQ   .L1     A4,0,A3           ; |72| 
           XOR     .L1     1,A3,A3           ; |72| 
   [!B0]   MV      .L1     A13,A0            ; |72| 
           MVK     .L2     0x1,B5            ; |72| 
   [ B0]   CMPEQ   .L2     B4,0,B4           ; |72| 
   [ B0]   XOR     .L2     1,B4,B4           ; |72| 
           NOP             1
   [ B0]   AND     .L1X    A3,B4,A0          ; |72| 
   [!A0]   MV      .L2X    A13,B5
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           CALL    .S1     print_test_results ; |148| 
           MVKL    .S2     all_pass,B4
           MVKH    .S2     all_pass,B4
           NOP             2
;** --------------------------------------------------------------------------*
$C$L11:    
;          EXCLUSIVE CPU CYCLES: 1

           MVK     .L1     0x3,A4            ; |148| 
||         STW     .D2T2   B5,*B4            ; |72| 
||         ADDKPC  .S2     $C$RL19,B3,0      ; |148| 

$C$RL19:   ; CALL OCCURS {print_test_results} {0}  ; |148| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           MVKL    .S1     a_ext,A3
           MVKH    .S1     a_ext,A3
           ZERO    .L1     A4

           MV      .L2X    A3,B4             ; |151| 
||         SET     .S1     A4,0x17,0x17,A4

           STW     .D2T1   A4,*B4            ; |151| 
||         MV      .L1     A3,A10            ; |151| 
||         MVK     .S2     0xed,B13          ; |152| 
||         MV      .S1     A13,A14           ; |151| 

;** --------------------------------------------------------------------------*
;**   BEGIN LOOP $C$L12
;** --------------------------------------------------------------------------*
$C$L12:    
;          EXCLUSIVE CPU CYCLES: 7
           LDW     .D1T1   *A10,A3           ; |153| 
           CALL    .S1     sqrt              ; |153| 
           ADDKPC  .S2     $C$RL20,B3,2      ; |153| 
           SPDP    .S1     A3,A5:A4          ; |153| 
           NOP             1
$C$RL20:   ; CALL OCCURS {sqrt} {0}          ; |153| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 23
           MVKL    .S1     output,A3
           MVKH    .S1     output,A3
           DPSP    .L1     A5:A4,A31         ; |153| 
           MV      .L2X    A3,B4             ; |153| 
           LDW     .D2T2   *B4,B4            ; |153| 
           NOP             4
           ADD     .L1X    A14,B4,A4         ; |153| 
           STW     .D1T1   A31,*A4           ; |153| 
           LDW     .D1T2   *A10,B4           ; |154| 
           NOP             4
           CMPGTSP .S2X    B4,A13,B0         ; |154| 
   [!B0]   B       .S1     $C$L13            ; |154| 
   [ B0]   CALL    .S1     sqrtsp            ; |154| 
   [!B0]   CALL    .S1     sqrt              ; |154| 
   [!B0]   SPDP    .S2     B4,B5:B4          ; |154| 
           NOP             2
           ; BRANCHCC OCCURS {$C$L13}        ; |154| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 1

           MV      .L1X    B4,A4             ; |154| 
||         ADDKPC  .S2     $C$RL21,B3,0      ; |154| 

$C$RL21:   ; CALL OCCURS {sqrtsp} {0}        ; |154| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 8
           SPDP    .S1     A4,A5:A4          ; |154| 
           NOP             1

           BNOP    .S1     $C$L14,4          ; |154| 
||         DPSP    .L1     A5:A4,A3          ; |154| 

           MV      .L2X    A3,B4             ; |154| 
||         MVKL    .S1     output,A3

           ; BRANCH OCCURS {$C$L14}          ; |154| 
;** --------------------------------------------------------------------------*
$C$L13:    
;          EXCLUSIVE CPU CYCLES: 2
           DADD    .L1X    0,B5:B4,A5:A4     ; |154| 
           ADDKPC  .S2     $C$RL22,B3,0      ; |154| 
$C$RL22:   ; CALL OCCURS {sqrt} {0}          ; |154| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 6
           DPSP    .L1     A5:A4,A3          ; |154| 
           NOP             4

           MV      .L2X    A3,B4             ; |154| 
||         MVKL    .S1     output,A3

;** --------------------------------------------------------------------------*
$C$L14:    
;          EXCLUSIVE CPU CYCLES: 13
           MVKH    .S1     output,A3
           LDW     .D1T2   *+A3(4),B5        ; |154| 
           NOP             4
           ADD     .L2X    A14,B5,B5         ; |154| 

           STW     .D2T2   B4,*B5            ; |154| 
||         CALL    .S1     sqrtsp_c          ; |155| 

           LDW     .D1T1   *A10,A4           ; |155| 
           ADDKPC  .S2     $C$RL23,B3,3      ; |155| 
$C$RL23:   ; CALL OCCURS {sqrtsp_c} {0}      ; |155| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 15
           MVKL    .S1     output,A3
           MVKH    .S1     output,A3
           LDW     .D1T1   *+A3(8),A3        ; |155| 
           MVK     .L2     0x2,B0            ; |69| 
           ZERO    .L1     A31
           ZERO    .L1     A30
           NOP             1
           ADD     .L1     A14,A3,A3         ; |155| 
           STW     .D1T1   A4,*A3            ; |155| 
           LDW     .D1T1   *A10,A4           ; |156| 
           NOP             4
           RSQRSP  .S1     A4,A5             ; |66| 
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*
;*      Loop found in file               : C:/builds/DEV_TI_MATHLIB_3_1_0_0/mathlib/ti/mathlib/src/sqrtsp/sqrtsp_d.c
;*      Loop inlined from                : ../../../../../../../ti/mathlib/src/sqrtsp/c66/sqrtsp_i.h
;*      Loop source line                 : 69
;*      Loop opening brace source line   : 69
;*      Loop closing brace source line   : 71
;*      Known Minimum Trip Count         : 2                    
;*      Known Maximum Trip Count         : 2                    
;*      Known Max Trip Count Factor      : 2
;*      Loop Carried Dependency Bound(^) : 22
;*      Unpartitioned Resource Bound     : 2
;*      Partitioned Resource Bound(*)    : 2
;*      Resource Partition:
;*                                A-side   B-side
;*      .L units                     0        0     
;*      .S units                     0        0     
;*      .D units                     0        0     
;*      .M units                     2*       2*    
;*      .X cross paths               1        1     
;*      .T address paths             0        0     
;*      Long read paths              0        0     
;*      Long write paths             0        0     
;*      Logical  ops (.LS)           1        0     (.L or .S unit)
;*      Addition ops (.LSD)          0        1     (.L or .S or .D unit)
;*      Bound(.L .S .LS)             1        0     
;*      Bound(.L .S .D .LS .LSD)     1        1     
;*
;*      Disqualified loop: Loop carried dependency bound too large
;*----------------------------------------------------------------------------*
$C$L15:    
;          EXCLUSIVE CPU CYCLES: 19
           MPYSP   .M1     A5,A4,A3          ; |70| 
           SUB     .L2     B0,1,B0           ; |69| 
           NOP             2
           MPYSP   .M1     A5,A3,A6          ; |70| 
           SET     .S1     A31,0x18,0x1d,A3
           NOP             2
           MPYSP   .M1     A3,A6,A6          ; |70| 
           SET     .S1     A30,0x16,0x1d,A3
           NOP             2
           FSUBSP  .L1     A3,A6,A3          ; |70| 
   [ B0]   BNOP    .S1     $C$L15,1          ; |69| 
           MPYSP   .M1     A3,A5,A5          ; |70| 
           NOP             3
           ; BRANCHCC OCCURS {$C$L15}        ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 24

           LDW     .D1T1   *A12,A6           ; |156| 
||         MPYSP   .M1     A5,A4,A5          ; |72| 
||         MVKL    .S1     0x7f7fffff,A3

           MVKH    .S1     0x7f7fffff,A3
           CMPGTSP .S1     A4,A13,A0         ; |74| 
           CMPGTSP .S1     A4,A3,A2          ; |77| 
   [!A0]   MV      .L1     A13,A5            ; |75| 

           ADD     .L1     A14,A6,A4         ; |156| 
|| [ A2]   MV      .S1     A3,A5             ; |78| 

           STW     .D1T1   A5,*A4            ; |156| 
           LDW     .D1T1   *A10,A3           ; |157| 
           MVKL    .S1     0xc000cccc,A5
           MVKL    .S1     0xcccccccd,A4
           MVKH    .S1     0xc000cccc,A5
           MVKH    .S1     0xcccccccd,A4
           MPYSPDP .M1     A3,A5:A4,A5:A4    ; |157| 
           SUB     .L1X    B13,1,A1          ; |152| 
           SUB     .L2     B13,1,B13         ; |152| 
   [!A1]   MVKL    .S2     output,B13
   [!A1]   MVKH    .S2     output,B13
           ADD     .L1     4,A14,A14         ; |152| 
   [ A1]   B       .S1     $C$L12            ; |152| 
           DPSP    .L1     A5:A4,A3          ; |157| 
           NOP             3

   [!A1]   CALL    .S1     sqrtsp_v          ; |159| 
||         STW     .D1T1   A3,*++A10         ; |157| 

           ; BRANCHCC OCCURS {$C$L12}        ; |152| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D2T2   *+B13(16),B4      ; |159| 
           MVKL    .S1     a_ext,A4
           MVKH    .S1     a_ext,A4
           MVK     .S1     0xed,A6           ; |159| 
           ADDKPC  .S2     $C$RL24,B3,0      ; |159| 
$C$RL24:   ; CALL OCCURS {sqrtsp_v} {0}      ; |159| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 47
           LDW     .D2T2   *B13,B5           ; |66| 
           MVKL    .S2     0x3ee4f8b5,B7
           MVKL    .S2     0x88e368f1,B6
           MVKH    .S2     0x3ee4f8b5,B7
           MVKH    .S2     0x88e368f1,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T2   *+B13(4),B4       ; |66| 
||         MV      .L1X    B5,A4             ; |66| 
||         MVK     .S1     0xed,A6           ; |66| 
||         MVK     .D1     0x1,A8            ; |66| 

$C$RL25:   ; CALL OCCURS {isequal} {0}       ; |66| 
           MVKL    .S2     fcn_pass,B5
           MVKL    .S2     0x3ee4f8b5,B7
           MVKL    .S2     0x88e368f1,B6
           MVKH    .S2     fcn_pass,B5

           LDW     .D2T2   *+B13(8),B4       ; |67| 
||         MVKH    .S2     0x3ee4f8b5,B7

           STW     .D2T1   A4,*+B5(4)        ; |66| 
||         MVKH    .S2     0x88e368f1,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T1   *B13,A4           ; |67| 
||         MVK     .S1     0xed,A6           ; |67| 
||         MVK     .L1     0x1,A8            ; |67| 

$C$RL26:   ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     fcn_pass,B5
           MVKL    .S2     0x3ee4f8b5,B7
           MVKL    .S2     0x88e368f1,B6
           MVKH    .S2     fcn_pass,B5
           MVKH    .S2     0x3ee4f8b5,B7

           MV      .L1X    B13,A3            ; |67| 
||         STW     .D2T1   A4,*+B5(8)        ; |67| 
||         MVKH    .S2     0x88e368f1,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A3,A4            ; |68| 
||         LDW     .D2T2   *+B13(12),B4      ; |68| 
||         MVK     .S1     0xed,A6           ; |68| 
||         MVK     .L1     0x1,A8            ; |68| 

$C$RL27:   ; CALL OCCURS {isequal} {0}       ; |68| 
           MVKL    .S2     fcn_pass,B4
           MVKL    .S2     0x88e368f1,B6
           MVKL    .S2     0x3ee4f8b5,B7
           MVKH    .S2     fcn_pass,B4
           MVKH    .S2     0x88e368f1,B6

           MV      .L1X    B13,A3            ; |68| 
||         STW     .D2T1   A4,*+B4(12)       ; |68| 
||         LDW     .D1T2   *A11,B4           ; |69| 
||         MVKH    .S2     0x3ee4f8b5,B7

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A3,A4            ; |69| 
||         MVK     .S1     0xed,A6           ; |69| 
||         MVK     .L1     0x1,A8            ; |69| 

$C$RL28:   ; CALL OCCURS {isequal} {0}       ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 11
           LDW     .D1T1   *A15,A0           ; |72| 
           MVKL    .S2     fcn_pass,B4
           MV      .L2     B10,B5            ; |72| 
           MVKH    .S2     fcn_pass,B4
           STW     .D2T1   A4,*+B4(16)       ; |69| 

   [ A0]   ADD     .L2     4,B5,B4
|| [!A0]   B       .S1     $C$L16            ; |72| 
|| [ A0]   LDW     .D2T2   *B5,B0            ; |72| 

   [!A0]   CALL    .S1     print_test_results ; |163| 
   [!A0]   MVKL    .S1     all_pass,A3
   [!A0]   MVKH    .S1     all_pass,A3
   [!A0]   MV      .L2X    A13,B4
   [!A0]   MV      .L2X    A3,B5
           ; BRANCHCC OCCURS {$C$L16}        ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10
   [ B0]   LDW     .D2T2   *B4,B4            ; |72| 
           CMPEQ   .L1     A4,0,A3           ; |72| 
           XOR     .L1     1,A3,A3           ; |72| 
   [!B0]   MV      .L1     A13,A0            ; |72| 
           NOP             1
   [ B0]   CMPEQ   .L2     B4,0,B4           ; |72| 
   [ B0]   XOR     .L2     1,B4,B4           ; |72| 
           NOP             1

   [ B0]   AND     .L1X    A3,B4,A0          ; |72| 
||         MVK     .L2     0x1,B4            ; |72| 

   [!A0]   MV      .L2X    A13,B4
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           CALL    .S1     print_test_results ; |163| 
           MVKL    .S1     all_pass,A3
           MVKH    .S1     all_pass,A3
           NOP             1
           MV      .L2X    A3,B5
;** --------------------------------------------------------------------------*
$C$L16:    
;          EXCLUSIVE CPU CYCLES: 1

           MVK     .L1     0x4,A4            ; |163| 
||         STW     .D2T2   B4,*B5            ; |72| 
||         ADDKPC  .S2     $C$RL29,B3,0      ; |163| 

$C$RL29:   ; CALL OCCURS {print_test_results} {0}  ; |163| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 14
           MVKL    .S2     cycle_counts+24,B13

           MVKH    .S2     cycle_counts+24,B13
||         MV      .L2X    A13,B4            ; |114| 
||         MV      .L1     A13,A10           ; |114| 
||         MV      .S1     A13,A11           ; |114| 

           MVC     .S2     B4,TSCL           ; |115| 
||         STDW    .D2T1   A11:A10,*B13      ; |114| 

           MVC     .S2     TSCL,B6           ; |116| 
           MVC     .S2     TSCH,B5           ; |116| 
           MVKL    .S2     t_start,B4

           MVKH    .S2     t_start,B4
||         MV      .L2     B5,B7             ; |116| 

           MVC     .S2     TSCL,B4           ; |117| 
||         STDW    .D2T2   B7:B6,*B4         ; |116| 

           MVC     .S2     TSCH,B8           ; |117| 
           MVKL    .S1     t_offset,A14

           CALL    .S2     gimme_random      ; |173| 
||         SUBU    .L2     B4,B6,B5:B4       ; |117| 
||         MVKL    .S1     0x447a4000,A4

           EXT     .S2     B5,24,24,B6       ; |117| 
||         SUB     .L2     B8,B7,B31         ; |117| 
||         MVK     .S1     0x80,A3           ; |171| 

           ADD     .L2     B31,B6,B5         ; |117| 
||         MVKH    .S1     t_offset,A14

           ZERO    .L2     B4
||         STDW    .D1T2   B5:B4,*A14        ; |117| 
||         MVKH    .S1     0x447a4000,A4
||         STW     .D2T1   A3,*+SP(12)       ; |117| 
||         MV      .L1     A10,A15           ; |117| 

;** --------------------------------------------------------------------------*
;**   BEGIN LOOP $C$L17
;** --------------------------------------------------------------------------*
$C$L17:    
;          EXCLUSIVE CPU CYCLES: 2
           MVKH    .S2     0xbf800000,B4
           ADDKPC  .S2     $C$RL30,B3,0      ; |173| 
$C$RL30:   ; CALL OCCURS {gimme_random} {0}  ; |173| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 13
           MVKL    .S1     input,A3
           MVKH    .S1     input,A3
           LDW     .D1T1   *A3,A3            ; |173| 
           NOP             4
           ADD     .L1     A15,A3,A3         ; |173| 

           STW     .D1T1   A4,*A3            ; |173| 
||         MVC     .S2     TSCL,B4           ; |122| 

           NOP             1

           MV      .L1X    B4,A6             ; |122| Define a twin register
||         MVC     .S2     TSCH,B4           ; |122| 

           ZERO    .L1     A31

           MV      .L1X    B4,A7             ; |122| 
||         MVK     .L2     0x2,B0            ; |69| 
||         ZERO    .D1     A30
||         RSQRSP  .S1     A4,A3             ; |66| 

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*
;*      Loop found in file               : C:/builds/DEV_TI_MATHLIB_3_1_0_0/mathlib/ti/mathlib/src/sqrtsp/sqrtsp_d.c
;*      Loop inlined from                : ../../../../../../../ti/mathlib/src/sqrtsp/c66/sqrtsp_i.h
;*      Loop source line                 : 69
;*      Loop opening brace source line   : 69
;*      Loop closing brace source line   : 71
;*      Known Minimum Trip Count         : 2                    
;*      Known Maximum Trip Count         : 2                    
;*      Known Max Trip Count Factor      : 2
;*      Loop Carried Dependency Bound(^) : 22
;*      Unpartitioned Resource Bound     : 2
;*      Partitioned Resource Bound(*)    : 2
;*      Resource Partition:
;*                                A-side   B-side
;*      .L units                     0        0     
;*      .S units                     0        0     
;*      .D units                     0        0     
;*      .M units                     2*       2*    
;*      .X cross paths               1        1     
;*      .T address paths             0        0     
;*      Long read paths              0        0     
;*      Long write paths             0        0     
;*      Logical  ops (.LS)           1        0     (.L or .S unit)
;*      Addition ops (.LSD)          0        1     (.L or .S or .D unit)
;*      Bound(.L .S .LS)             1        0     
;*      Bound(.L .S .D .LS .LSD)     1        1     
;*
;*      Disqualified loop: Loop carried dependency bound too large
;*----------------------------------------------------------------------------*
$C$L18:    
;          EXCLUSIVE CPU CYCLES: 19
           MPYSP   .M1     A3,A4,A5          ; |70| 
           SUB     .L2     B0,1,B0           ; |69| 
           NOP             2
           MPYSP   .M1     A3,A5,A8          ; |70| 
           SET     .S1     A31,0x18,0x1d,A5
           NOP             2
           MPYSP   .M1     A5,A8,A5          ; |70| 
           SET     .S1     A30,0x16,0x1d,A8
           NOP             2
           FSUBSP  .L1     A8,A5,A5          ; |70| 
   [ B0]   BNOP    .S1     $C$L18,1          ; |69| 
           MPYSP   .M1     A5,A3,A3          ; |70| 
           NOP             3
           ; BRANCHCC OCCURS {$C$L18}        ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 22

           LDW     .D1T1   *A12,A8           ; |177| 
||         MPYSP   .M1     A3,A4,A5          ; |72| 
||         MVKL    .S1     t_start,A3

           MVKH    .S1     t_start,A3
           MVKL    .S1     0x7f7fffff,A31

           MVKH    .S1     0x7f7fffff,A31
||         MV      .L2X    A3,B4             ; |78| 

           CMPGTSP .S1     A4,A13,A0         ; |74| 
||         STDW    .D2T1   A7:A6,*B4

   [!A0]   MV      .L1     A13,A5            ; |75| 
||         CMPGTSP .S1     A4,A31,A0         ; |77| 
||         ADD     .D1     A15,A8,A4         ; |177| 

   [ A0]   MV      .L1     A31,A5            ; |78| 

           STW     .D1T1   A5,*A4            ; |177| 
||         MVC     .S2     TSCL,B8           ; |128| 

           MVC     .S2     TSCH,B4           ; |128| 

           LDDW    .D1T1   *A14,A5:A4        ; |130| 
||         MVKL    .S1     t_stop,A3
||         MV      .L2     B4,B9             ; |128| 

           LDW     .D2T1   *+SP(12),A30      ; |128| 
||         MVKH    .S1     t_stop,A3

           STDW    .D1T2   B9:B8,*A3         ; |128| 
           LDDW    .D2T2   *B13,B7:B6        ; |130| 
           ADD     .L1     4,A15,A15         ; |171| 
           ADDU    .L1     A4,A6,A9:A8       ; |130| 

           ADD     .L1     A9,A5,A4          ; |130| 
||         SUB     .S1     A30,1,A0          ; |171| 

           ADD     .L1     A4,A7,A4          ; |130| 
|| [ A0]   B       .S1     $C$L17            ; |171| 
||         SUBU    .L2X    B8,A8,B5:B4       ; |130| 
||         STW     .D2T1   A0,*+SP(12)       ; |130| 

           EXT     .S2     B5,24,24,B16      ; |130| 
||         ADDU    .L2     B6,B4,B5:B4       ; |130| 

   [ A0]   CALL    .S2     gimme_random      ; |173| 
||         SUB     .L2X    B9,A4,B6          ; |130| 
||         ADD     .D2     B5,B7,B5          ; |130| 
|| [ A0]   MVKL    .S1     0x447a4000,A4

           ADD     .L2     B6,B16,B6         ; |130| 
|| [ A0]   MVKH    .S1     0x447a4000,A4

           ADD     .L2     B5,B6,B5          ; |130| 

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
||         STDW    .D2T2   B5:B4,*B13        ; |130| 
|| [ A0]   ZERO    .L2     B4

           ; BRANCHCC OCCURS {$C$L17}        ; |171| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D2T1   *B13,A5:A4        ; |135| 
           ADDKPC  .S2     $C$RL31,B3,3      ; |135| 
$C$RL31:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 15
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |135| 
           ZERO    .L1     A13
           SET     .S1     A13,0x15,0x1d,A13
           MV      .L1     A11,A12           ; |135| 
           SPDP    .S1     A3,A5:A4          ; |135| 
           NOP             2

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A13:A12,A5:A4,A5:A4 ; |135| 

$C$RL32:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 11
           MVK     .S1     24,A3

           SUB     .L1X    B13,A3,A3
||         STDW    .D2T1   A5:A4,*B13        ; |135| 
||         MV      .L2X    A10,B4            ; |114| 

           MVC     .S2     B4,TSCL           ; |115| 
||         STDW    .D1T1   A11:A10,*A3       ; |114| 

           MVC     .S2     TSCL,B5           ; |116| 
           MVC     .S2     TSCH,B4           ; |116| 
           MVC     .S2     TSCL,B6           ; |117| 
           MVC     .S2     TSCH,B8           ; |117| 
           SUBU    .L2     B6,B5,B7:B6       ; |117| 

           EXT     .S2     B7,24,24,B5       ; |117| 
||         SUB     .L2     B8,B4,B4          ; |117| 

           ADD     .L2     B4,B5,B7          ; |117| 
||         MVK     .S1     0x80,A3

           STDW    .D1T2   B7:B6,*A14        ; |117| 
||         MV      .L1     A3,A15            ; |117| 

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L19:    
;          EXCLUSIVE CPU CYCLES: 15
           MVC     .S2     TSCL,B4           ; |122| 
           MVC     .S2     TSCH,B5           ; |122| 
           MVKL    .S1     input,A3
           MVKH    .S1     input,A3
           LDW     .D1T1   *A3,A3            ; |186| 
           MVKL    .S2     t_start,B6
           MVKH    .S2     t_start,B6
           STDW    .D2T2   B5:B4,*B6         ; |122| 
           NOP             1

           ADD     .L1     A12,A3,A3         ; |186| 
||         CALL    .S1     sqrtf             ; |186| 

           LDW     .D1T1   *A3,A4            ; |186| 
           ADDKPC  .S2     $C$RL33,B3,3      ; |186| 
$C$RL33:   ; CALL OCCURS {sqrtf} {0}         ; |186| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 24
           MVKL    .S2     output,B4
           MVKH    .S2     output,B4
           LDW     .D2T2   *B4,B4            ; |186| 
           NOP             4
           ADD     .L1X    A12,B4,A3         ; |186| 

           STW     .D1T1   A4,*A3            ; |186| 
||         MVC     .S2     TSCL,B16          ; |128| 

           MVC     .S2     TSCH,B6           ; |128| 

           MVKL    .S2     t_start,B4
||         LDDW    .D1T1   *A14,A5:A4        ; |130| 
||         MVK     .S1     24,A3
||         SUB     .L1     A15,1,A0          ; |184| 
||         MV      .L2     B6,B17            ; |128| 
||         SUBAW   .D2     B13,6,B6

           MVKH    .S2     t_start,B4
||         SUB     .L1X    B13,A3,A3
||         MVKL    .S1     t_stop,A31
||         SUB     .D1     A15,1,A15         ; |184| 

   [!A0]   MV      .L1X    B6,A15
||         LDDW    .D2T2   *B4,B9:B8         ; |130| 

           MVKH    .S1     t_stop,A31
           LDDW    .D1T1   *A3,A7:A6         ; |130| 
           ADD     .L1     4,A12,A12         ; |184| 
           STDW    .D1T2   B17:B16,*A31      ; |128| 
           ADDU    .L2X    A4,B8,B5:B4       ; |130| 

           ADD     .S2X    B5,A5,B7          ; |130| 
|| [ A0]   B       .S1     $C$L19            ; |184| 
||         SUBU    .L2     B16,B4,B5:B4      ; |130| 

           ADD     .D2     B7,B9,B7          ; |130| 
||         EXT     .S2     B5,24,24,B8       ; |130| 
||         ADDU    .L2X    A6,B4,B5:B4       ; |130| 

           SUB     .L2     B17,B7,B7         ; |130| 
||         ADD     .S2X    B5,A7,B5          ; |130| 

           ADD     .L2     B7,B8,B7          ; |130| 
           ADD     .L2     B5,B7,B5          ; |130| 

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
||         STDW    .D2T2   B5:B4,*B6         ; |130| 

           ; BRANCHCC OCCURS {$C$L19}        ; |184| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *A15,A5:A4        ; |135| 
           ADDKPC  .S2     $C$RL34,B3,3      ; |135| 
$C$RL34:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 14
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |135| 
           MV      .L1     A10,A12           ; |135| 
           NOP             2
           SPDP    .S1     A3,A5:A4          ; |135| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A13:A12,A5:A4,A5:A4 ; |135| 

$C$RL35:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10

           STDW    .D1T1   A11:A10,*+A15(8)  ; |114| 
||         MV      .L2X    A11,B4            ; |114| 

           MVC     .S2     B4,TSCL           ; |115| 
||         STDW    .D1T1   A5:A4,*A15        ; |135| 

           MVC     .S2     TSCL,B4           ; |116| 
           MVC     .S2     TSCH,B6           ; |116| 
           MVC     .S2     TSCL,B5           ; |117| 
           MVC     .S2     TSCH,B8           ; |117| 
           SUBU    .L2     B5,B4,B5:B4       ; |117| 

           EXT     .S2     B5,24,24,B6       ; |117| 
||         SUB     .L2     B8,B6,B5          ; |117| 
||         MVK     .S1     0x80,A3

           ADD     .L2     B5,B6,B5          ; |117| 
||         STW     .D2T1   A3,*+SP(12)       ; |117| 
||         MV      .S2X    A14,B7            ; |117| 

           STDW    .D2T2   B5:B4,*B7         ; |117| 
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L20:    
;          EXCLUSIVE CPU CYCLES: 15
           MVC     .S2     TSCL,B4           ; |122| 
           MVC     .S2     TSCH,B5           ; |122| 
           MVKL    .S1     input,A3
           MVKH    .S1     input,A3
           LDW     .D1T1   *A3,A3            ; |195| 
           MVKL    .S2     t_start,B6
           MVKH    .S2     t_start,B6
           STDW    .D2T2   B5:B4,*B6         ; |122| 
           NOP             1

           ADD     .L1     A12,A3,A3         ; |195| 
||         CALL    .S1     sqrtsp            ; |195| 

           LDW     .D1T1   *A3,A4            ; |195| 
           ADDKPC  .S2     $C$RL36,B3,3      ; |195| 
$C$RL36:   ; CALL OCCURS {sqrtsp} {0}        ; |195| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 24
           MVKL    .S2     output+4,B4
           MVKH    .S2     output+4,B4
           LDW     .D2T2   *B4,B4            ; |195| 
           NOP             4
           ADD     .L1X    A12,B4,A3         ; |195| 

           STW     .D1T1   A4,*A3            ; |195| 
||         MVC     .S2     TSCL,B16          ; |128| 

           MVC     .S2     TSCH,B4           ; |128| 

           MVKL    .S2     t_start,B5
||         LDDW    .D1T1   *A14,A7:A6        ; |130| 
||         MV      .L2     B4,B17            ; |128| 
||         MVKL    .S1     t_stop,A31
||         ADD     .L1     4,A12,A12         ; |193| 

           MVKH    .S2     t_start,B5
||         LDW     .D2T1   *+SP(12),A30      ; |128| 
||         ADDAD   .D1     A15,1,A3
||         MVKH    .S1     t_stop,A31

           MVK     .S2     8,B13
||         LDDW    .D2T2   *B5,B7:B6         ; |130| 

           LDDW    .D1T1   *A3,A5:A4         ; |130| 
           STDW    .D1T2   B17:B16,*A31      ; |128| 
           ADD     .L2X    A15,B13,B13
           SUB     .L1     A30,1,A0          ; |193| 

           ADDU    .L2X    A6,B6,B9:B8       ; |130| 
|| [!A0]   MV      .L1     A15,A3
||         STW     .D2T1   A0,*+SP(12)       ; |130| 

           ADD     .S2X    B9,A7,B6          ; |130| 
|| [ A0]   B       .S1     $C$L20            ; |193| 
||         SUBU    .L2     B16,B8,B5:B4      ; |130| 

           ADD     .D2     B6,B7,B6          ; |130| 
||         EXT     .S2     B5,24,24,B7       ; |130| 
||         ADDU    .L2X    A4,B4,B5:B4       ; |130| 

           SUB     .L2     B17,B6,B6         ; |130| 
||         ADD     .S2X    B5,A5,B5          ; |130| 

           ADD     .L2     B6,B7,B6          ; |130| 
           ADD     .L2     B5,B6,B5          ; |130| 

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
||         STDW    .D2T2   B5:B4,*B13        ; |130| 

           ; BRANCHCC OCCURS {$C$L20}        ; |193| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *+A3(8),A5:A4     ; |135| 
           ADDKPC  .S2     $C$RL37,B3,3      ; |135| 
$C$RL37:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 14
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |135| 
           MV      .L1     A11,A12           ; |135| 
           NOP             2
           SPDP    .S1     A3,A5:A4          ; |135| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A13:A12,A5:A4,A5:A4 ; |135| 

$C$RL38:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10

           MV      .L1     A15,A3            ; |135| 
||         STDW    .D2T1   A5:A4,*B13        ; |135| 
||         MV      .L2X    A10,B4            ; |114| 

           MVC     .S2     B4,TSCL           ; |115| 
||         STDW    .D1T1   A11:A10,*+A3(16)  ; |114| 

           MVC     .S2     TSCL,B4           ; |116| 
           MVC     .S2     TSCH,B6           ; |116| 
           MVC     .S2     TSCL,B5           ; |117| 
           MVC     .S2     TSCH,B7           ; |117| 
           SUBU    .L2     B5,B4,B5:B4       ; |117| 

           EXT     .S2     B5,24,24,B6       ; |117| 
||         SUB     .L2     B7,B6,B5          ; |117| 

           ADD     .L2     B5,B6,B5          ; |117| 
||         MVK     .S1     0x80,A3

           STDW    .D1T2   B5:B4,*A14        ; |117| 
||         STW     .D2T1   A3,*+SP(12)       ; |117| 

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L21:    
;          EXCLUSIVE CPU CYCLES: 15
           MVC     .S2     TSCL,B4           ; |122| 
           MVC     .S2     TSCH,B5           ; |122| 
           MVKL    .S1     input,A3
           MVKH    .S1     input,A3
           LDW     .D1T1   *A3,A3            ; |204| 
           MVKL    .S2     t_start,B6
           MVKH    .S2     t_start,B6
           STDW    .D2T2   B5:B4,*B6         ; |122| 
           NOP             1

           ADD     .L1     A12,A3,A3         ; |204| 
||         CALL    .S1     sqrtsp_c          ; |204| 

           LDW     .D1T1   *A3,A4            ; |204| 
           ADDKPC  .S2     $C$RL39,B3,3      ; |204| 
$C$RL39:   ; CALL OCCURS {sqrtsp_c} {0}      ; |204| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 24
           MVKL    .S2     output+8,B4
           MVKH    .S2     output+8,B4
           LDW     .D2T2   *B4,B4            ; |204| 
           NOP             4
           ADD     .L1X    A12,B4,A3         ; |204| 

           STW     .D1T1   A4,*A3            ; |204| 
||         MVC     .S2     TSCL,B8           ; |128| 

           MVC     .S2     TSCH,B9           ; |128| 

           MVKL    .S2     t_start,B13
||         LDW     .D2T1   *+SP(12),A31      ; |130| 
||         MVKL    .S1     cycle_counts+16,A3
||         ADD     .L1     4,A12,A12         ; |202| 

           MVKH    .S2     t_start,B13
||         LDDW    .D1T1   *A14,A5:A4        ; |130| 
||         MVKH    .S1     cycle_counts+16,A3

           LDDW    .D2T2   *B13,B17:B16      ; |130| 
||         LDDW    .D1T1   *A3,A7:A6         ; |130| 
||         MVKL    .S1     t_stop,A15

           MVKH    .S1     t_stop,A15
           STDW    .D1T2   B9:B8,*A15        ; |128| 
           SUB     .L1     A31,1,A0          ; |202| 
           STW     .D2T1   A0,*+SP(12)       ; |130| 
           ADDU    .L2X    A4,B16,B7:B6      ; |130| 

           SUBU    .L2     B8,B6,B5:B4       ; |130| 
||         ADD     .S2X    B7,A5,B6          ; |130| 
|| [ A0]   B       .S1     $C$L21            ; |202| 

           ADD     .L2     B6,B17,B6         ; |130| 
||         EXT     .S2     B5,24,24,B5       ; |130| 

           SUB     .S2     B9,B6,B4          ; |130| 
||         ADDU    .L2X    A6,B4,B7:B6       ; |130| 

           ADD     .L2     B4,B5,B5          ; |130| 
||         ADD     .S2X    B7,A7,B4          ; |130| 

           ADD     .L2     B4,B5,B7          ; |130| 
||         MV      .S2X    A3,B4             ; |130| 
|| [!A0]   MVK     .S1     16,A3

           STDW    .D2T2   B7:B6,*B4         ; |130| 
           ; BRANCHCC OCCURS {$C$L21}        ; |202| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 6

           SUB     .L1X    B4,A3,A3
||         CALL    .S1     __c6xabi_fltllif  ; |135| 

           LDDW    .D1T1   *+A3(16),A5:A4    ; |135| 
           ADDKPC  .S2     $C$RL40,B3,3      ; |135| 
$C$RL40:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 110
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |135| 
           MV      .L1     A11,A12           ; |135| 
           NOP             2
           SPDP    .S1     A3,A5:A4          ; |135| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A13:A12,A5:A4,A5:A4 ; |135| 

$C$RL41:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
           MVKL    .S1     cycle_counts+16,A12
           MVKH    .S1     cycle_counts+16,A12
           SUBAW   .D1     A12,4,A3

           MV      .L2X    A10,B4            ; |114| 
||         STDW    .D1T1   A5:A4,*A12        ; |135| 

           STDW    .D1T1   A11:A10,*+A3(32)  ; |114| 
||         MVC     .S2     B4,TSCL           ; |115| 

           MVC     .S2     TSCL,B4           ; |116| 
           MVC     .S2     TSCH,B5           ; |116| 

           STDW    .D2T2   B5:B4,*B13        ; |116| 
||         MVC     .S2     TSCL,B6           ; |117| 

           MVC     .S2     TSCH,B8           ; |117| 

           MVKL    .S1     input,A3
||         SUBU    .L2     B6,B4,B7:B6       ; |117| 

           MVKH    .S1     input,A3
||         SUB     .L2     B8,B5,B4          ; |117| 
||         EXT     .S2     B7,24,24,B5       ; |117| 

           MVKL    .S1     output,A10
||         ADD     .L2     B4,B5,B7          ; |117| 

           MV      .L2X    A3,B9             ; |211| 
||         MVKH    .S1     output,A10
||         STDW    .D1T2   B7:B6,*A14        ; |117| 

           CALLP   .S2     sqrtsp_v,B3
||         LDW     .D2T1   *B9,A4            ; |211| 
||         LDW     .D1T2   *+A10(16),B4      ; |211| 
||         MVK     .S1     0x80,A6           ; |211| 

$C$RL42:   ; CALL OCCURS {sqrtsp_v} {0}      ; |211| 
           MVC     .S2     TSCL,B8           ; |128| 
           MVC     .S2     TSCH,B4           ; |128| 

           LDDW    .D1T1   *A14,A5:A4        ; |130| 
||         LDDW    .D2T2   *B13,B7:B6        ; |130| 

           MVK     .S2     16,B13
           ADD     .L2X    A12,B13,B13
           MV      .L2     B4,B9             ; |128| 
           LDDW    .D2T2   *B13,B5:B4        ; |130| 
           ADDU    .L1X    A4,B6,A7:A6       ; |130| 
           MV      .L1     A6,A3             ; |130| 

           ADD     .S1     A7,A5,A4          ; |130| 
||         SUBU    .L1X    B8,A3,A7:A6       ; |130| 

           MV      .L1     A6,A3             ; |130| 

           ADDU    .L1X    B4,A3,A5:A4       ; |130| 
||         ADD     .L2X    A4,B7,B4          ; |130| 

           EXT     .S1     A7,24,24,A3       ; |130| 

           SUB     .L2     B9,B4,B7          ; |130| 
||         ADD     .S2X    A5,B5,B5          ; |130| 

           ADD     .L2X    B7,A3,B7          ; |130| 

           ADD     .L2     B5,B7,B5          ; |130| 
||         MV      .S2X    A4,B4             ; |130| 

           MV      .L2X    A15,B6            ; |128| 

           CALLP   .S2     __c6xabi_fltllif,B3
||         DADD    .L1X    0,B5:B4,A5:A4     ; |130| 
||         STDW    .D2T2   B9:B8,*B6         ; |128| 

$C$RL43:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |130| 
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |130| 
           MV      .L1     A11,A12           ; |130| 
           NOP             2
           SPDP    .S1     A3,A5:A4          ; |130| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A13:A12,A5:A4,A5:A4 ; |130| 

$C$RL44:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |130| 
           MVKL    .S2     0x3ee4f8b5,B7
           MVKL    .S2     0x88e368f1,B6
           MVKH    .S2     0x3ee4f8b5,B7

           STDW    .D2T1   A5:A4,*B13        ; |130| 
||         LDW     .D1T2   *+A10(4),B4       ; |66| 
||         MVKH    .S2     0x88e368f1,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A10,A4           ; |66| 
||         MVK     .L1     0x1,A8            ; |66| 
||         MVK     .S1     0x80,A6           ; |66| 

$C$RL45:   ; CALL OCCURS {isequal} {0}       ; |66| 
           MVKL    .S2     0x88e368f1,B6

           MVKL    .S1     fcn_pass,A3
||         MVKL    .S2     0x3ee4f8b5,B7

           LDW     .D1T2   *+A10(8),B4       ; |67| 
||         MVKH    .S1     fcn_pass,A3
||         MVKH    .S2     0x88e368f1,B6

           MV      .L1     A4,A5             ; |66| 
||         LDW     .D1T1   *A10,A4           ; |67| 
||         MV      .S1     A3,A11            ; |66| 
||         MVKH    .S2     0x3ee4f8b5,B7

           CALLP   .S2     isequal,B3
||         STW     .D1T1   A5,*+A11(4)       ; |66| 
||         MVK     .S1     0x80,A6           ; |67| 
||         MVK     .L1     0x1,A8            ; |67| 

$C$RL46:   ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     0x3ee4f8b5,B7
           MVKL    .S2     0x88e368f1,B6

           STW     .D1T1   A4,*+A11(8)       ; |67| 
||         MVKH    .S2     0x3ee4f8b5,B7

           LDW     .D1T2   *+A10(12),B4      ; |68| 
||         MVKH    .S2     0x88e368f1,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A10,A4           ; |68| 
||         MVK     .S1     0x80,A6           ; |68| 
||         MVK     .L1     0x1,A8            ; |68| 

$C$RL47:   ; CALL OCCURS {isequal} {0}       ; |68| 
           MVKL    .S2     0x3ee4f8b5,B7
           MVKL    .S2     0x88e368f1,B6
           MVKH    .S2     0x3ee4f8b5,B7

           STW     .D1T1   A4,*+A11(12)      ; |68| 
||         MVKH    .S2     0x88e368f1,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A10,A4           ; |69| 
||         LDW     .D2T2   *B12,B4           ; |69| 
||         MVK     .S1     0x80,A6           ; |69| 
||         MVK     .L1     0x1,A8            ; |69| 

$C$RL48:   ; CALL OCCURS {isequal} {0}       ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 11
           LDW     .D2T2   *B11,B0           ; |72| 
           STW     .D1T1   A4,*+A11(16)      ; |69| 
           NOP             3

   [!B0]   BNOP    .S1     $C$L22,4          ; |72| 
||         MV      .L2     B0,B1             ; guard predicate rewrite
|| [ B0]   LDW     .D2T2   *B10,B0           ; |72| 

   [ B1]   ADD     .L2     4,B10,B4
           ; BRANCHCC OCCURS {$C$L22}        ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 15
   [ B0]   LDW     .D2T2   *B4,B4            ; |72| 
   [!B0]   MV      .L1     A12,A0            ; |72| 
           CMPEQ   .L1     A4,0,A3           ; |72| 
           XOR     .L1     1,A3,A3           ; |72| 
           NOP             1
   [ B0]   CMPEQ   .L2     B4,0,B4           ; |72| 
   [ B0]   XOR     .L2     1,B4,B4           ; |72| 
           NOP             1
   [ B0]   AND     .L1X    A3,B4,A0          ; |72| 
   [ A0]   B       .S1     $C$L23            ; |72| 
   [ A0]   CALL    .S1     print_test_results ; |217| 
           MVK     .L1     0x1,A3            ; |72| 
   [ A0]   MVKL    .S1     all_pass,A4
   [ A0]   MVKH    .S1     all_pass,A4
           NOP             1
           ; BRANCHCC OCCURS {$C$L23}        ; |72| 
;** --------------------------------------------------------------------------*
$C$L22:    
;          EXCLUSIVE CPU CYCLES: 5
           CALL    .S1     print_test_results ; |217| 
           MVKL    .S1     all_pass,A4
           MVKH    .S1     all_pass,A4
           MV      .L1     A12,A3
           NOP             1
;** --------------------------------------------------------------------------*
$C$L23:    
;          EXCLUSIVE CPU CYCLES: 1

           STW     .D1T1   A3,*A4            ; |72| 
||         MVK     .L1     0x2,A4            ; |217| 
||         ADDKPC  .S2     $C$RL49,B3,0      ; |217| 

$C$RL49:   ; CALL OCCURS {print_test_results} {0}  ; |217| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 30
           MVKL    .S2     $C$SL2+0,B4
           MVKH    .S2     $C$SL2+0,B4

           CALLP   .S2     printf,B3
||         STW     .D2T2   B4,*+SP(4)        ; |218| 

$C$RL50:   ; CALL OCCURS {printf} {0}        ; |218| 
           MVKL    .S2     $C$SL3+0,B4
           MVKH    .S2     $C$SL3+0,B4

           CALLP   .S2     printf,B3
||         STW     .D2T2   B4,*+SP(4)        ; |218| 

$C$RL51:   ; CALL OCCURS {printf} {0}        ; |218| 
           MVKL    .S1     $C$SL1+0,A10
           MVKH    .S1     $C$SL1+0,A10

           CALLP   .S2     print_profile_results,B3
||         MV      .L1     A10,A4            ; |225| 

$C$RL52:   ; CALL OCCURS {print_profile_results} {0}  ; |225| 

           CALLP   .S2     print_memory_results,B3
||         MV      .L1     A10,A4            ; |228| 

$C$RL53:   ; CALL OCCURS {print_memory_results} {0}  ; |228| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 11
           LDW     .D2T2   *++SP(24),B3      ; |229| 
           LDDW    .D2T1   *++SP,A13:A12     ; |229| 
           LDDW    .D2T1   *++SP,A15:A14     ; |229| 
           LDDW    .D2T2   *++SP,B11:B10     ; |229| 
           LDDW    .D2T2   *++SP,B13:B12     ; |229| 

           LDW     .D2T1   *++SP(8),A10      ; |229| 
||         RET     .S2     B3                ; |229| 

           LDW     .D2T1   *++SP(8),A11      ; |229| 
           NOP             4
           ; BRANCH OCCURS {B3}              ; |229| 
;******************************************************************************
;* STRINGS                                                                    *
;******************************************************************************
	.sect	".const:.string"
$C$SL1:	.string	"sqrtSP",0
$C$SL2:	.string	"----------------------------------------",0
$C$SL3:	.string	"----------------------------------------",10,0
;*****************************************************************************
;* UNDEFINED EXTERNAL REFERENCES                                             *
;*****************************************************************************
	.global	printf
	.global	sqrt
	.global	sqrtf
	.global	driver_init
	.global	print_profile_results
	.global	print_memory_results
	.global	print_test_results
	.global	gimme_random
	.global	isequal
	.global	sqrtsp
	.global	sqrtsp_c
	.global	sqrtsp_v
	.global	t_start
	.global	t_stop
	.global	t_offset
	.global	cycle_counts
	.global	fcn_pass
	.global	all_pass
	.global	a_ext
	.global	a_sc
	.global	output
	.global	input
	.global	__c6xabi_fltllif
	.global	__c6xabi_fixdlli

;******************************************************************************
;* BUILD ATTRIBUTES                                                           *
;******************************************************************************
	.battr "TI", Tag_File, 1, Tag_Long_Precision_Bits(2)
	.battr "TI", Tag_File, 1, Tag_Bitfield_layout(2)
	.battr "TI", Tag_File, 1, Tag_ABI_enum_size(3)
	.battr "c6xabi", Tag_File, 1, Tag_ABI_wchar_t(1)
	.battr "c6xabi", Tag_File, 1, Tag_ABI_array_object_alignment(0)
	.battr "c6xabi", Tag_File, 1, Tag_ABI_array_object_align_expected(0)
	.battr "c6xabi", Tag_File, 1, Tag_ABI_PIC(0)
	.battr "c6xabi", Tag_File, 1, Tag_ABI_PID(0)
	.battr "c6xabi", Tag_File, 1, Tag_ABI_DSBT(0)
	.battr "c6xabi", Tag_File, 1, Tag_ABI_stack_align_needed(0)
	.battr "c6xabi", Tag_File, 1, Tag_ABI_stack_align_preserved(0)
	.battr "TI", Tag_File, 1, Tag_Tramps_Use_SOC(1)
