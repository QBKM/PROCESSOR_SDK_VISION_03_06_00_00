;******************************************************************************
;* TMS320C6x C/C++ Codegen                                          PC v7.4.2 *
;* Date/Time created: Mon Nov 04 22:08:39 2013                                *
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
	.elfsym	a,SYM_SIZE(1608)
a:
	.word	099301ad8h,03f6ab441h		; a[0] @ 0
	.word	0adfa0a03h,03f7460cbh		; a[1] @ 64
	.word	0d05621d3h,0bf8460cbh		; a[2] @ 128
	.word	0403edf64h,03f8e9131h		; a[3] @ 192
	.word	0f2b239a4h,0bf9460cbh		; a[4] @ 256
	.word	099788c84h,03f9978feh		; a[5] @ 320
	.word	0ec0b5675h,0bf9e9131h		; a[6] @ 384
	.word	04968d4abh,03fa1d4b2h		; a[7] @ 448
	.word	09ccbfe1bh,0bfa460cbh		; a[8] @ 512
	.word	046156314h,03fa6ece5h		; a[9] @ 576
	.word	099788c84h,0bfa978feh		; a[10] @ 640
	.word	042c1f17dh,03fac0518h		; a[11] @ 704
	.word	096251aedh,0bfae9131h		; a[12] @ 768
	.word	09fb73ff3h,03fb08ea5h		; a[13] @ 832
	.word	04968d4abh,0bfb1d4b2h		; a[14] @ 896
	.word	0f31a6963h,03fb31abeh		; a[15] @ 960
	.word	0c7bf1bdfh,0bfb460cbh		; a[16] @ 1024
	.word	07170b097h,03fb5a6d8h		; a[17] @ 1088
	.word	046156314h,0bfb6ece5h		; a[18] @ 1152
	.word	0efc6f7cch,03fb832f1h		; a[19] @ 1216
	.word	0c46baa48h,0bfb978feh		; a[20] @ 1280
	.word	0432a213ch,03fbabf0bh		; a[21] @ 1344
	.word	096f57a6bh,0bfbc0517h		; a[22] @ 1408
	.word	0983ffd46h,03fbd4b25h		; a[23] @ 1472
	.word	0ec0b5675h,0bfbe9131h		; a[24] @ 1536
	.word	03fd6afa5h,03fbfd73eh		; a[25] @ 1600
	.word	049d1046ah,0bfc08ea5h		; a[26] @ 1664
	.word	04a7645d7h,03fc131ach		; a[27] @ 1728
	.word	0745bf26fh,0bfc1d4b2h		; a[28] @ 1792
	.word	09e419f07h,03fc277b8h		; a[29] @ 1856
	.word	0c8274b9eh,0bfc31abeh		; a[30] @ 1920
	.word	0c8cc8d0ch,03fc3bdc5h		; a[31] @ 1984
	.word	0f2b239a4h,0bfc460cbh		; a[32] @ 2048
	.word	01c97e63bh,03fc503d2h		; a[33] @ 2112
	.word	0467d92d3h,0bfc5a6d8h		; a[34] @ 2176
	.word	04722d440h,03fc649dfh		; a[35] @ 2240
	.word	0710880d8h,0bfc6ece5h		; a[36] @ 2304
	.word	09aee2d70h,03fc78febh		; a[37] @ 2368
	.word	0c4d3da07h,0bfc832f1h		; a[38] @ 2432
	.word	0c5791b75h,03fc8d5f8h		; a[39] @ 2496
	.word	0ef5ec80ch,0bfc978feh		; a[40] @ 2560
	.word	0194474a4h,03fca1c05h		; a[41] @ 2624
	.word	0432a213ch,0bfcabf0bh		; a[42] @ 2688
	.word	043cf62a9h,03fcb6212h		; a[43] @ 2752
	.word	06db50f41h,0bfcc0518h		; a[44] @ 2816
	.word	0979abbd9h,03fcca81eh		; a[45] @ 2880
	.word	0c1806870h,0bfcd4b24h		; a[46] @ 2944
	.word	0eb661508h,03fcdee2ah		; a[47] @ 3008
	.word	0ec0b5675h,0bfce9131h		; a[48] @ 3072
	.word	015f1030dh,03fcf3438h		; a[49] @ 3136
	.word	03fd6afa5h,0bfcfd73eh		; a[50] @ 3200
	.word	034de2e1eh,03fd03d22h		; a[51] @ 3264
	.word	0b530ced5h,0bfd08ea5h		; a[52] @ 3328
	.word	0ca23a521h,03fd0e028h		; a[53] @ 3392
	.word	0df167b6dh,0bfd131abh		; a[54] @ 3456
	.word	0f40951b8h,03fd1832eh		; a[55] @ 3520
	.word	0745bf26fh,0bfd1d4b2h		; a[56] @ 3584
	.word	0894ec8bbh,03fd22635h		; a[57] @ 3648
	.word	09e419f07h,0bfd277b8h		; a[58] @ 3712
	.word	0b3347553h,03fd2c93bh		; a[59] @ 3776
	.word	033871609h,0bfd31abfh		; a[60] @ 3840
	.word	04879ec55h,03fd36c42h		; a[61] @ 3904
	.word	05d6cc2a1h,0bfd3bdc5h		; a[62] @ 3968
	.word	0725f98edh,03fd40f48h		; a[63] @ 4032
	.word	0f2b239a4h,0bfd460cbh		; a[64] @ 4096
	.word	007a50fefh,03fd4b24fh		; a[65] @ 4160
	.word	01c97e63bh,0bfd503d2h		; a[66] @ 4224
	.word	0318abc87h,03fd55555h		; a[67] @ 4288
	.word	0b1dd5d3eh,0bfd5a6d8h		; a[68] @ 4352
	.word	0c6d0338ah,03fd5f85bh		; a[69] @ 4416
	.word	0dbc309d5h,0bfd649deh		; a[70] @ 4480
	.word	0f0b5e021h,03fd69b61h		; a[71] @ 4544
	.word	0710880d8h,0bfd6ece5h		; a[72] @ 4608
	.word	085fb5724h,03fd73e68h		; a[73] @ 4672
	.word	09aee2d70h,0bfd78febh		; a[74] @ 4736
	.word	0afe103bbh,03fd7e16eh		; a[75] @ 4800
	.word	03033a472h,0bfd832f2h		; a[76] @ 4864
	.word	045267abeh,03fd88475h		; a[77] @ 4928
	.word	05a19510ah,0bfd8d5f8h		; a[78] @ 4992
	.word	06f0c2756h,03fd9277bh		; a[79] @ 5056
	.word	0ef5ec80ch,0bfd978feh		; a[80] @ 5120
	.word	004519e58h,03fd9ca82h		; a[81] @ 5184
	.word	0194474a4h,0bfda1c05h		; a[82] @ 5248
	.word	02e374af0h,03fda6d88h		; a[83] @ 5312
	.word	0ae89eba7h,0bfdabf0bh		; a[84] @ 5376
	.word	0c37cc1f2h,03fdb108eh		; a[85] @ 5440
	.word	0d86f983eh,0bfdb6211h		; a[86] @ 5504
	.word	0ed626e8ah,03fdbb394h		; a[87] @ 5568
	.word	06db50f41h,0bfdc0518h		; a[88] @ 5632
	.word	082a7e58dh,03fdc569bh		; a[89] @ 5696
	.word	0979abbd9h,0bfdca81eh		; a[90] @ 5760
	.word	0ac8d9224h,03fdcf9a1h		; a[91] @ 5824
	.word	0c1806870h,0bfdd4b24h		; a[92] @ 5888
	.word	041d30927h,03fdd9ca8h		; a[93] @ 5952
	.word	056c5df73h,0bfddee2bh		; a[94] @ 6016
	.word	06bb8b5bfh,03fde3faeh		; a[95] @ 6080
	.word	080ab8c0ah,0bfde9131h		; a[96] @ 6144
	.word	000fe2cc1h,03fdee2b5h		; a[97] @ 6208
	.word	015f1030dh,0bfdf3438h		; a[98] @ 6272
	.word	02ae3d959h,03fdf85bbh		; a[99] @ 6336
	.word	03fd6afa5h,0bfdfd73eh		; a[100] @ 6400
	.word	0aa64c2f8h,03fe01460h		; a[101] @ 6464
	.word	06a8e1354h,0bfe03d22h		; a[102] @ 6528
	.word	0f5077e7ah,03fe065e3h		; a[103] @ 6592
	.word	0b530ced5h,0bfe08ea5h		; a[104] @ 6656
	.word	009fa54c5h,03fe0b767h		; a[105] @ 6720
	.word	0ca23a521h,0bfe0e028h		; a[106] @ 6784
	.word	0549d1047h,03fe108eah		; a[107] @ 6848
	.word	014c660a2h,0bfe131ach		; a[108] @ 6912
	.word	0698fe692h,03fe15a6dh		; a[109] @ 6976
	.word	029b936eeh,0bfe1832fh		; a[110] @ 7040
	.word	0b432a214h,03fe1abf0h		; a[111] @ 7104
	.word	03eac0d3ah,0bfe1d4b2h		; a[112] @ 7168
	.word	0c9257860h,03fe1fd73h		; a[113] @ 7232
	.word	0894ec8bbh,0bfe22635h		; a[114] @ 7296
	.word	013c833e1h,03fe24ef7h		; a[115] @ 7360
	.word	09e419f07h,0bfe277b8h		; a[116] @ 7424
	.word	028bb0a2dh,03fe2a07ah		; a[117] @ 7488
	.word	0e8e45a88h,0bfe2c93bh		; a[118] @ 7552
	.word	0735dc5aeh,03fe2f1fdh		; a[119] @ 7616
	.word	0fdd730d4h,0bfe31abeh		; a[120] @ 7680
	.word	088509bfah,03fe34380h		; a[121] @ 7744
	.word	04879ec55h,0bfe36c42h		; a[122] @ 7808
	.word	0d2f3577bh,03fe39503h		; a[123] @ 7872
	.word	05d6cc2a1h,0bfe3bdc5h		; a[124] @ 7936
	.word	0e7e62dc7h,03fe3e686h		; a[125] @ 8000
	.word	0a80f7e22h,0bfe40f48h		; a[126] @ 8064
	.word	03288e948h,03fe4380ah		; a[127] @ 8128
	.word	0bd02546eh,0bfe460cbh		; a[128] @ 8192
	.word	0477bbf94h,03fe4898dh		; a[129] @ 8256
	.word	007a50fefh,0bfe4b24fh		; a[130] @ 8320
	.word	0921e7b15h,03fe4db10h		; a[131] @ 8384
	.word	01c97e63bh,0bfe503d2h		; a[132] @ 8448
	.word	0a7115161h,03fe52c93h		; a[133] @ 8512
	.word	0673aa1bch,0bfe55555h		; a[134] @ 8576
	.word	0f1b40ce2h,03fe57e16h		; a[135] @ 8640
	.word	07c2d7808h,0bfe5a6d8h		; a[136] @ 8704
	.word	006a6e32eh,03fe5cf9ah		; a[137] @ 8768
	.word	0c6d0338ah,0bfe5f85bh		; a[138] @ 8832
	.word	051499eb0h,03fe6211dh		; a[139] @ 8896
	.word	0dbc309d5h,0bfe649deh		; a[140] @ 8960
	.word	0663c74fbh,03fe672a0h		; a[141] @ 9024
	.word	02665c557h,0bfe69b62h		; a[142] @ 9088
	.word	0b0df307dh,03fe6c423h		; a[143] @ 9152
	.word	03b589ba3h,0bfe6ece5h		; a[144] @ 9216
	.word	0c5d206c8h,03fe715a6h		; a[145] @ 9280
	.word	085fb5724h,0bfe73e68h		; a[146] @ 9344
	.word	01074c24ah,03fe7672ah		; a[147] @ 9408
	.word	09aee2d70h,0bfe78febh		; a[148] @ 9472
	.word	025679896h,03fe7b8adh		; a[149] @ 9536
	.word	0afe103bbh,0bfe7e16eh		; a[150] @ 9600
	.word	0700a5417h,03fe80a30h		; a[151] @ 9664
	.word	0fa83bf3dh,0bfe832f1h		; a[152] @ 9728
	.word	0baad0f98h,03fe85bb3h		; a[153] @ 9792
	.word	00f769589h,0bfe88475h		; a[154] @ 9856
	.word	0cf9fe5e4h,03fe8ad36h		; a[155] @ 9920
	.word	05a19510ah,0bfe8d5f8h		; a[156] @ 9984
	.word	01a42a165h,03fe8febah		; a[157] @ 10048
	.word	06f0c2756h,0bfe9277bh		; a[158] @ 10112
	.word	02f3577b1h,03fe9503dh		; a[159] @ 10176
	.word	0b9aee2d7h,0bfe978feh		; a[160] @ 10240
	.word	079d83332h,03fe9a1c0h		; a[161] @ 10304
	.word	0cea1b923h,0bfe9ca81h		; a[162] @ 10368
	.word	08ecb097eh,03fe9f343h		; a[163] @ 10432
	.word	0194474a4h,0bfea1c05h		; a[164] @ 10496
	.word	0a3bddfcah,03fea44c6h		; a[165] @ 10560
	.word	02e374af0h,0bfea6d88h		; a[166] @ 10624
	.word	0ee609b4bh,03fea9649h		; a[167] @ 10688
	.word	078da0671h,0bfeabf0bh		; a[168] @ 10752
	.word	003537197h,03feae7cdh		; a[169] @ 10816
	.word	08dccdcbdh,0bfeb108eh		; a[170] @ 10880
	.word	04df62d18h,03feb3950h		; a[171] @ 10944
	.word	0d86f983eh,0bfeb6211h		; a[172] @ 11008
	.word	062e90364h,03feb8ad3h		; a[173] @ 11072
	.word	0ed626e8ah,0bfebb394h		; a[174] @ 11136
	.word	0ad8bbee6h,03febdc56h		; a[175] @ 11200
	.word	038052a0bh,0bfec0518h		; a[176] @ 11264
	.word	0c27e9531h,03fec2dd9h		; a[177] @ 11328
	.word	04cf80057h,0bfec569bh		; a[178] @ 11392
	.word	00d2150b3h,03fec7f5dh		; a[179] @ 11456
	.word	0979abbd9h,0bfeca81eh		; a[180] @ 11520
	.word	0221426feh,03fecd0e0h		; a[181] @ 11584
	.word	0ac8d9224h,0bfecf9a1h		; a[182] @ 11648
	.word	06cb6e280h,03fed2263h		; a[183] @ 11712
	.word	0f7304da6h,0bfed4b24h		; a[184] @ 11776
	.word	081a9b8cch,03fed73e6h		; a[185] @ 11840
	.word	00c2323f1h,0bfed9ca8h		; a[186] @ 11904
	.word	0cc4c744dh,03fedc569h		; a[187] @ 11968
	.word	056c5df73h,0bfedee2bh		; a[188] @ 12032
	.word	0e13f4a99h,03fee16ech		; a[189] @ 12096
	.word	06bb8b5bfh,0bfee3faeh		; a[190] @ 12160
	.word	02be2061ah,03fee6870h		; a[191] @ 12224
	.word	0b65b7140h,0bfee9131h		; a[192] @ 12288
	.word	040d4dc66h,03feeb9f3h		; a[193] @ 12352
	.word	0cb4e478ch,0bfeee2b4h		; a[194] @ 12416
	.word	08b7797e7h,03fef0b76h		; a[195] @ 12480
	.word	015f1030dh,0bfef3438h		; a[196] @ 12544
	.word	0a06a6e33h,03fef5cf9h		; a[197] @ 12608
	.word	02ae3d959h,0bfef85bbh		; a[198] @ 12672
	.word	0eb0d29b4h,03fefae7ch		; a[199] @ 12736
	.word	0758694dah,0bfefd73eh		; a[200] @ 12800

;	C:\MATHLIB_Tools\CCSV5_4_0\ccsv5\tools\compiler\c6000_7.4.2\bin\opt6x.exe C:\\DOCUME~1\\a0868396\\LOCALS~1\\Temp\\130762 C:\\DOCUME~1\\a0868396\\LOCALS~1\\Temp\\130764 
	.sect	".text:optci"
	.clink

;******************************************************************************
;* FUNCTION NAME: pol_est_acosdp_i                                            *
;*                                                                            *
;*   Regs Modified     : A4,A5,A6,A7,A8,A9,B4,B5,B6,B7,B8,B9,A16,A17,A18,A19, *
;*                           A20,A21,A22,A23,A24,A25,A26,A27,B16,B17,B18,B19  *
;*   Regs Used         : A4,A5,A6,A7,A8,A9,B3,B4,B5,B6,B7,B8,B9,A16,A17,A18,  *
;*                           A19,A20,A21,A22,A23,A24,A25,A26,A27,B16,B17,B18, *
;*                           B19                                              *
;*   Local Frame Size  : 0 Args + 0 Auto + 0 Save = 0 byte                    *
;******************************************************************************
pol_est_acosdp_i:
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 42
           MVKL    .S2     0x3f8e21a3,B17
           MVKL    .S2     0xc62a3037,B16
           MVKL    .S2     0x3fb3333c,B19
           MVKL    .S2     0x67ff42f2,B18

           FMPYDP  .M1     A5:A4,A5:A4,A17:A16 ; |124| 
||         MVKL    .S2     0x3f9f218e,B5

           MVKH    .S2     0x3f8e21a3,B17
           MVKL    .S2     0x2d6e8923,B4

           MVKL    .S1     0x3f8a6331,A7
||         MVKL    .S2     0x3fa6daed,B7

           FMPYDP  .M1     A17:A16,A17:A16,A9:A8 ; |124| 
||         MVKL    .S1     0xb088e0d4,A6
||         MVKH    .S2     0xc62a3037,B16

           MVKL    .S1     0x3fc55555,A21
||         MVKL    .S2     0x7e834e0f,B6

           MVKH    .S1     0x3f8a6331,A7
||         MVKL    .S2     0x3f92080d,B9

           MVKH    .S1     0xb088e0d4,A6
||         MVKL    .S2     0x726cfcda,B8

           FMPYDP  .M1     A7:A6,A9:A8,A23:A22 ; |124| 
||         MVKH    .S2     0x3fb3333c,B19
||         MVKL    .S1     0x20991e58,A20

           FMPYDP  .M2X    B17:B16,A17:A16,B17:B16 ; |124| 
||         FMPYDP  .M1     A9:A8,A9:A8,A19:A18 ; |124| 
||         MVKH    .S2     0x67ff42f2,B18
||         MVKH    .S1     0x3fc55555,A21

           FMPYDP  .M1     A9:A8,A17:A16,A7:A6 ; |124| 
||         MVKH    .S1     0x20991e58,A20
||         MVKH    .S2     0x3f9f218e,B5

           FMPYDP  .M1     A21:A20,A17:A16,A27:A26 ; |129| 
||         MVKH    .S2     0x2d6e8923,B4

           FMPYDP  .M1X    B19:B18,A9:A8,A21:A20 ; |129| 
||         MVKH    .S2     0x3fa6daed,B7

           FADDDP  .L2X    B17:B16,A23:A22,B17:B16 ; |124| 
||         FMPYDP  .M1     A9:A8,A19:A18,A17:A16 ; |124| 
||         MVKH    .S2     0x7e834e0f,B6

           FMPYDP  .M1     A9:A8,A7:A6,A9:A8 ; |124| 
||         FMPYDP  .M2X    B5:B4,A19:A18,B5:B4 ; |129| 
||         MVKH    .S2     0x3f92080d,B9
||         MVKL    .S1     0x3f96c6e8,A25

           FMPYDP  .M2X    B7:B6,A7:A6,B7:B6 ; |129| 
||         MVKH    .S2     0x726cfcda,B8
||         MVKL    .S1     0xcead24b0,A24

           FADDDP  .L2     B9:B8,B17:B16,B9:B8 ; |124| 
||         MVKH    .S1     0x3f96c6e8,A25

           MVKH    .S1     0xcead24b0,A24
           FMPYDP  .M1     A25:A24,A9:A8,A7:A6 ; |124| 

           FADDDP  .L2     B7:B6,B5:B4,B5:B4 ; |129| 
||         FMPYDP  .M2X    A17:A16,B9:B8,B7:B6 ; |124| 

           FADDDP  .L1     A27:A26,A21:A20,A9:A8 ; |129| 
           NOP             2
           FADDDP  .L2X    A7:A6,B7:B6,B7:B6 ; |124| 
           FADDDP  .L2X    A9:A8,B5:B4,B5:B4 ; |129| 
           NOP             2
           FADDDP  .L2     B7:B6,B5:B4,B5:B4 ; |129| 
           NOP             3
           FMPYDP  .M1X    A5:A4,B5:B4,A7:A6 ; |129| 
           RETNOP  .S2     B3,2              ; |130| 
           FADDDP  .L1     A5:A4,A7:A6,A5:A4 ; |129| 
           NOP             2
           ; BRANCH OCCURS {B3}              ; |130| 
;**	Parameter deleted: req_flags == 1;
;**	Parameter deleted: tol == 1e-09;
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
||         MVKL    .S2     0xe826d695,B6

           STDW    .D2T1   A13:A12,*SP--     ; |63| 
||         MVKL    .S1     output,A11
||         MVKL    .S2     0x3e112e0b,B7

           STW     .D2T1   A10,*SP--(8)      ; |63| 
||         MVKH    .S1     output,A11
||         MVKH    .S2     0xe826d695,B6

           LDW     .D1T2   *+A11(4),B4       ; |66| 
||         MV      .L1     A4,A6             ; |63| 
||         MVKH    .S2     0x3e112e0b,B7
||         MVK     .S1     0x1,A8            ; |66| 

           MV      .L1X    B3,A13            ; |63| 
||         CALLP   .S2     isequal,B3
||         MV      .S1     A4,A10            ; |63| 
||         LDW     .D1T1   *A11,A4           ; |66| 

$C$RL0:    ; CALL OCCURS {isequal} {0}       ; |66| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 30
           MVKL    .S2     0x3e112e0b,B7
           MVKL    .S2     0xe826d695,B6

           LDW     .D1T2   *+A11(8),B4       ; |67| 
||         MVKL    .S1     fcn_pass,A12
||         MVKH    .S2     0x3e112e0b,B7

           MV      .L1     A4,A3             ; |66| 
||         LDW     .D1T1   *A11,A4           ; |67| 
||         MVKH    .S1     fcn_pass,A12
||         MVKH    .S2     0xe826d695,B6

           CALLP   .S2     isequal,B3
||         STW     .D1T1   A3,*+A12(4)       ; |66| 
||         MV      .L1     A10,A6            ; |67| 
||         MVK     .S1     0x1,A8            ; |67| 

$C$RL1:    ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     0xe826d695,B6
           MVKL    .S2     0x3e112e0b,B7

           LDW     .D1T2   *+A11(12),B4      ; |68| 
||         MVKH    .S2     0xe826d695,B6

           MV      .L1     A4,A3             ; |67| 
||         LDW     .D1T1   *A11,A4           ; |68| 
||         MVKH    .S2     0x3e112e0b,B7

           CALLP   .S2     isequal,B3
||         STW     .D1T1   A3,*+A12(8)       ; |67| 
||         MV      .L1     A10,A6            ; |68| 
||         MVK     .S1     0x1,A8            ; |68| 

$C$RL2:    ; CALL OCCURS {isequal} {0}       ; |68| 
           MVKL    .S2     0x3e112e0b,B7
           MVKL    .S2     0xe826d695,B6

           STW     .D1T1   A4,*+A12(12)      ; |68| 
||         MVKH    .S2     0x3e112e0b,B7

           MV      .L1     A11,A3            ; |66| 
||         LDW     .D1T2   *+A11(16),B4      ; |69| 
||         MVKH    .S2     0xe826d695,B6

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
;*   Local Frame Size  : 8 Args + 0 Auto + 56 Save = 64 byte                  *
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

           STW     .D2T2   B3,*SP--(16)      ; |121| 
||         CALLP   .S2     driver_init,B3
||         MVKH    .S1     $C$SL1+0,A4

$C$RL4:    ; CALL OCCURS {driver_init} {0}   ; |129| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           MVKL    .S1     a,A10
||         MVKL    .S2     output,B10

           MVKH    .S1     a,A10
||         MVKH    .S2     output,B10

           MV      .L1     A10,A13
||         CALL    .S1     acos              ; |138| 
||         LDW     .D2T1   *B10,A12

           LDDW    .D1T1   *A13++,A5:A4      ; |138| 
           MVK     .S2     0xc9,B4
           NOP             1
           MV      .L1X    B4,A11
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L3:    
;          EXCLUSIVE CPU CYCLES: 1
           ADDKPC  .S2     $C$RL5,B3,0       ; |138| 
$C$RL5:    ; CALL OCCURS {acos} {0}          ; |138| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           SUB     .L1     A11,1,A0          ; |137| 
||         STDW    .D1T1   A5:A4,*A12++      ; |138| 
||         SUB     .S1     A11,1,A11         ; |137| 

   [ A0]   B       .S1     $C$L3             ; |137| 
|| [ A0]   LDDW    .D1T1   *A13++,A5:A4      ; |138| 
|| [!A0]   ADD     .L2     4,B10,B11

   [ A0]   CALL    .S1     acos              ; |138| 
   [!A0]   MV      .L1     A10,A11
   [!A0]   ZERO    .L2     B10
   [!A0]   MVK     .S1     0xc9,A3
   [!A0]   MV      .L1     A3,A12
           ; BRANCHCC OCCURS {$C$L3}         ; |137| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 1
           CALL    .S1     acosdp            ; |141| 
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L4:    
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *A11++,A5:A4      ; |141| 
           ADDKPC  .S2     $C$RL6,B3,3       ; |141| 
$C$RL6:    ; CALL OCCURS {acosdp} {0}        ; |141| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           LDW     .D2T2   *B11,B4           ; |141| 
||         SUB     .L1     A12,1,A0          ; |140| 
||         SUB     .S1     A12,1,A12         ; |140| 

   [ A0]   BNOP    .S2     $C$L4,2           ; |140| 
|| [!A0]   MVK     .S1     0xc9,A3
|| [!A0]   ADD     .L2     4,B11,B11
|| [!A0]   MV      .L1     A10,A12

   [!A0]   MV      .L1     A3,A11

           ADD     .L2     B10,B4,B4         ; |141| 
||         ADD     .S2     8,B10,B10         ; |140| 

   [ A0]   CALL    .S1     acosdp            ; |141| 
|| [!A0]   ZERO    .L2     B10
||         STDW    .D2T1   A5:A4,*B4         ; |141| 

           ; BRANCHCC OCCURS {$C$L4}         ; |140| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 1
           CALL    .S1     acosdp_c          ; |144| 
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L5:    
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *A12++,A5:A4      ; |144| 
           ADDKPC  .S2     $C$RL7,B3,3       ; |144| 
$C$RL7:    ; CALL OCCURS {acosdp_c} {0}      ; |144| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           LDW     .D2T2   *B11,B4           ; |144| 
||         SUB     .L1     A11,1,A0          ; |143| 
||         SUB     .S1     A11,1,A11         ; |143| 

   [ A0]   BNOP    .S1     $C$L5,3           ; |143| 
|| [!A0]   ADD     .L1X    4,B11,A2

           ADD     .L2     B10,B4,B4         ; |144| 
||         ADD     .S2     8,B10,B10         ; |143| 

   [ A0]   CALL    .S1     acosdp_c          ; |144| 
||         STDW    .D2T1   A5:A4,*B4         ; |144| 

           ; BRANCHCC OCCURS {$C$L5}         ; |143| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 1

           MVK     .S2     0xc9,B0
||         SUB     .L1     A10,8,A3
||         LDW     .D1T2   *A2,B20

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains control code
;*----------------------------------------------------------------------------*
$C$L6:    
;          EXCLUSIVE CPU CYCLES: 15

           LDDW    .D1T1   *++A3,A29:A28     ; |147| 
||         MVKL    .S1     0x3fe6a09e,A7
||         ZERO    .L1     A9

           MVKL    .S1     0x667f3bcd,A6
           MVKH    .S1     0x3fe6a09e,A7
           MVKH    .S1     0x667f3bcd,A6
           SET     .S1     A9,0x15,0x1d,A9
           ABSDP   .S1     A29:A28,A5:A4     ; |168| 
           ZERO    .L1     A31
           CMPGTDP .S1     A5:A4,A7:A6,A0    ; |171| 
           ZERO    .L1     A30               ; |165| 

   [!A0]   MV      .L1     A30,A8            ; |185| 
|| [ A0]   B       .S2     $C$L8             ; |171| 
||         MV      .D1     A0,A1             ; guard predicate rewrite
||         SET     .S1     A31,0x14,0x1d,A31

           MV      .L2X    A0,B1             ; branch predicate copy
||         CMPGTDP .S1     A5:A4,A9:A8,A0    ; |185| 

           FMPYDP  .M1     A29:A28,A29:A28,A7:A6 ; |169| 

   [ A1]   ZERO    .L1     A0                ; |185| nullify predicate
|| [ B1]   MVKL    .S1     0xe8584caa,A8

   [ A0]   B       .S2     $C$L7             ; |185| 
|| [ B1]   MVKH    .S1     0xe8584caa,A8

           MVKL    .S1     0x3febb67a,A9
           ; BRANCHCC OCCURS {$C$L8}         ; |171| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 4
   [!A0]   CALL    .S1     pol_est_acosdp_i  ; |191| 

   [ A0]   CALL    .S1     pol_est_acosdp_i  ; |187| 
|| [ A0]   FADDDP  .L1     A7:A6,A7:A6,A5:A4 ; |187| 

   [ A0]   MV      .L1     A8,A6             ; |187| 
   [ A0]   MV      .S1     A31,A7            ; |187| 
           ; BRANCHCC OCCURS {$C$L7}         ; |185| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 2
           ADDKPC  .S2     $C$RL8,B3,1       ; |191| 
$C$RL8:    ; CALL OCCURS {pol_est_acosdp_i} {0}  ; |191| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 6

           ZERO    .L1     A7:A6             ; |195| 
||         B       .S1     $C$L12            ; |191| 
||         SUB     .L2     B0,1,B0           ; |146| 
||         MVKL    .S2     0x54442d18,B4

           CMPLTDP .S1     A29:A28,A7:A6,A0  ; |195| 
||         MVKL    .S2     0x3ff921fb,B5

           MVKH    .S2     0x54442d18,B4

   [ A0]   ZERO    .L1     A31
|| [ A0]   ZERO    .S1     A30               ; |196| 
||         MVKH    .S2     0x3ff921fb,B5

   [ A0]   MVKH    .S1     0xbff00000,A31
           FMPYDP  .M1     A31:A30,A5:A4,A5:A4 ; |147| 
           ; BRANCH OCCURS {$C$L12}          ; |191| 
;** --------------------------------------------------------------------------*
$C$L7:    
;          EXCLUSIVE CPU CYCLES: 3
           FSUBDP  .L1     A7:A6,A5:A4,A5:A4 ; |187| 
           ADDKPC  .S2     $C$RL9,B3,1       ; |187| 
$C$RL9:    ; CALL OCCURS {pol_est_acosdp_i} {0}  ; |187| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 9

           SUB     .L2     B0,1,B0           ; |146| 
||         ZERO    .L1     A7:A6             ; |195| 
||         MVKL    .S2     0x3ff921fb,B5

           MVKL    .S2     0x54442d18,B4
           MVKH    .S2     0x3ff921fb,B5

           MVKH    .S2     0x54442d18,B4
||         B       .S1     $C$L10            ; |189| 

           FSUBDP  .L2X    B5:B4,A5:A4,B5:B4 ; |188| 
           ZERO    .L1     A1
           MV      .L1     A30,A4            ; |188| 
           SET     .S1     A1,0x15,0x1d,A5

           FMPYDP  .M1X    A5:A4,B5:B4,A5:A4 ; |188| 
||         MVKL    .S2     0x54442d18,B4

           ; BRANCH OCCURS {$C$L10}          ; |189| 
;** --------------------------------------------------------------------------*
$C$L8:    
;          EXCLUSIVE CPU CYCLES: 9
           MVKH    .S1     0x3febb67a,A9
           CMPGTDP .S1     A5:A4,A9:A8,A0    ; |172| 

           MV      .L1     A31,A5
||         MV      .D1     A30,A4

   [!A0]   BNOP    .S1     $C$L9,2           ; |172| 
||         FSUBDP  .L1     A5:A4,A7:A6,A5:A4 ; |67| 

   [ A0]   RSQRDP  .S1     A5:A4,A7:A6       ; |67| 
           NOP             1

           FMPYDP  .M1     A7:A6,A5:A4,A9:A8 ; |67| 
|| [!A0]   FADDDP  .L1     A7:A6,A7:A6,A7:A6 ; |181| 
|| [!A0]   MV      .S1     A30,A4            ; |181| 
|| [!A0]   MV      .D1     A31,A5

           ; BRANCHCC OCCURS {$C$L9}         ; |172| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 99
           MV      .L2X    A30,B4            ; |67| 
           ZERO    .L2     B5
           SET     .S2     B5,0x15,0x1d,B5
           FMPYDP  .M1     A7:A6,A9:A8,A9:A8 ; |67| 
           ZERO    .L2     B7
           MV      .L2X    A30,B6            ; |67| 
           SET     .S2     B7,0x13,0x1d,B7
           ZERO    .L1     A27
           FMPYDP  .M2X    B5:B4,A9:A8,B5:B4 ; |67| 
           MV      .L1     A30,A16           ; |67| 
           ZERO    .L1     A17
           SET     .S1     A17,0x15,0x1d,A17
           FSUBDP  .L2     B7:B6,B5:B4,B5:B4 ; |67| 
           MVKL    .S1     0x20991e58,A20
           MV      .S2X    A30,B8            ; |67| 
           MVKL    .S1     0x3fc55555,A21
           FMPYDP  .M1X    A7:A6,B5:B4,A7:A6 ; |67| 
           MVKL    .S2     0x2d6e8923,B18
           MV      .L2X    A17,B9            ; |67| 
           MVKL    .S1     0x3f92080d,A23
           FMPYDP  .M1     A7:A6,A5:A4,A9:A8 ; |67| 
           MVKL    .S2     0x3f9f218e,B19
           MVKL    .S1     0x726cfcda,A22
           MVKL    .S2     0x67ff42f2,B22
           FMPYDP  .M1     A7:A6,A9:A8,A9:A8 ; |67| 
           MVKH    .S1     0x20991e58,A20
           MV      .L2     B6,B4             ; |67| 
           MV      .L2     B7,B5             ; |67| 
           FMPYDP  .M1     A17:A16,A9:A8,A9:A8 ; |67| 
           MVKL    .S2     0x3fb3333c,B23
           MVKH    .S1     0x3fc55555,A21
           MVKL    .S2     0x7e834e0f,B16
           MVKH    .S1     0x3f92080d,A23
           FSUBDP  .L2X    B5:B4,A9:A8,B5:B4 ; |67| 
           MVKL    .S2     0x3fa6daed,B17
           MVKH    .S1     0x726cfcda,A22
           FMPYDP  .M2X    A7:A6,B5:B4,B5:B4 ; |67| 
           MVKH    .S2     0x2d6e8923,B18
           MVKL    .S1     0xcead24b0,A26
           MVKH    .S2     0x3f9f218e,B19
           FMPYDP  .M2X    B5:B4,A5:A4,B7:B6 ; |67| 
           MVKH    .S1     0xcead24b0,A26
           MVKH    .S2     0x67ff42f2,B22
           MVKH    .S2     0x3fb3333c,B23
           FMPYDP  .M2     B5:B4,B7:B6,B5:B4 ; |67| 
           MVKH    .S2     0x7e834e0f,B16
           MV      .L1     A16,A6            ; |67| 
           SET     .S1     A27,0x13,0x1d,A7
           FMPYDP  .M2     B9:B8,B5:B4,B5:B4 ; |67| 
           MVKH    .S2     0x3fa6daed,B17
           MVKL    .S1     0x3f96c6e8,A27
           MVKH    .S1     0x3f96c6e8,A27
           SUB     .L2     B0,1,B0           ; |146| 
           FSUBDP  .L1X    A7:A6,B5:B4,A7:A6 ; |67| 
           ZERO    .L2     B5:B4             ; |69| 
           NOP             1

           FMPYDP  .M1X    B7:B6,A7:A6,A9:A8 ; |67| 
||         MVKL    .S2     0x3f8e21a3,B7

           MVKL    .S2     0xc62a3037,B6
           CMPGTDP .S1X    A5:A4,B5:B4,A0    ; |69| 
           MVKL    .S2     0xb088e0d4,B4
   [!A0]   ZERO    .L1     A9:A8             ; |70| 
           FMPYDP  .M1     A9:A8,A9:A8,A7:A6 ; |176| 
           MVKL    .S2     0x3f8a6331,B5
           MVKH    .S2     0x3f8e21a3,B7
           MVKH    .S2     0xc62a3037,B6
           FMPYDP  .M1     A7:A6,A7:A6,A5:A4 ; |176| 
           MVKH    .S2     0xb088e0d4,B4
           MVKH    .S2     0x3f8a6331,B5
           FMPYDP  .M2X    B7:B6,A7:A6,B7:B6 ; |176| 
           FMPYDP  .M1     A5:A4,A7:A6,A17:A16 ; |176| 

           FMPYDP  .M2X    B5:B4,A5:A4,B5:B4 ; |176| 
||         FMPYDP  .M1     A5:A4,A5:A4,A19:A18 ; |176| 

           NOP             2
           FMPYDP  .M1     A5:A4,A17:A16,A25:A24 ; |176| 

           FADDDP  .L2     B7:B6,B5:B4,B9:B8 ; |176| 
||         FMPYDP  .M2X    B23:B22,A5:A4,B7:B6 ; |176| 
||         FMPYDP  .M1     A5:A4,A19:A18,A5:A4 ; |176| 

           FMPYDP  .M2X    B19:B18,A19:A18,B5:B4 ; |176| 
           FMPYDP  .M2X    B17:B16,A17:A16,B17:B16 ; |176| 
           FMPYDP  .M1     A21:A20,A7:A6,A17:A16 ; |176| 
           FADDDP  .L1X    A23:A22,B9:B8,A7:A6 ; |176| 
           FMPYDP  .M1     A27:A26,A25:A24,A19:A18 ; |176| 
           FADDDP  .L2     B17:B16,B5:B4,B5:B4 ; |176| 
           FMPYDP  .M1     A5:A4,A7:A6,A5:A4 ; |176| 
           FADDDP  .L1X    A17:A16,B7:B6,A7:A6 ; |176| 
           NOP             2

           FADDDP  .L1     A19:A18,A5:A4,A7:A6 ; |176| 
||         FADDDP  .S1X    A7:A6,B5:B4,A5:A4 ; |176| 
||         MVKL    .S2     0x54442d18,B4

           MVKL    .S2     0x3ff921fb,B5
           MVKH    .S2     0x54442d18,B4
           FADDDP  .L1     A7:A6,A5:A4,A5:A4 ; |176| 
           MVKH    .S2     0x3ff921fb,B5
           MVKL    .S1     0x54442d18,A6
           FMPYDP  .M1     A9:A8,A5:A4,A5:A4 ; |176| 
           MVKL    .S1     0x3ff921fb,A7
           BNOP    .S1     $C$L11,1          ; |177| 
           FADDDP  .L1     A9:A8,A5:A4,A5:A4 ; |176| 
           MVKH    .S1     0x54442d18,A6
           MVKH    .S1     0x3ff921fb,A7

           FSUBDP  .S1     A7:A6,A5:A4,A5:A4 ; |176| 
||         ZERO    .L1     A7:A6             ; |195| 

           ; BRANCH OCCURS {$C$L11}          ; |177| 
;** --------------------------------------------------------------------------*
$C$L9:    
;          EXCLUSIVE CPU CYCLES: 47

           MVKL    .S2     0xb088e0d4,B4
||         MVKL    .S1     0x20991e58,A22

           MVKL    .S2     0x3f8a6331,B5
||         MVKL    .S1     0x3fc55555,A23

           FSUBDP  .L1     A7:A6,A5:A4,A9:A8 ; |181| 
||         MVKL    .S2     0x3f8e21a3,B7
||         MVKL    .S1     0x726cfcda,A24

           MVKL    .S2     0xc62a3037,B6
||         MVKL    .S1     0x3f92080d,A25

           MVKH    .S2     0xb088e0d4,B4
||         MVKH    .S1     0x20991e58,A22

           FMPYDP  .M1     A9:A8,A9:A8,A7:A6 ; |181| 
||         MVKH    .S2     0x3f8a6331,B5
||         MVKH    .S1     0x3fc55555,A23

           MVKH    .S2     0x3f8e21a3,B7
||         MVKH    .S1     0x726cfcda,A24

           MVKH    .S2     0xc62a3037,B6
||         MVKH    .S1     0x3f92080d,A25

           MVKL    .S2     0x67ff42f2,B16
||         MVKL    .S1     0xcead24b0,A0

           FMPYDP  .M1     A7:A6,A7:A6,A5:A4 ; |181| 
||         MVKL    .S2     0x3fb3333c,B17
||         MVKL    .S1     0x3f96c6e8,A1

           FMPYDP  .M2X    B7:B6,A7:A6,B7:B6 ; |181| 
||         MVKH    .S2     0x67ff42f2,B16
||         MVKH    .S1     0xcead24b0,A0

           MVKH    .S2     0x3fb3333c,B17
           MVKL    .S2     0x7e834e0f,B18

           FMPYDP  .M1     A5:A4,A7:A6,A17:A16 ; |181| 
||         MVKL    .S2     0x3fa6daed,B19

           FMPYDP  .M2X    B5:B4,A5:A4,B5:B4 ; |181| 
||         FMPYDP  .M1     A5:A4,A5:A4,A19:A18 ; |181| 
||         MVKL    .S2     0x2d6e8923,B8

           MVKL    .S2     0x3f9f218e,B9
||         FMPYDP  .M1X    B17:B16,A5:A4,A21:A20 ; |181| 

           MVKH    .S2     0x7e834e0f,B18
||         FMPYDP  .M1     A23:A22,A7:A6,A7:A6 ; |181| 

           MVKH    .S2     0x3fa6daed,B19
||         FMPYDP  .M1     A5:A4,A17:A16,A27:A26 ; |181| 

           FADDDP  .L2     B7:B6,B5:B4,B7:B6 ; |181| 
||         MVKH    .S2     0x2d6e8923,B8
||         FMPYDP  .M1     A5:A4,A19:A18,A5:A4 ; |181| 

           MVKH    .S2     0x3f9f218e,B9
           FMPYDP  .M2X    B9:B8,A19:A18,B5:B4 ; |181| 
           FMPYDP  .M2X    B19:B18,A17:A16,B9:B8 ; |181| 
           FADDDP  .L1X    A25:A24,B7:B6,A17:A16 ; |181| 
           MVKH    .S1     0x3f96c6e8,A1
           FMPYDP  .M1     A1:A0,A27:A26,A19:A18 ; |181| 

           FMPYDP  .M1     A5:A4,A17:A16,A17:A16 ; |181| 
||         FADDDP  .L2     B9:B8,B5:B4,B5:B4 ; |181| 

           FADDDP  .L1     A7:A6,A21:A20,A5:A4 ; |181| 
           SUB     .S2     B0,1,B0           ; |146| 
           ZERO    .S1     A25

           FADDDP  .L1     A19:A18,A17:A16,A7:A6 ; |181| 
||         FADDDP  .S1X    A5:A4,B5:B4,A5:A4 ; |181| 

           MVKL    .S2     0x54442d18,B4
           NOP             1
           FADDDP  .L1     A7:A6,A5:A4,A5:A4 ; |181| 
           MV      .L1     A30,A6            ; |181| 
           SET     .S1     A25,0x15,0x1d,A7
           FMPYDP  .M1     A9:A8,A5:A4,A5:A4 ; |181| 
           NOP             3
           FADDDP  .L1     A9:A8,A5:A4,A5:A4 ; |181| 
           MVKL    .S1     0x54442d18,A8
           MVKL    .S1     0x3fe921fb,A9
           FMPYDP  .M1     A7:A6,A5:A4,A5:A4 ; |181| 
           MVKH    .S1     0x54442d18,A8
           ZERO    .L1     A7:A6             ; |195| 
           MVKH    .S1     0x3fe921fb,A9
           FADDDP  .L1     A9:A8,A5:A4,A5:A4 ; |181| 
;** --------------------------------------------------------------------------*
$C$L10:    
;          EXCLUSIVE CPU CYCLES: 3
           MVKL    .S2     0x3ff921fb,B5
           MVKH    .S2     0x54442d18,B4
           MVKH    .S2     0x3ff921fb,B5
;** --------------------------------------------------------------------------*
$C$L11:    
;          EXCLUSIVE CPU CYCLES: 6
           NOP             1
           CMPLTDP .S1     A29:A28,A7:A6,A0  ; |195| 
           NOP             1
   [ A0]   ZERO    .L1     A31

   [ A0]   MVKH    .S1     0xbff00000,A31
|| [ A0]   ZERO    .L1     A30               ; |196| 

           FMPYDP  .M1     A31:A30,A5:A4,A5:A4 ; |147| 
;** --------------------------------------------------------------------------*
$C$L12:    
;          EXCLUSIVE CPU CYCLES: 8
   [!B0]   ADD     .L1     4,A2,A11
           NOP             1
   [ B0]   BNOP    .S1     $C$L6,1           ; |146| 
           FSUBDP  .L2X    B5:B4,A5:A4,B5:B4 ; |147| 
           NOP             2

   [!B0]   CALL    .S1     acosdp_v          ; |149| 
||         STDW    .D2T2   B5:B4,*B20++      ; |147| 

           ; BRANCHCC OCCURS {$C$L6}         ; |146| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D1T2   *A11,B4           ; |149| 
           ADDKPC  .S2     $C$RL10,B3,2      ; |149| 

           MV      .L1     A10,A4            ; |149| 
||         MVK     .S1     0xc9,A6           ; |149| 

$C$RL10:   ; CALL OCCURS {acosdp_v} {0}      ; |149| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12

           CALLP   .S2     allequal,B3
||         MVK     .S1     0xc9,A4           ; |154| 

$C$RL11:   ; CALL OCCURS {allequal} {0}      ; |154| 

           CALLP   .S2     print_test_results,B3
||         MVK     .L1     0x1,A4            ; |155| 

$C$RL12:   ; CALL OCCURS {print_test_results} {0}  ; |155| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10

           MVKL    .S1     a_sc,A13
||         MVK     .L2     0xffffffff,B5     ; |169| 

           MVKH    .S1     a_sc,A13
||         MV      .L2     B5,B4             ; |169| 
||         ZERO    .L1     A9

           STDW    .D1T2   B5:B4,*+A13(56)   ; |169| 
||         SET     .S1     A9,0x14,0x1d,A9
||         ZERO    .L2     B17
||         ZERO    .L1     A8                ; |167| 

           STDW    .D1T1   A9:A8,*+A13(32)   ; |166| 
||         MVKH    .S2     0xfff00000,B17
||         ZERO    .L1     A7
||         ZERO    .L2     B7
||         ZERO    .D2     B16               ; |167| 

           STDW    .D1T2   B17:B16,*+A13(24) ; |165| 
||         MVKH    .S2     0x80000000,B7
||         SET     .S1     A7,0x14,0x1e,A7
||         ZERO    .L2     B9
||         ZERO    .L1     A6                ; |167| 

           STDW    .D1T1   A7:A6,*+A13(16)   ; |164| 
||         MVKH    .S2     0xbff00000,B9
||         ZERO    .L2     B8                ; |167| 

           ADD     .L2     -1,B7,B5
||         STDW    .D1T2   B9:B8,*+A13(40)   ; |167| 

           MVK     .L2     0x8,B4
||         STDW    .D1T2   B5:B4,*+A13(48)   ; |168| 
||         ZERO    .S2     B6                ; |167| 

           STDW    .D1T2   B7:B6,*+A13(8)    ; |163| 
||         ZERO    .L1     A5:A4             ; |162| 

           MV      .L1X    B4,A10            ; |163| 
||         STDW    .D1T1   A5:A4,*A13        ; |162| 
||         SUB     .L2X    A13,8,B10
||         ZERO    .S1     A12               ; |167| 

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
$C$L13:    
;          EXCLUSIVE CPU CYCLES: 6

           CALL    .S1     acos              ; |172| 
||         LDDW    .D2T2   *++B10,B5:B4      ; |172| 

           ADDKPC  .S2     $C$RL13,B3,3      ; |172| 
           DADD    .L1X    0,B5:B4,A5:A4     ; |172| 
$C$RL13:   ; CALL OCCURS {acos} {0}          ; |172| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 33
           MVKL    .S1     output,A14
           MVKH    .S1     output,A14
           LDW     .D1T2   *A14,B4           ; |172| 
           NOP             4
           ADD     .L2X    A12,B4,B4         ; |172| 
           STDW    .D2T1   A5:A4,*B4         ; |172| 

           CALLP   .S2     acosdp,B3
||         LDDW    .D2T1   *B10,A5:A4        ; |173| 

$C$RL14:   ; CALL OCCURS {acosdp} {0}        ; |173| 
           LDW     .D1T2   *+A14(4),B4       ; |173| 
           NOP             4
           ADD     .L2X    A12,B4,B4         ; |173| 
           STDW    .D2T1   A5:A4,*B4         ; |173| 
           LDDW    .D2T2   *B10,B5:B4        ; |174| 
           NOP             4

           CALLP   .S2     acosdp_c,B3
||         DADD    .L1X    0,B5:B4,A5:A4     ; |174| 

$C$RL15:   ; CALL OCCURS {acosdp_c} {0}      ; |174| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 22
           LDW     .D1T1   *+A14(8),A3       ; |174| 
           MVKL    .S2     0x3fe6a09e,B7
           ZERO    .L1     A29
           ZERO    .L2     B9
           MVKL    .S2     0x667f3bcd,B6
           ADD     .L1     A12,A3,A3         ; |174| 
           STDW    .D1T1   A5:A4,*A3         ; |174| 
           LDDW    .D2T2   *B10,B21:B20      ; |175| 
           MVKH    .S2     0x3fe6a09e,B7
           MVKH    .S2     0x667f3bcd,B6
           SET     .S2     B9,0x15,0x1d,B9
           ZERO    .L1     A28               ; |165| 
           ABSDP   .S2     B21:B20,B5:B4     ; |168| 
           SET     .S1     A29,0x14,0x1d,A29
           CMPGTDP .S2     B5:B4,B7:B6,B0    ; |171| 
           FMPYDP  .M2     B21:B20,B21:B20,B7:B6 ; |169| 

   [ B0]   B       .S1     $C$L15            ; |171| 
|| [!B0]   MV      .L2X    A28,B8            ; |185| 
||         MV      .S2     B0,B2             ; branch predicate copy
||         MV      .D2     B0,B1             ; guard predicate rewrite

           CMPGTDP .S2     B5:B4,B9:B8,B0    ; |185| 
           NOP             1

   [ B1]   ZERO    .L2     B0                ; |185| nullify predicate
|| [ B2]   MVKL    .S2     0x3febb67a,B9

   [ B0]   B       .S1     $C$L14            ; |185| 
|| [ B2]   MVKL    .S2     0xe8584caa,B8

   [ B2]   MVKH    .S2     0x3febb67a,B9
           ; BRANCHCC OCCURS {$C$L15}        ; |171| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 4

   [ B0]   MV      .L2     B8,B6             ; |187| 
|| [!B0]   CALL    .S1     pol_est_acosdp_i  ; |191| 
|| [ B0]   FADDDP  .S2     B7:B6,B7:B6,B5:B4 ; |187| 

   [ B0]   MV      .L2X    A29,B7            ; |187| 
   [ B0]   CALL    .S1     pol_est_acosdp_i  ; |187| 
   [ B0]   FSUBDP  .L2     B7:B6,B5:B4,B5:B4 ; |187| 
           ; BRANCHCC OCCURS {$C$L14}        ; |185| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 2
           ADDKPC  .S2     $C$RL16,B3,0      ; |191| 
           DADD    .L1X    0,B5:B4,A5:A4     ; |191| 
$C$RL16:   ; CALL OCCURS {pol_est_acosdp_i} {0}  ; |191| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 6

           B       .S1     $C$L17            ; |191| 
||         ADDAW   .D1     A14,3,A3

           LDW     .D1T1   *A3,A3            ; |175| 
           SUB     .L1     A10,1,A0          ; |171| 
           ZERO    .L2     B5:B4             ; |195| 
           SUB     .L1     A10,1,A10         ; |171| 
           NOP             1
           ; BRANCH OCCURS {$C$L17}          ; |191| 
;** --------------------------------------------------------------------------*
$C$L14:    
;          EXCLUSIVE CPU CYCLES: 4
           ADDKPC  .S2     $C$RL17,B3,2      ; |187| 
           DADD    .L1X    0,B5:B4,A5:A4     ; |187| 
$C$RL17:   ; CALL OCCURS {pol_est_acosdp_i} {0}  ; |187| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 8

           ADDAW   .D1     A14,3,A3
||         MVKL    .S1     0x3ff921fb,A7
||         ZERO    .L2     B5
||         MV      .S2X    A28,B4            ; |188| 
||         SUB     .L1     A10,1,A0          ; |171| 

           SUB     .L1     A10,1,A10         ; |171| 
||         LDW     .D1T1   *A3,A3            ; |175| 
||         MVKL    .S1     0x54442d18,A6

           B       .S2     $C$L18            ; |189| 
||         MVKH    .S1     0x3ff921fb,A7

           MVKH    .S1     0x54442d18,A6
           FSUBDP  .L1     A7:A6,A5:A4,A5:A4 ; |188| 
           SET     .S2     B5,0x15,0x1d,B5

           ADD     .S1     A12,A3,A3         ; |175| 
||         ADD     .D1     8,A12,A12         ; |171| 

           FMPYDP  .M1X    B5:B4,A5:A4,A5:A4 ; |188| 
||         ZERO    .L2     B5:B4             ; |195| 

           ; BRANCH OCCURS {$C$L18}          ; |189| 
;** --------------------------------------------------------------------------*
$C$L15:    
;          EXCLUSIVE CPU CYCLES: 9
           MVKH    .S2     0xe8584caa,B8
           CMPGTDP .S2     B5:B4,B9:B8,B0    ; |172| 
           MV      .L2X    A29,B5

   [!B0]   B       .S1     $C$L16            ; |172| 
||         MV      .L2X    A28,B4

   [ B0]   FSUBDP  .L2     B5:B4,B7:B6,B7:B6 ; |67| 
           NOP             2
           RSQRDP  .S2     B7:B6,B5:B4       ; |67| 
   [!B0]   FADDDP  .L2     B7:B6,B7:B6,B7:B6 ; |181| 
           ; BRANCHCC OCCURS {$C$L16}        ; |172| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 101
           FMPYDP  .M2     B5:B4,B7:B6,B9:B8 ; |67| 
           MV      .L1     A28,A4            ; |67| 
           ZERO    .L1     A5
           MV      .L2X    A28,B16           ; |67| 
           FMPYDP  .M2     B5:B4,B9:B8,B9:B8 ; |67| 
           ZERO    .L2     B17
           ZERO    .L2     B31
           SET     .S1     A5,0x15,0x1d,A5
           ZERO    .L1     A7
           FMPYDP  .M1X    A5:A4,B9:B8,A5:A4 ; |67| 
           MV      .L1     A28,A6            ; |67| 
           SET     .S1     A7,0x13,0x1d,A7
           SET     .S2     B17,0x13,0x1d,B17
           FSUBDP  .L1     A7:A6,A5:A4,A5:A4 ; |67| 
           ZERO    .L1     A31
           MVKL    .S2     0x20991e58,B28
           FMPYDP  .M1X    B5:B4,A5:A4,A5:A4 ; |67| 
           ZERO    .L1     A30
           MVKL    .S2     0x3fc55555,B29
           MVKL    .S1     0x3f8a6331,A17
           MVKL    .S2     0x726cfcda,B26
           FMPYDP  .M2X    A5:A4,B7:B6,B5:B4 ; |67| 
           MVKL    .S1     0xb088e0d4,A16
           MVKL    .S2     0x3f92080d,B27
           MVKH    .S1     0x3f8a6331,A17
           MVKH    .S2     0x20991e58,B28
           FMPYDP  .M1X    A5:A4,B5:B4,A7:A6 ; |67| 
           MV      .L2X    A28,B4            ; |67| 
           SET     .S2     B31,0x15,0x1d,B5
           MVKH    .S1     0xb088e0d4,A16
           FMPYDP  .M1X    B5:B4,A7:A6,A9:A8 ; |67| 
           MV      .L1     A28,A6            ; |67| 
           SET     .S1     A31,0x13,0x1d,A7
           MVKH    .S2     0x3fc55555,B29
           FSUBDP  .L1     A7:A6,A9:A8,A7:A6 ; |67| 
           MVKH    .S2     0x726cfcda,B26
           MVKH    .S2     0x3f92080d,B27
           FMPYDP  .M1     A5:A4,A7:A6,A5:A4 ; |67| 
           MVKL    .S2     0xcead24b0,B24
           MVKL    .S2     0x3f96c6e8,B25
           MVKH    .S2     0xcead24b0,B24
           MVKH    .S2     0x3f96c6e8,B25
           FMPYDP  .M2X    A5:A4,B7:B6,B5:B4 ; |67| 
           MVKL    .S1     0x3fb3333c,A9
           MVKL    .S1     0x67ff42f2,A8
           MVKH    .S1     0x3fb3333c,A9
           FMPYDP  .M2X    A5:A4,B5:B4,B9:B8 ; |67| 
           MV      .L1     A28,A4            ; |67| 
           SET     .S1     A30,0x15,0x1d,A5
           MVKL    .S1     0x3f8e21a3,A7
           FMPYDP  .M2X    A5:A4,B9:B8,B9:B8 ; |67| 
           MVKL    .S1     0xc62a3037,A6
           MVKH    .S1     0x3f8e21a3,A7
           MVKH    .S1     0xc62a3037,A6
           FSUBDP  .L2     B17:B16,B9:B8,B9:B8 ; |67| 
           ZERO    .L1     A5:A4             ; |69| 
           MVKH    .S1     0x67ff42f2,A8
           FMPYDP  .M2     B5:B4,B9:B8,B17:B16 ; |67| 
           CMPGTDP .S2X    B7:B6,A5:A4,B0    ; |69| 
           MVKL    .S1     0x2d6e8923,A4
           MVKL    .S1     0x3f9f218e,A5
   [!B0]   ZERO    .L2     B17:B16           ; |70| 
           FMPYDP  .M2     B17:B16,B17:B16,B9:B8 ; |176| 
           MVKH    .S1     0x2d6e8923,A4
           MVKH    .S1     0x3f9f218e,A5
           ADDAW   .D1     A14,3,A3
           FMPYDP  .M2     B9:B8,B9:B8,B5:B4 ; |176| 

           FMPYDP  .M1X    A7:A6,B9:B8,A19:A18 ; |176| 
||         MVKL    .S1     0x3fa6daed,A7

           MVKL    .S1     0x7e834e0f,A6
           MVKH    .S1     0x3fa6daed,A7
           FMPYDP  .M2     B5:B4,B5:B4,B7:B6 ; |176| 
           FMPYDP  .M1X    A17:A16,B5:B4,A17:A16 ; |176| 
           FMPYDP  .M2     B5:B4,B9:B8,B19:B18 ; |176| 
           MVKH    .S1     0x7e834e0f,A6
           FMPYDP  .M1X    A9:A8,B5:B4,A9:A8 ; |176| 

           FADDDP  .L1     A19:A18,A17:A16,A17:A16 ; |176| 
||         FMPYDP  .M1X    A5:A4,B7:B6,A5:A4 ; |176| 
||         FMPYDP  .M2     B5:B4,B7:B6,B7:B6 ; |176| 

           FMPYDP  .M2     B5:B4,B19:B18,B23:B22 ; |176| 
           FMPYDP  .M1X    A7:A6,B19:B18,A7:A6 ; |176| 
           FMPYDP  .M2     B29:B28,B9:B8,B19:B18 ; |176| 
           FADDDP  .L2X    B27:B26,A17:A16,B5:B4 ; |176| 
           FMPYDP  .M2     B25:B24,B23:B22,B9:B8 ; |176| 
           FADDDP  .L1     A7:A6,A5:A4,A5:A4 ; |176| 
           FMPYDP  .M2     B7:B6,B5:B4,B5:B4 ; |176| 
           FADDDP  .L2X    B19:B18,A9:A8,B7:B6 ; |176| 
           LDW     .D1T1   *A3,A3            ; |175| 
           SUB     .L1     A10,1,A0          ; |171| 

           FADDDP  .L2     B9:B8,B5:B4,B7:B6 ; |176| 
||         FADDDP  .S2X    B7:B6,A5:A4,B5:B4 ; |176| 

           SUB     .L1     A10,1,A10         ; |171| 
           MVKL    .S1     0x54442d18,A4
           FADDDP  .L2     B7:B6,B5:B4,B5:B4 ; |176| 
           ADD     .L1     A12,A3,A3         ; |175| 
           ADD     .L1     8,A12,A12         ; |171| 
           FMPYDP  .M2     B17:B16,B5:B4,B5:B4 ; |176| 
           MVKL    .S1     0x3ff921fb,A5
           MVKH    .S1     0x54442d18,A4
           B       .S1     $C$L18            ; |177| 
           FADDDP  .L2     B17:B16,B5:B4,B5:B4 ; |176| 
           MVKH    .S1     0x3ff921fb,A5
           NOP             2

           FSUBDP  .L1X    A5:A4,B5:B4,A5:A4 ; |176| 
||         ZERO    .L2     B5:B4             ; |195| 

           ; BRANCH OCCURS {$C$L18}          ; |177| 
;** --------------------------------------------------------------------------*
$C$L16:    
;          EXCLUSIVE CPU CYCLES: 48

           MV      .L2X    A29,B5
||         MVKL    .S1     0x3f8a6331,A17
||         MVKL    .S2     0x726cfcda,B30

           MV      .D2X    A28,B4            ; |181| 
||         MVKL    .S1     0xb088e0d4,A16
||         MVKL    .S2     0x3f92080d,B31

           FSUBDP  .L2     B7:B6,B5:B4,B17:B16 ; |181| 
||         MVKL    .S1     0xc62a3037,A4
||         MVKL    .S2     0x3fc55555,B5

           MVKL    .S1     0x3f8e21a3,A5
||         MVKL    .S2     0x20991e58,B4

           MVKH    .S1     0x3f8a6331,A17
||         MVKH    .S2     0x3fc55555,B5

           FMPYDP  .M2     B17:B16,B17:B16,B9:B8 ; |181| 
||         MVKH    .S1     0xb088e0d4,A16
||         MVKH    .S2     0x20991e58,B4

           MVKH    .S1     0xc62a3037,A4
||         MVKH    .S2     0x726cfcda,B30

           MVKH    .S1     0x3f8e21a3,A5
||         MVKH    .S2     0x3f92080d,B31

           MVKL    .S1     0x67ff42f2,A8
||         MVKL    .S2     0xcead24b0,B28

           FMPYDP  .M2     B9:B8,B9:B8,B7:B6 ; |181| 
||         MVKL    .S1     0x3fb3333c,A9
||         MVKL    .S2     0x3f96c6e8,B29

           FMPYDP  .M1X    A5:A4,B9:B8,A19:A18 ; |181| 
||         MVKL    .S1     0x2d6e8923,A4
||         MVKH    .S2     0xcead24b0,B28

           MVKL    .S1     0x3f9f218e,A5
||         MVKH    .S2     0x3f96c6e8,B29

           MVKH    .S1     0x67ff42f2,A8

           FMPYDP  .M2     B7:B6,B9:B8,B19:B18 ; |181| 
||         MVKH    .S1     0x3fb3333c,A9

           FMPYDP  .M1X    A17:A16,B7:B6,A17:A16 ; |181| 
||         FMPYDP  .M2     B7:B6,B7:B6,B23:B22 ; |181| 
||         MVKL    .S1     0x7e834e0f,A6

           MVKL    .S1     0x3fa6daed,A7
||         FMPYDP  .M2X    A9:A8,B7:B6,B25:B24 ; |181| 

           MVKH    .S1     0x2d6e8923,A4
||         FMPYDP  .M2     B5:B4,B9:B8,B9:B8 ; |181| 

           MVKH    .S1     0x3f9f218e,A5
||         FMPYDP  .M2     B7:B6,B19:B18,B27:B26 ; |181| 

           FADDDP  .L1     A19:A18,A17:A16,A17:A16 ; |181| 
||         MVKH    .S1     0x7e834e0f,A6

           MVKH    .S1     0x3fa6daed,A7
||         FMPYDP  .M1X    A5:A4,B23:B22,A5:A4 ; |181| 

           FMPYDP  .M1X    A7:A6,B19:B18,A7:A6 ; |181| 
           FMPYDP  .M2     B7:B6,B23:B22,B7:B6 ; |181| 
           FADDDP  .L2X    B31:B30,A17:A16,B5:B4 ; |181| 
           FMPYDP  .M2     B29:B28,B27:B26,B19:B18 ; |181| 
           FADDDP  .L1     A7:A6,A5:A4,A5:A4 ; |181| 

           FMPYDP  .M2     B7:B6,B5:B4,B7:B6 ; |181| 
||         FADDDP  .L2     B9:B8,B25:B24,B5:B4 ; |181| 

           SUB     .S1     A10,1,A0          ; |171| 
           ADDAW   .D1     A14,3,A3
           FADDDP  .L2X    B5:B4,A5:A4,B5:B4 ; |181| 
           FADDDP  .L2     B19:B18,B7:B6,B7:B6 ; |181| 
           ZERO    .S2     B2
           SUB     .L1     A10,1,A10         ; |171| 
           FADDDP  .L2     B7:B6,B5:B4,B5:B4 ; |181| 
           LDW     .D1T1   *A3,A3            ; |175| 
           MV      .S2X    A28,B6            ; |181| 
           FMPYDP  .M2     B17:B16,B5:B4,B5:B4 ; |181| 
           SET     .S2     B2,0x15,0x1d,B7
           MVKL    .S1     0x54442d18,A4
           MVKL    .S1     0x3fe921fb,A5
           FADDDP  .L2     B17:B16,B5:B4,B5:B4 ; |181| 
           MVKH    .S1     0x54442d18,A4
           MVKH    .S1     0x3fe921fb,A5
           FMPYDP  .M2     B7:B6,B5:B4,B5:B4 ; |181| 
           NOP             4

           FADDDP  .L1X    A5:A4,B5:B4,A5:A4 ; |181| 
||         ZERO    .L2     B5:B4             ; |195| 

;** --------------------------------------------------------------------------*
$C$L17:    
;          EXCLUSIVE CPU CYCLES: 1

           ADD     .L1     A12,A3,A3         ; |175| 
||         ADD     .S1     8,A12,A12         ; |171| 

;** --------------------------------------------------------------------------*
$C$L18:    
;          EXCLUSIVE CPU CYCLES: 13
           CMPLTDP .S2     B21:B20,B5:B4,B0  ; |195| 
   [!A0]   MV      .L2X    A11,B11           ; |177| 

   [ B0]   ZERO    .L1     A29
|| [ B0]   ZERO    .S1     A28               ; |196| 
||         MVKL    .S2     0x3ff921fb,B5

   [ B0]   MVKH    .S1     0xbff00000,A29
||         MVKL    .S2     0x54442d18,B4

           FMPYDP  .M1     A29:A28,A5:A4,A5:A4 ; |175| 
           MVKH    .S2     0x3ff921fb,B5
           MVKH    .S2     0x54442d18,B4
   [ A0]   BNOP    .S1     $C$L13,1          ; |171| 
           FSUBDP  .L2X    B5:B4,A5:A4,B7:B6 ; |175| 
           NOP             2

   [!A0]   CALL    .S1     acosdp_v          ; |177| 
||         STDW    .D1T2   B7:B6,*A3         ; |175| 

           ; BRANCHCC OCCURS {$C$L13}        ; |171| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D2T2   *B11,B4           ; |177| 
           MV      .L1     A13,A4
           ADDKPC  .S2     $C$RL18,B3,1      ; |177| 
           MVK     .L1     0x8,A6            ; |177| 
$C$RL18:   ; CALL OCCURS {acosdp_v} {0}      ; |177| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12

           CALLP   .S2     allequal,B3
||         MVK     .L1     0x8,A4            ; |180| 

$C$RL19:   ; CALL OCCURS {allequal} {0}      ; |180| 

           CALLP   .S2     print_test_results,B3
||         MVK     .L1     0x3,A4            ; |181| 

$C$RL20:   ; CALL OCCURS {print_test_results} {0}  ; |181| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5

           MVKL    .S1     a_ext,A12
||         ZERO    .L2     B5

           MVKH    .S1     a_ext,A12
||         SET     .S2     B5,0x14,0x14,B5
||         ZERO    .L2     B4                ; |184| 

           STDW    .D1T2   B5:B4,*A12        ; |184| 
||         MVK     .S2     0x6d6,B4

           MV      .L1     A12,A10           ; |184| 

           ZERO    .L2     B10
||         CALL    .S1     acos              ; |186| 
||         MV      .L1X    B4,A13            ; |184| 

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
$C$L19:    
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *A10,A5:A4        ; |186| 
           ADDKPC  .S2     $C$RL21,B3,3      ; |186| 
$C$RL21:   ; CALL OCCURS {acos} {0}          ; |186| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 28
           MV      .L1     A14,A3            ; |186| 
           LDW     .D1T1   *A3,A3            ; |186| 
           NOP             4
           ADD     .L1X    B10,A3,A3         ; |186| 
           STDW    .D1T1   A5:A4,*A3         ; |186| 

           CALLP   .S2     acosdp,B3
||         LDDW    .D1T1   *A10,A5:A4        ; |187| 

$C$RL22:   ; CALL OCCURS {acosdp} {0}        ; |187| 
           MV      .L1     A14,A3            ; |187| 
           LDW     .D1T1   *+A3(4),A3        ; |187| 
           NOP             4
           ADD     .L1X    B10,A3,A3         ; |187| 
           STDW    .D1T1   A5:A4,*A3         ; |187| 

           CALLP   .S2     acosdp_c,B3
||         LDDW    .D1T1   *A10,A5:A4        ; |188| 

$C$RL23:   ; CALL OCCURS {acosdp_c} {0}      ; |188| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 24
           MV      .L1     A14,A3            ; |188| 
           LDW     .D1T1   *+A3(8),A3        ; |188| 
           ZERO    .L2     B21
           ZERO    .L1     A9
           ZERO    .L2     B20               ; |165| 
           MVKL    .S2     0x3fe6a09e,B5
           ADD     .L2X    B10,A3,B4         ; |188| 
           STDW    .D2T1   A5:A4,*B4         ; |188| 
           LDDW    .D1T1   *A10,A29:A28      ; |189| 
           MVKH    .S2     0x3fe6a09e,B5
           SET     .S2     B21,0x14,0x1d,B21
           MVKL    .S2     0x667f3bcd,B4
           MVKH    .S2     0x667f3bcd,B4
           ABSDP   .S1     A29:A28,A5:A4     ; |168| 
           FMPYDP  .M1     A29:A28,A29:A28,A7:A6 ; |169| 
           SET     .S1     A9,0x15,0x1d,A9
           CMPGTDP .S2X    A5:A4,B5:B4,B0    ; |171| 
           NOP             1

   [ B0]   B       .S1     $C$L21            ; |171| 
|| [!B0]   MV      .L1X    B20,A8            ; |185| 

           CMPGTDP .S1     A5:A4,A9:A8,A0    ; |185| 
           NOP             1

   [ B0]   ZERO    .L1     A0                ; |185| nullify predicate
|| [ B0]   MVKL    .S1     0xe8584caa,A8

   [ A0]   B       .S2     $C$L20            ; |185| 
||         MVKL    .S1     0x3febb67a,A9

   [ B0]   MVKH    .S1     0xe8584caa,A8
           ; BRANCHCC OCCURS {$C$L21}        ; |171| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 4
   [!A0]   CALL    .S1     pol_est_acosdp_i  ; |191| 

   [ A0]   CALL    .S1     pol_est_acosdp_i  ; |187| 
|| [ A0]   FADDDP  .L1     A7:A6,A7:A6,A5:A4 ; |187| 

   [ A0]   MV      .L1X    B21,A7            ; |187| 
   [ A0]   MV      .S1     A8,A6             ; |187| 
           ; BRANCHCC OCCURS {$C$L20}        ; |185| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 2
           ADDKPC  .S2     $C$RL24,B3,1      ; |191| 
$C$RL24:   ; CALL OCCURS {pol_est_acosdp_i} {0}  ; |191| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 6

           ADDAW   .D1     A14,3,A3
||         B       .S2     $C$L23            ; |191| 
||         ZERO    .L2     B7:B6             ; |195| 
||         SUB     .L1     A13,1,A2          ; |185| 
||         SUB     .S1     A13,1,A13         ; |185| 

           LDW     .D1T1   *A3,A3            ; |189| 
||         ZERO    .L1     A6                ; |190| 
||         ZERO    .S1     A7
||         DADD    .L2X    0,A5:A4,B5:B4     ; |191| 

           CMPLTDP .S1X    A29:A28,B7:B6,A0  ; |195| 
           MVKL    .S2     0x54442d18,B6

   [ A0]   ZERO    .L2     B21
||         MVKH    .S2     0x54442d18,B6

   [ A0]   MVKH    .S2     0xbff00000,B21
           ; BRANCH OCCURS {$C$L23}          ; |191| 
;** --------------------------------------------------------------------------*
$C$L20:    
;          EXCLUSIVE CPU CYCLES: 3
           FSUBDP  .L1     A7:A6,A5:A4,A5:A4 ; |187| 
           ADDKPC  .S2     $C$RL25,B3,1      ; |187| 
$C$RL25:   ; CALL OCCURS {pol_est_acosdp_i} {0}  ; |187| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 8

           ADDAW   .D1     A14,3,A3
||         MVKL    .S2     0x54442d18,B4
||         ZERO    .L2     B7:B6             ; |195| 
||         ZERO    .L1     A7
||         MV      .S1X    B20,A6            ; |188| 

           MVKL    .S2     0x3ff921fb,B5
||         LDW     .D1T1   *A3,A3            ; |189| 
||         SET     .S1     A7,0x15,0x1d,A7
||         SUB     .L1     A13,1,A2          ; |185| 

           MVKH    .S2     0x54442d18,B4
||         B       .S1     $C$L24            ; |189| 
||         SUB     .L1     A13,1,A13         ; |185| 

           MVKH    .S2     0x3ff921fb,B5
||         CMPLTDP .S1X    A29:A28,B7:B6,A0  ; |195| 

           MVKL    .S2     0x54442d18,B6
||         FSUBDP  .L2X    B5:B4,A5:A4,B5:B4 ; |188| 

   [ A0]   ZERO    .L2     B21
||         MVKL    .S2     0x3ff921fb,B7

   [ A0]   MVKH    .S2     0xbff00000,B21
||         ADD     .D2X    B10,A3,B31        ; |189| 

           FMPYDP  .M2X    A7:A6,B5:B4,B5:B4 ; |188| 
||         ZERO    .L1     A7
||         ZERO    .S1     A6                ; |190| 
||         MVKH    .S2     0x54442d18,B6
||         ADD     .L2     8,B10,B10         ; |185| 

           ; BRANCH OCCURS {$C$L24}          ; |189| 
;** --------------------------------------------------------------------------*
$C$L21:    
;          EXCLUSIVE CPU CYCLES: 9
           MVKH    .S1     0x3febb67a,A9
           CMPGTDP .S1     A5:A4,A9:A8,A0    ; |172| 
           MV      .L1X    B21,A5

   [!A0]   B       .S1     $C$L22            ; |172| 
||         MV      .L1X    B20,A4

   [ A0]   FSUBDP  .L1     A5:A4,A7:A6,A7:A6 ; |67| 
           NOP             2
           RSQRDP  .S1     A7:A6,A5:A4       ; |67| 
   [!A0]   FADDDP  .L1     A7:A6,A7:A6,A7:A6 ; |181| 
           ; BRANCHCC OCCURS {$C$L22}        ; |172| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 101

           ZERO    .L1     A31
||         ZERO    .D1     A30
||         MVKL    .S1     0x20991e58,A20
||         FMPYDP  .M1     A5:A4,A7:A6,A9:A8 ; |67| 

           ZERO    .L2     B7
           MV      .L2     B20,B4            ; |67| 
           ZERO    .L2     B5
           FMPYDP  .M1     A5:A4,A9:A8,A9:A8 ; |67| 
           SET     .S2     B5,0x15,0x1d,B5
           ADDAW   .D1     A14,3,A3
           MVKL    .S1     0x3fc55555,A21
           ZERO    .L2     B9
           FMPYDP  .M2X    B5:B4,A9:A8,B5:B4 ; |67| 
           MV      .L2     B20,B6            ; |67| 
           SET     .S2     B7,0x13,0x1d,B7
           SUB     .L1     A13,1,A2          ; |185| 
           FSUBDP  .L2     B7:B6,B5:B4,B5:B4 ; |67| 
           LDW     .D1T1   *A3,A3            ; |189| 
           MVKL    .S1     0x726cfcda,A22
           MV      .L2     B20,B8            ; |67| 
           FMPYDP  .M1X    A5:A4,B5:B4,A5:A4 ; |67| 
           SUB     .L1     A13,1,A13         ; |185| 
           MVKL    .S1     0x3f92080d,A23
           SET     .S2     B9,0x15,0x1d,B9
           FMPYDP  .M1     A5:A4,A7:A6,A9:A8 ; |67| 
           MVKH    .S1     0x20991e58,A20
           MVKL    .S2     0x3fa6daed,B17
           MVKH    .S1     0x3fc55555,A21
           FMPYDP  .M1     A5:A4,A9:A8,A17:A16 ; |67| 
           MVKL    .S2     0x67ff42f2,B18
           MV      .L1X    B20,A8            ; |67| 
           SET     .S1     A31,0x15,0x1d,A9
           FMPYDP  .M1     A9:A8,A17:A16,A9:A8 ; |67| 
           MVKH    .S1     0x726cfcda,A22
           MVKL    .S2     0x3fb3333c,B19
           MV      .L2     B6,B4             ; |67| 
           MV      .L2     B7,B5             ; |67| 
           FSUBDP  .L2X    B5:B4,A9:A8,B5:B4 ; |67| 
           ADD     .L2X    B10,A3,B31        ; |189| 
           ADD     .S2     8,B10,B10         ; |185| 
           FMPYDP  .M2X    A5:A4,B5:B4,B5:B4 ; |67| 
           MVKH    .S1     0x3f92080d,A23
           MVKL    .S2     0x7e834e0f,B16
           MVKL    .S1     0xcead24b0,A26
           FMPYDP  .M2X    B5:B4,A7:A6,B7:B6 ; |67| 
           MVKH    .S2     0x3fa6daed,B17
           MVKL    .S1     0x3f96c6e8,A27
           MVKH    .S2     0x67ff42f2,B18
           FMPYDP  .M2     B5:B4,B7:B6,B5:B4 ; |67| 
           MVKH    .S1     0xcead24b0,A26
           MVKH    .S2     0x3fb3333c,B19
           MVKH    .S1     0x3f96c6e8,A27
           FMPYDP  .M2     B9:B8,B5:B4,B5:B4 ; |67| 
           MVKH    .S2     0x7e834e0f,B16
           ZERO    .L1     A9:A8             ; |69| 
           MV      .L1X    B20,A4            ; |67| 
           SET     .S1     A30,0x13,0x1d,A5
           FSUBDP  .L1X    A5:A4,B5:B4,A5:A4 ; |67| 
           CMPGTDP .S1     A7:A6,A9:A8,A0    ; |69| 
           MVKL    .S2     0x3f9f218e,B9
           FMPYDP  .M1X    B7:B6,A5:A4,A5:A4 ; |67| 
           MVKL    .S2     0xb088e0d4,B4
           MVKL    .S2     0x3f8a6331,B5
           MVKH    .S2     0xb088e0d4,B4
   [!A0]   ZERO    .L1     A5:A4             ; |70| 
           FMPYDP  .M1     A5:A4,A5:A4,A7:A6 ; |176| 
           MVKL    .S2     0x3f8e21a3,B7
           MVKL    .S2     0xc62a3037,B6
           MVKH    .S2     0x3f8e21a3,B7
           FMPYDP  .M1     A7:A6,A7:A6,A19:A18 ; |176| 
           MVKH    .S2     0xc62a3037,B6
           MVKH    .S2     0x3f8a6331,B5
           FMPYDP  .M2X    B7:B6,A7:A6,B7:B6 ; |176| 
           FMPYDP  .M1     A19:A18,A19:A18,A17:A16 ; |176| 

           FMPYDP  .M2X    B5:B4,A19:A18,B5:B4 ; |176| 
||         FMPYDP  .M1     A19:A18,A7:A6,A9:A8 ; |176| 

           MVKL    .S2     0x2d6e8923,B8
           MVKH    .S2     0x3f9f218e,B9
           MVKH    .S2     0x2d6e8923,B8

           FADDDP  .L2     B7:B6,B5:B4,B7:B6 ; |176| 
||         FMPYDP  .M2X    B19:B18,A19:A18,B5:B4 ; |176| 
||         FMPYDP  .M1     A19:A18,A9:A8,A25:A24 ; |176| 

           FMPYDP  .M2X    B9:B8,A17:A16,B9:B8 ; |176| 

           FMPYDP  .M2X    B17:B16,A9:A8,B17:B16 ; |176| 
||         FMPYDP  .M1     A19:A18,A17:A16,A9:A8 ; |176| 

           FMPYDP  .M1     A21:A20,A7:A6,A17:A16 ; |176| 
           FADDDP  .L1X    A23:A22,B7:B6,A7:A6 ; |176| 
           FMPYDP  .M1     A27:A26,A25:A24,A19:A18 ; |176| 
           FADDDP  .L2     B17:B16,B9:B8,B7:B6 ; |176| 

           FMPYDP  .M1     A9:A8,A7:A6,A7:A6 ; |176| 
||         FADDDP  .L1X    A17:A16,B5:B4,A9:A8 ; |176| 

           MVKL    .S2     0x54442d18,B4
           MVKL    .S2     0x3ff921fb,B5
           MVKH    .S2     0x54442d18,B4

           FADDDP  .L1     A19:A18,A7:A6,A9:A8 ; |176| 
||         FADDDP  .S1X    A9:A8,B7:B6,A7:A6 ; |176| 
||         ZERO    .L2     B7:B6             ; |195| 

           MVKH    .S2     0x3ff921fb,B5
           CMPLTDP .S1X    A29:A28,B7:B6,A0  ; |195| 

           FADDDP  .L1     A9:A8,A7:A6,A7:A6 ; |176| 
||         MVKL    .S2     0x54442d18,B6

   [ A0]   ZERO    .L2     B21
||         MVKL    .S2     0x3ff921fb,B7

   [ A0]   MVKH    .S2     0xbff00000,B21
           FMPYDP  .M1     A5:A4,A7:A6,A7:A6 ; |176| 
           MVKH    .S2     0x54442d18,B6
           MVKH    .S2     0x3ff921fb,B7
           B       .S1     $C$L25            ; |177| 
           FADDDP  .S1     A5:A4,A7:A6,A5:A4 ; |176| 
           ZERO    .L1     A6                ; |190| 
           ZERO    .L1     A7
           MVKH    .S1     0xbff80000,A7
           FSUBDP  .L2X    B5:B4,A5:A4,B5:B4 ; |176| 
           ; BRANCH OCCURS {$C$L25}          ; |177| 
;** --------------------------------------------------------------------------*
$C$L22:    
;          EXCLUSIVE CPU CYCLES: 48

           MV      .L1X    B21,A5
||         MVKL    .S2     0xb088e0d4,B6
||         MVKL    .S1     0x20991e58,A18
||         ZERO    .D1     A3

           MV      .D1X    B20,A4            ; |181| 
||         MVKL    .S2     0x3f8a6331,B7
||         MVKL    .S1     0x3fc55555,A19

           FSUBDP  .L1     A7:A6,A5:A4,A9:A8 ; |181| 
||         MVKL    .S2     0x3f8e21a3,B5
||         MVKL    .S1     0x726cfcda,A20
||         SUB     .D1     A13,1,A2          ; |185| 

           MVKL    .S2     0xc62a3037,B4
||         MVKL    .S1     0x3f92080d,A21
||         SUB     .L1     A13,1,A13         ; |185| 

           MVKH    .S2     0xb088e0d4,B6
||         MVKH    .S1     0x20991e58,A18

           FMPYDP  .M1     A9:A8,A9:A8,A7:A6 ; |181| 
||         MVKH    .S2     0x3f8a6331,B7
||         MVKH    .S1     0x3fc55555,A19

           MVKH    .S2     0x3f8e21a3,B5
||         MVKH    .S1     0x726cfcda,A20

           MVKH    .S2     0xc62a3037,B4
||         MVKH    .S1     0x3f92080d,A21

           MVKL    .S2     0x67ff42f2,B18
||         MVKL    .S1     0xcead24b0,A24

           FMPYDP  .M1     A7:A6,A7:A6,A5:A4 ; |181| 
||         MVKL    .S2     0x3fb3333c,B19
||         MVKL    .S1     0x3f96c6e8,A25

           FMPYDP  .M2X    B5:B4,A7:A6,B5:B4 ; |181| 
||         MVKH    .S2     0x67ff42f2,B18
||         MVKH    .S1     0xcead24b0,A24

           MVKH    .S2     0x3fb3333c,B19
||         MVKH    .S1     0x3f96c6e8,A25

           MVKL    .S2     0x7e834e0f,B16

           FMPYDP  .M1     A5:A4,A7:A6,A23:A22 ; |181| 
||         MVKL    .S2     0x3fa6daed,B17

           FMPYDP  .M2X    B7:B6,A5:A4,B7:B6 ; |181| 
||         FMPYDP  .M1     A5:A4,A5:A4,A17:A16 ; |181| 
||         MVKL    .S2     0x2d6e8923,B8

           MVKL    .S2     0x3f9f218e,B9
||         FMPYDP  .M1X    B19:B18,A5:A4,A27:A26 ; |181| 

           MVKH    .S2     0x7e834e0f,B16
||         FMPYDP  .M1     A19:A18,A7:A6,A7:A6 ; |181| 

           MVKH    .S2     0x3fa6daed,B17
||         FMPYDP  .M1     A5:A4,A23:A22,A31:A30 ; |181| 

           FADDDP  .L2     B5:B4,B7:B6,B7:B6 ; |181| 
||         MVKH    .S2     0x2d6e8923,B8
||         FMPYDP  .M1     A5:A4,A17:A16,A5:A4 ; |181| 

           MVKH    .S2     0x3f9f218e,B9
           FMPYDP  .M2X    B9:B8,A17:A16,B5:B4 ; |181| 
           FMPYDP  .M2X    B17:B16,A23:A22,B9:B8 ; |181| 
           FADDDP  .L1X    A21:A20,B7:B6,A19:A18 ; |181| 
           FMPYDP  .M1     A25:A24,A31:A30,A17:A16 ; |181| 
           ZERO    .L2     B7:B6             ; |195| 

           FMPYDP  .M1     A5:A4,A19:A18,A5:A4 ; |181| 
||         FADDDP  .L2     B9:B8,B5:B4,B5:B4 ; |181| 

           FADDDP  .L1     A7:A6,A27:A26,A7:A6 ; |181| 
           CMPLTDP .S1X    A29:A28,B7:B6,A0  ; |195| 
           MVKL    .S2     0x54442d18,B6

           FADDDP  .L1     A17:A16,A5:A4,A7:A6 ; |181| 
||         FADDDP  .S1X    A7:A6,B5:B4,A5:A4 ; |181| 

           MVKH    .S2     0x54442d18,B6
   [ A0]   ZERO    .L2     B21
           FADDDP  .L1     A7:A6,A5:A4,A5:A4 ; |181| 
   [ A0]   MVKH    .S2     0xbff00000,B21
           MVKL    .S2     0x54442d18,B4
           FMPYDP  .M1     A9:A8,A5:A4,A5:A4 ; |181| 
           MVKL    .S2     0x3fe921fb,B5
           MVKH    .S2     0x54442d18,B4
           MV      .L1X    B20,A6            ; |181| 
           FADDDP  .L1     A9:A8,A5:A4,A5:A4 ; |181| 
           SET     .S1     A3,0x15,0x1d,A7
           ADDAW   .D1     A14,3,A3
           FMPYDP  .M1     A7:A6,A5:A4,A5:A4 ; |181| 
           LDW     .D1T1   *A3,A3            ; |189| 
           MVKH    .S2     0x3fe921fb,B5
           ZERO    .L1     A6                ; |190| 
           ZERO    .L1     A7
           FADDDP  .L2X    B5:B4,A5:A4,B5:B4 ; |181| 
;** --------------------------------------------------------------------------*
$C$L23:    
;          EXCLUSIVE CPU CYCLES: 1

           MVKL    .S2     0x3ff921fb,B7
||         ADD     .L2X    B10,A3,B31        ; |189| 
||         ADD     .D2     8,B10,B10         ; |185| 

;** --------------------------------------------------------------------------*
$C$L24:    
;          EXCLUSIVE CPU CYCLES: 1

           MVKH    .S2     0x3ff921fb,B7
||         MVKH    .S1     0xbff80000,A7

;** --------------------------------------------------------------------------*
$C$L25:    
;          EXCLUSIVE CPU CYCLES: 20
           NOP             2
           FMPYDP  .M2     B21:B20,B5:B4,B5:B4 ; |189| 
           NOP             3
           FSUBDP  .L2     B7:B6,B5:B4,B5:B4 ; |189| 
           NOP             2
           STDW    .D2T2   B5:B4,*B31        ; |189| 
           LDDW    .D1T1   *A10,A5:A4        ; |190| 
           NOP             3
   [ A2]   B       .S1     $C$L19            ; |185| 
           FMPYDP  .M1     A7:A6,A5:A4,A5:A4 ; |190| 
           NOP             3

   [ A2]   CALL    .S1     acos              ; |186| 
||         STDW    .D1T1   A5:A4,*++A10      ; |190| 

           ; BRANCHCC OCCURS {$C$L19}        ; |185| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 6
           CALL    .S1     acosdp_v          ; |192| 
           LDW     .D1T2   *A11,B4           ; |192| 
           ADDKPC  .S2     $C$RL26,B3,2      ; |192| 

           MV      .L1     A12,A4
||         MVK     .S1     0x6d6,A6          ; |192| 

$C$RL26:   ; CALL OCCURS {acosdp_v} {0}      ; |192| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12

           CALLP   .S2     allequal,B3
||         MVK     .S1     0x6d6,A4          ; |195| 

$C$RL27:   ; CALL OCCURS {allequal} {0}      ; |195| 

           CALLP   .S2     print_test_results,B3
||         MVK     .L1     0x4,A4            ; |196| 

$C$RL28:   ; CALL OCCURS {print_test_results} {0}  ; |196| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 16
           MVKL    .S1     cycle_counts+24,A3

           MVKH    .S1     cycle_counts+24,A3
||         ZERO    .L2     B4                ; |114| 
||         ZERO    .L1     A10               ; |114| 
||         ZERO    .D1     A11               ; |114| 

           MVC     .S2     B4,TSCL           ; |115| 
||         STDW    .D1T1   A11:A10,*A3       ; |114| 

           MVC     .S2     TSCL,B6           ; |116| 
           MVC     .S2     TSCH,B4           ; |116| 
           MVKL    .S1     t_start,A3

           MVKH    .S1     t_start,A3
||         MV      .L2     B4,B7             ; |116| 

           MVC     .S2     TSCL,B4           ; |117| 
||         STDW    .D1T2   B7:B6,*A3         ; |116| 

           MVC     .S2     TSCH,B5           ; |117| 
           SUBU    .L2     B4,B6,B9:B8       ; |117| 

           EXT     .S2     B9,24,24,B6       ; |117| 
||         SUB     .L2     B5,B7,B5          ; |117| 
||         MVKL    .S1     t_offset,A3

           ADD     .L2     B5,B6,B5          ; |117| 
||         MV      .S2     B8,B4             ; |117| 
||         MVKH    .S1     t_offset,A3

           MVKL    .S1     input,A3
||         STDW    .D1T2   B5:B4,*A3         ; |117| 

           CALL    .S2     gimme_random      ; |206| 
||         MVKH    .S1     input,A3

           LDW     .D1T1   *A3,A12           ; |206| 
||         MV      .L2X    A11,B12           ; |117| 
||         MVK     .S1     0x80,A13
||         ZERO    .L1     A5

           MV      .L2X    A11,B4            ; |206| 
||         ZERO    .S2     B5
||         SET     .S1     A5,0x1e,0x1e,A5
||         MV      .L1     A10,A4            ; |206| 

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains control code
;*----------------------------------------------------------------------------*
$C$L26:    
;          EXCLUSIVE CPU CYCLES: 3
           MVKH    .S2     0xbff00000,B5
           ADDKPC  .S2     $C$RL29,B3,1      ; |206| 
$C$RL29:   ; CALL OCCURS {gimme_random} {0}  ; |206| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 20
           ADD     .L1X    A12,B12,A3        ; |206| 

           STDW    .D1T1   A5:A4,*A3         ; |206| 
||         MVC     .S2     TSCL,B4           ; |122| 

           NOP             1

           MV      .L1X    B4,A28            ; |122| Define a twin register
||         MVC     .S2     TSCH,B6           ; |122| 

           ADD     .L2X    A12,B12,B4        ; |171| 
||         MVKL    .S2     0x667f3bcd,B8
||         ZERO    .L1     A31
||         MV      .S1     A10,A30           ; |169| 

           LDDW    .D2T2   *B4,B5:B4         ; |171| 
||         MVKL    .S2     0x3fe6a09e,B9

           SET     .S1     A31,0x14,0x1d,A31
           MV      .L1X    B6,A29            ; |122| 
           MVKH    .S2     0x667f3bcd,B8
           MVKH    .S2     0x3fe6a09e,B9
           ABSDP   .S2     B5:B4,B5:B4       ; |171| 
           DADD    .L2X    0,A5:A4,B21:B20   ; |210| 
           CMPGTDP .S2     B5:B4,B9:B8,B0    ; |171| 
           FMPYDP  .M2     B21:B20,B21:B20,B7:B6 ; |169| 

   [ B0]   BNOP    .S1     $C$L28,1          ; |171| 
||         ABSDP   .S2     B21:B20,B9:B8     ; |168| 

   [!B0]   ZERO    .L2     B9
|| [!B0]   MV      .S2X    A10,B8            ; |185| 

   [!B0]   SET     .S2     B9,0x15,0x1d,B9
           CMPGTDP .S2     B5:B4,B9:B8,B0    ; |185| 
           MV      .L2X    A12,B10           ; |171| 
           ; BRANCHCC OCCURS {$C$L28}        ; |171| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 6

   [ B0]   B       .S1     $C$L27            ; |185| 
|| [ B0]   FADDDP  .L2     B7:B6,B7:B6,B5:B4 ; |187| 

   [!B0]   CALL    .S1     pol_est_acosdp_i  ; |191| 

   [ B0]   MV      .S2     B8,B6             ; |187| 
|| [ B0]   CALL    .S1     pol_est_acosdp_i  ; |187| 

   [ B0]   MV      .L2X    A31,B7            ; |187| 
   [ B0]   FSUBDP  .L2     B7:B6,B5:B4,B5:B4 ; |187| 
           NOP             1
           ; BRANCHCC OCCURS {$C$L27}        ; |185| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 1

           DADD    .L1X    0,B5:B4,A5:A4     ; |191| 
||         ADDKPC  .S2     $C$RL30,B3,0      ; |191| 

$C$RL30:   ; CALL OCCURS {pol_est_acosdp_i} {0}  ; |191| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10

           ZERO    .L2     B5:B4             ; |195| 
||         MVKL    .S2     output+12,B31
||         MVKL    .S1     t_start,A3

           CMPLTDP .S2     B21:B20,B5:B4,B0  ; |195| 
||         MVKL    .S1     0x3ff921fb,A7

           MVKL    .S1     0x54442d18,A6

   [ B0]   ZERO    .L1     A31
||         MVKH    .S2     output+12,B31
|| [ B0]   ZERO    .D1     A30               ; |196| 
||         MVKH    .S1     0x3ff921fb,A7

   [ B0]   MVKH    .S1     0xbff00000,A31
||         LDW     .D2T2   *B31,B4           ; |210| 
||         B       .S2     $C$L32            ; |191| 

           FMPYDP  .M1     A31:A30,A5:A4,A5:A4 ; |210| 
           MVKH    .S1     0x54442d18,A6
           MVKH    .S1     t_start,A3
           STDW    .D1T1   A29:A28,*A3

           FSUBDP  .L1     A7:A6,A5:A4,A5:A4 ; |210| 
||         ADD     .L2     B12,B4,B4         ; |210| 

           ; BRANCH OCCURS {$C$L32}          ; |191| 
;** --------------------------------------------------------------------------*
$C$L27:    
;          EXCLUSIVE CPU CYCLES: 2
           ADDKPC  .S2     $C$RL31,B3,0      ; |187| 
           DADD    .L1X    0,B5:B4,A5:A4     ; |187| 
$C$RL31:   ; CALL OCCURS {pol_est_acosdp_i} {0}  ; |187| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 8

           MVKL    .S1     0x54442d18,A6
||         ZERO    .L2     B5
||         MV      .D2X    A10,B4            ; |188| 
||         MVKL    .S2     output+12,B31

           MVKL    .S1     0x3ff921fb,A7
||         SET     .S2     B5,0x15,0x1d,B5

           MVKH    .S1     0x54442d18,A6
||         B       .S2     $C$L30            ; |189| 

           MVKH    .S1     0x3ff921fb,A7
||         MVKH    .S2     output+12,B31

           MVKL    .S1     t_start,A3
||         FSUBDP  .L1     A7:A6,A5:A4,A5:A4 ; |188| 

           MVKL    .S1     0x54442d18,A6
           MVKL    .S1     0x3ff921fb,A7

           MVKH    .S1     t_start,A3
||         FMPYDP  .M1X    B5:B4,A5:A4,A5:A4 ; |188| 
||         ZERO    .L2     B5:B4             ; |195| 

           ; BRANCH OCCURS {$C$L30}          ; |189| 
;** --------------------------------------------------------------------------*
$C$L28:    
;          EXCLUSIVE CPU CYCLES: 12
           MVKL    .S2     0x3febb67a,B5
           MVKL    .S2     0xe8584caa,B4
           MVKH    .S2     0x3febb67a,B5
           MVKH    .S2     0xe8584caa,B4
           CMPGTDP .S2     B9:B8,B5:B4,B0    ; |172| 
           MV      .L2X    A31,B5

   [!B0]   B       .S1     $C$L29            ; |172| 
||         MV      .L2X    A10,B4

           FSUBDP  .L2     B5:B4,B7:B6,B9:B8 ; |67| 
           NOP             2

           RSQRDP  .S2     B9:B8,B5:B4       ; |67| 
|| [!B0]   MV      .L2X    A10,B8            ; |181| 

   [!B0]   FADDDP  .L2     B7:B6,B7:B6,B5:B4 ; |181| 
|| [!B0]   MV      .D2X    A31,B9

           ; BRANCHCC OCCURS {$C$L29}        ; |172| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 101

           MV      .L2X    A10,B16           ; |67| 
||         FMPYDP  .M2     B5:B4,B9:B8,B7:B6 ; |67| 

           ZERO    .S2     B17
           ZERO    .L2     B31
           ZERO    .L1     A7
           FMPYDP  .M2     B5:B4,B7:B6,B7:B6 ; |67| 
           MV      .L1     A30,A4            ; |67| 
           ZERO    .L1     A5
           SET     .S1     A5,0x15,0x1d,A5
           SET     .S2     B17,0x13,0x1d,B17
           FMPYDP  .M1X    A5:A4,B7:B6,A5:A4 ; |67| 
           ZERO    .L1     A27
           MV      .L1     A30,A6            ; |67| 
           SET     .S1     A7,0x13,0x1d,A7
           FSUBDP  .L1     A7:A6,A5:A4,A5:A4 ; |67| 
           MVKL    .S2     0x20991e58,B28
           ZERO    .S1     A26
           FMPYDP  .M1X    B5:B4,A5:A4,A5:A4 ; |67| 
           MVKL    .S2     0x3fc55555,B29
           MVKL    .S1     0x3f8a6331,A17
           MVKL    .S2     0x726cfcda,B26
           MVKL    .S1     0xb088e0d4,A16
           FMPYDP  .M2X    A5:A4,B9:B8,B5:B4 ; |67| 
           MVKL    .S2     0x3f92080d,B27
           MVKH    .S1     0x3f8a6331,A17
           MVKH    .S2     0x20991e58,B28
           MVKH    .S1     0xb088e0d4,A16
           FMPYDP  .M1X    A5:A4,B5:B4,A7:A6 ; |67| 
           MV      .L2X    A10,B4            ; |67| 
           SET     .S2     B31,0x15,0x1d,B5
           MVKL    .S1     t_start,A3
           FMPYDP  .M1X    B5:B4,A7:A6,A9:A8 ; |67| 
           MVKH    .S2     0x3fc55555,B29
           MV      .L1     A30,A6            ; |67| 
           SET     .S1     A27,0x13,0x1d,A7
           FSUBDP  .L1     A7:A6,A9:A8,A7:A6 ; |67| 
           MVKH    .S1     t_start,A3
           MVKH    .S2     0x726cfcda,B26
           FMPYDP  .M1     A5:A4,A7:A6,A5:A4 ; |67| 
           MVKH    .S2     0x3f92080d,B27
           MVKL    .S2     0xcead24b0,B24
           MVKL    .S2     0x3f96c6e8,B25
           MVKH    .S2     0xcead24b0,B24
           FMPYDP  .M2X    A5:A4,B9:B8,B5:B4 ; |67| 
           MVKH    .S2     0x3f96c6e8,B25
           MVKL    .S1     0x3fb3333c,A9
           MVKL    .S1     0x67ff42f2,A8
           FMPYDP  .M2X    A5:A4,B5:B4,B7:B6 ; |67| 
           MV      .L1     A30,A4            ; |67| 
           SET     .S1     A26,0x15,0x1d,A5
           MVKH    .S1     0x3fb3333c,A9
           FMPYDP  .M2X    A5:A4,B7:B6,B7:B6 ; |67| 
           MVKL    .S1     0x3f8e21a3,A7
           MVKL    .S1     0xc62a3037,A6
           MVKH    .S1     0x3f8e21a3,A7
           FSUBDP  .L2     B17:B16,B7:B6,B7:B6 ; |67| 
           MVKH    .S1     0xc62a3037,A6
           ZERO    .L1     A5:A4             ; |69| 
           FMPYDP  .M2     B5:B4,B7:B6,B7:B6 ; |67| 
           MVKH    .S1     0x67ff42f2,A8
           CMPGTDP .S2X    B9:B8,A5:A4,B0    ; |69| 
           MVKL    .S1     0x2d6e8923,A4
   [!B0]   ZERO    .L2     B7:B6             ; |70| 
           FMPYDP  .M2     B7:B6,B7:B6,B17:B16 ; |176| 
           MVKL    .S1     0x3f9f218e,A5
           MVKH    .S1     0x2d6e8923,A4
           MVKH    .S1     0x3f9f218e,A5
           FMPYDP  .M2     B17:B16,B17:B16,B9:B8 ; |176| 

           FMPYDP  .M1X    A7:A6,B17:B16,A19:A18 ; |176| 
||         MVKL    .S1     0x3fa6daed,A7

           MVKL    .S1     0x7e834e0f,A6
           MVKH    .S1     0x3fa6daed,A7

           FMPYDP  .M2     B9:B8,B17:B16,B5:B4 ; |176| 
||         MVKH    .S1     0x7e834e0f,A6

           FMPYDP  .M1X    A17:A16,B9:B8,A17:A16 ; |176| 
           FMPYDP  .M2     B9:B8,B9:B8,B19:B18 ; |176| 
           FMPYDP  .M1X    A9:A8,B9:B8,A9:A8 ; |176| 
           FMPYDP  .M2     B9:B8,B5:B4,B23:B22 ; |176| 

           FADDDP  .L1     A19:A18,A17:A16,A17:A16 ; |176| 
||         FMPYDP  .M1X    A7:A6,B5:B4,A7:A6 ; |176| 

           FMPYDP  .M2     B9:B8,B19:B18,B5:B4 ; |176| 
           FMPYDP  .M1X    A5:A4,B19:B18,A5:A4 ; |176| 
           FMPYDP  .M2     B29:B28,B17:B16,B9:B8 ; |176| 
           FADDDP  .L2X    B27:B26,A17:A16,B17:B16 ; |176| 
           FMPYDP  .M2     B25:B24,B23:B22,B19:B18 ; |176| 
           FADDDP  .L1     A7:A6,A5:A4,A5:A4 ; |176| 
           FMPYDP  .M2     B5:B4,B17:B16,B5:B4 ; |176| 
           FADDDP  .L2X    B9:B8,A9:A8,B9:B8 ; |176| 
           STDW    .D1T1   A29:A28,*A3
           MVKL    .S2     output+12,B31

           FADDDP  .L2     B19:B18,B5:B4,B9:B8 ; |176| 
||         FADDDP  .S2X    B9:B8,A5:A4,B5:B4 ; |176| 

           MVKH    .S2     output+12,B31
           MVKL    .S1     0x3ff921fb,A7
           FADDDP  .L2     B9:B8,B5:B4,B5:B4 ; |176| 
           MVKL    .S1     0x54442d18,A6
           MVKH    .S1     0x3ff921fb,A7
           FMPYDP  .M2     B7:B6,B5:B4,B5:B4 ; |176| 
           MVKH    .S1     0x54442d18,A6
           MVKL    .S1     0x54442d18,A4
           B       .S1     $C$L31            ; |177| 
           FADDDP  .L2     B7:B6,B5:B4,B5:B4 ; |176| 
           MVKL    .S1     0x3ff921fb,A5
           MVKH    .S1     0x54442d18,A4
           MVKH    .S1     0x3ff921fb,A5

           FSUBDP  .L1X    A5:A4,B5:B4,A5:A4 ; |176| 
||         ZERO    .L2     B5:B4             ; |195| 

           ; BRANCH OCCURS {$C$L31}          ; |177| 
;** --------------------------------------------------------------------------*
$C$L29:    
;          EXCLUSIVE CPU CYCLES: 48

           MVKL    .S1     0x3f8a6331,A9
||         MVKL    .S2     0x20991e58,B26

           MVKL    .S1     0xb088e0d4,A8
||         MVKL    .S2     0x3fc55555,B27

           FSUBDP  .L2     B5:B4,B9:B8,B9:B8 ; |181| 
||         MVKL    .S1     0xc62a3037,A4
||         MVKL    .S2     0x726cfcda,B30

           MVKL    .S1     0x3f8e21a3,A5
||         MVKL    .S2     0x3f92080d,B31

           MVKH    .S1     0x3f8a6331,A9
||         MVKH    .S2     0x20991e58,B26

           FMPYDP  .M2     B9:B8,B9:B8,B7:B6 ; |181| 
||         MVKH    .S1     0xb088e0d4,A8
||         MVKH    .S2     0x3fc55555,B27

           MVKH    .S1     0xc62a3037,A4
||         MVKH    .S2     0x726cfcda,B30

           MVKH    .S1     0x3f8e21a3,A5
||         MVKH    .S2     0x3f92080d,B31

           MVKL    .S1     0x7e834e0f,A6
||         MVKL    .S2     0xcead24b0,B28

           FMPYDP  .M2     B7:B6,B7:B6,B5:B4 ; |181| 
||         MVKL    .S1     0x3fa6daed,A7
||         MVKL    .S2     0x3f96c6e8,B29

           FMPYDP  .M1X    A5:A4,B7:B6,A19:A18 ; |181| 
||         MVKL    .S1     0x2d6e8923,A4
||         MVKH    .S2     0xcead24b0,B28

           MVKL    .S1     0x3f9f218e,A5
||         MVKH    .S2     0x3f96c6e8,B29

           MVKL    .S1     0x67ff42f2,A16

           FMPYDP  .M2     B5:B4,B7:B6,B17:B16 ; |181| 
||         MVKL    .S1     0x3fb3333c,A17

           FMPYDP  .M1X    A9:A8,B5:B4,A9:A8 ; |181| 
||         FMPYDP  .M2     B5:B4,B5:B4,B19:B18 ; |181| 
||         MVKH    .S1     0x2d6e8923,A4

           MVKH    .S1     0x3f9f218e,A5
           MVKH    .S1     0x7e834e0f,A6

           MVKH    .S1     0x3fa6daed,A7
||         FMPYDP  .M2     B5:B4,B17:B16,B25:B24 ; |181| 

           FADDDP  .L1     A19:A18,A9:A8,A9:A8 ; |181| 
||         MVKH    .S1     0x67ff42f2,A16
||         FMPYDP  .M1X    A7:A6,B17:B16,A7:A6 ; |181| 
||         FMPYDP  .M2     B5:B4,B19:B18,B17:B16 ; |181| 

           MVKH    .S1     0x3fb3333c,A17
           FMPYDP  .M1X    A5:A4,B19:B18,A5:A4 ; |181| 
           FMPYDP  .M2X    A17:A16,B5:B4,B23:B22 ; |181| 

           FMPYDP  .M2     B27:B26,B7:B6,B5:B4 ; |181| 
||         FADDDP  .L2X    B31:B30,A9:A8,B7:B6 ; |181| 

           FMPYDP  .M2     B29:B28,B25:B24,B19:B18 ; |181| 
           FADDDP  .L1     A7:A6,A5:A4,A5:A4 ; |181| 
           FMPYDP  .M2     B17:B16,B7:B6,B7:B6 ; |181| 
           FADDDP  .L2     B5:B4,B23:B22,B5:B4 ; |181| 
           ZERO    .L2     B2
           MVKL    .S1     t_start,A3

           FADDDP  .L2     B19:B18,B7:B6,B5:B4 ; |181| 
||         FADDDP  .S2X    B5:B4,A5:A4,B7:B6 ; |181| 

           MVKH    .S1     t_start,A3
           MVKL    .S1     0x3ff921fb,A7
           FADDDP  .L2     B5:B4,B7:B6,B5:B4 ; |181| 
           MVKL    .S2     output+12,B31
           MVKH    .S2     output+12,B31
           FMPYDP  .M2     B9:B8,B5:B4,B5:B4 ; |181| 
           MVKL    .S1     0x54442d18,A6
           MV      .L2X    A10,B6            ; |181| 
           SET     .S2     B2,0x15,0x1d,B7
           FADDDP  .L2     B9:B8,B5:B4,B5:B4 ; |181| 
           MVKL    .S1     0x54442d18,A4
           MVKL    .S1     0x3fe921fb,A5
           FMPYDP  .M2     B7:B6,B5:B4,B5:B4 ; |181| 
           MVKH    .S1     0x54442d18,A4
           MVKH    .S1     0x3fe921fb,A5
           NOP             2

           FADDDP  .L1X    A5:A4,B5:B4,A5:A4 ; |181| 
||         ZERO    .L2     B5:B4             ; |195| 

;** --------------------------------------------------------------------------*
$C$L30:    
;          EXCLUSIVE CPU CYCLES: 2
           MVKH    .S1     0x3ff921fb,A7

           STDW    .D1T1   A29:A28,*A3
||         MVKH    .S1     0x54442d18,A6

;** --------------------------------------------------------------------------*
$C$L31:    
;          EXCLUSIVE CPU CYCLES: 9
           CMPLTDP .S2     B21:B20,B5:B4,B0  ; |195| 
           LDW     .D2T2   *B31,B4           ; |210| 
   [ B0]   ZERO    .L1     A31

   [ B0]   MVKH    .S1     0xbff00000,A31
|| [ B0]   ZERO    .L1     A30               ; |196| 

           FMPYDP  .M1     A31:A30,A5:A4,A5:A4 ; |210| 
           NOP             3

           FSUBDP  .L1     A7:A6,A5:A4,A5:A4 ; |210| 
||         ADD     .L2     B12,B4,B4         ; |210| 

;** --------------------------------------------------------------------------*
$C$L32:    
;          EXCLUSIVE CPU CYCLES: 19
           NOP             2

           STDW    .D2T1   A5:A4,*B4         ; |210| 
||         MVC     .S2     TSCL,B16          ; |128| 

           MVC     .S2     TSCH,B4           ; |128| 

           MVKL    .S1     t_offset,A15
||         MVKL    .S2     cycle_counts+24,B5
||         SUB     .L1     A13,1,A0          ; |204| 
||         MV      .L2     B4,B17            ; |128| 
||         ADD     .D2     8,B12,B12         ; |204| 
||         SUB     .D1     A13,1,A13         ; |204| 

           MVKH    .S1     t_offset,A15
||         MVKH    .S2     cycle_counts+24,B5

           MVKL    .S2     t_stop,B8
||         LDDW    .D1T1   *A15,A7:A6        ; |130| 

           LDDW    .D2T2   *B5,B7:B6         ; |130| 
           MVKH    .S2     t_stop,B8
           MV      .L1X    B5,A14            ; |128| 
           STDW    .D2T2   B17:B16,*B8       ; |128| 
           ADDU    .L1     A6,A28,A5:A4      ; |130| 

           ADD     .L1     A5,A7,A3          ; |130| 
|| [ A0]   ZERO    .S1     A5

           ADD     .L1     A3,A29,A3         ; |130| 
|| [ A0]   B       .S2     $C$L26            ; |204| 
||         SUBU    .L2X    B16,A4,B5:B4      ; |130| 
|| [ A0]   SET     .S1     A5,0x1e,0x1e,A5
|| [ A0]   MV      .D1     A10,A4            ; |206| 

           EXT     .S2     B5,24,24,B9       ; |130| 
||         ADDU    .L2     B6,B4,B5:B4       ; |130| 

           SUB     .L2X    B17,A3,B6         ; |130| 
|| [ A0]   MVKL    .S1     input,A3
||         ADD     .S2     B5,B7,B5          ; |130| 

   [ A0]   CALL    .S2     gimme_random      ; |206| 
|| [ A0]   MVKH    .S1     input,A3
||         ADD     .L2     B6,B9,B6          ; |130| 

   [ A0]   LDW     .D1T1   *A3,A12           ; |206| 
||         ADD     .L2     B5,B6,B5          ; |130| 

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
||         STDW    .D1T2   B5:B4,*A14        ; |130| 
|| [ A0]   ZERO    .L2     B5
|| [ A0]   MV      .S2X    A11,B4            ; |206| 

           ; BRANCHCC OCCURS {$C$L26}        ; |204| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *A14,A5:A4        ; |135| 
           ADDKPC  .S2     $C$RL32,B3,3      ; |135| 
$C$RL32:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
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

$C$RL33:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 13
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
           MVKL    .S1     output,A3

           MVKH    .S1     output,A3
||         SUBU    .L2     B6,B5,B7:B6       ; |117| 

           EXT     .S2     B7,24,24,B5       ; |117| 
||         SUB     .L2     B8,B4,B4          ; |117| 

           ADD     .L2     B4,B5,B7          ; |117| 
||         MV      .S2X    A3,B9             ; |117| 
||         MVK     .S1     0x80,A31

           MV      .L1     A31,A15           ; |117| 
||         STDW    .D1T2   B7:B6,*A15        ; |117| 
||         LDW     .D2T1   *B9,A14
||         MV      .S1X    B10,A12

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L33:    
;          EXCLUSIVE CPU CYCLES: 8
           MVC     .S2     TSCL,B4           ; |122| 
           MVC     .S2     TSCH,B5           ; |122| 
           CALL    .S1     acos              ; |219| 
           LDDW    .D1T1   *A12++,A5:A4      ; |219| 
           MVKL    .S2     t_start,B6
           MVKH    .S2     t_start,B6
           STDW    .D2T2   B5:B4,*B6         ; |122| 
           ADDKPC  .S2     $C$RL34,B3,0      ; |219| 
$C$RL34:   ; CALL OCCURS {acos} {0}          ; |219| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 20

           STDW    .D1T1   A5:A4,*A14++      ; |219| 
||         MVC     .S2     TSCL,B8           ; |128| 

           MVC     .S2     TSCH,B4           ; |128| 

           MVKL    .S1     t_start,A3
||         MVKL    .S2     t_offset,B10
||         MV      .L2     B4,B9             ; |128| 
||         SUB     .L1     A15,1,A0          ; |217| 
||         SUB     .D1     A15,1,A15         ; |217| 

           MVKH    .S1     t_start,A3
||         MVKH    .S2     t_offset,B10

           LDDW    .D1T1   *A3,A7:A6         ; |130| 
||         LDDW    .D2T2   *B10,B7:B6        ; |130| 
||         MVKL    .S1     cycle_counts,A31

           MVKH    .S1     cycle_counts,A31
           MVKL    .S1     t_stop,A30
           MVKH    .S1     t_stop,A30
           STDW    .D1T2   B9:B8,*A30        ; |128| 

           ADDU    .L1X    B6,A6,A5:A4       ; |130| 
||         MVKL    .S2     cycle_counts,B6

           ADD     .L1X    A5,B7,A6          ; |130| 
||         MVKH    .S2     cycle_counts,B6

           SUBU    .L2X    B8,A4,B5:B4       ; |130| 
||         LDDW    .D1T1   *A31,A5:A4        ; |130| 
||         ADD     .L1     A6,A7,A6          ; |130| 

           EXT     .S2     B5,24,24,B5       ; |130| 
|| [!A0]   MV      .L1X    B6,A14

           SUB     .L2X    B9,A6,B31         ; |130| 

   [ A0]   BNOP    .S1     $C$L33,1          ; |217| 
||         ADD     .L2     B31,B5,B5         ; |130| 

           ADDU    .L2X    A4,B4,B17:B16     ; |130| 
           ADD     .L2X    B17,A5,B4         ; |130| 
           ADD     .L2     B4,B5,B17         ; |130| 

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
||         STDW    .D2T2   B17:B16,*B6       ; |130| 

           ; BRANCHCC OCCURS {$C$L33}        ; |217| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *A14,A5:A4        ; |135| 
           ADDKPC  .S2     $C$RL35,B3,3      ; |135| 
$C$RL35:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
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

$C$RL36:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10

           STDW    .D1T1   A11:A10,*+A14(16) ; |114| 
||         MV      .L2X    A10,B4            ; |114| 

           MVC     .S2     B4,TSCL           ; |115| 
||         STDW    .D1T1   A5:A4,*A14        ; |135| 

           MVC     .S2     TSCL,B4           ; |116| 
           MVC     .S2     TSCH,B6           ; |116| 
           MVC     .S2     TSCL,B5           ; |117| 
           MVC     .S2     TSCH,B7           ; |117| 
           SUBU    .L2     B5,B4,B5:B4       ; |117| 

           EXT     .S2     B5,24,24,B6       ; |117| 
||         SUB     .L2     B7,B6,B5          ; |117| 
||         MVK     .S1     0x80,A3

           ADD     .L2     B5,B6,B5          ; |117| 

           MV      .L2X    A3,B10            ; |117| 
||         STDW    .D2T2   B5:B4,*B10        ; |117| 

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L34:    
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
||         CALL    .S1     acosdp_c          ; |228| 

           LDDW    .D1T1   *A3,A5:A4         ; |228| 
           ADDKPC  .S2     $C$RL37,B3,3      ; |228| 
$C$RL37:   ; CALL OCCURS {acosdp_c} {0}      ; |228| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 24
           MVKL    .S2     output+8,B4
           MVKH    .S2     output+8,B4
           LDW     .D2T2   *B4,B4            ; |228| 
           NOP             4
           ADD     .L1X    A12,B4,A3         ; |228| 

           STDW    .D1T1   A5:A4,*A3         ; |228| 
||         MVC     .S2     TSCL,B16          ; |128| 

           MVC     .S2     TSCH,B4           ; |128| 

           MVKL    .S1     t_offset,A15
||         MVKL    .S2     t_start,B5
||         ADDAD   .D1     A14,2,A3
||         SUB     .L1X    B10,1,A0          ; |226| 
||         MV      .L2     B4,B17            ; |128| 
||         SUB     .D2     B10,1,B10         ; |226| 

           MVKH    .S1     t_offset,A15
||         MVKH    .S2     t_start,B5
||         LDDW    .D1T1   *A3,A7:A6         ; |130| 
|| [!A0]   MV      .L1     A14,A3

           MVKL    .S1     t_stop,A31
||         LDDW    .D1T1   *A15,A5:A4        ; |130| 
||         LDDW    .D2T2   *B5,B9:B8         ; |130| 

           MVK     .S2     16,B12
           MVKH    .S1     t_stop,A31
           ADD     .L2X    A14,B12,B12
           STDW    .D1T2   B17:B16,*A31      ; |128| 
           ADDU    .L2X    A4,B8,B7:B6       ; |130| 

   [ A0]   B       .S1     $C$L34            ; |226| 
||         SUBU    .L2     B16,B6,B5:B4      ; |130| 
||         ADD     .S2X    B7,A5,B6          ; |130| 

           ADD     .D2     B6,B9,B6          ; |130| 
||         EXT     .S2     B5,24,24,B7       ; |130| 
||         ADDU    .L2X    A6,B4,B5:B4       ; |130| 

           SUB     .L2     B17,B6,B6         ; |130| 
||         ADD     .S2X    B5,A7,B5          ; |130| 

           ADD     .L2     B6,B7,B6          ; |130| 
           ADD     .L2     B5,B6,B5          ; |130| 

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
||         STDW    .D2T2   B5:B4,*B12        ; |130| 
||         ADD     .L1     8,A12,A12         ; |226| 

           ; BRANCHCC OCCURS {$C$L34}        ; |226| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *+A3(16),A5:A4    ; |135| 
           ADDKPC  .S2     $C$RL38,B3,3      ; |135| 
$C$RL38:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
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

$C$RL39:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10

           MV      .L1     A14,A3            ; |135| 
||         STDW    .D2T1   A5:A4,*B12        ; |135| 
||         MV      .L2X    A10,B4            ; |114| 

           MVC     .S2     B4,TSCL           ; |115| 
||         STDW    .D1T1   A11:A10,*+A3(8)   ; |114| 

           MVC     .S2     TSCL,B5           ; |116| 
           MVC     .S2     TSCH,B4           ; |116| 
           MVC     .S2     TSCL,B6           ; |117| 
           MVC     .S2     TSCH,B8           ; |117| 
           SUBU    .L2     B6,B5,B7:B6       ; |117| 

           EXT     .S2     B7,24,24,B5       ; |117| 
||         SUB     .L2     B8,B4,B4          ; |117| 
||         MVK     .S1     0x80,A3

           ADD     .L2     B4,B5,B7          ; |117| 

           STDW    .D1T2   B7:B6,*A15        ; |117| 
||         MV      .L2X    A3,B13            ; |117| 

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L35:    
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
||         CALL    .S1     acosdp            ; |237| 

           LDDW    .D1T1   *A3,A5:A4         ; |237| 
           ADDKPC  .S2     $C$RL40,B3,3      ; |237| 
$C$RL40:   ; CALL OCCURS {acosdp} {0}        ; |237| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 24
           MVKL    .S2     output+4,B4
           MVKH    .S2     output+4,B4
           LDW     .D2T2   *B4,B4            ; |237| 
           NOP             4
           ADD     .L1X    A12,B4,A3         ; |237| 

           STDW    .D1T1   A5:A4,*A3         ; |237| 
||         MVC     .S2     TSCL,B8           ; |128| 

           MVC     .S2     TSCH,B9           ; |128| 

           MVKL    .S2     t_start,B12
||         MVKL    .S1     t_offset,A14
||         SUB     .L1X    B13,1,A0          ; |235| 
||         ADD     .D1     8,A12,A12         ; |235| 
||         SUB     .L2     B13,1,B13         ; |235| 

           MVKH    .S2     t_start,B12
||         MVKH    .S1     t_offset,A14

           LDDW    .D1T1   *A14,A5:A4        ; |130| 
||         LDDW    .D2T2   *B12,B7:B6        ; |130| 
||         MVKL    .S1     cycle_counts+8,A3

           MVKH    .S1     cycle_counts+8,A3

           LDDW    .D1T1   *A3,A7:A6         ; |130| 
||         MVKL    .S1     t_stop,A15

           MV      .L2X    A3,B10            ; |128| 
||         MVKH    .S1     t_stop,A15

   [!A0]   MVKL    .S1     cycle_counts,A3
||         STDW    .D1T2   B9:B8,*A15        ; |128| 

           ADDU    .L2X    A4,B6,B5:B4       ; |130| 
|| [!A0]   MVKH    .S1     cycle_counts,A3

           ADD     .S2X    B5,A5,B6          ; |130| 
|| [ A0]   B       .S1     $C$L35            ; |235| 
||         SUBU    .L2     B8,B4,B5:B4       ; |130| 

           ADD     .L2     B6,B7,B6          ; |130| 
||         EXT     .S2     B5,24,24,B5       ; |130| 

           SUB     .S2     B9,B6,B4          ; |130| 
||         ADDU    .L2X    A6,B4,B7:B6       ; |130| 

           ADD     .L2     B4,B5,B5          ; |130| 
||         ADD     .S2X    B7,A7,B4          ; |130| 

           ADD     .L2     B4,B5,B7          ; |130| 

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
||         STDW    .D2T2   B7:B6,*B10        ; |130| 

           ; BRANCHCC OCCURS {$C$L35}        ; |235| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *+A3(8),A5:A4     ; |135| 
           ADDKPC  .S2     $C$RL41,B3,3      ; |135| 
$C$RL41:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
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

$C$RL42:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
           MV      .L1X    B10,A12           ; |135| 
           SUBAW   .D1     A12,2,A3

           MV      .L2X    A10,B4            ; |114| 
||         STDW    .D1T1   A5:A4,*A12        ; |135| 

           STDW    .D1T1   A11:A10,*+A3(32)  ; |114| 
||         MVC     .S2     B4,TSCL           ; |115| 

           MVC     .S2     TSCL,B8           ; |116| 
           MVC     .S2     TSCH,B4           ; |116| 
           MV      .L2     B4,B9             ; |116| 

           STDW    .D2T2   B9:B8,*B12        ; |116| 
||         MVC     .S2     TSCL,B4           ; |117| 

           MVC     .S2     TSCH,B5           ; |117| 

           MVKL    .S1     input,A3
||         SUBU    .L2     B4,B8,B7:B6       ; |117| 

           MVKH    .S1     input,A3
||         EXT     .S2     B7,24,24,B7       ; |117| 
||         SUB     .L2     B5,B9,B5          ; |117| 

           LDW     .D1T1   *A3,A4            ; |244| 
||         LDW     .D2T2   *B11,B4           ; |244| 
||         ADD     .L2     B5,B7,B7          ; |117| 

           CALLP   .S2     acosdp_v,B3
||         STDW    .D1T2   B7:B6,*A14        ; |117| 
||         MVK     .S1     0x80,A6           ; |244| 

$C$RL43:   ; CALL OCCURS {acosdp_v} {0}      ; |244| 
           MVC     .S2     TSCL,B8           ; |128| 
           MVC     .S2     TSCH,B6           ; |128| 

           LDDW    .D1T1   *A14,A7:A6        ; |130| 
||         LDDW    .D2T2   *B12,B5:B4        ; |130| 

           MVK     .S2     24,B10
           ADD     .L2X    A12,B10,B10
           MV      .L2     B6,B9             ; |128| 
           LDDW    .D2T2   *B10,B7:B6        ; |130| 
           ADDU    .L1X    A6,B4,A5:A4       ; |130| 
           ADD     .L1     A5,A7,A3          ; |130| 
           SUBU    .L1X    B8,A4,A5:A4       ; |130| 

           ADD     .L2X    A3,B5,B4          ; |130| 
||         EXT     .S1     A5,24,24,A3       ; |130| 

           ADDU    .L1X    B6,A4,A7:A6       ; |130| 
||         SUB     .L2     B9,B4,B4          ; |130| 

           ADD     .L2X    B4,A3,B5          ; |130| 
           ADD     .L2X    A7,B7,B4          ; |130| 

           ADD     .L2     B4,B5,B7          ; |130| 
||         MV      .S2X    A6,B6             ; |130| 

           STDW    .D1T2   B9:B8,*A15        ; |128| 

           CALLP   .S2     __c6xabi_fltllif,B3
||         DADD    .L1X    0,B7:B6,A5:A4     ; |130| 

$C$RL44:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |130| 
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |130| 
           MV      .L1     A11,A12           ; |130| 
           NOP             2
           SPDP    .S1     A3,A5:A4          ; |130| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A13:A12,A5:A4,A5:A4 ; |130| 

$C$RL45:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |130| 

           CALLP   .S2     allequal,B3
||         STDW    .D2T1   A5:A4,*B10        ; |130| 
||         MVK     .S1     0x80,A4           ; |249| 

$C$RL46:   ; CALL OCCURS {allequal} {0}      ; |249| 

           CALLP   .S2     print_test_results,B3
||         MVK     .L1     0x2,A4            ; |250| 

$C$RL47:   ; CALL OCCURS {print_test_results} {0}  ; |250| 
           MVKL    .S1     $C$SL2+0,A3
           MVKH    .S1     $C$SL2+0,A3

           CALLP   .S2     printf,B3
||         STW     .D2T1   A3,*+SP(4)        ; |251| 

$C$RL48:   ; CALL OCCURS {printf} {0}        ; |251| 
           MVKL    .S1     $C$SL3+0,A3
           MVKH    .S1     $C$SL3+0,A3

           CALLP   .S2     printf,B3
||         STW     .D2T1   A3,*+SP(4)        ; |251| 

$C$RL49:   ; CALL OCCURS {printf} {0}        ; |251| 
           MVKL    .S1     $C$SL1+0,A10
           MVKH    .S1     $C$SL1+0,A10

           CALLP   .S2     print_profile_results,B3
||         MV      .L1     A10,A4            ; |258| 

$C$RL50:   ; CALL OCCURS {print_profile_results} {0}  ; |258| 

           CALLP   .S2     print_memory_results,B3
||         MV      .L1     A10,A4            ; |261| 

$C$RL51:   ; CALL OCCURS {print_memory_results} {0}  ; |261| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 11
           LDW     .D2T2   *++SP(16),B3      ; |262| 
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
$C$SL1:	.string	"acosDP",0
$C$SL2:	.string	"----------------------------------------",0
$C$SL3:	.string	"----------------------------------------",10,0
;*****************************************************************************
;* UNDEFINED EXTERNAL REFERENCES                                             *
;*****************************************************************************
	.global	printf
	.global	acos
	.global	driver_init
	.global	print_profile_results
	.global	print_memory_results
	.global	print_test_results
	.global	gimme_random
	.global	isequal
	.global	acosdp_c
	.global	acosdp
	.global	acosdp_v
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
