;******************************************************************************
;* TMS320C6x C/C++ Codegen                                          PC v7.4.2 *
;* Date/Time created: Mon Nov 04 22:12:20 2013                                *
;******************************************************************************
	.compiler_opts --abi=eabi --c64p_l1d_workaround=off --endian=little --hll_source=on --long_precision_bits=32 --mem_model:code=near --mem_model:const=data --mem_model:data=far --object_format=elf --silicon_version=6600 --symdebug:none 

;******************************************************************************
;* GLOBAL FILE PARAMETERS                                                     *
;*                                                                            *
;*   Architecture      : TMS320C66xx                                          *
;*   Optimization      : Enabled at level 3                                   *
;*   Optimizing for    : Speed                                                *
;*                       Based on options: -o3, no -ms                        *
;*   Endian            : Little                                               *
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
	.elfsym	a,SYM_SIZE(804)
a:
	.word	03b55a20dh		; a[0] @ 0
	.word	03ba3065dh		; a[1] @ 32
	.word	0bc23065fh		; a[2] @ 64
	.word	03c74898ah		; a[3] @ 96
	.word	0bca30660h		; a[4] @ 128
	.word	03ccbc7f5h		; a[5] @ 160
	.word	0bcf4898fh		; a[6] @ 192
	.word	03d0ea592h		; a[7] @ 224
	.word	0bd23065dh		; a[8] @ 256
	.word	03d37672ah		; a[9] @ 288
	.word	0bd4bc7f5h		; a[10] @ 320
	.word	03d6028c2h		; a[11] @ 352
	.word	0bd74898dh		; a[12] @ 384
	.word	03d84752dh		; a[13] @ 416
	.word	0bd8ea592h		; a[14] @ 448
	.word	03d98d5f8h		; a[15] @ 480
	.word	0bda3065eh		; a[16] @ 512
	.word	03dad36c4h		; a[17] @ 544
	.word	0bdb7672ah		; a[18] @ 576
	.word	03dc1978fh		; a[19] @ 608
	.word	0bdcbc7f6h		; a[20] @ 640
	.word	03dd5f85ah		; a[21] @ 672
	.word	0bde028bdh		; a[22] @ 704
	.word	03dea592dh		; a[23] @ 736
	.word	0bdf4898fh		; a[24] @ 768
	.word	03dfeb9f2h		; a[25] @ 800
	.word	0be04752ah		; a[26] @ 832
	.word	03e098d62h		; a[27] @ 864
	.word	0be0ea594h		; a[28] @ 896
	.word	03e13bdc5h		; a[29] @ 928
	.word	0be18d5f6h		; a[30] @ 960
	.word	03e1dee2eh		; a[31] @ 992
	.word	0be230660h		; a[32] @ 1024
	.word	03e281e91h		; a[33] @ 1056
	.word	0be2d36c2h		; a[34] @ 1088
	.word	03e324efah		; a[35] @ 1120
	.word	0be37672ch		; a[36] @ 1152
	.word	03e3c7f5dh		; a[37] @ 1184
	.word	0be41978eh		; a[38] @ 1216
	.word	03e46afc6h		; a[39] @ 1248
	.word	0be4bc7f7h		; a[40] @ 1280
	.word	03e50e029h		; a[41] @ 1312
	.word	0be55f85ah		; a[42] @ 1344
	.word	03e5b1092h		; a[43] @ 1376
	.word	0be6028c3h		; a[44] @ 1408
	.word	03e6540f5h		; a[45] @ 1440
	.word	0be6a5926h		; a[46] @ 1472
	.word	03e6f7157h		; a[47] @ 1504
	.word	0be74898fh		; a[48] @ 1536
	.word	03e79a1c1h		; a[49] @ 1568
	.word	0be7eb9f2h		; a[50] @ 1600
	.word	03e81e912h		; a[51] @ 1632
	.word	0be84752eh		; a[52] @ 1664
	.word	03e870146h		; a[53] @ 1696
	.word	0be898d5fh		; a[54] @ 1728
	.word	03e8c1978h		; a[55] @ 1760
	.word	0be8ea594h		; a[56] @ 1792
	.word	03e9131ach		; a[57] @ 1824
	.word	0be93bdc5h		; a[58] @ 1856
	.word	03e9649deh		; a[59] @ 1888
	.word	0be98d5fah		; a[60] @ 1920
	.word	03e9b6212h		; a[61] @ 1952
	.word	0be9dee2bh		; a[62] @ 1984
	.word	03ea07a44h		; a[63] @ 2016
	.word	0bea30660h		; a[64] @ 2048
	.word	03ea59278h		; a[65] @ 2080
	.word	0bea81e91h		; a[66] @ 2112
	.word	03eaaaaaah		; a[67] @ 2144
	.word	0bead36c6h		; a[68] @ 2176
	.word	03eafc2deh		; a[69] @ 2208
	.word	0beb24ef7h		; a[70] @ 2240
	.word	03eb4db10h		; a[71] @ 2272
	.word	0beb7672ch		; a[72] @ 2304
	.word	03eb9f344h		; a[73] @ 2336
	.word	0bebc7f5dh		; a[74] @ 2368
	.word	03ebf0b75h		; a[75] @ 2400
	.word	0bec19792h		; a[76] @ 2432
	.word	03ec423aah		; a[77] @ 2464
	.word	0bec6afc3h		; a[78] @ 2496
	.word	03ec93bdbh		; a[79] @ 2528
	.word	0becbc7f7h		; a[80] @ 2560
	.word	03ece5410h		; a[81] @ 2592
	.word	0bed0e029h		; a[82] @ 2624
	.word	03ed36c41h		; a[83] @ 2656
	.word	0bed5f85dh		; a[84] @ 2688
	.word	03ed88476h		; a[85] @ 2720
	.word	0bedb108fh		; a[86] @ 2752
	.word	03edd9ca7h		; a[87] @ 2784
	.word	0bee028c3h		; a[88] @ 2816
	.word	03ee2b4dch		; a[89] @ 2848
	.word	0bee540f5h		; a[90] @ 2880
	.word	03ee7cd0dh		; a[91] @ 2912
	.word	0beea5926h		; a[92] @ 2944
	.word	03eece542h		; a[93] @ 2976
	.word	0beef715bh		; a[94] @ 3008
	.word	03ef1fd73h		; a[95] @ 3040
	.word	0bef4898ch		; a[96] @ 3072
	.word	03ef715a8h		; a[97] @ 3104
	.word	0bef9a1c1h		; a[98] @ 3136
	.word	03efc2dd9h		; a[99] @ 3168
	.word	0befeb9f2h		; a[100] @ 3200
	.word	03f00a305h		; a[101] @ 3232
	.word	0bf01e913h		; a[102] @ 3264
	.word	03f032f20h		; a[103] @ 3296
	.word	0bf04752eh		; a[104] @ 3328
	.word	03f05bb38h		; a[105] @ 3360
	.word	0bf070146h		; a[106] @ 3392
	.word	03f084753h		; a[107] @ 3424
	.word	0bf098d61h		; a[108] @ 3456
	.word	03f0ad36bh		; a[109] @ 3488
	.word	0bf0c1979h		; a[110] @ 3520
	.word	03f0d5f86h		; a[111] @ 3552
	.word	0bf0ea592h		; a[112] @ 3584
	.word	03f0feb9eh		; a[113] @ 3616
	.word	0bf1131ach		; a[114] @ 3648
	.word	03f1277b9h		; a[115] @ 3680
	.word	0bf13bdc5h		; a[116] @ 3712
	.word	03f1503d1h		; a[117] @ 3744
	.word	0bf1649dfh		; a[118] @ 3776
	.word	03f178fech		; a[119] @ 3808
	.word	0bf18d5f8h		; a[120] @ 3840
	.word	03f1a1c04h		; a[121] @ 3872
	.word	0bf1b6212h		; a[122] @ 3904
	.word	03f1ca81fh		; a[123] @ 3936
	.word	0bf1dee2bh		; a[124] @ 3968
	.word	03f1f3437h		; a[125] @ 4000
	.word	0bf207a45h		; a[126] @ 4032
	.word	03f21c052h		; a[127] @ 4064
	.word	0bf23065eh		; a[128] @ 4096
	.word	03f244c6ah		; a[129] @ 4128
	.word	0bf259278h		; a[130] @ 4160
	.word	03f26d885h		; a[131] @ 4192
	.word	0bf281e91h		; a[132] @ 4224
	.word	03f29649dh		; a[133] @ 4256
	.word	0bf2aaaabh		; a[134] @ 4288
	.word	03f2bf0b8h		; a[135] @ 4320
	.word	0bf2d36c4h		; a[136] @ 4352
	.word	03f2e7cd0h		; a[137] @ 4384
	.word	0bf2fc2deh		; a[138] @ 4416
	.word	03f3108ebh		; a[139] @ 4448
	.word	0bf324ef7h		; a[140] @ 4480
	.word	03f339503h		; a[141] @ 4512
	.word	0bf34db11h		; a[142] @ 4544
	.word	03f36211eh		; a[143] @ 4576
	.word	0bf37672ah		; a[144] @ 4608
	.word	03f38ad36h		; a[145] @ 4640
	.word	0bf39f344h		; a[146] @ 4672
	.word	03f3b3951h		; a[147] @ 4704
	.word	0bf3c7f5dh		; a[148] @ 4736
	.word	03f3dc569h		; a[149] @ 4768
	.word	0bf3f0b75h		; a[150] @ 4800
	.word	03f405184h		; a[151] @ 4832
	.word	0bf419790h		; a[152] @ 4864
	.word	03f42dd9eh		; a[153] @ 4896
	.word	0bf4423a8h		; a[154] @ 4928
	.word	03f4569b6h		; a[155] @ 4960
	.word	0bf46afc3h		; a[156] @ 4992
	.word	03f47f5d1h		; a[157] @ 5024
	.word	0bf493bdbh		; a[158] @ 5056
	.word	03f4a81e9h		; a[159] @ 5088
	.word	0bf4bc7f6h		; a[160] @ 5120
	.word	03f4d0e04h		; a[161] @ 5152
	.word	0bf4e540eh		; a[162] @ 5184
	.word	03f4f9a1ch		; a[163] @ 5216
	.word	0bf50e029h		; a[164] @ 5248
	.word	03f522635h		; a[165] @ 5280
	.word	0bf536c41h		; a[166] @ 5312
	.word	03f54b24fh		; a[167] @ 5344
	.word	0bf55f85ch		; a[168] @ 5376
	.word	03f573e68h		; a[169] @ 5408
	.word	0bf588474h		; a[170] @ 5440
	.word	03f59ca82h		; a[171] @ 5472
	.word	0bf5b108fh		; a[172] @ 5504
	.word	03f5c569bh		; a[173] @ 5536
	.word	0bf5d9ca7h		; a[174] @ 5568
	.word	03f5ee2b5h		; a[175] @ 5600
	.word	0bf6028c2h		; a[176] @ 5632
	.word	03f616eceh		; a[177] @ 5664
	.word	0bf62b4dah		; a[178] @ 5696
	.word	03f63fae8h		; a[179] @ 5728
	.word	0bf6540f5h		; a[180] @ 5760
	.word	03f668701h		; a[181] @ 5792
	.word	0bf67cd0dh		; a[182] @ 5824
	.word	03f69131bh		; a[183] @ 5856
	.word	0bf6a5928h		; a[184] @ 5888
	.word	03f6b9f34h		; a[185] @ 5920
	.word	0bf6ce540h		; a[186] @ 5952
	.word	03f6e2b4eh		; a[187] @ 5984
	.word	0bf6f715bh		; a[188] @ 6016
	.word	03f70b767h		; a[189] @ 6048
	.word	0bf71fd73h		; a[190] @ 6080
	.word	03f734381h		; a[191] @ 6112
	.word	0bf74898eh		; a[192] @ 6144
	.word	03f75cf9ah		; a[193] @ 6176
	.word	0bf7715a6h		; a[194] @ 6208
	.word	03f785bb4h		; a[195] @ 6240
	.word	0bf79a1c1h		; a[196] @ 6272
	.word	03f7ae7cdh		; a[197] @ 6304
	.word	0bf7c2dd9h		; a[198] @ 6336
	.word	03f7d73e7h		; a[199] @ 6368
	.word	0bf7eb9f4h		; a[200] @ 6400

;	C:\MATHLIB_Tools\CCSV5_4_0\ccsv5\tools\compiler\c6000_7.4.2\bin\opt6x.exe C:\\DOCUME~1\\a0868396\\LOCALS~1\\Temp\\027362 C:\\DOCUME~1\\a0868396\\LOCALS~1\\Temp\\027364 
;**	Parameter deleted: req_flags == 1;
;**	Parameter deleted: tol == 1e-06;
	.sect	".text"
	.clink

;******************************************************************************
;* FUNCTION NAME: allequal                                                    *
;*                                                                            *
;*   Regs Modified     : A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,B0,B1, *
;*                           B2,B3,B4,B5,B6,B7,B8,B9,SP,A16,A17,A18,A19,A20,  *
;*                           A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31,B16, *
;*                           B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28, *
;*                           B29,B30,B31                                      *
;*   Regs Used         : A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,B0,B1, *
;*                           B2,B3,B4,B5,B6,B7,B8,B9,DP,SP,A16,A17,A18,A19,   *
;*                           A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31, *
;*                           B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27, *
;*                           B28,B29,B30,B31                                  *
;*   Local Frame Size  : 0 Args + 0 Auto + 24 Save = 24 byte                  *
;******************************************************************************
allequal:
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10

           STW     .D2T1   A11,*SP--(8)      ; |63| 
||         MVKL    .S2     0xa0b5ed8d,B6

           STDW    .D2T1   A13:A12,*SP--     ; |63| 
||         MVKL    .S1     output,A11
||         MVKL    .S2     0x3eb0c6f7,B7

           STW     .D2T1   A10,*SP--(8)      ; |63| 
||         MVKH    .S1     output,A11
||         MVKH    .S2     0xa0b5ed8d,B6

           LDW     .D1T2   *+A11(4),B4       ; |66| 
||         MV      .L1     A4,A6             ; |63| 
||         MVKH    .S2     0x3eb0c6f7,B7
||         MVK     .S1     0x1,A8            ; |66| 

           MV      .L1X    B3,A13            ; |63| 
||         CALLP   .S2     isequal,B3
||         MV      .S1     A4,A10            ; |63| 
||         LDW     .D1T1   *A11,A4           ; |66| 

$C$RL0:    ; CALL OCCURS {isequal} {0}       ; |66| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 30
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6

           LDW     .D1T2   *+A11(8),B4       ; |67| 
||         MVKL    .S1     fcn_pass,A12
||         MVKH    .S2     0x3eb0c6f7,B7

           MV      .L1     A4,A3             ; |66| 
||         LDW     .D1T1   *A11,A4           ; |67| 
||         MVKH    .S1     fcn_pass,A12
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         STW     .D1T1   A3,*+A12(4)       ; |66| 
||         MV      .L1     A10,A6            ; |67| 
||         MVK     .S1     0x1,A8            ; |67| 

$C$RL1:    ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     0xa0b5ed8d,B6
           MVKL    .S2     0x3eb0c6f7,B7

           LDW     .D1T2   *+A11(12),B4      ; |68| 
||         MVKH    .S2     0xa0b5ed8d,B6

           MV      .L1     A4,A3             ; |67| 
||         LDW     .D1T1   *A11,A4           ; |68| 
||         MVKH    .S2     0x3eb0c6f7,B7

           CALLP   .S2     isequal,B3
||         STW     .D1T1   A3,*+A12(8)       ; |67| 
||         MV      .L1     A10,A6            ; |68| 
||         MVK     .S1     0x1,A8            ; |68| 

$C$RL2:    ; CALL OCCURS {isequal} {0}       ; |68| 
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6

           STW     .D1T1   A4,*+A12(12)      ; |68| 
||         MVKH    .S2     0x3eb0c6f7,B7

           MV      .L1     A11,A3            ; |66| 
||         LDW     .D1T2   *+A11(16),B4      ; |69| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A3,A4            ; |69| 
||         MV      .L1     A10,A6            ; |69| 
||         MVK     .S1     0x1,A8            ; |69| 

$C$RL3:    ; CALL OCCURS {isequal} {0}       ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12
           ADD     .L2X    4,A12,B4
           LDW     .D2T1   *B4,A0            ; |72| 
           STW     .D1T1   A4,*+A12(16)      ; |69| 
           ADD     .L2X    8,A12,B4
           NOP             2

   [!A0]   BNOP    .S1     $C$L1,5           ; |72| 
|| [ A0]   LDW     .D2T2   *B4,B0            ; |72| 
|| [ A0]   ADD     .L2     4,B4,B4

           ; BRANCHCC OCCURS {$C$L1}         ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 15
   [ B0]   LDW     .D2T2   *B4,B4            ; |72| 
           CMPEQ   .L1     A4,0,A3           ; |72| 
           MVK     .L1     0x1,A4            ; |72| 
   [!B0]   ZERO    .L1     A0                ; |72| 
           XOR     .L1     1,A3,A3           ; |72| 
   [ B0]   CMPEQ   .L2     B4,0,B4           ; |72| 
   [ B0]   XOR     .L2     1,B4,B4           ; |72| 
           NOP             1

   [ B0]   AND     .L1X    A3,B4,A0          ; |72| 
||         MVKL    .S1     all_pass,A3

   [ A0]   B       .S2     $C$L2             ; |72| 
||         MVKH    .S1     all_pass,A3
|| [ A0]   MV      .L2X    A13,B3            ; |74| 

   [ A0]   STW     .D1T1   A4,*A3            ; |72| 
   [ A0]   LDW     .D2T1   *++SP(8),A10      ; |74| 

   [ A0]   RET     .S2     B3                ; |74| 
|| [ A0]   LDDW    .D2T1   *++SP,A13:A12     ; |74| 

   [ A0]   LDW     .D2T1   *++SP(8),A11      ; |74| 
           NOP             1
           ; BRANCHCC OCCURS {$C$L2}         ; |72| 
;** --------------------------------------------------------------------------*
$C$L1:    
;          EXCLUSIVE CPU CYCLES: 7
           MVKL    .S1     all_pass,A3

           MVKH    .S1     all_pass,A3
||         ZERO    .L1     A4                ; |72| 

           STW     .D1T1   A4,*A3            ; |72| 

           LDW     .D2T1   *++SP(8),A10      ; |74| 
||         MV      .L2X    A13,B3            ; |74| 

           LDDW    .D2T1   *++SP,A13:A12     ; |74| 
||         RET     .S2     B3                ; |74| 

           LDW     .D2T1   *++SP(8),A11      ; |74| 
           NOP             1
;** --------------------------------------------------------------------------*
$C$L2:    
;          EXCLUSIVE CPU CYCLES: 3
           NOP             3
           ; BRANCH OCCURS {B3}              ; |74| 
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
           STW     .D2T1   A11,*SP--(8)      ; |121| 
           STW     .D2T1   A10,*SP--(8)      ; |121| 
           STDW    .D2T2   B13:B12,*SP--     ; |121| 
           STDW    .D2T2   B11:B10,*SP--     ; |121| 
           STDW    .D2T1   A15:A14,*SP--     ; |121| 

           STDW    .D2T1   A13:A12,*SP--     ; |121| 
||         MVKL    .S1     $C$SL1+0,A4

           STW     .D2T2   B3,*SP--(24)      ; |121| 
||         CALLP   .S2     driver_init,B3
||         MVKH    .S1     $C$SL1+0,A4

$C$RL4:    ; CALL OCCURS {driver_init} {0}   ; |129| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 3

           MVK     .S2     0xc9,B4
||         MVKL    .S1     a,A11

           MVKH    .S1     a,A11
||         MVKL    .S2     output,B11

           CALL    .S1     acosf             ; |138| 
||         MV      .L1     A11,A12
||         MV      .D1X    B4,A10
||         MVKH    .S2     output,B11
||         ZERO    .L2     B10

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L3:    
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D1T1   *A12++,A4         ; |138| 
           ADDKPC  .S2     $C$RL5,B3,3       ; |138| 
$C$RL5:    ; CALL OCCURS {acosf} {0}         ; |138| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           LDW     .D2T2   *B11,B4           ; |138| 
||         SUB     .L1     A10,1,A0          ; |137| 
||         SUB     .S1     A10,1,A10         ; |137| 

   [ A0]   BNOP    .S1     $C$L3,3           ; |137| 

           ADD     .L2     B10,B4,B4         ; |138| 
||         ADD     .S2     4,B10,B10         ; |137| 

   [ A0]   CALL    .S1     acosf             ; |138| 
||         STW     .D2T1   A4,*B4            ; |138| 
|| [!A0]   MVK     .S2     0xc9,B4

           ; BRANCHCC OCCURS {$C$L3}         ; |137| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 2

           ZERO    .L2     B10
||         MV      .L1     A11,A12
||         ADD     .S2     4,B11,B11

           MV      .L1X    B4,A10
||         CALL    .S1     acossp            ; |141| 

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L4:    
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D1T1   *A12++,A4         ; |141| 
           ADDKPC  .S2     $C$RL6,B3,3       ; |141| 
$C$RL6:    ; CALL OCCURS {acossp} {0}        ; |141| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           LDW     .D2T2   *B11,B4           ; |141| 
||         SUB     .L1     A10,1,A0          ; |140| 
||         SUB     .S1     A10,1,A10         ; |140| 

   [ A0]   BNOP    .S1     $C$L4,3           ; |140| 

           ADD     .L2     B10,B4,B4         ; |141| 
||         ADD     .S2     4,B10,B10         ; |140| 

   [ A0]   CALL    .S1     acossp            ; |141| 
||         STW     .D2T1   A4,*B4            ; |141| 
|| [!A0]   MVK     .S2     0xc9,B4

           ; BRANCHCC OCCURS {$C$L4}         ; |140| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 2

           ZERO    .L2     B10
||         MV      .L1     A11,A12
||         ADD     .S2     4,B11,B11

           MV      .L1X    B4,A10
||         CALL    .S1     acossp_c          ; |144| 

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L5:    
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D1T1   *A12++,A4         ; |144| 
           ADDKPC  .S2     $C$RL7,B3,3       ; |144| 
$C$RL7:    ; CALL OCCURS {acossp_c} {0}      ; |144| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           LDW     .D2T2   *B11,B4           ; |144| 
||         SUB     .L1     A10,1,A0          ; |143| 
||         SUB     .S1     A10,1,A10         ; |143| 

   [ A0]   BNOP    .S1     $C$L5,3           ; |143| 

           ADD     .L2     B10,B4,B4         ; |144| 
||         ADD     .S2     4,B10,B10         ; |143| 

   [ A0]   CALL    .S1     acossp_c          ; |144| 
||         STW     .D2T1   A4,*B4            ; |144| 
|| [!A0]   ZERO    .L2     B4

           ; BRANCHCC OCCURS {$C$L5}         ; |143| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 3

           SET     .S2     B4,0x16,0x1d,B4
||         ADD     .L2     4,B11,B18
||         ZERO    .L1     A12
||         MV      .D2X    A11,B17

           LDW     .D2T1   *B18,A9
||         SET     .S1     A12,0x17,0x1d,A12
||         MVK     .S2     0xc9,B0

           MV      .L1X    B4,A13
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains control code
;*----------------------------------------------------------------------------*
$C$L6:    
;          EXCLUSIVE CPU CYCLES: 13
           LDW     .D2T2   *B17++,B8         ; |147| 
           MVKL    .S1     0x3f3504f3,A3
           MVKH    .S1     0x3f3504f3,A3
           NOP             2
           ABSSP   .S1X    B8,A7             ; |158| 

           CMPGTSP .S1     A7,A3,A0          ; |160| 
||         MPYSP   .M1     A7,A7,A4          ; |130| 

   [ A0]   BNOP    .S2     $C$L7,1           ; |160| 
|| [!A0]   MVKL    .S1     0x3d59196f,A5

   [!A0]   MVKL    .S2     0xbc33e814,B4
           MPYSP   .M1     A4,A4,A3          ; |130| 
   [ A0]   MPYSP   .M1     A7,A7,A3          ; |69| 
   [!A0]   MVKH    .S1     0x3d59196f,A5
           ; BRANCHCC OCCURS {$C$L7}         ; |160| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 29

           MVKH    .S2     0xbc33e814,B4
||         MVKL    .S1     0x3e2aaa2b,A16
||         SUB     .L2     B0,1,B0           ; |146| 

           MPYSP   .M1     A5,A3,A8          ; |130| 
||         MPYSP   .M2X    B4,A4,B4          ; |130| 
||         MVKL    .S2     0x3d99abc6,B5
||         MVKH    .S1     0x3e2aaa2b,A16

           MPYSP   .M1     A3,A4,A5          ; |130| 
||         MVKH    .S2     0x3d99abc6,B5
||         MVKL    .S1     0x3cbb4abc,A31

           MPYSP   .M1     A3,A3,A6          ; |130| 
||         MVKL    .S2     0x3cfaf877,B31
||         MPYSP   .M2X    B5,A3,B6          ; |130| 
||         MVKH    .S1     0x3cbb4abc,A31

           MVKL    .S2     0x3d361236,B30
||         MPYSP   .M1     A16,A4,A16        ; |130| 

           MVKH    .S2     0x3cfaf877,B31

           FADDSP  .L2X    B4,A8,B7          ; |130| 
||         MVKH    .S2     0x3d361236,B30

           MPYSP   .M1     A6,A3,A4          ; |130| 
||         MVKL    .S2     0x3ca93df4,B9
||         MPYSP   .M2X    B30,A5,B5         ; |130| 

           MPYSP   .M1     A3,A5,A3          ; |130| 
||         MPYSP   .M2X    B31,A6,B4         ; |130| 

           MVKH    .S2     0x3ca93df4,B9
           FADDSP  .L2     B9,B7,B7          ; |130| 
           FADDSP  .L1X    A16,B6,A30        ; |130| 

           MPYSP   .M1     A31,A3,A5         ; |130| 
||         FADDSP  .L2     B5,B4,B4          ; |130| 

           MPYSP   .M2X    A4,B7,B5          ; |130| 
           CMPGTSP .S1     A7,A12,A0         ; |171| 
           MVKL    .S1     0x3fc90fdb,A31
           FADDSP  .L2X    A30,B4,B4         ; |130| 
           FADDSP  .L2X    A5,B5,B5          ; |130| 
           ZERO    .L1     A4
           MVKH    .S1     0xbf800000,A4
           FADDSP  .L2     B5,B4,B4          ; |130| 
           MVKH    .S1     0x3fc90fdb,A31
           ZERO    .L1     A30
           B       .S1     $C$L8             ; |130| 
           MPYSP   .M1X    A7,B4,A3          ; |130| 
           ZERO    .L2     B4
           CMPLTSP .S2     B8,B4,B1          ; |171| 
   [!B1]   MV      .L1     A12,A4            ; |171| 
           FADDSP  .L1     A7,A3,A3          ; |130| 
           ; BRANCH OCCURS {$C$L8}           ; |130| 
;** --------------------------------------------------------------------------*
$C$L7:    
;          EXCLUSIVE CPU CYCLES: 79
           ZERO    .L1     A4
           SET     .S1     A4,0x18,0x1d,A4
           FSUBSP  .L1     A12,A3,A3         ; |69| 
           MVKL    .S2     0xbc33e814,B31
           MVKL    .S1     0x3d59196f,A31

           MPYSP   .M1     A4,A3,A5          ; |69| 
||         RSQRSP  .S1     A3,A4             ; |69| 

           MPYSP   .M1     A4,A4,A6          ; |69| 
           ZERO    .L2     B4
           MVKH    .S2     0xbc33e814,B31
           MVKL    .S2     0x3d99abc6,B5
           MPYSP   .M1     A5,A6,A6          ; |69| 
           MVKH    .S1     0x3d59196f,A31
           MVKL    .S1     0x3e2aaa2b,A16
           MVKH    .S2     0x3d99abc6,B5
           FSUBSP  .L1     A13,A6,A6         ; |69| 
           MVKL    .S2     0x3d361236,B29
           CMPGTSP .S2X    A3,B4,B1          ; |69| 
           MPYSP   .M1     A4,A6,A4          ; |69| 
           MVKH    .S1     0x3e2aaa2b,A16
           MVKL    .S2     0x3cfaf877,B30
   [!B1]   MV      .L1X    B4,A3             ; |69| 
           MPYSP   .M1     A4,A4,A6          ; |69| 
           MVKL    .S1     0x3cbb4abc,A30
           MVKH    .S1     0x3cbb4abc,A30
           MVKL    .S2     0x3ca93df4,B9
           MPYSP   .M1     A5,A6,A5          ; |69| 
           MVKH    .S2     0x3d361236,B29
           MVKH    .S2     0x3cfaf877,B30
           MVKH    .S2     0x3ca93df4,B9
           FSUBSP  .L1     A13,A5,A5         ; |69| 
           SUB     .L2     B0,1,B0           ; |146| 
           MVKL    .S1     0x3fc90fdb,A28
           MPYSP   .M1     A4,A5,A4          ; |69| 
           MVKH    .S1     0x3fc90fdb,A28
           CMPGTSP .S1     A7,A12,A0         ; |171| 
           NOP             1
   [ B1]   MPYSP   .M1     A3,A4,A3          ; |69| 
           NOP             3
           MPYSP   .M1     A3,A3,A5          ; |164| 
           NOP             3
           MPYSP   .M1     A5,A5,A4          ; |164| 
           MPYSP   .M2X    B31,A5,B4         ; |164| 
           MPYSP   .M1     A16,A5,A16        ; |164| 
           NOP             1
           MPYSP   .M1     A31,A4,A17        ; |164| 
           MPYSP   .M1     A4,A5,A6          ; |164| 
           MPYSP   .M1     A4,A4,A8          ; |164| 
           MPYSP   .M2X    B5,A4,B7          ; |164| 
           MVKL    .S1     0x3fc90fdb,A31
           FADDSP  .L2X    B4,A17,B5         ; |164| 

           MPYSP   .M1     A4,A8,A5          ; |164| 
||         MPYSP   .M2X    B29,A6,B4         ; |164| 

           MPYSP   .M1     A4,A6,A4          ; |164| 
||         MPYSP   .M2X    B30,A8,B6         ; |164| 

           FADDSP  .L2     B9,B5,B5          ; |164| 
           FADDSP  .L1X    A16,B7,A29        ; |164| 
           MVKH    .S1     0x3fc90fdb,A31

           FADDSP  .L2     B4,B6,B4          ; |164| 
||         MPYSP   .M1     A30,A4,A4         ; |164| 

           MPYSP   .M2X    A5,B5,B5          ; |164| 
           ZERO    .L1     A30
           FADDSP  .L2X    A29,B4,B4         ; |164| 
           NOP             1
           FADDSP  .L2X    A4,B5,B5          ; |164| 
           ZERO    .L1     A4
           MVKH    .S1     0xbf800000,A4
           FADDSP  .L2     B5,B4,B4          ; |164| 
           NOP             2
           MPYSP   .M2X    A3,B4,B4          ; |164| 
           NOP             4

           FADDSP  .L1X    A3,B4,A3          ; |164| 
||         ZERO    .L2     B4

           CMPLTSP .S2     B8,B4,B1          ; |171| 
   [!B1]   MV      .S1     A12,A4            ; |171| 
           FSUBSP  .L1     A28,A3,A3         ; |164| 
;** --------------------------------------------------------------------------*
$C$L8:    
;          EXCLUSIVE CPU CYCLES: 10
   [!B0]   ADD     .L2     4,B18,B12
           NOP             1
           MPYSP   .M1     A3,A4,A3          ; |171| 
           SET     .S1     A30,0x0,0x1e,A4
   [ B0]   BNOP    .S1     $C$L6,1           ; |146| 
   [!A0]   FSUBSP  .L1     A31,A3,A3         ; |171| 
   [ A0]   MV      .L1     A4,A3             ; |171| 
           NOP             1

   [!B0]   CALL    .S1     acossp_v          ; |149| 
||         STW     .D1T1   A3,*A9++          ; |171| 

           ; BRANCHCC OCCURS {$C$L6}         ; |146| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D2T2   *B12,B4           ; |149| 
           MV      .L1     A11,A4            ; |149| 
           ADDKPC  .S2     $C$RL8,B3,1       ; |149| 
           MVK     .S1     0xc9,A6           ; |149| 
$C$RL8:    ; CALL OCCURS {acossp_v} {0}      ; |149| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12

           CALLP   .S2     allequal,B3
||         MVK     .S1     0xc9,A4           ; |154| 

$C$RL9:    ; CALL OCCURS {allequal} {0}      ; |154| 

           CALLP   .S2     print_test_results,B3
||         MVK     .L1     0x1,A4            ; |155| 

$C$RL10:   ; CALL OCCURS {print_test_results} {0}  ; |155| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           MVKL    .S1     a_sc,A15
||         ZERO    .L1     A3
||         ZERO    .L2     B5

           MVKH    .S2     0xff800000,B5
||         SET     .S1     A3,0x0,0x1e,A3
||         ZERO    .L2     B4

           MVKH    .S1     a_sc,A15
||         SET     .S2     B4,0x17,0x1e,B4
||         MVK     .L1     -1,A7             ; |169| 
||         ZERO    .D1     A31

           STDW    .D1T2   B5:B4,*+A15(8)    ; |165| 
||         MV      .L1     A3,A6             ; |169| 
||         MVKH    .S1     0xbf800000,A31

           STDW    .D1T1   A7:A6,*+A15(24)   ; |169| 
||         ADD     .L1     1,A3,A5
||         MV      .L2X    A12,B6            ; |167| 
||         ZERO    .S1     A4

           STDW    .D1T1   A5:A4,*A15        ; |163| 
||         MV      .L2X    A31,B7            ; |167| 

           CALL    .S2     acosf             ; |172| 
||         STDW    .D1T2   B7:B6,*+A15(16)   ; |167| 
||         SUB     .L1     A15,4,A14
||         ZERO    .S1     A10
||         MVK     .L2     0x8,B10

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains control code
;*----------------------------------------------------------------------------*
$C$L9:    
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D1T1   *++A14,A4         ; |172| 
           ADDKPC  .S2     $C$RL11,B3,3      ; |172| 
$C$RL11:   ; CALL OCCURS {acosf} {0}         ; |172| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 28
           MVKL    .S1     output,A11
           MVKH    .S1     output,A11
           LDW     .D1T2   *A11,B4           ; |172| 
           NOP             4
           ADD     .L2X    A10,B4,B4         ; |172| 
           STW     .D2T1   A4,*B4            ; |172| 

           CALLP   .S2     acossp,B3
||         LDW     .D1T1   *A14,A4           ; |173| 

$C$RL12:   ; CALL OCCURS {acossp} {0}        ; |173| 
           LDW     .D1T2   *+A11(4),B4       ; |173| 
           NOP             4
           ADD     .L2X    A10,B4,B4         ; |173| 
           STW     .D2T1   A4,*B4            ; |173| 

           CALLP   .S2     acossp_c,B3
||         LDW     .D1T1   *A14,A4           ; |174| 

$C$RL13:   ; CALL OCCURS {acossp_c} {0}      ; |174| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 20
           LDW     .D1T1   *+A11(8),A3       ; |174| 
           MV      .L1     A12,A9            ; |155| 
           MVKL    .S1     0x3f3504f3,A31
           MVKH    .S1     0x3f3504f3,A31
           NOP             1
           ADD     .L1     A10,A3,A3         ; |174| 
           STW     .D1T1   A4,*A3            ; |174| 
           LDW     .D1T2   *A14,B7           ; |175| 
           NOP             4
           ABSSP   .S2     B7,B6             ; |158| 

           MPYSP   .M2     B6,B6,B4          ; |69| 
||         CMPGTSP .S2X    B6,A31,B0         ; |160| 

   [!B0]   BNOP    .S2     $C$L10,1          ; |160| 
||         MPYSP   .M2     B6,B6,B8          ; |130| 
|| [ B0]   ZERO    .L1     A3
|| [!B0]   MVKL    .S1     0x3d59196f,A3

   [!B0]   MVKH    .S1     0x3d59196f,A3
   [ B0]   SET     .S1     A3,0x18,0x1d,A3

           FSUBSP  .L1X    A9,B4,A4          ; |69| 
||         MPYSP   .M2     B8,B8,B19         ; |130| 

   [!B0]   MVKL    .S2     0xbc33e814,B4
           ; BRANCHCC OCCURS {$C$L10}        ; |160| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 76
           SUB     .S1X    B10,1,A0          ; |171| 

           MPYSP   .M1     A3,A4,A5          ; |69| 
||         RSQRSP  .S1     A4,A3             ; |69| 

           MPYSP   .M1     A3,A3,A6          ; |69| 
           SUB     .L2     B10,1,B10         ; |171| 
           MVKL    .S2     0xbc33e814,B31
           MVKL    .S1     0x3d59196f,A31
           MPYSP   .M1     A5,A6,A6          ; |69| 
           ZERO    .L2     B4
           CMPGTSP .S2X    A4,B4,B0          ; |71| 
           MVKH    .S2     0xbc33e814,B31
           FSUBSP  .L1     A13,A6,A6         ; |69| 
           MVKH    .S1     0x3d59196f,A31
           MVKL    .S1     0x3e2aaa2b,A30
           MPYSP   .M1     A3,A6,A3          ; |69| 
           MVKL    .S2     0x3d99abc6,B30
           MVKH    .S1     0x3e2aaa2b,A30
           MVKH    .S2     0x3d99abc6,B30
           MPYSP   .M1     A3,A3,A6          ; |69| 
           MVKL    .S1     0x3cbb4abc,A29
           MVKL    .S2     0x3ca93df4,B27
           MVKH    .S1     0x3cbb4abc,A29
           MPYSP   .M1     A5,A6,A5          ; |69| 
           MVKL    .S2     0x3d361236,B28
           MVKL    .S1     0x3fc90fdb,A27
           MVKL    .S2     0x3cfaf877,B29
           FSUBSP  .L1     A13,A5,A5         ; |69| 
           MVKH    .S1     0x3fc90fdb,A27
           MVKH    .S2     0x3d361236,B28
           MPYSP   .M1     A3,A5,A3          ; |69| 
           MVKH    .S2     0x3cfaf877,B29
           MVKH    .S2     0x3ca93df4,B27
           CMPGTSP .S2X    B6,A12,B2         ; |176| 
           MPYSP   .M1     A4,A3,A3          ; |69| 
           NOP             3
   [!B0]   MV      .L1X    B4,A3             ; |71| 
           MPYSP   .M1     A3,A3,A6          ; |164| 
           NOP             3
           MPYSP   .M1     A6,A6,A5          ; |164| 
           MPYSP   .M2X    B31,A6,B5         ; |164| 
           MPYSP   .M1     A30,A6,A17        ; |164| 
           ZERO    .L1     A30
           MPYSP   .M1     A31,A5,A16        ; |164| 
           MPYSP   .M1     A5,A6,A7          ; |164| 
           MPYSP   .M1     A5,A5,A8          ; |164| 
           MPYSP   .M2X    B30,A5,B8         ; |164| 
           MVKL    .S1     0x3fc90fdb,A31
           FADDSP  .L2X    B5,A16,B5         ; |164| 

           MPYSP   .M1     A5,A8,A6          ; |164| 
||         MPYSP   .M2X    B28,A7,B16        ; |164| 

           MPYSP   .M1     A5,A7,A5          ; |164| 
||         MPYSP   .M2X    B29,A8,B9         ; |164| 

           FADDSP  .L2     B27,B5,B4         ; |164| 
           FADDSP  .L1X    A17,B8,A28        ; |164| 
           MVKH    .S1     0x3fc90fdb,A31

           FADDSP  .L2     B16,B9,B26        ; |164| 
||         MPYSP   .M1     A29,A5,A4         ; |164| 

           MPYSP   .M2X    A6,B4,B5          ; |164| 
           ADDAW   .D1     A11,3,A5
           FADDSP  .L2X    A28,B26,B4        ; |164| 
           LDW     .D1T1   *A5,A5            ; |175| 
           FADDSP  .L2X    A4,B5,B5          ; |164| 
           NOP             2
           FADDSP  .L2     B5,B4,B4          ; |164| 
           ADD     .L1     A10,A5,A5         ; |175| 
           ADD     .L1     4,A10,A10         ; |171| 
           MPYSP   .M2X    A3,B4,B4          ; |164| 
           NOP             2
           BNOP    .S1     $C$L11,1          ; |165| 

           FADDSP  .L1X    A3,B4,A4          ; |164| 
||         ZERO    .S1     A3
||         ZERO    .L2     B4

           CMPLTSP .S2     B7,B4,B0          ; |170| 
||         MVKH    .S1     0xbf800000,A3

   [ B0]   MV      .D1     A3,A9             ; |171| 
||         SET     .S1     A30,0x0,0x1e,A3

           FSUBSP  .L1     A27,A4,A4         ; |164| 
           ; BRANCH OCCURS {$C$L11}          ; |165| 
;** --------------------------------------------------------------------------*
$C$L10:    
;          EXCLUSIVE CPU CYCLES: 31

           MVKH    .S2     0xbc33e814,B4
||         MVKL    .S1     0x3e2aaa2b,A31
||         ADDAW   .D1     A11,3,A5

           MPYSP   .M2     B4,B8,B5          ; |130| 
||         MVKL    .S2     0x3d99abc6,B31
||         MVKH    .S1     0x3e2aaa2b,A31
||         LDW     .D1T1   *A5,A5            ; |175| 
||         SUB     .L1X    B10,1,A0          ; |171| 
||         SUB     .L2     B10,1,B10         ; |171| 

           MPYSP   .M1X    A3,B19,A3         ; |130| 
||         MPYSP   .M2     B19,B19,B20       ; |130| 
||         MVKH    .S2     0x3d99abc6,B31
||         MVKL    .S1     0x3cbb4abc,A30

           MVKH    .S1     0x3cbb4abc,A30
||         MPYSP   .M2     B19,B8,B18        ; |130| 
||         MVKL    .S2     0x3d361236,B28

           MVKL    .S2     0x3ca93df4,B29
||         MPYSP   .M2     B31,B19,B17       ; |130| 

           MVKL    .S2     0x3cfaf877,B30
           MVKH    .S2     0x3d361236,B28

           FADDSP  .L2X    B5,A3,B16         ; |130| 
||         MPYSP   .M2     B19,B18,B21       ; |130| 
||         MVKH    .S2     0x3ca93df4,B29

           MPYSP   .M2     B19,B20,B19       ; |130| 
||         MVKH    .S2     0x3cfaf877,B30

           MPYSP   .M2     B28,B18,B4        ; |130| 

           FADDSP  .L2     B29,B16,B5        ; |130| 
||         MPYSP   .M2     B30,B20,B9        ; |130| 

           MPYSP   .M1X    A31,B8,A4         ; |130| 
           MPYSP   .M2X    A30,B21,B8        ; |130| 
           MPYSP   .M2     B19,B5,B5         ; |130| 
           FADDSP  .L2     B4,B9,B4          ; |130| 
           FADDSP  .L1X    A4,B17,A3         ; |130| 
           MVKL    .S1     0x3fc90fdb,A31
           FADDSP  .L2     B8,B5,B5          ; |130| 
           FADDSP  .L1X    A3,B4,A3          ; |130| 
           MVKH    .S1     0x3fc90fdb,A31
           ADD     .S1     A10,A5,A5         ; |175| 
           FADDSP  .L1X    B5,A3,A3          ; |130| 
           ADD     .L1     4,A10,A10         ; |171| 
           CMPGTSP .S2X    B6,A12,B2         ; |176| 
           MPYSP   .M1X    B6,A3,A3          ; |130| 
           ZERO    .L1     A30
           ZERO    .L2     B4
           CMPLTSP .S2     B7,B4,B0          ; |170| 

           FADDSP  .L1X    B6,A3,A4          ; |130| 
||         ZERO    .S1     A3

           MVKH    .S1     0xbf800000,A3

   [ B0]   MV      .D1     A3,A9             ; |171| 
||         SET     .S1     A30,0x0,0x1e,A3

;** --------------------------------------------------------------------------*
$C$L11:    
;          EXCLUSIVE CPU CYCLES: 11
           NOP             2
           MPYSP   .M1     A9,A4,A4          ; |174| 
           NOP             2
   [ A0]   B       .S1     $C$L9             ; |171| 
           FSUBSP  .L1     A31,A4,A4         ; |174| 
           NOP             2
   [ B2]   MV      .L1     A3,A4             ; |177| 

   [ A0]   CALL    .S1     acosf             ; |172| 
||         STW     .D1T1   A4,*A5            ; |175| 

           ; BRANCHCC OCCURS {$C$L9}         ; |171| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 6
           CALL    .S1     acossp_v          ; |177| 
           LDW     .D2T2   *B12,B4           ; |177| 
           ADDKPC  .S2     $C$RL14,B3,2      ; |177| 

           MV      .L1     A15,A4
||         MVK     .S1     0x8,A6            ; |177| 

$C$RL14:   ; CALL OCCURS {acossp_v} {0}      ; |177| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12

           CALLP   .S2     allequal,B3
||         MVK     .L1     0x8,A4            ; |180| 

$C$RL15:   ; CALL OCCURS {allequal} {0}      ; |180| 

           CALLP   .S2     print_test_results,B3
||         MVK     .L1     0x3,A4            ; |181| 

$C$RL16:   ; CALL OCCURS {print_test_results} {0}  ; |181| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 4
           MVKL    .S2     a_ext,B13

           MVKH    .S2     a_ext,B13
||         ZERO    .L1     A3

           SET     .S1     A3,0x17,0x17,A3
||         MVK     .S2     0xd7,B10
||         ZERO    .L1     A15

           CALL    .S2     acosf             ; |186| 
||         STW     .D2T1   A3,*B13           ; |184| 
||         MV      .L1X    B13,A10           ; |184| 
||         MVKH    .S1     0xbfc00000,A15
||         MV      .D1     A11,A14           ; |186| 
||         ZERO    .L2     B11

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains control code
;*----------------------------------------------------------------------------*
$C$L12:    
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D1T1   *A10,A4           ; |186| 
           ADDKPC  .S2     $C$RL17,B3,3      ; |186| 
$C$RL17:   ; CALL OCCURS {acosf} {0}         ; |186| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 26
           LDW     .D1T1   *A14,A3           ; |186| 
           NOP             4
           ADD     .L1X    B11,A3,A3         ; |186| 
           STW     .D1T1   A4,*A3            ; |186| 

           CALLP   .S2     acossp,B3
||         LDW     .D1T1   *A10,A4           ; |187| 

$C$RL18:   ; CALL OCCURS {acossp} {0}        ; |187| 
           LDW     .D1T1   *+A14(4),A3       ; |187| 
           NOP             4
           ADD     .L1X    B11,A3,A3         ; |187| 
           STW     .D1T1   A4,*A3            ; |187| 

           CALLP   .S2     acossp_c,B3
||         LDW     .D1T1   *A10,A4           ; |188| 

$C$RL19:   ; CALL OCCURS {acossp_c} {0}      ; |188| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 20
           LDW     .D1T1   *+A14(8),A3       ; |188| 
           MV      .L1     A12,A7            ; |155| 
           MVKL    .S1     0x3f3504f3,A31
           MVKH    .S1     0x3f3504f3,A31
           NOP             1
           ADD     .L2X    B11,A3,B4         ; |188| 
           STW     .D2T1   A4,*B4            ; |188| 
           LDW     .D1T2   *A10,B5           ; |189| 
           NOP             4
           ABSSP   .S1X    B5,A5             ; |158| 

           CMPGTSP .S1     A5,A31,A0         ; |160| 
||         MPYSP   .M1     A5,A5,A3          ; |69| 

   [!A0]   BNOP    .S1     $C$L13,2          ; |160| 

           FSUBSP  .L1     A7,A3,A6          ; |69| 
|| [!A0]   MPYSP   .M1     A5,A5,A6          ; |130| 

   [ A0]   ZERO    .L1     A31
   [ A0]   SET     .S1     A31,0x18,0x1d,A3
           ; BRANCHCC OCCURS {$C$L13}        ; |160| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 75

           MPYSP   .M1     A3,A6,A4          ; |69| 
||         RSQRSP  .S1     A6,A3             ; |69| 

           MPYSP   .M1     A3,A3,A8          ; |69| 
           SUB     .L1X    B10,1,A2          ; |185| 
           SUB     .L2     B10,1,B10         ; |185| 
           MVKL    .S2     0xbc33e814,B31
           MPYSP   .M1     A4,A8,A8          ; |69| 
           ZERO    .L2     B4
           MVKL    .S1     0x3d59196f,A30
           CMPGTSP .S2X    A6,B4,B0          ; |71| 
           FSUBSP  .L1     A13,A8,A8         ; |69| 
           MVKH    .S2     0xbc33e814,B31
           MVKH    .S1     0x3d59196f,A30
           MPYSP   .M1     A3,A8,A3          ; |69| 
           MVKL    .S1     0x3e2aaa2b,A29
           MVKL    .S2     0x3d99abc6,B30
           MVKH    .S1     0x3e2aaa2b,A29
           MPYSP   .M1     A3,A3,A8          ; |69| 
           MVKH    .S2     0x3d99abc6,B30
           MVKL    .S1     0x3cbb4abc,A28
           MVKL    .S2     0x3ca93df4,B27
           MPYSP   .M1     A4,A8,A4          ; |69| 
           MVKH    .S1     0x3cbb4abc,A28
           MVKL    .S2     0x3d361236,B28
           MVKL    .S1     0x3fc90fdb,A26
           FSUBSP  .L1     A13,A4,A4         ; |69| 
           MVKL    .S2     0x3cfaf877,B29
           MVKH    .S2     0x3d361236,B28
           MPYSP   .M1     A3,A4,A3          ; |69| 
           MVKH    .S2     0x3cfaf877,B29
           MVKH    .S2     0x3ca93df4,B27
           MVKH    .S1     0x3fc90fdb,A26
           MPYSP   .M1     A6,A3,A4          ; |69| 
           MVKL    .S1     0x3fc90fdb,A31
           MVKH    .S1     0x3fc90fdb,A31
           CMPGTSP .S1     A5,A12,A0         ; |176| 
   [!B0]   MV      .L1X    B4,A4             ; |71| 
           MPYSP   .M1     A4,A4,A8          ; |164| 
           NOP             3
           MPYSP   .M1     A8,A8,A6          ; |164| 
           MPYSP   .M2X    B31,A8,B6         ; |164| 
           MPYSP   .M1     A29,A8,A18        ; |164| 
           MVK     .S2     12,B31
           MPYSP   .M1     A30,A6,A17        ; |164| 
           MPYSP   .M1     A6,A8,A9          ; |164| 
           MPYSP   .M1     A6,A6,A16         ; |164| 
           MPYSP   .M2X    B30,A6,B7         ; |164| 
           ZERO    .L1     A30
           FADDSP  .L2X    B6,A17,B6         ; |164| 

           MPYSP   .M1     A6,A16,A8         ; |164| 
||         MPYSP   .M2X    B28,A9,B9         ; |164| 

           MPYSP   .M1     A6,A9,A6          ; |164| 
||         MPYSP   .M2X    B29,A16,B8        ; |164| 

           FADDSP  .L2     B27,B6,B4         ; |164| 
           FADDSP  .L1X    A18,B7,A27        ; |164| 
           NOP             1

           FADDSP  .L2     B9,B8,B26         ; |164| 
||         MPYSP   .M1     A28,A6,A3         ; |164| 

           MPYSP   .M2X    A8,B4,B6          ; |164| 
           NOP             2
           FADDSP  .L2X    A27,B26,B4        ; |164| 
           FADDSP  .L2X    A3,B6,B6          ; |164| 
           ZERO    .L1     A3
           MVKH    .S1     0xbf800000,A3
           FADDSP  .L2     B6,B4,B4          ; |164| 
           NOP             2
           MPYSP   .M2X    A4,B4,B4          ; |164| 
           NOP             2
           BNOP    .S1     $C$L14,1          ; |165| 

           FADDSP  .L1X    A4,B4,A4          ; |164| 
||         ZERO    .L2     B4

           CMPLTSP .S2     B5,B4,B0          ; |170| 
||         ADD     .L2X    A11,B31,B4

           LDW     .D2T2   *B4,B4            ; |189| 
|| [ B0]   MV      .D1     A3,A7             ; |171| 
||         SET     .S1     A30,0x0,0x1e,A3

           FSUBSP  .L1     A26,A4,A4         ; |164| 
           ; BRANCH OCCURS {$C$L14}          ; |165| 
;** --------------------------------------------------------------------------*
$C$L13:    
;          EXCLUSIVE CPU CYCLES: 34

           MVKL    .S1     0x3d59196f,A3
||         MVKL    .S2     0xbc33e814,B4

           MPYSP   .M1     A6,A6,A4          ; |130| 
||         MVKH    .S1     0x3d59196f,A3
||         MVKH    .S2     0xbc33e814,B4

           MPYSP   .M2X    B4,A6,B6          ; |130| 
||         MVKL    .S2     0x3d99abc6,B31
||         MVKL    .S1     0x3e2aaa2b,A31

           MVKH    .S2     0x3d99abc6,B31
||         MVKH    .S1     0x3e2aaa2b,A31

           MVKL    .S2     0x3d361236,B29
||         MVKL    .S1     0x3cbb4abc,A28

           MPYSP   .M1     A3,A4,A16         ; |130| 
||         MVKL    .S2     0x3cfaf877,B30
||         MVKH    .S1     0x3cbb4abc,A28

           MPYSP   .M1     A4,A6,A8          ; |130| 
||         MPYSP   .M2X    B31,A4,B8         ; |130| 
||         MVKH    .S2     0x3d361236,B29

           MPYSP   .M1     A4,A4,A9          ; |130| 
||         MVKH    .S2     0x3cfaf877,B30

           MVKL    .S2     0x3ca93df4,B28
||         MPYSP   .M1     A31,A6,A6         ; |130| 

           MVKH    .S2     0x3ca93df4,B28

           FADDSP  .L2X    B6,A16,B9         ; |130| 
||         MPYSP   .M1     A4,A8,A29         ; |130| 

           MPYSP   .M1     A4,A9,A30         ; |130| 
||         MPYSP   .M2X    B29,A8,B6         ; |130| 

           MPYSP   .M2X    B30,A9,B7         ; |130| 
           FADDSP  .L2     B28,B9,B4         ; |130| 
           FADDSP  .L1X    A6,B8,A27         ; |130| 
           MPYSP   .M1     A28,A29,A4        ; |130| 

           MPYSP   .M2X    A30,B4,B6         ; |130| 
||         FADDSP  .L2     B6,B7,B4          ; |130| 

           SUB     .L1X    B10,1,A2          ; |185| 
           SUB     .S2     B10,1,B10         ; |185| 
           FADDSP  .L2X    A27,B4,B4         ; |130| 
           FADDSP  .L2X    A4,B6,B6          ; |130| 
           CMPGTSP .S1     A5,A12,A0         ; |176| 
           MVKL    .S1     0x3fc90fdb,A31
           FADDSP  .L2     B6,B4,B4          ; |130| 
           MVKH    .S1     0x3fc90fdb,A31
           MVK     .S2     12,B31
           ZERO    .L1     A30

           MPYSP   .M1X    A5,B4,A3          ; |130| 
||         ZERO    .L2     B4

           CMPLTSP .S2     B5,B4,B0          ; |170| 
           ADD     .L2X    A11,B31,B4
           LDW     .D2T2   *B4,B4            ; |189| 

           FADDSP  .L1     A5,A3,A4          ; |130| 
||         ZERO    .S1     A3

           MVKH    .S1     0xbf800000,A3

   [ B0]   MV      .D1     A3,A7             ; |171| 
||         SET     .S1     A30,0x0,0x1e,A3

;** --------------------------------------------------------------------------*
$C$L14:    
;          EXCLUSIVE CPU CYCLES: 21
           NOP             2
           MPYSP   .M1     A7,A4,A4          ; |174| 
           ADD     .L2     B11,B4,B4         ; |189| 
           ADD     .L2     4,B11,B11         ; |185| 
           NOP             1
           FSUBSP  .L1     A31,A4,A4         ; |174| 
           NOP             2
   [ A0]   MV      .L1     A3,A4             ; |177| 
           STW     .D2T1   A4,*B4            ; |189| 
           LDW     .D1T1   *A10,A3           ; |190| 
           NOP             3
   [ A2]   B       .S1     $C$L12            ; |185| 
           MPYSP   .M1     A15,A3,A3         ; |190| 
           NOP             3

   [ A2]   CALL    .S1     acosf             ; |186| 
||         STW     .D1T1   A3,*++A10         ; |190| 

           ; BRANCHCC OCCURS {$C$L12}        ; |185| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 6

           CALL    .S1     acossp_v          ; |192| 
||         MV      .L2X    A11,B10           ; |192| 

           LDW     .D2T2   *+B10(16),B4      ; |192| 
           ADDKPC  .S2     $C$RL20,B3,2      ; |192| 

           MV      .L1X    B13,A4
||         MVK     .S1     0xd7,A6           ; |192| 

$C$RL20:   ; CALL OCCURS {acossp_v} {0}      ; |192| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 40
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6
           MVKH    .S2     0x3eb0c6f7,B7

           LDW     .D2T1   *B10,A4           ; |66| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T2   *+B10(4),B4       ; |66| 
||         MVK     .S1     0xd7,A6           ; |66| 
||         MVK     .L1     0x1,A8            ; |66| 

$C$RL21:   ; CALL OCCURS {isequal} {0}       ; |66| 

           MVKL    .S1     fcn_pass,A10
||         MVKL    .S2     0xa0b5ed8d,B6

           MVKH    .S1     fcn_pass,A10
||         MVKL    .S2     0x3eb0c6f7,B7

           MV      .L1     A10,A3            ; |66| 
||         MVKH    .S2     0xa0b5ed8d,B6

           STW     .D1T1   A4,*+A3(4)        ; |66| 
||         LDW     .D2T2   *+B10(8),B4       ; |67| 
||         MVKH    .S2     0x3eb0c6f7,B7

           CALLP   .S2     isequal,B3
||         LDW     .D2T1   *B10,A4           ; |67| 
||         MVK     .S1     0xd7,A6           ; |67| 
||         MVK     .L1     0x1,A8            ; |67| 

$C$RL22:   ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6

           MV      .L1     A10,A3            ; |67| 
||         MVKH    .S2     0x3eb0c6f7,B7

           STW     .D1T1   A4,*+A3(8)        ; |67| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A11,A4           ; |68| 
||         LDW     .D2T2   *+B10(12),B4      ; |68| 
||         MVK     .S1     0xd7,A6           ; |68| 
||         MVK     .L1     0x1,A8            ; |68| 

$C$RL23:   ; CALL OCCURS {isequal} {0}       ; |68| 
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6

           MV      .L1     A10,A3            ; |68| 
||         MVKH    .S2     0x3eb0c6f7,B7

           STW     .D1T1   A4,*+A3(12)       ; |68| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A11,A4           ; |69| 
||         LDW     .D2T2   *B12,B4           ; |69| 
||         MVK     .S1     0xd7,A6           ; |69| 
||         MVK     .L1     0x1,A8            ; |69| 

$C$RL24:   ; CALL OCCURS {isequal} {0}       ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12
           ADD     .L2X    4,A10,B11
           LDW     .D2T2   *B11,B0           ; |72| 
           MV      .L1     A10,A3            ; |72| 
           ADD     .L2X    8,A10,B10
           STW     .D1T1   A4,*+A3(16)       ; |69| 
           NOP             1

   [!B0]   B       .S2     $C$L15            ; |72| 
|| [!B0]   MVKL    .S1     all_pass,A3
|| [!B0]   ZERO    .L1     A4                ; |72| 
||         MV      .L2     B0,B1             ; guard predicate rewrite

   [!B0]   CALL    .S2     print_test_results ; |196| 
|| [!B0]   MVKH    .S1     all_pass,A3
|| [ B0]   LDW     .D2T2   *B10,B0           ; |72| 

   [ B1]   ADD     .L2     4,B10,B4
           NOP             3
           ; BRANCHCC OCCURS {$C$L15}        ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10
   [ B0]   LDW     .D2T2   *B4,B4            ; |72| 
           CMPEQ   .L1     A4,0,A3           ; |72| 
           XOR     .L1     1,A3,A3           ; |72| 
           MVK     .L1     0x1,A4            ; |72| 
   [!B0]   ZERO    .L1     A0                ; |72| 
   [ B0]   CMPEQ   .L2     B4,0,B4           ; |72| 
   [ B0]   XOR     .L2     1,B4,B4           ; |72| 
           NOP             1
   [ B0]   AND     .L1X    A3,B4,A0          ; |72| 
   [!A0]   ZERO    .L1     A4                ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           CALL    .S1     print_test_results ; |196| 
           MVKL    .S1     all_pass,A3
           MVKH    .S1     all_pass,A3
           NOP             2
;** --------------------------------------------------------------------------*
$C$L15:    
;          EXCLUSIVE CPU CYCLES: 1

           STW     .D1T1   A4,*A3            ; |72| 
||         MVK     .L1     0x4,A4            ; |196| 
||         ADDKPC  .S2     $C$RL25,B3,0      ; |196| 

$C$RL25:   ; CALL OCCURS {print_test_results} {0}  ; |196| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 14
           MVKL    .S1     cycle_counts+24,A3

           MVKH    .S1     cycle_counts+24,A3
||         ZERO    .L2     B4                ; |114| 
||         ZERO    .L1     A10               ; |114| 
||         ZERO    .D1     A11               ; |114| 

           MVC     .S2     B4,TSCL           ; |115| 
||         STDW    .D1T1   A11:A10,*A3       ; |114| 

           MVC     .S2     TSCL,B6           ; |116| 
           MVC     .S2     TSCH,B7           ; |116| 
           MVKL    .S1     t_start,A3
           MVKH    .S1     t_start,A3

           MVC     .S2     TSCL,B4           ; |117| 
||         STDW    .D1T2   B7:B6,*A3         ; |116| 

           MVC     .S2     TSCH,B8           ; |117| 

           CALL    .S1     gimme_random      ; |206| 
||         SUBU    .L2     B4,B6,B5:B4       ; |117| 

           EXT     .S2     B5,24,24,B6       ; |117| 
||         SUB     .L2     B8,B7,B31         ; |117| 
||         MVKL    .S1     t_offset,A4

           ADD     .L2     B31,B6,B5         ; |117| 
||         MVKH    .S1     t_offset,A4

           ZERO    .L2     B4
||         STDW    .D1T2   B5:B4,*A4         ; |117| 
||         MVK     .S2     0x80,B30

           MVKH    .S2     0xbf000000,B4
||         MV      .L1     A12,A4            ; |206| 
||         STW     .D2T2   B30,*+SP(12)      ; |117| 
||         MV      .L2X    A11,B13

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains control code
;*----------------------------------------------------------------------------*
$C$L16:    
;          EXCLUSIVE CPU CYCLES: 1
           ADDKPC  .S2     $C$RL26,B3,0      ; |206| 
$C$RL26:   ; CALL OCCURS {gimme_random} {0}  ; |206| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 21
           MVKL    .S1     input,A3
           MVKH    .S1     input,A3
           LDW     .D1T1   *A3,A3            ; |206| 
           NOP             4
           ADD     .L2X    B13,A3,B4         ; |206| 

           STW     .D2T1   A4,*B4            ; |206| 
||         MVC     .S2     TSCL,B4           ; |122| 

           NOP             1

           MV      .L1X    B4,A6             ; |122| Define a twin register
||         MVC     .S2     TSCH,B4           ; |122| 

           MV      .L2X    A4,B7             ; |210| 
||         MVKL    .S1     0x3f3504f3,A3
||         MV      .L1     A12,A16           ; |155| 

           MVKH    .S1     0x3f3504f3,A3
||         MV      .L1X    B4,A7             ; |122| 

           ABSSP   .S1X    B7,A5             ; |158| 

           CMPGTSP .S1     A5,A3,A0          ; |160| 
||         MPYSP   .M1     A5,A5,A3          ; |66| 

   [!A0]   BNOP    .S1     $C$L17,2          ; |160| 
|| [!A0]   MPYSP   .M1     A5,A5,A4          ; |130| 
|| [ A0]   ZERO    .L1     A31
|| [!A0]   MVKL    .S2     0xbc33e814,B4

           FSUBSP  .L1     A16,A3,A8         ; |66| 
|| [!A0]   MVKL    .S1     0x3d59196f,A3

   [!A0]   MPYSP   .M1     A4,A4,A9          ; |130| 
|| [!A0]   MVKH    .S1     0x3d59196f,A3

   [ A0]   SET     .S1     A31,0x18,0x1d,A3
           ; BRANCHCC OCCURS {$C$L17}        ; |160| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 75

           MPYSP   .M1     A3,A8,A4          ; |66| 
||         RSQRSP  .S1     A8,A3             ; |66| 

           MPYSP   .M1     A3,A3,A9          ; |66| 
           MVKL    .S2     0xbc33e814,B31
           MV      .L2X    A10,B4            ; |69| 
           MVKL    .S1     0x3d59196f,A30
           MPYSP   .M1     A4,A9,A9          ; |66| 
           CMPGTSP .S2X    A8,B4,B0          ; |71| 
           MVKH    .S2     0xbc33e814,B31
           MVKH    .S1     0x3d59196f,A30
           FSUBSP  .L1     A13,A9,A9         ; |66| 
           MVKL    .S1     0x3e2aaa2b,A29
           MVKL    .S2     0x3d99abc6,B30
           MPYSP   .M1     A3,A9,A3          ; |66| 
           MVKH    .S1     0x3e2aaa2b,A29
           MVKH    .S2     0x3d99abc6,B30
           MVKL    .S1     0x3cbb4abc,A28
           MPYSP   .M1     A3,A3,A9          ; |69| 
           MVKL    .S2     0x3ca93df4,B27
           MVKH    .S1     0x3cbb4abc,A28
           MVKL    .S2     0x3d361236,B28
           MPYSP   .M1     A4,A9,A4          ; |69| 
           MVKL    .S1     0x3fc90fdb,A26
           MVKL    .S2     0x3cfaf877,B29
           MVKH    .S1     0x3fc90fdb,A26
           FSUBSP  .L1     A13,A4,A4         ; |69| 
           MVKH    .S2     0x3d361236,B28
           MVKH    .S2     0x3cfaf877,B29
           MPYSP   .M1     A3,A4,A3          ; |69| 
           MVKH    .S2     0x3ca93df4,B27
           MVKL    .S1     0x3fc90fdb,A31
           MVKH    .S1     0x3fc90fdb,A31
           MPYSP   .M1     A8,A3,A4          ; |69| 
           CMPGTSP .S1     A5,A12,A0         ; |176| 
           NOP             2
   [!B0]   MV      .L1     A11,A4            ; |71| 
           MPYSP   .M1     A4,A4,A9          ; |164| 
           NOP             3
           MPYSP   .M1     A9,A9,A8          ; |164| 
           MPYSP   .M2X    B31,A9,B5         ; |164| 
           MPYSP   .M1     A29,A9,A19        ; |164| 
           MVKL    .S2     output+12,B31
           MPYSP   .M1     A30,A8,A20        ; |164| 
           MPYSP   .M1     A8,A9,A17         ; |164| 
           MPYSP   .M1     A8,A8,A18         ; |164| 
           MPYSP   .M2X    B30,A8,B6         ; |164| 
           MVKH    .S2     output+12,B31
           FADDSP  .L2X    B5,A20,B5         ; |164| 

           MPYSP   .M1     A8,A18,A9         ; |164| 
||         MPYSP   .M2X    B28,A17,B9        ; |164| 

           MPYSP   .M1     A8,A17,A8         ; |164| 
||         MPYSP   .M2X    B29,A18,B8        ; |164| 

           FADDSP  .L2     B27,B5,B4         ; |164| 
           FADDSP  .L1X    A19,B6,A27        ; |164| 
           ZERO    .L1     A30

           FADDSP  .L2     B9,B8,B26         ; |164| 
||         MPYSP   .M1     A28,A8,A3         ; |164| 

           MPYSP   .M2X    A9,B4,B5          ; |164| 
           MVKL    .S1     t_start,A8
           FADDSP  .L2X    A27,B26,B4        ; |164| 
           MVKH    .S1     t_start,A8
           FADDSP  .L2X    A3,B5,B5          ; |164| 
           STDW    .D1T1   A7:A6,*A8
           NOP             1
           FADDSP  .L2     B5,B4,B4          ; |164| 
           NOP             2
           MPYSP   .M2X    A4,B4,B4          ; |164| 
           NOP             2
           BNOP    .S1     $C$L18,1          ; |165| 

           FADDSP  .L1X    A4,B4,A4          ; |164| 
||         MV      .L2X    A10,B4

           CMPLTSP .S2     B7,B4,B0          ; |170| 
||         LDW     .D2T2   *B31,B4           ; |210| 

           NOP             1

           FSUBSP  .L1     A26,A4,A3         ; |164| 
||         ZERO    .S1     A4

           ; BRANCH OCCURS {$C$L18}          ; |165| 
;** --------------------------------------------------------------------------*
$C$L17:    
;          EXCLUSIVE CPU CYCLES: 29

           MVKH    .S2     0xbc33e814,B4
||         MVKL    .S1     0x3e2aaa2b,A31

           MPYSP   .M2X    B4,A4,B5          ; |130| 
||         MVKL    .S2     0x3d99abc6,B31
||         MVKH    .S1     0x3e2aaa2b,A31

           MPYSP   .M1     A3,A9,A18         ; |130| 
||         MVKH    .S2     0x3d99abc6,B31
||         MVKL    .S1     0x3cbb4abc,A29

           MPYSP   .M1     A9,A9,A8          ; |130| 
||         MVKL    .S2     0x3d361236,B29
||         MPYSP   .M2X    B31,A9,B8         ; |130| 
||         MVKH    .S1     0x3cbb4abc,A29

           MPYSP   .M1     A9,A4,A17         ; |130| 
||         MVKL    .S2     0x3cfaf877,B30
||         CMPGTSP .S1     A5,A12,A0         ; |176| 

           MPYSP   .M1     A31,A4,A19        ; |130| 
||         MVKH    .S2     0x3d361236,B29
||         MVKL    .S1     0x3fc90fdb,A31

           MVKH    .S2     0x3cfaf877,B30

           FADDSP  .L2X    B5,A18,B9         ; |130| 
||         MPYSP   .M1     A9,A8,A30         ; |130| 
||         MVKL    .S2     0x3ca93df4,B28

           MPYSP   .M1     A9,A17,A4         ; |130| 
||         MPYSP   .M2X    B30,A8,B5         ; |130| 
||         MVKH    .S2     0x3ca93df4,B28

           MPYSP   .M2X    B29,A17,B6        ; |130| 
           FADDSP  .L2     B28,B9,B4         ; |130| 
           FADDSP  .L1X    A19,B8,A28        ; |130| 
           MPYSP   .M1     A29,A4,A4         ; |130| 

           MPYSP   .M2X    A30,B4,B5         ; |130| 
||         FADDSP  .L2     B6,B5,B4          ; |130| 

           MVKH    .S1     0x3fc90fdb,A31
           MVKL    .S1     t_start,A8
           FADDSP  .L2X    A28,B4,B4         ; |130| 
           FADDSP  .L2X    A4,B5,B5          ; |130| 
           MVKH    .S1     t_start,A8
           MVKL    .S2     output+12,B31
           FADDSP  .L2     B5,B4,B4          ; |130| 
           STDW    .D1T1   A7:A6,*A8
           MVKH    .S2     output+12,B31
           ZERO    .L1     A30

           MPYSP   .M1X    A5,B4,A3          ; |130| 
||         MV      .L2X    A10,B4

           CMPLTSP .S2     B7,B4,B0          ; |170| 
           LDW     .D2T2   *B31,B4           ; |210| 
           ZERO    .L1     A4
           FADDSP  .L1     A5,A3,A3          ; |130| 
;** --------------------------------------------------------------------------*
$C$L18:    
;          EXCLUSIVE CPU CYCLES: 37
           MVKH    .S1     0xbf800000,A4
   [ B0]   MV      .S1     A4,A16            ; |171| 

           MPYSP   .M1     A16,A3,A4         ; |174| 
||         ADD     .L2     B13,B4,B4         ; |210| 

           NOP             3

           FSUBSP  .L1     A31,A4,A3         ; |174| 
||         SET     .S1     A30,0x0,0x1e,A4

           NOP             2
   [ A0]   MV      .L1     A4,A3             ; |177| 

           STW     .D2T1   A3,*B4            ; |210| 
||         MVC     .S2     TSCL,B16          ; |128| 

           MVC     .S2     TSCH,B4           ; |128| 

           MVKL    .S1     t_offset,A15
||         MVKL    .S2     cycle_counts+24,B5
||         MV      .L2     B4,B17            ; |128| 
||         ADD     .D2     4,B13,B13         ; |204| 

           MVKH    .S1     t_offset,A15
||         MVKH    .S2     cycle_counts+24,B5

           LDDW    .D1T1   *A15,A9:A8        ; |130| 
||         LDDW    .D2T2   *B5,B7:B6         ; |130| 
||         MVKL    .S2     t_stop,B8

           MV      .L1X    B5,A14            ; |128| 
||         MVKH    .S2     t_stop,B8

           STDW    .D2T2   B17:B16,*B8       ; |128| 
           NOP             2
           ADDU    .L1     A8,A6,A5:A4       ; |130| 
           ADD     .L1     A5,A9,A3          ; |130| 

           ADD     .L1     A3,A7,A3          ; |130| 
||         SUBU    .L2X    B16,A4,B5:B4      ; |130| 

           EXT     .S2     B5,24,24,B9       ; |130| 
||         ADDU    .L2     B6,B4,B5:B4       ; |130| 

           SUB     .L2X    B17,A3,B6         ; |130| 
||         ADD     .S2     B5,B7,B5          ; |130| 

           ADD     .L2     B6,B9,B6          ; |130| 

           ADD     .L2     B5,B6,B5          ; |130| 
||         LDW     .D2T2   *+SP(12),B6       ; |128| 

           STDW    .D1T2   B5:B4,*A14        ; |130| 
           NOP             3

           SUB     .L1X    B6,1,A0           ; |204| 
||         SUB     .L2     B6,1,B4           ; |204| 

           STW     .D2T2   B4,*+SP(12)       ; |130| 
|| [ A0]   ZERO    .L2     B4
|| [ A0]   MV      .L1     A12,A4            ; |206| 
|| [ A0]   B       .S1     $C$L16            ; |204| 
|| [!A0]   LDDW    .D1T1   *A14,A5:A4        ; |135| 

   [ A0]   CALL    .S1     gimme_random      ; |206| 
|| [ A0]   MVKH    .S2     0xbf000000,B4

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
           NOP             3
           ; BRANCHCC OCCURS {$C$L16}        ; |204| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 2
           ADDKPC  .S2     $C$RL27,B3,1      ; |135| 
$C$RL27:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
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

$C$RL28:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12
           MV      .L2X    A14,B4
           STDW    .D2T1   A5:A4,*B4         ; |135| 

           SUBAW   .D2     B4,6,B5
||         MV      .L2X    A10,B31           ; |114| 

           MVC     .S2     B31,TSCL          ; |115| 
||         STDW    .D2T1   A11:A10,*B5       ; |114| 

           MVC     .S2     TSCL,B5           ; |116| 
           MVC     .S2     TSCH,B4           ; |116| 
           MVC     .S2     TSCL,B6           ; |117| 
           MVC     .S2     TSCH,B8           ; |117| 
           SUBU    .L2     B6,B5,B7:B6       ; |117| 

           EXT     .S2     B7,24,24,B5       ; |117| 
||         SUB     .L2     B8,B4,B4          ; |117| 

           ADD     .L2     B4,B5,B7          ; |117| 

           STDW    .D1T2   B7:B6,*A15        ; |117| 
||         MVK     .S1     0x80,A12
||         MV      .L1     A12,A14           ; |117| 

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
           LDW     .D1T1   *A3,A3            ; |219| 
           MVKL    .S2     t_start,B6
           MVKH    .S2     t_start,B6
           STDW    .D2T2   B5:B4,*B6         ; |122| 
           NOP             1

           ADD     .L1     A14,A3,A3         ; |219| 
||         CALL    .S1     acosf             ; |219| 

           LDW     .D1T1   *A3,A4            ; |219| 
           ADDKPC  .S2     $C$RL29,B3,3      ; |219| 
$C$RL29:   ; CALL OCCURS {acosf} {0}         ; |219| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 24
           MVKL    .S2     output,B4
           MVKH    .S2     output,B4
           LDW     .D2T2   *B4,B4            ; |219| 
           NOP             4
           ADD     .L1X    A14,B4,A3         ; |219| 

           STW     .D1T1   A4,*A3            ; |219| 
||         MVC     .S2     TSCL,B16          ; |128| 

           MVC     .S2     TSCH,B6           ; |128| 

           MVKL    .S2     t_start,B4
||         LDDW    .D1T1   *A15,A5:A4        ; |130| 
||         MVKL    .S1     cycle_counts,A3
||         SUB     .L1     A12,1,A0          ; |217| 
||         MV      .L2     B6,B17            ; |128| 

           MVKH    .S2     t_start,B4
||         MVKH    .S1     cycle_counts,A3
||         ADD     .L1     4,A14,A14         ; |217| 
||         SUB     .D1     A12,1,A12         ; |217| 

           LDDW    .D2T2   *B4,B9:B8         ; |130| 
||         LDDW    .D1T1   *A3,A7:A6         ; |130| 
||         MVKL    .S2     cycle_counts,B6
||         MVKL    .S1     t_stop,A31

           MVKH    .S1     t_stop,A31
           MVKH    .S2     cycle_counts,B6
           STDW    .D1T2   B17:B16,*A31      ; |128| 
   [!A0]   MV      .L1X    B6,A14
           ADDU    .L2X    A4,B8,B5:B4       ; |130| 

           ADD     .S2X    B5,A5,B7          ; |130| 
|| [ A0]   B       .S1     $C$L19            ; |217| 
||         SUBU    .L2     B16,B4,B5:B4      ; |130| 

           ADD     .D2     B7,B9,B7          ; |130| 
||         EXT     .S2     B5,24,24,B9       ; |130| 
||         ADDU    .L2X    A6,B4,B5:B4       ; |130| 

           SUB     .L2     B17,B7,B7         ; |130| 
||         MV      .S2     B4,B8             ; |130| 
||         ADD     .D2X    B5,A7,B4          ; |130| 

           ADD     .L2     B7,B9,B5          ; |130| 
           ADD     .L2     B4,B5,B9          ; |130| 

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
||         STDW    .D2T2   B9:B8,*B6         ; |130| 

           ; BRANCHCC OCCURS {$C$L19}        ; |217| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *A14,A5:A4        ; |135| 
           ADDKPC  .S2     $C$RL30,B3,3      ; |135| 
$C$RL30:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
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

$C$RL31:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10

           STDW    .D1T1   A11:A10,*+A14(16) ; |114| 
||         MV      .L2X    A10,B4            ; |114| 

           MVC     .S2     B4,TSCL           ; |115| 
||         STDW    .D1T1   A5:A4,*A14        ; |135| 

           MVC     .S2     TSCL,B5           ; |116| 
           MVC     .S2     TSCH,B4           ; |116| 
           MVC     .S2     TSCL,B6           ; |117| 
           MVC     .S2     TSCH,B9           ; |117| 
           SUBU    .L2     B6,B5,B7:B6       ; |117| 

           EXT     .S2     B7,24,24,B5       ; |117| 
||         SUB     .L2     B9,B4,B4          ; |117| 
||         MVK     .S1     0x80,A3

           ADD     .L2     B4,B5,B7          ; |117| 
||         STW     .D2T1   A3,*+SP(12)       ; |117| 
||         MV      .S2X    A15,B8            ; |117| 

           STDW    .D2T2   B7:B6,*B8         ; |117| 
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
           LDW     .D1T1   *A3,A3            ; |228| 
           MVKL    .S2     t_start,B6
           MVKH    .S2     t_start,B6
           STDW    .D2T2   B5:B4,*B6         ; |122| 
           NOP             1

           ADD     .L1     A12,A3,A3         ; |228| 
||         CALL    .S1     acossp_c          ; |228| 

           LDW     .D1T1   *A3,A4            ; |228| 
           ADDKPC  .S2     $C$RL32,B3,3      ; |228| 
$C$RL32:   ; CALL OCCURS {acossp_c} {0}      ; |228| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 24
           MVKL    .S2     output+8,B4
           MVKH    .S2     output+8,B4
           LDW     .D2T2   *B4,B4            ; |228| 
           NOP             4
           ADD     .L1X    A12,B4,A3         ; |228| 

           STW     .D1T1   A4,*A3            ; |228| 
||         MVC     .S2     TSCL,B16          ; |128| 

           MVC     .S2     TSCH,B6           ; |128| 

           MVKL    .S2     t_start,B4
||         LDW     .D2T1   *+SP(12),A30      ; |128| 
||         ADDAD   .D1     A14,2,A3
||         MV      .L2     B6,B17            ; |128| 
||         MVKL    .S1     t_stop,A31
||         ADD     .L1     4,A12,A12         ; |226| 

           MVKH    .S2     t_start,B4
||         LDDW    .D1T1   *A15,A5:A4        ; |130| 
||         MVKH    .S1     t_stop,A31

           LDDW    .D2T2   *B4,B9:B8         ; |130| 
||         LDDW    .D1T1   *A3,A7:A6         ; |130| 
||         MVK     .S2     16,B13

           STDW    .D1T2   B17:B16,*A31      ; |128| 
           ADD     .L2X    A14,B13,B13
           SUB     .L1     A30,1,A0          ; |226| 
           STW     .D2T1   A0,*+SP(12)       ; |130| 
           ADDU    .L2X    A4,B8,B5:B4       ; |130| 

   [ A0]   B       .S1     $C$L20            ; |226| 
||         ADD     .S2X    B5,A5,B6          ; |130| 
||         SUBU    .L2     B16,B4,B5:B4      ; |130| 

           ADD     .D2     B6,B9,B6          ; |130| 
||         EXT     .S2     B5,24,24,B7       ; |130| 
||         ADDU    .L2X    A6,B4,B5:B4       ; |130| 

           SUB     .L2     B17,B6,B6         ; |130| 
||         ADD     .S2X    B5,A7,B5          ; |130| 

           ADD     .L2     B6,B7,B6          ; |130| 
           ADD     .L2     B5,B6,B5          ; |130| 

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
||         STDW    .D2T2   B5:B4,*B13        ; |130| 

           ; BRANCHCC OCCURS {$C$L20}        ; |226| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *+A14(16),A5:A4   ; |135| 
           ADDKPC  .S2     $C$RL33,B3,3      ; |135| 
$C$RL33:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
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

$C$RL34:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10

           STDW    .D1T1   A11:A10,*+A14(8)  ; |114| 
||         MV      .L2X    A11,B4            ; |114| 

           MVC     .S2     B4,TSCL           ; |115| 
||         STDW    .D2T1   A5:A4,*B13        ; |135| 

           MVC     .S2     TSCL,B5           ; |116| 
           MVC     .S2     TSCH,B4           ; |116| 
           MVC     .S2     TSCL,B6           ; |117| 
           MVC     .S2     TSCH,B8           ; |117| 
           SUBU    .L2     B6,B5,B7:B6       ; |117| 

           EXT     .S2     B7,24,24,B5       ; |117| 
||         SUB     .L2     B8,B4,B4          ; |117| 

           ADD     .L2     B4,B5,B7          ; |117| 
||         MVK     .S1     0x80,A3

           STDW    .D1T2   B7:B6,*A15        ; |117| 
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
           LDW     .D1T1   *A3,A3            ; |237| 
           MVKL    .S2     t_start,B6
           MVKH    .S2     t_start,B6
           STDW    .D2T2   B5:B4,*B6         ; |122| 
           NOP             1

           ADD     .L1     A12,A3,A3         ; |237| 
||         CALL    .S1     acossp            ; |237| 

           LDW     .D1T1   *A3,A4            ; |237| 
           ADDKPC  .S2     $C$RL35,B3,3      ; |237| 
$C$RL35:   ; CALL OCCURS {acossp} {0}        ; |237| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 24
           MVKL    .S2     output+4,B4
           MVKH    .S2     output+4,B4
           LDW     .D2T2   *B4,B4            ; |237| 
           NOP             4
           ADD     .L1X    A12,B4,A3         ; |237| 

           STW     .D1T1   A4,*A3            ; |237| 
||         MVC     .S2     TSCL,B16          ; |128| 

           MVC     .S2     TSCH,B5           ; |128| 

           MVKL    .S2     t_start,B4
||         LDW     .D2T1   *+SP(12),A30      ; |128| 
||         ADDAD   .D1     A14,1,A3
||         MV      .L2     B5,B17            ; |128| 
||         MVKL    .S1     t_stop,A31
||         ADD     .L1     4,A12,A12         ; |235| 

           MVKH    .S2     t_start,B4
||         LDDW    .D1T1   *A15,A5:A4        ; |130| 
||         MVKH    .S1     t_stop,A31

           MV      .L2X    A3,B13            ; |128| 
||         LDDW    .D2T2   *B4,B7:B6         ; |130| 

           LDDW    .D1T1   *A3,A7:A6         ; |130| 
           STDW    .D1T2   B17:B16,*A31      ; |128| 
           SUB     .L1     A30,1,A0          ; |235| 
           STW     .D2T1   A0,*+SP(12)       ; |130| 
           ADDU    .L2X    A4,B6,B9:B8       ; |130| 

           ADD     .S2X    B9,A5,B6          ; |130| 
|| [ A0]   B       .S1     $C$L21            ; |235| 
||         SUBU    .L2     B16,B8,B5:B4      ; |130| 

           ADD     .D2     B6,B7,B6          ; |130| 
||         EXT     .S2     B5,24,24,B7       ; |130| 
||         ADDU    .L2X    A6,B4,B5:B4       ; |130| 

           SUB     .L2     B17,B6,B6         ; |130| 
||         ADD     .S2X    B5,A7,B5          ; |130| 

           ADD     .L2     B6,B7,B6          ; |130| 
           ADD     .L2     B5,B6,B5          ; |130| 

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
||         STDW    .D2T2   B5:B4,*B13        ; |130| 

           ; BRANCHCC OCCURS {$C$L21}        ; |235| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *+A14(8),A5:A4    ; |135| 
           ADDKPC  .S2     $C$RL36,B3,3      ; |135| 
$C$RL36:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 110
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |135| 
           MV      .L1     A10,A12           ; |135| 
           NOP             2
           SPDP    .S1     A3,A5:A4          ; |135| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A13:A12,A5:A4,A5:A4 ; |135| 

$C$RL37:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 

           MV      .L2X    A11,B4            ; |114| 
||         MV      .L1X    B13,A12           ; |135| 
||         STDW    .D1T1   A11:A10,*+A14(32) ; |114| 

           STDW    .D1T1   A5:A4,*A12        ; |135| 
||         MVC     .S2     B4,TSCL           ; |115| 

           MVC     .S2     TSCL,B4           ; |116| 
           MVC     .S2     TSCH,B5           ; |116| 
           MVKL    .S1     t_start,A3
           MVKH    .S1     t_start,A3
           NOP             1
           MV      .L2X    A3,B13            ; |116| 

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

           MV      .L2X    A3,B9             ; |244| 
||         MVKH    .S1     output,A10
||         STDW    .D1T2   B7:B6,*A15        ; |117| 

           CALLP   .S2     acossp_v,B3
||         LDW     .D2T1   *B9,A4            ; |244| 
||         LDW     .D1T2   *+A10(16),B4      ; |244| 
||         MVK     .S1     0x80,A6           ; |244| 

$C$RL38:   ; CALL OCCURS {acossp_v} {0}      ; |244| 
           MVC     .S2     TSCL,B8           ; |128| 
           MVC     .S2     TSCH,B4           ; |128| 

           LDDW    .D1T1   *A15,A5:A4        ; |130| 
||         LDDW    .D2T2   *B13,B7:B6        ; |130| 

           MVK     .S2     24,B13
           ADD     .L2X    A12,B13,B13

           MV      .L2     B4,B9             ; |128| 
||         LDDW    .D2T2   *B13,B5:B4        ; |130| 

           MVKL    .S1     t_stop,A3
           ADDU    .L1X    A4,B6,A7:A6       ; |130| 

           ADD     .S1     A7,A5,A6          ; |130| 
||         SUBU    .L1X    B8,A6,A5:A4       ; |130| 

           MVKH    .S1     t_stop,A3

           ADDU    .L1X    B4,A4,A7:A6       ; |130| 
||         ADD     .L2X    A6,B7,B4          ; |130| 

           MV      .L2X    A3,B6             ; |128| 
||         EXT     .S1     A5,24,24,A3       ; |130| 

           SUB     .L2     B9,B4,B7          ; |130| 
||         ADD     .S2X    A7,B5,B5          ; |130| 

           ADD     .L2X    B7,A3,B7          ; |130| 

           ADD     .L2     B5,B7,B5          ; |130| 
||         MV      .S2X    A6,B4             ; |130| 

           STDW    .D2T2   B9:B8,*B6         ; |128| 

           CALLP   .S2     __c6xabi_fltllif,B3
||         DADD    .L1X    0,B5:B4,A5:A4     ; |130| 

$C$RL39:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |130| 
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |130| 
           MV      .L1     A11,A12           ; |130| 
           NOP             2
           SPDP    .S1     A3,A5:A4          ; |130| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A13:A12,A5:A4,A5:A4 ; |130| 

$C$RL40:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |130| 
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6
           MVKH    .S2     0x3eb0c6f7,B7

           STDW    .D2T1   A5:A4,*B13        ; |130| 
||         LDW     .D1T2   *+A10(4),B4       ; |66| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A10,A4           ; |66| 
||         MVK     .L1     0x1,A8            ; |66| 
||         MVK     .S1     0x80,A6           ; |66| 

$C$RL41:   ; CALL OCCURS {isequal} {0}       ; |66| 
           MVKL    .S2     0xa0b5ed8d,B6

           MVKL    .S1     fcn_pass,A3
||         MVKL    .S2     0x3eb0c6f7,B7

           LDW     .D1T2   *+A10(8),B4       ; |67| 
||         MVKH    .S1     fcn_pass,A3
||         MVKH    .S2     0xa0b5ed8d,B6

           MV      .L1     A4,A5             ; |66| 
||         LDW     .D1T1   *A10,A4           ; |67| 
||         MV      .S1     A3,A11            ; |66| 
||         MVKH    .S2     0x3eb0c6f7,B7

           CALLP   .S2     isequal,B3
||         STW     .D1T1   A5,*+A11(4)       ; |66| 
||         MVK     .S1     0x80,A6           ; |67| 
||         MVK     .L1     0x1,A8            ; |67| 

$C$RL42:   ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6

           STW     .D1T1   A4,*+A11(8)       ; |67| 
||         MVKH    .S2     0x3eb0c6f7,B7

           LDW     .D1T2   *+A10(12),B4      ; |68| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A10,A4           ; |68| 
||         MVK     .S1     0x80,A6           ; |68| 
||         MVK     .L1     0x1,A8            ; |68| 

$C$RL43:   ; CALL OCCURS {isequal} {0}       ; |68| 
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6
           MVKH    .S2     0x3eb0c6f7,B7

           STW     .D1T1   A4,*+A11(12)      ; |68| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A10,A4           ; |69| 
||         LDW     .D2T2   *B12,B4           ; |69| 
||         MVK     .S1     0x80,A6           ; |69| 
||         MVK     .L1     0x1,A8            ; |69| 

$C$RL44:   ; CALL OCCURS {isequal} {0}       ; |69| 
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
   [ A0]   CALL    .S1     print_test_results ; |250| 
           MVK     .L1     0x1,A3            ; |72| 
   [ A0]   MVKL    .S1     all_pass,A4
   [ A0]   MVKH    .S1     all_pass,A4
           NOP             1
           ; BRANCHCC OCCURS {$C$L23}        ; |72| 
;** --------------------------------------------------------------------------*
$C$L22:    
;          EXCLUSIVE CPU CYCLES: 5
           CALL    .S1     print_test_results ; |250| 
           MVKL    .S1     all_pass,A4
           MVKH    .S1     all_pass,A4
           MV      .L1     A12,A3
           NOP             1
;** --------------------------------------------------------------------------*
$C$L23:    
;          EXCLUSIVE CPU CYCLES: 1

           STW     .D1T1   A3,*A4            ; |72| 
||         MVK     .L1     0x2,A4            ; |250| 
||         ADDKPC  .S2     $C$RL45,B3,0      ; |250| 

$C$RL45:   ; CALL OCCURS {print_test_results} {0}  ; |250| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 30
           MVKL    .S2     $C$SL2+0,B4
           MVKH    .S2     $C$SL2+0,B4

           CALLP   .S2     printf,B3
||         STW     .D2T2   B4,*+SP(4)        ; |251| 

$C$RL46:   ; CALL OCCURS {printf} {0}        ; |251| 
           MVKL    .S2     $C$SL3+0,B4
           MVKH    .S2     $C$SL3+0,B4

           CALLP   .S2     printf,B3
||         STW     .D2T2   B4,*+SP(4)        ; |251| 

$C$RL47:   ; CALL OCCURS {printf} {0}        ; |251| 
           MVKL    .S1     $C$SL1+0,A10
           MVKH    .S1     $C$SL1+0,A10

           CALLP   .S2     print_profile_results,B3
||         MV      .L1     A10,A4            ; |258| 

$C$RL48:   ; CALL OCCURS {print_profile_results} {0}  ; |258| 

           CALLP   .S2     print_memory_results,B3
||         MV      .L1     A10,A4            ; |261| 

$C$RL49:   ; CALL OCCURS {print_memory_results} {0}  ; |261| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 11
           LDW     .D2T2   *++SP(24),B3      ; |262| 
           LDDW    .D2T1   *++SP,A13:A12     ; |262| 
           LDDW    .D2T1   *++SP,A15:A14     ; |262| 
           LDDW    .D2T2   *++SP,B11:B10     ; |262| 
           LDDW    .D2T2   *++SP,B13:B12     ; |262| 

           LDW     .D2T1   *++SP(8),A10      ; |262| 
||         RET     .S2     B3                ; |262| 

           LDW     .D2T1   *++SP(8),A11      ; |262| 
           NOP             4
           ; BRANCH OCCURS {B3}              ; |262| 
;******************************************************************************
;* STRINGS                                                                    *
;******************************************************************************
	.sect	".const:.string"
$C$SL1:	.string	"acosSP",0
$C$SL2:	.string	"----------------------------------------",0
$C$SL3:	.string	"----------------------------------------",10,0
;*****************************************************************************
;* UNDEFINED EXTERNAL REFERENCES                                             *
;*****************************************************************************
	.global	printf
	.global	acosf
	.global	driver_init
	.global	print_profile_results
	.global	print_memory_results
	.global	print_test_results
	.global	gimme_random
	.global	isequal
	.global	acossp_c
	.global	acossp
	.global	acossp_v
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
