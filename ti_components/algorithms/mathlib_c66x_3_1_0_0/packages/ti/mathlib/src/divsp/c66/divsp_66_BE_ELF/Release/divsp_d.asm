;******************************************************************************
;* TMS320C6x C/C++ Codegen                                          PC v7.4.2 *
;* Date/Time created: Mon Nov 04 22:32:30 2013                                *
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
	.elfsym	a,SYM_SIZE(804)
a:
	.word	040141102h		; a[0] @ 0
	.word	03ff2cc5fh		; a[1] @ 32
	.word	0bd9afc70h		; a[2] @ 64
	.word	03f630582h		; a[3] @ 96
	.word	0bf7ae4ddh		; a[4] @ 128
	.word	03e3b0dc4h		; a[5] @ 160
	.word	0bf8ecb9eh		; a[6] @ 192
	.word	0bf862ef5h		; a[7] @ 224
	.word	03fd2c2fbh		; a[8] @ 256
	.word	0bf5d3b44h		; a[9] @ 288
	.word	0bf5a521eh		; a[10] @ 320
	.word	0bff8f7e8h		; a[11] @ 352
	.word	0c028e5cbh		; a[12] @ 384
	.word	03f05aedch		; a[13] @ 416
	.word	040349a02h		; a[14] @ 448
	.word	0bf7b0dd5h		; a[15] @ 480
	.word	0c0489c2fh		; a[16] @ 512
	.word	0bff40f1fh		; a[17] @ 544
	.word	0c0148a69h		; a[18] @ 576
	.word	03f837bf8h		; a[19] @ 608
	.word	04034b16ah		; a[20] @ 640
	.word	04028e5cbh		; a[21] @ 672
	.word	03f9052a0h		; a[22] @ 704
	.word	03facbc6eh		; a[23] @ 736
	.word	0c03a6b74h		; a[24] @ 768
	.word	0bffb8b20h		; a[25] @ 800
	.word	0c0241c63h		; a[26] @ 832
	.word	03ff23fbeh		; a[27] @ 864
	.word	0c0139c36h		; a[28] @ 896
	.word	0c0086c78h		; a[29] @ 928
	.word	03ef8a5d2h		; a[30] @ 960
	.word	0402fff6ah		; a[31] @ 992
	.word	03ff56ed3h		; a[32] @ 1024
	.word	03fa84667h		; a[33] @ 1056
	.word	0c031e957h		; a[34] @ 1088
	.word	040101cabh		; a[35] @ 1120
	.word	0bf8a2045h		; a[36] @ 1152
	.word	0beee6efch		; a[37] @ 1184
	.word	0bff745cah		; a[38] @ 1216
	.word	0c043d863h		; a[39] @ 1248
	.word	03fb67eaeh		; a[40] @ 1280
	.word	03f4cd165h		; a[41] @ 1312
	.word	0bf7a76ceh		; a[42] @ 1344
	.word	03efca8aah		; a[43] @ 1376
	.word	03faf06b9h		; a[44] @ 1408
	.word	0bf8070b2h		; a[45] @ 1440
	.word	03f221c4bh		; a[46] @ 1472
	.word	0beb221cfh		; a[47] @ 1504
	.word	03fc89346h		; a[48] @ 1536
	.word	0bf90ac19h		; a[49] @ 1568
	.word	03fd57c03h		; a[50] @ 1600
	.word	0bfe72e3fh		; a[51] @ 1632
	.word	040421ccfh		; a[52] @ 1664
	.word	0c03e3049h		; a[53] @ 1696
	.word	0bf6c2573h		; a[54] @ 1728
	.word	0bfe252d7h		; a[55] @ 1760
	.word	0bf9ec3c7h		; a[56] @ 1792
	.word	03f7db67dh		; a[57] @ 1824
	.word	03f39a260h		; a[58] @ 1856
	.word	03d88180ah		; a[59] @ 1888
	.word	0bf990bffh		; a[60] @ 1920
	.word	0c01bdc68h		; a[61] @ 1952
	.word	03dae4367h		; a[62] @ 1984
	.word	0400d71deh		; a[63] @ 2016
	.word	0bf8b9257h		; a[64] @ 2048
	.word	0c0421635h		; a[65] @ 2080
	.word	03fb2897ch		; a[66] @ 2112
	.word	03fae65d8h		; a[67] @ 2144
	.word	0bf31ad8dh		; a[68] @ 2176
	.word	03fad5a88h		; a[69] @ 2208
	.word	03f60a26eh		; a[70] @ 2240
	.word	0bf8ef2bah		; a[71] @ 2272
	.word	0bfc515cah		; a[72] @ 2304
	.word	0bfbaacb1h		; a[73] @ 2336
	.word	0bf3b5b36h		; a[74] @ 2368
	.word	03efdd954h		; a[75] @ 2400
	.word	0bf1989ceh		; a[76] @ 2432
	.word	0be88f66eh		; a[77] @ 2464
	.word	03fee7a9fh		; a[78] @ 2496
	.word	0c0111941h		; a[79] @ 2528
	.word	0c03eecd0h		; a[80] @ 2560
	.word	03fe562adh		; a[81] @ 2592
	.word	0bf00c3a0h		; a[82] @ 2624
	.word	0bf7540c6h		; a[83] @ 2656
	.word	0c03a72fbh		; a[84] @ 2688
	.word	0be50031fh		; a[85] @ 2720
	.word	03e74f498h		; a[86] @ 2752
	.word	0bfa2acb6h		; a[87] @ 2784
	.word	0c02e7a83h		; a[88] @ 2816
	.word	0bec72cbah		; a[89] @ 2848
	.word	0c0135e0fh		; a[90] @ 2880
	.word	03fdea935h		; a[91] @ 2912
	.word	0be305af7h		; a[92] @ 2944
	.word	0bf5dd04ch		; a[93] @ 2976
	.word	0402c1e8bh		; a[94] @ 3008
	.word	0bfa5d41dh		; a[95] @ 3040
	.word	0bf8e9d33h		; a[96] @ 3072
	.word	03f270a01h		; a[97] @ 3104
	.word	0bf8076ech		; a[98] @ 3136
	.word	0c0223030h		; a[99] @ 3168
	.word	0bf1a6328h		; a[100] @ 3200
	.word	0bfbe071eh		; a[101] @ 3232
	.word	03e3d223ch		; a[102] @ 3264
	.word	0c01301bch		; a[103] @ 3296
	.word	0bfdd3c40h		; a[104] @ 3328
	.word	0c00ab180h		; a[105] @ 3360
	.word	0bf6a900bh		; a[106] @ 3392
	.word	0c02c477ah		; a[107] @ 3424
	.word	0c045ee9eh		; a[108] @ 3456
	.word	03ff38b66h		; a[109] @ 3488
	.word	0bf1da479h		; a[110] @ 3520
	.word	0bf9bbd79h		; a[111] @ 3552
	.word	03fa7f865h		; a[112] @ 3584
	.word	0be787322h		; a[113] @ 3616
	.word	0403f4496h		; a[114] @ 3648
	.word	04032c682h		; a[115] @ 3680
	.word	040408298h		; a[116] @ 3712
	.word	0c0220964h		; a[117] @ 3744
	.word	0c01f60f5h		; a[118] @ 3776
	.word	03ffe9ff0h		; a[119] @ 3808
	.word	0bfe982eeh		; a[120] @ 3840
	.word	0bf220d76h		; a[121] @ 3872
	.word	03dffd6bdh		; a[122] @ 3904
	.word	0be760cc6h		; a[123] @ 3936
	.word	0bc6c397ah		; a[124] @ 3968
	.word	03fdc80c7h		; a[125] @ 4000
	.word	03f9f5b94h		; a[126] @ 4032
	.word	0c00af55eh		; a[127] @ 4064
	.word	03f825607h		; a[128] @ 4096
	.word	0bf7bee44h		; a[129] @ 4128
	.word	03ff2a09eh		; a[130] @ 4160
	.word	04018840eh		; a[131] @ 4192
	.word	0bfcad2a3h		; a[132] @ 4224
	.word	04035b6a6h		; a[133] @ 4256
	.word	03fc177cfh		; a[134] @ 4288
	.word	0bf8d3ea5h		; a[135] @ 4320
	.word	03d0524b2h		; a[136] @ 4352
	.word	0c0083c8ch		; a[137] @ 4384
	.word	0c016f98ch		; a[138] @ 4416
	.word	0402d00e8h		; a[139] @ 4448
	.word	0bf0a48c2h		; a[140] @ 4480
	.word	0bfc5fabdh		; a[141] @ 4512
	.word	0bfa0f0c2h		; a[142] @ 4544
	.word	0400330b1h		; a[143] @ 4576
	.word	03f8cbab1h		; a[144] @ 4608
	.word	0bfd80afeh		; a[145] @ 4640
	.word	0bf9b0e88h		; a[146] @ 4672
	.word	040161731h		; a[147] @ 4704
	.word	03f989c3ch		; a[148] @ 4736
	.word	03ffb2fe6h		; a[149] @ 4768
	.word	0402be9b4h		; a[150] @ 4800
	.word	03f75626ah		; a[151] @ 4832
	.word	03f235413h		; a[152] @ 4864
	.word	0bef08c72h		; a[153] @ 4896
	.word	03f744441h		; a[154] @ 4928
	.word	0be8e0396h		; a[155] @ 4960
	.word	0bfc65bach		; a[156] @ 4992
	.word	0bfd93023h		; a[157] @ 5024
	.word	03f998784h		; a[158] @ 5056
	.word	0bfa2787ah		; a[159] @ 5088
	.word	0bfdf8dffh		; a[160] @ 5120
	.word	0c01c7b18h		; a[161] @ 5152
	.word	0403f5566h		; a[162] @ 5184
	.word	0402a6365h		; a[163] @ 5216
	.word	03fede744h		; a[164] @ 5248
	.word	03f78e526h		; a[165] @ 5280
	.word	0c00e17f3h		; a[166] @ 5312
	.word	03fdae686h		; a[167] @ 5344
	.word	04040e434h		; a[168] @ 5376
	.word	0c0049ee9h		; a[169] @ 5408
	.word	03f02cb32h		; a[170] @ 5440
	.word	0c03fd7d5h		; a[171] @ 5472
	.word	0bd39889dh		; a[172] @ 5504
	.word	03f973ab0h		; a[173] @ 5536
	.word	0bf5d45eeh		; a[174] @ 5568
	.word	03ecf53c9h		; a[175] @ 5600
	.word	03ff017e9h		; a[176] @ 5632
	.word	0403b70b0h		; a[177] @ 5664
	.word	0bfaa4494h		; a[178] @ 5696
	.word	0c046c3e3h		; a[179] @ 5728
	.word	0c037415ah		; a[180] @ 5760
	.word	0be4a1f08h		; a[181] @ 5792
	.word	0401a8b1dh		; a[182] @ 5824
	.word	03f8e0b51h		; a[183] @ 5856
	.word	0c0192808h		; a[184] @ 5888
	.word	0bf407130h		; a[185] @ 5920
	.word	0bf1e200fh		; a[186] @ 5952
	.word	03f46ac43h		; a[187] @ 5984
	.word	03f44b835h		; a[188] @ 6016
	.word	03f326639h		; a[189] @ 6048
	.word	03fe651f1h		; a[190] @ 6080
	.word	03f2e745ah		; a[191] @ 6112
	.word	040174a65h		; a[192] @ 6144
	.word	03fe54c4eh		; a[193] @ 6176
	.word	03fbce58eh		; a[194] @ 6208
	.word	0c01b3b2bh		; a[195] @ 6240
	.word	040297d09h		; a[196] @ 6272
	.word	0bfd1a2dbh		; a[197] @ 6304
	.word	03f4faffdh		; a[198] @ 6336
	.word	0bf757f2fh		; a[199] @ 6368
	.word	03d825fcfh		; a[200] @ 6400

	.global	b
	.sect	".fardata:b", RW
	.clink
	.align	8
	.elfsym	b,SYM_SIZE(804)
b:
	.word	0c2b683bch		; b[0] @ 0
	.word	04195ed44h		; b[1] @ 32
	.word	0c25775ceh		; b[2] @ 64
	.word	0c297838bh		; b[3] @ 96
	.word	042c09d8eh		; b[4] @ 128
	.word	0c0f37dbfh		; b[5] @ 160
	.word	0c199a89fh		; b[6] @ 192
	.word	042b432d0h		; b[7] @ 224
	.word	0410d4ae1h		; b[8] @ 256
	.word	04268494eh		; b[9] @ 288
	.word	0c25c9d54h		; b[10] @ 320
	.word	042a4640ah		; b[11] @ 352
	.word	042b5959eh		; b[12] @ 384
	.word	0428ccb6fh		; b[13] @ 416
	.word	04259921dh		; b[14] @ 448
	.word	041df7614h		; b[15] @ 480
	.word	0c28dba63h		; b[16] @ 512
	.word	041e63291h		; b[17] @ 544
	.word	04287fd6bh		; b[18] @ 576
	.word	0c08cc4c1h		; b[19] @ 608
	.word	042618a9eh		; b[20] @ 640
	.word	042917751h		; b[21] @ 672
	.word	042b3977dh		; b[22] @ 704
	.word	03f268ffch		; b[23] @ 736
	.word	0c255070eh		; b[24] @ 768
	.word	042b50013h		; b[25] @ 800
	.word	0c2098defh		; b[26] @ 832
	.word	03e3f2e56h		; b[27] @ 864
	.word	041935516h		; b[28] @ 896
	.word	0c2b32720h		; b[29] @ 928
	.word	042ac1e05h		; b[30] @ 960
	.word	042c04168h		; b[31] @ 992
	.word	0420694bch		; b[32] @ 1024
	.word	0c2bb29e7h		; b[33] @ 1056
	.word	0c157272ah		; b[34] @ 1088
	.word	0c2832e79h		; b[35] @ 1120
	.word	0c2c7827ch		; b[36] @ 1152
	.word	0c08b363ah		; b[37] @ 1184
	.word	0c26264cch		; b[38] @ 1216
	.word	0c2c2bd18h		; b[39] @ 1248
	.word	04285dc4bh		; b[40] @ 1280
	.word	0421d2da4h		; b[41] @ 1312
	.word	0c19f8576h		; b[42] @ 1344
	.word	0c2827706h		; b[43] @ 1376
	.word	0c2900951h		; b[44] @ 1408
	.word	04223f8f9h		; b[45] @ 1440
	.word	04279c314h		; b[46] @ 1472
	.word	0c2bb1348h		; b[47] @ 1504
	.word	041a14752h		; b[48] @ 1536
	.word	0c2450d45h		; b[49] @ 1568
	.word	042c2af39h		; b[50] @ 1600
	.word	04218a5cbh		; b[51] @ 1632
	.word	041c7f5f4h		; b[52] @ 1664
	.word	042676d1eh		; b[53] @ 1696
	.word	0c26ee426h		; b[54] @ 1728
	.word	042bca442h		; b[55] @ 1760
	.word	0c205fc92h		; b[56] @ 1792
	.word	03ff97658h		; b[57] @ 1824
	.word	0c152347dh		; b[58] @ 1856
	.word	0c18acb4eh		; b[59] @ 1888
	.word	0417d2263h		; b[60] @ 1920
	.word	0c2219988h		; b[61] @ 1952
	.word	0c1ad8e03h		; b[62] @ 1984
	.word	0c23acd68h		; b[63] @ 2016
	.word	042a6dea1h		; b[64] @ 2048
	.word	0426066cch		; b[65] @ 2080
	.word	0bf751dach		; b[66] @ 2112
	.word	040649886h		; b[67] @ 2144
	.word	041d16bdbh		; b[68] @ 2176
	.word	0c229789ch		; b[69] @ 2208
	.word	04297efc5h		; b[70] @ 2240
	.word	0428f4fb4h		; b[71] @ 2272
	.word	0422d64f1h		; b[72] @ 2304
	.word	04294cbb0h		; b[73] @ 2336
	.word	0c18d3ce4h		; b[74] @ 2368
	.word	042223569h		; b[75] @ 2400
	.word	0429e13dch		; b[76] @ 2432
	.word	0c2142594h		; b[77] @ 2464
	.word	04201461eh		; b[78] @ 2496
	.word	0c2809734h		; b[79] @ 2528
	.word	041aaecdch		; b[80] @ 2560
	.word	0c29e6d44h		; b[81] @ 2592
	.word	042ae6160h		; b[82] @ 2624
	.word	0c2914731h		; b[83] @ 2656
	.word	0c2c632bbh		; b[84] @ 2688
	.word	0c12a7837h		; b[85] @ 2720
	.word	0c24e87f9h		; b[86] @ 2752
	.word	0c2894aabh		; b[87] @ 2784
	.word	042ba0450h		; b[88] @ 2816
	.word	0c234555dh		; b[89] @ 2848
	.word	0c214ae5fh		; b[90] @ 2880
	.word	040a61ac0h		; b[91] @ 2912
	.word	0c2a764e0h		; b[92] @ 2944
	.word	0c250d13bh		; b[93] @ 2976
	.word	041acbeb9h		; b[94] @ 3008
	.word	0c24cb5dbh		; b[95] @ 3040
	.word	042027dc6h		; b[96] @ 3072
	.word	04222eee8h		; b[97] @ 3104
	.word	0c2246a33h		; b[98] @ 3136
	.word	0c2b86405h		; b[99] @ 3168
	.word	0423f5449h		; b[100] @ 3200
	.word	0424d201eh		; b[101] @ 3232
	.word	0c23bf573h		; b[102] @ 3264
	.word	0c1dc377dh		; b[103] @ 3296
	.word	0c2aece51h		; b[104] @ 3328
	.word	0c26f173eh		; b[105] @ 3360
	.word	0c295258fh		; b[106] @ 3392
	.word	0c1cf8a20h		; b[107] @ 3424
	.word	0c29cce9ch		; b[108] @ 3456
	.word	041460eb2h		; b[109] @ 3488
	.word	0c269560dh		; b[110] @ 3520
	.word	042b2c2e4h		; b[111] @ 3552
	.word	0c2b3322dh		; b[112] @ 3584
	.word	0c2ab8fe6h		; b[113] @ 3616
	.word	04140d9dfh		; b[114] @ 3648
	.word	042203cc4h		; b[115] @ 3680
	.word	04276f4eeh		; b[116] @ 3712
	.word	04223bbd8h		; b[117] @ 3744
	.word	042af95fdh		; b[118] @ 3776
	.word	042b1330ch		; b[119] @ 3808
	.word	0c2c672cdh		; b[120] @ 3840
	.word	0c2937a28h		; b[121] @ 3872
	.word	042867b66h		; b[122] @ 3904
	.word	0422c62a6h		; b[123] @ 3936
	.word	042bb2c6dh		; b[124] @ 3968
	.word	0424c5640h		; b[125] @ 4000
	.word	0c10c94edh		; b[126] @ 4032
	.word	0425e9e73h		; b[127] @ 4064
	.word	0425bc1d5h		; b[128] @ 4096
	.word	04217d664h		; b[129] @ 4128
	.word	04225a6d9h		; b[130] @ 4160
	.word	041acf3edh		; b[131] @ 4192
	.word	0c26adb28h		; b[132] @ 4224
	.word	04255d546h		; b[133] @ 4256
	.word	0c248be6bh		; b[134] @ 4288
	.word	0c1a9990eh		; b[135] @ 4320
	.word	0424e229ch		; b[136] @ 4352
	.word	041285b06h		; b[137] @ 4384
	.word	0c169e801h		; b[138] @ 4416
	.word	0c2b2d75eh		; b[139] @ 4448
	.word	041e4ce12h		; b[140] @ 4480
	.word	0c2173961h		; b[141] @ 4512
	.word	0c20f25d1h		; b[142] @ 4544
	.word	0c25e982ch		; b[143] @ 4576
	.word	042771bd1h		; b[144] @ 4608
	.word	0c2b9c8bbh		; b[145] @ 4640
	.word	0423cdef7h		; b[146] @ 4672
	.word	0c24b2d28h		; b[147] @ 4704
	.word	042a40ae0h		; b[148] @ 4736
	.word	0c1416669h		; b[149] @ 4768
	.word	0c2812cc3h		; b[150] @ 4800
	.word	0c270d684h		; b[151] @ 4832
	.word	0c2181ec4h		; b[152] @ 4864
	.word	042b36d3fh		; b[153] @ 4896
	.word	0429856fdh		; b[154] @ 4928
	.word	0429271f0h		; b[155] @ 4960
	.word	0c2988201h		; b[156] @ 4992
	.word	04229aba7h		; b[157] @ 5024
	.word	0427396d1h		; b[158] @ 5056
	.word	0424dae9bh		; b[159] @ 5088
	.word	0c28ff3e5h		; b[160] @ 5120
	.word	0419f91b6h		; b[161] @ 5152
	.word	041b54811h		; b[162] @ 5184
	.word	0c2a0f0dfh		; b[163] @ 5216
	.word	042a08998h		; b[164] @ 5248
	.word	0c2722d80h		; b[165] @ 5280
	.word	042239685h		; b[166] @ 5312
	.word	042857107h		; b[167] @ 5344
	.word	041fc564eh		; b[168] @ 5376
	.word	04272439bh		; b[169] @ 5408
	.word	0c27d1f7eh		; b[170] @ 5440
	.word	041d17b8ch		; b[171] @ 5472
	.word	0c1c53359h		; b[172] @ 5504
	.word	0c12bdd89h		; b[173] @ 5536
	.word	042980fa8h		; b[174] @ 5568
	.word	0429321aeh		; b[175] @ 5600
	.word	04244e286h		; b[176] @ 5632
	.word	042925e11h		; b[177] @ 5664
	.word	0c2033509h		; b[178] @ 5696
	.word	041f0beebh		; b[179] @ 5728
	.word	0c2829bb0h		; b[180] @ 5760
	.word	0409982ffh		; b[181] @ 5792
	.word	0428057fdh		; b[182] @ 5824
	.word	04267807bh		; b[183] @ 5856
	.word	0425f28bch		; b[184] @ 5888
	.word	041a491c9h		; b[185] @ 5920
	.word	0c20f7a13h		; b[186] @ 5952
	.word	042877c72h		; b[187] @ 5984
	.word	0c1959ce3h		; b[188] @ 6016
	.word	042c54d4ch		; b[189] @ 6048
	.word	040d6f915h		; b[190] @ 6080
	.word	0c2b5d831h		; b[191] @ 6112
	.word	041c68c81h		; b[192] @ 6144
	.word	0c211d454h		; b[193] @ 6176
	.word	0429a4f9eh		; b[194] @ 6208
	.word	0c1b96ba4h		; b[195] @ 6240
	.word	042236af1h		; b[196] @ 6272
	.word	042a4701dh		; b[197] @ 6304
	.word	040158158h		; b[198] @ 6336
	.word	041386e65h		; b[199] @ 6368
	.word	041f85132h		; b[200] @ 6400

;	C:\MATHLIB_Tools\CCSV5_4_0\ccsv5\tools\compiler\c6000_7.4.2\bin\opt6x.exe C:\\DOCUME~1\\a0868396\\LOCALS~1\\Temp\\094322 C:\\DOCUME~1\\a0868396\\LOCALS~1\\Temp\\094324 
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
;*   Local Frame Size  : 8 Args + 52 Auto + 56 Save = 116 byte                *
;******************************************************************************
main:
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12
           STW     .D2T1   A11,*SP--(8)      ; |134| 
           STW     .D2T1   A10,*SP--(8)      ; |134| 
           STDW    .D2T2   B13:B12,*SP--     ; |134| 
           STDW    .D2T2   B11:B10,*SP--     ; |134| 
           STDW    .D2T1   A15:A14,*SP--     ; |134| 

           STDW    .D2T1   A13:A12,*SP--     ; |134| 
||         MVKL    .S1     $C$SL1+0,A4

           STW     .D2T2   B3,*SP--(72)      ; |134| 
||         CALLP   .S2     driver_init,B3
||         MVKH    .S1     $C$SL1+0,A4

$C$RL0:    ; CALL OCCURS {driver_init} {0}   ; |143| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 9
           MVKL    .S1     a,A11

           MVKL    .S2     b,B10
||         MVKL    .S1     output,A10

           MVKH    .S1     a,A11
||         MVK     .S2     0xc9,B4

           MVKH    .S2     b,B10
||         MVKH    .S1     output,A10

           MV      .L2     B10,B11
||         MV      .L1     A11,A13
||         CALL    .S1     __c6xabi_divf     ; |152| 
||         LDW     .D1T1   *A10,A14

           LDW     .D1T1   *A13++,A4         ; |152| 
||         MV      .L1X    B4,A12
||         LDW     .D2T2   *B11++,B4         ; |152| 

           NOP             3
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L1:    
;          EXCLUSIVE CPU CYCLES: 1
           ADDKPC  .S2     $C$RL1,B3,0       ; |152| 
$C$RL1:    ; CALL OCCURS {__c6xabi_divf} {0}  ; |152| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           SUB     .L1     A12,1,A0          ; |151| 
||         STW     .D1T1   A4,*A14++         ; |152| 
||         SUB     .S1     A12,1,A12         ; |151| 

   [ A0]   LDW     .D2T2   *B11++,B4         ; |152| 
|| [!A0]   ADD     .L2X    4,A10,B4
|| [!A0]   MV      .L1     A11,A13
|| [!A0]   MVK     .S1     0xc9,A12
|| [ A0]   B       .S2     $C$L1             ; |151| 

   [ A0]   CALL    .S1     __c6xabi_divf     ; |152| 
   [ A0]   LDW     .D1T1   *A13++,A4         ; |152| 
   [!A0]   MV      .L1X    B10,A14
   [!A0]   ZERO    .L2     B11
   [!A0]   STW     .D2T2   B4,*+SP(24)
           ; BRANCHCC OCCURS {$C$L1}         ; |151| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 1
           CALL    .S1     divsp             ; |155| 
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L2:    
;          EXCLUSIVE CPU CYCLES: 5

           LDW     .D1T1   *A13++,A4         ; |155| 
||         LDW     .D2T2   *B10++,B4         ; |155| 

           ADDKPC  .S2     $C$RL2,B3,3       ; |155| 
$C$RL2:    ; CALL OCCURS {divsp} {0}         ; |155| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12
           LDW     .D2T2   *+SP(24),B4       ; |155| 
           SUB     .L1     A12,1,A0          ; |154| 
           SUB     .L1     A12,1,A12         ; |154| 
           NOP             2
           LDW     .D2T2   *B4,B4            ; |155| 
   [ A0]   BNOP    .S1     $C$L2,3           ; |154| 

           ADD     .L2     B11,B4,B4         ; |155| 
||         ADD     .S2     4,B11,B11         ; |154| 

   [ A0]   CALL    .S1     divsp             ; |155| 
||         STW     .D2T1   A4,*B4            ; |155| 

           ; BRANCHCC OCCURS {$C$L2}         ; |154| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7
           LDW     .D2T2   *+SP(24),B4
           MV      .L2X    A14,B11
           MV      .L1     A11,A12
           MVK     .S1     0xc9,A13
           ZERO    .L2     B10
           ADD     .L2     4,B4,B4

           STW     .D2T2   B4,*+SP(28)
||         CALL    .S1     divsp_c           ; |158| 

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L3:    
;          EXCLUSIVE CPU CYCLES: 5

           LDW     .D1T1   *A12++,A4         ; |158| 
||         LDW     .D2T2   *B11++,B4         ; |158| 

           ADDKPC  .S2     $C$RL3,B3,3       ; |158| 
$C$RL3:    ; CALL OCCURS {divsp_c} {0}       ; |158| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12
           LDW     .D2T2   *+SP(28),B4       ; |158| 
           SUB     .L1     A13,1,A0          ; |157| 
           SUB     .L1     A13,1,A13         ; |157| 
           NOP             2
           LDW     .D2T2   *B4,B4            ; |158| 
   [ A0]   BNOP    .S1     $C$L3,3           ; |157| 

           ADD     .L2     B10,B4,B4         ; |158| 
||         ADD     .S2     4,B10,B10         ; |157| 

   [ A0]   CALL    .S1     divsp_c           ; |158| 
||         STW     .D2T1   A4,*B4            ; |158| 

           ; BRANCHCC OCCURS {$C$L3}         ; |157| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 13

           LDW     .D2T2   *+SP(28),B4
||         ZERO    .L1     A4
||         MVKL    .S1     0x7f7fffff,A3
||         ZERO    .L2     B31
||         MVKL    .S2     0x47efffff,B12
||         MVK     .D1     0x1,A1            ; init prolog collapse predicate

           SET     .S1     A4,0x1e,0x1e,A6
||         MVKH    .S2     0x47efffff,B12
||         MV      .L1     A14,A4
||         ZERO    .D1     A7
||         MV      .L2X    A11,B8

           MVKH    .S1     0x7f7fffff,A3
||         MVKH    .S2     0xe0000000,B31
||         MV      .L1     A6,A8
||         MV      .L2     B12,B7

           DINT                              ; interrupts off
           MV      .L2     B31,B6
           ADD     .L2     4,B4,B4
           STW     .D2T2   B4,*+SP(16)
           LDW     .D2T2   *+SP(16),B30
           STW     .D2T2   B31,*+SP(20)      ; |61| 
           MV      .L1     A3,A6
           MVK     .S2     0xc9,B4
           SUB     .L2     B4,1,B1
           LDW     .D2T1   *B30,A5
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*
;*      Loop found in file               : C:/builds/DEV_TI_MATHLIB_3_1_0_0/mathlib/ti/mathlib/src/divsp/divsp_d.c
;*      Loop source line                 : 160
;*      Loop opening brace source line   : 160
;*      Loop closing brace source line   : 162
;*      Known Minimum Trip Count         : 201                    
;*      Known Maximum Trip Count         : 201                    
;*      Known Max Trip Count Factor      : 201
;*      Loop Carried Dependency Bound(^) : 34
;*      Unpartitioned Resource Bound     : 6
;*      Partitioned Resource Bound(*)    : 6
;*      Resource Partition:
;*                                A-side   B-side
;*      .L units                     0        0     
;*      .S units                     4        6*    
;*      .D units                     2        1     
;*      .M units                     5        0     
;*      .X cross paths               2        1     
;*      .T address paths             2        1     
;*      Long read paths              0        0     
;*      Long write paths             0        0     
;*      Logical  ops (.LS)           2        0     (.L or .S unit)
;*      Addition ops (.LSD)          7        8     (.L or .S or .D unit)
;*      Bound(.L .S .LS)             3        3     
;*      Bound(.L .S .D .LS .LSD)     5        5     
;*
;*      Searching for software pipeline schedule at ...
;*         ii = 34 Schedule found with 2 iterations in parallel
;*
;*      Register Usage Table:
;*          +-----------------------------------------------------------------+
;*          |AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB|
;*          |00000000001111111111222222222233|00000000001111111111222222222233|
;*          |01234567890123456789012345678901|01234567890123456789012345678901|
;*          |--------------------------------+--------------------------------|
;*       0: | *  *****                       | *    ***                       |
;*       1: | *  *****                       | *    ***                       |
;*       2: | *  *****                       | *    ***                       |
;*       3: | *  *****                       | *    ***                       |
;*       4: | *  *****       *               | *    ***                       |
;*       5: | *  ******      *               | *    ***                       |
;*       6: | *  ******      * *             | *    ***                       |
;*       7: | *  ******      * *             | *    ***                       |
;*       8: | *  ******      * *             | *    ***                       |
;*       9: | *  ******      ***             | *    ***                       |
;*      10: | *  ******      * *             | *    ***                       |
;*      11: | *  ******      * *             | *    ***                       |
;*      12: | *  ******      ***             | *    ***                       |
;*      13: | *  ******      *               | *    ***                       |
;*      14: | *  ******      *               | *    ***                       |
;*      15: | *  ******      *               | *    ***                       |
;*      16: | *  ******      **              | *    ***                       |
;*      17: | *  ******      *               | *    ***                       |
;*      18: | *  ******      *               | *    ***                       |
;*      19: | *  ******      *               | *    ***       *               |
;*      20: | *  ******      **              | *  * ***       *               |
;*      21: | *  ******      *               | *  * ***       *               |
;*      22: | *  ******      *               | *  * ***       *               |
;*      23: | *  ******      **              | *    ****      *               |
;*      24: | *  ******                      | *  ******      *               |
;*      25: | *  ******                      | *    ****      *               |
;*      26: | *  ******                      | *  ******      *               |
;*      27: |**  ******      *               | *  ******                      |
;*      28: | * *******                      | *  * ***                       |
;*      29: | * *******                      | *  * ***                       |
;*      30: | * *******                      | *  * ***                       |
;*      31: | * ******                       |**    ***                       |
;*      32: | * *******                      | *    ***                       |
;*      33: | * ******                       | *    ***                       |
;*          +-----------------------------------------------------------------+
;*
;*      Done
;*
;*      Epilog not removed
;*      Collapsed epilog stages       : 0
;*      Collapsed prolog stages       : 1
;*      Minimum required memory pad   : 0 bytes
;*
;*      For further improvement on this loop, try option -mh4
;*
;*      Minimum safe trip count       : 1
;*      Min. prof. trip count  (est.) : 2
;*
;*      Mem bank conflicts/iter(est.) : { min 0.000, est 0.000, max 0.000 }
;*      Mem bank perf. penalty (est.) : 0.0%
;*
;*
;*      Total cycles (est.)         : 1 + min_trip_cnt * 34 = 6835        
;*----------------------------------------------------------------------------*
;*       SETUP CODE
;*
;*                  SUB             B1,1,B1
;*
;*        SINGLE SCHEDULED ITERATION
;*
;*        $C$C146:
;*   0              LDW     .D1T1   *A4++,A16         ; |61|  ^ 
;*   1              NOP             4
;*   5              RCPSP   .S1     A16,A9            ; |61|  ^ 
;*   6              MV      .L1     A9,A18            ; |61| Split a long life(pre-sched)
;*     ||           MPYSP   .M1     A9,A16,A17        ; |61|  ^ 
;*     ||           ABSSP   .S1     A16,A9            ; |61| 
;*   7              CMPGTSP .S1     A9,A6,A9          ; |61| 
;*   8              NOP             2
;*  10              FSUBSP  .L1     A8,A17,A17        ; |61|  ^ 
;*  11              NOP             2
;*  13              MPYSP   .M1     A18,A17,A17       ; |61|  ^ 
;*  14              NOP             1
;*  15              LDW     .D2T2   *B8++,B16         ; |61| 
;*  16              NOP             1
;*  17              MV      .L1     A17,A16           ; |61| Split a long life(pre-sched)
;*     ||           MPYSP   .M1     A16,A17,A17       ; |61|  ^ 
;*  18              NOP             2
;*  20              MV      .L2     B16,B4            ; |61| Split a long life(pre-sched)
;*  21              FSUBSP  .L1     A8,A17,A17        ; |61|  ^ 
;*  22              NOP             1
;*  23              MV      .L2     B4,B9             ; |61| Split a long life(pre-sched)
;*     ||           SPDP    .S2     B16,B5:B4         ; |61| 
;*  24              MPYSP   .M1     A16,A17,A16       ; |61|  ^ 
;*  25              ABSDP   .S2     B5:B4,B5:B4       ; |61| 
;*  26              NOP             1
;*  27              CMPEQSP .S1X    B16,A7,A0         ; |61| 
;*     ||           CMPGTDP .S2     B5:B4,B7:B6,B4    ; |61| 
;*  28      [ A0]   MV      .L1     A7,A3             ; |61| 
;*     ||   [!A0]   MPYSP   .M1X    B9,A16,A3         ; |61|  ^ 
;*  29      [ B1]   BDEC    .S2     $C$C146,B1        ; |160| 
;*  30              XOR     .L2     1,B4,B4           ; |61| 
;*  31              AND     .L2X    B4,A9,B0          ; |61| 
;*  32      [!B0]   MV      .S1     A3,A9             ; |61|  ^ 
;*     ||   [ B0]   MV      .L1     A7,A9             ; |61| 
;*  33              STW     .D1T1   A9,*A5++          ; |61|  ^ 
;*  34              NOP             1
;*  35              ; BRANCHCC OCCURS {$C$C146}       ; |160| 
;*----------------------------------------------------------------------------*
$C$L4:    ; PIPED LOOP PROLOG
;** --------------------------------------------------------------------------*
$C$L5:    ; PIPED LOOP KERNEL
;          EXCLUSIVE CPU CYCLES: 34
           NOP             4
           RCPSP   .S1     A16,A9            ; |61| <0,5>  ^ 

           ABSSP   .S1     A16,A9            ; |61| <0,6> 
||         MV      .L1     A9,A18            ; |61| <0,6> Split a long life(pre-sched)
||         MPYSP   .M1     A9,A16,A17        ; |61| <0,6>  ^ 

           CMPGTSP .S1     A9,A6,A9          ; |61| <0,7> 
           NOP             2
           FSUBSP  .L1     A8,A17,A17        ; |61| <0,10>  ^ 
           NOP             2
           MPYSP   .M1     A18,A17,A17       ; |61| <0,13>  ^ 
           NOP             1
   [!A1]   LDW     .D2T2   *B8++,B16         ; |61| <0,15> 
           NOP             1

           MV      .L1     A17,A16           ; |61| <0,17> Split a long life(pre-sched)
||         MPYSP   .M1     A16,A17,A17       ; |61| <0,17>  ^ 

           NOP             2
           MV      .L2     B16,B4            ; |61| <0,20> Split a long life(pre-sched)
           FSUBSP  .L1     A8,A17,A17        ; |61| <0,21>  ^ 
           NOP             1

           SPDP    .S2     B16,B5:B4         ; |61| <0,23> 
||         MV      .L2     B4,B9             ; |61| <0,23> Split a long life(pre-sched)

           MPYSP   .M1     A16,A17,A16       ; |61| <0,24>  ^ 
           ABSDP   .S2     B5:B4,B5:B4       ; |61| <0,25> 
           NOP             1

           CMPEQSP .S1X    B16,A7,A0         ; |61| <0,27> 
||         CMPGTDP .S2     B5:B4,B7:B6,B4    ; |61| <0,27> 

   [ A0]   MV      .L1     A7,A3             ; |61| <0,28> 
|| [!A0]   MPYSP   .M1X    B9,A16,A3         ; |61| <0,28>  ^ 

   [ B1]   BDEC    .S2     $C$L5,B1          ; |160| <0,29> 
           XOR     .L2     1,B4,B4           ; |61| <0,30> 
           AND     .L2X    B4,A9,B0          ; |61| <0,31> 

   [ B0]   MV      .L1     A7,A9             ; |61| <0,32> 
|| [!B0]   MV      .S1     A3,A9             ; |61| <0,32>  ^ 

   [!A1]   STW     .D1T1   A9,*A5++          ; |61| <0,33>  ^ 

   [ A1]   SUB     .L1     A1,1,A1           ; <0,34> 
||         LDW     .D1T1   *A4++,A16         ; |61| <1,0>  ^ 

;** --------------------------------------------------------------------------*
$C$L6:    ; PIPED LOOP EPILOG
;          EXCLUSIVE CPU CYCLES: 27

           MV      .L2     B7,B12
||         MV      .L1     A11,A4            ; |163| 
||         MV      .S1     A8,A12
||         MV      .D1     A6,A13
||         MV      .S2X    A10,B11

           MV      .L2X    A7,B10
           NOP             2
           RCPSP   .S1     A16,A9            ; |61| (E) <1,5>  ^ 

           ABSSP   .S1     A16,A9            ; |61| (E) <1,6> 
||         MV      .L1     A9,A18            ; |61| (E) <1,6> Split a long life(pre-sched)
||         MPYSP   .M1     A9,A16,A17        ; |61| (E) <1,6>  ^ 

           CMPGTSP .S1     A9,A6,A9          ; |61| (E) <1,7> 
           NOP             2
           FSUBSP  .L1     A8,A17,A17        ; |61| (E) <1,10>  ^ 
           NOP             2
           MPYSP   .M1     A18,A17,A17       ; |61| (E) <1,13>  ^ 
           NOP             1
           LDW     .D2T2   *B8++,B16         ; |61| (E) <1,15> 
           NOP             1

           MV      .L1     A17,A16           ; |61| (E) <1,17> Split a long life(pre-sched)
||         MPYSP   .M1     A16,A17,A17       ; |61| (E) <1,17>  ^ 

           NOP             2
           MV      .L2     B16,B4            ; |61| (E) <1,20> Split a long life(pre-sched)
           FSUBSP  .L1     A8,A17,A17        ; |61| (E) <1,21>  ^ 
           NOP             1

           SPDP    .S2     B16,B5:B4         ; |61| (E) <1,23> 
||         MV      .L2     B4,B9             ; |61| (E) <1,23> Split a long life(pre-sched)

           MPYSP   .M1     A16,A17,A16       ; |61| (E) <1,24>  ^ 
           ABSDP   .S2     B5:B4,B5:B4       ; |61| (E) <1,25> 
           NOP             1

           CMPEQSP .S1X    B16,A7,A0         ; |61| (E) <1,27> 
||         CMPGTDP .S2     B5:B4,B7:B6,B4    ; |61| (E) <1,27> 

;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12
   [!A0]   MPYSP   .M1X    B9,A16,A3         ; |61| (E) <1,28>  ^ 
           XOR     .L2     1,B4,B4           ; |61| (E) <1,30> 
           AND     .L2X    B4,A9,B0          ; |61| (E) <1,31> 
   [ A0]   MV      .L1     A7,A3             ; |61| (E) <1,28> 

   [!B0]   MV      .L1     A3,A9             ; |61| (E) <1,32>  ^ 
|| [ B0]   MV      .S1     A7,A9             ; |61| (E) <1,32> 
||         RINT                              ; interrupts on

           STW     .D2T2   B6,*+SP(20)
||         STW     .D1T1   A9,*A5++          ; |61| (E) <1,33>  ^ 
||         MVK     .S2     0xc9,B6           ; |163| 

           CALLP   .S2     divsp_v,B3
||         LDW     .D2T1   *+B11(16),A6      ; |163| 
||         MV      .L2X    A14,B4            ; |163| 

$C$RL4:    ; CALL OCCURS {divsp_v} {0}       ; |163| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 46
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6
           MVKH    .S2     0x3eb0c6f7,B7

           LDW     .D2T2   *+B11(4),B4       ; |66| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T1   *B11,A4           ; |66| 
||         MVK     .S1     0xc9,A6           ; |66| 
||         MVK     .L1     0x1,A8            ; |66| 

$C$RL5:    ; CALL OCCURS {isequal} {0}       ; |66| 
           MVKL    .S2     fcn_pass,B6
           MVKL    .S2     0x3eb0c6f7,B7
           MVKH    .S2     fcn_pass,B6
           MVKH    .S2     0x3eb0c6f7,B7

           STW     .D2T1   A4,*+B6(4)        ; |66| 
||         MVKL    .S2     0xa0b5ed8d,B6

           LDW     .D2T2   *+B11(8),B4       ; |67| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T1   *B11,A4           ; |67| 
||         MVK     .S1     0xc9,A6           ; |67| 
||         MVK     .L1     0x1,A8            ; |67| 

$C$RL6:    ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     fcn_pass,B5
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6
           MVKH    .S2     fcn_pass,B5
           MVKH    .S2     0x3eb0c6f7,B7

           STW     .D2T1   A4,*+B5(8)        ; |67| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A10,A4           ; |68| 
||         LDW     .D2T2   *+B11(12),B4      ; |68| 
||         MVK     .S1     0xc9,A6           ; |68| 
||         MVK     .L1     0x1,A8            ; |68| 

$C$RL7:    ; CALL OCCURS {isequal} {0}       ; |68| 

           LDW     .D2T1   *+SP(16),A3       ; |68| 
||         MVKL    .S2     fcn_pass,B4

           MVKL    .S2     0xa0b5ed8d,B6
           MVKL    .S2     0x3eb0c6f7,B7

           MVKL    .S1     output,A31
||         MVKH    .S2     fcn_pass,B4

           MVKH    .S1     output,A31
||         STW     .D2T1   A4,*+B4(12)       ; |68| 
||         MVKH    .S2     0xa0b5ed8d,B6

           ADD     .L1     4,A3,A11
||         LDW     .D1T1   *A31,A4           ; |69| 
||         MVKH    .S2     0x3eb0c6f7,B7

           CALLP   .S2     isequal,B3
||         LDW     .D1T2   *A11,B4           ; |69| 
||         MVK     .S1     0xc9,A6           ; |69| 
||         MVK     .L1     0x1,A8            ; |69| 

$C$RL8:    ; CALL OCCURS {isequal} {0}       ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 14
           MVKL    .S1     fcn_pass,A3
           MVKH    .S1     fcn_pass,A3
           ADD     .L1     4,A3,A14
           LDW     .D1T1   *A14,A0           ; |72| 
           MV      .L2X    A3,B5             ; |72| 
           ADD     .L2X    8,A3,B4
           STW     .D2T1   A4,*+B5(16)       ; |69| 
           STW     .D2T2   B4,*+SP(32)       ; |69| 

   [!A0]   B       .S1     $C$L7             ; |72| 
|| [ A0]   LDW     .D2T2   *B4,B0            ; |72| 

   [!A0]   CALL    .S1     print_test_results ; |167| 
   [ A0]   ADD     .L2     4,B4,B4
   [!A0]   ZERO    .L1     A3                ; |72| 
   [!A0]   MVKL    .S1     all_pass,A4
   [!A0]   MVKH    .S1     all_pass,A4
           ; BRANCHCC OCCURS {$C$L7}         ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10
   [ B0]   LDW     .D2T2   *B4,B4            ; |72| 
           CMPEQ   .L1     A4,0,A3           ; |72| 
           XOR     .L1     1,A3,A3           ; |72| 
   [!B0]   ZERO    .L1     A0                ; |72| 
           NOP             1
   [ B0]   CMPEQ   .L2     B4,0,B4           ; |72| 
   [ B0]   XOR     .L2     1,B4,B4           ; |72| 
           NOP             1

   [ B0]   AND     .L1X    A3,B4,A0          ; |72| 
||         MVK     .S1     0x1,A3            ; |72| 

   [!A0]   ZERO    .L1     A3                ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           CALL    .S1     print_test_results ; |167| 
           MVKL    .S1     all_pass,A4
           MVKH    .S1     all_pass,A4
           NOP             2
;** --------------------------------------------------------------------------*
$C$L7:    
;          EXCLUSIVE CPU CYCLES: 1

           STW     .D1T1   A3,*A4            ; |72| 
||         MVK     .L1     0x1,A4            ; |167| 
||         ADDKPC  .S2     $C$RL9,B3,0       ; |167| 

$C$RL9:    ; CALL OCCURS {print_test_results} {0}  ; |167| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10
           MVKL    .S1     a_sc,A3

           MVKH    .S1     a_sc,A3
||         MVKL    .S2     b_sc,B5

           MVKH    .S2     b_sc,B5

           ADD     .D2     B5,28,B6
||         MV      .L2X    A3,B4             ; |175| 

           ADD     .D2     B4,28,B7
||         MVKL    .S1     0x7f7fffff,A31
||         ZERO    .L1     A6
||         ZERO    .L2     B9
||         MVK     .S2     -1,B16            ; |180| 

           STW     .D2T2   B16,*+B4(24)      ; |180| 
||         SET     .S2     B9,0x17,0x1d,B9
||         MVKH    .S1     0x80000000,A6
||         ZERO    .L2     B8
||         MV      .L1X    B10,A7            ; |175| 

           STDW    .D2T1   A7:A6,*B4         ; |175| 
||         MVKH    .S1     0x7f7fffff,A31
||         MVKH    .S2     0xbf800000,B8
||         ZERO    .L1     A4

           STDW    .D2T2   B9:B8,*+B4(16)    ; |179| 
||         ADD     .L1     1,A31,A5
||         MVKH    .S1     0xff800000,A4

           MVK     .L2     0x7,B4            ; |183| 
||         STDW    .D2T1   A5:A4,*+B4(8)     ; |177| 
||         MVK     .L1     0x6,A1            ; |182| 

           MVC     .S2     B4,RILC
||         MVK     .L2     6,B9              ; |183| 
||         STDW    .D2T2   B9:B8,*+B5(16)    ; |179| 
||         SUB     .L1     A1,1,A1           ; |182| 

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*
;*      Loop found in file               : C:/builds/DEV_TI_MATHLIB_3_1_0_0/mathlib/ti/mathlib/src/divsp/divsp_d.c
;*      Loop source line                 : 183
;*      Loop opening brace source line   : 183
;*      Loop closing brace source line   : 187
;*      Known Minimum Trip Count         : 7                    
;*      Known Maximum Trip Count         : 7                    
;*      Known Max Trip Count Factor      : 7
;*      Loop Carried Dependency Bound(^) : 6
;*      Unpartitioned Resource Bound     : 2
;*      Partitioned Resource Bound(*)    : 4
;*      Resource Partition:
;*                                A-side   B-side
;*      .L units                     1        0     
;*      .S units                     1        0     
;*      .D units                     1        3     
;*      .M units                     0        0     
;*      .X cross paths               0        0     
;*      .T address paths             0        4*    
;*      Long read paths              0        0     
;*      Long write paths             0        0     
;*      Logical  ops (.LS)           0        0     (.L or .S unit)
;*      Addition ops (.LSD)          6        0     (.L or .S or .D unit)
;*      Bound(.L .S .LS)             1        0     
;*      Bound(.L .S .D .LS .LSD)     3        1     
;*
;*      Searching for software pipeline schedule at ...
;*         ii = 6  Schedule found with 2 iterations in parallel
;*
;*      Register Usage Table:
;*          +-----------------------------------------------------------------+
;*          |AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA|BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB|
;*          |00000000001111111111222222222233|00000000001111111111222222222233|
;*          |01234567890123456789012345678901|01234567890123456789012345678901|
;*          |--------------------------------+--------------------------------|
;*       0: |   ****                         |     ***                        |
;*       1: |   *****                        |     ***                        |
;*       2: |*  ****                         |    ****                        |
;*       3: |   *****                        |     ***                        |
;*       4: |   *****                        |    ****                        |
;*       5: |   *****                        |     ***                        |
;*          +-----------------------------------------------------------------+
;*
;*      Done
;*
;*      Loop will be splooped
;*      Collapsed epilog stages       : 0
;*      Collapsed prolog stages       : 0
;*      Minimum required memory pad   : 0 bytes
;*
;*      Minimum safe trip count       : 1
;*      Min. prof. trip count  (est.) : 2
;*
;*      Mem bank conflicts/iter(est.) : { min 0.000, est 0.000, max 0.000 }
;*      Mem bank perf. penalty (est.) : 0.0%
;*
;*
;*      Total cycles (est.)         : 6 + min_trip_cnt * 6 = 48        
;*----------------------------------------------------------------------------*
;*        SINGLE SCHEDULED ITERATION
;*
;*        $C$C85:
;*   0              ADD     .L1     A4,A3,A7          ; |185| 
;*   1              CMPGT   .L1     A7,6,A0           ; |185| 
;*   2      [ A0]   MVK     .S1     0xffffffe4,A7     ; |185| 
;*     ||   [!A0]   ZERO    .D1     A7                ; |185| 
;*   3              LDW     .D2T2   *B5++,B4          ; |184|  ^ 
;*     ||           ADD     .L1     A5,A7,A7          ; |185| 
;*   4              ADD     .L1     A6,A7,A7          ; |185| 
;*   5              LDW     .D1T2   *A7,B4            ; |185|  ^ 
;*     ||           ADD     .L1     1,A4,A4           ; |183| 
;*   6              NOP             2
;*   8              STW     .D2T2   B4,*B7++          ; |184|  ^ 
;*     ||           ADD     .L1     4,A5,A5           ; |183| 
;*   9              NOP             1
;*  10              STW     .D2T2   B4,*B6++          ; |185|  ^ 
;*     ||           SPBR            $C$C85
;*  11              NOP             1
;*  12              ; BRANCHCC OCCURS {$C$C85}        ; |183| 
;*----------------------------------------------------------------------------*
$C$L8:    ; PIPED LOOP PROLOG
;          EXCLUSIVE CPU CYCLES: 7

   [ A1]   SPLOOPD 6       ;12               ; SPRELOAD
||         STDW    .D2T1   A5:A4,*+B5(8)     ; |177| 
||         MVK     .L1     0x1,A3            ; |182| 
||         ZERO    .S1     A4                ; |183| 
||         MVC     .S2     B9,ILC

;** --------------------------------------------------------------------------*
$C$L9:    ; PIPED LOOP KERNEL
;          EXCLUSIVE CPU CYCLES: 6

           SPMASK          L2,D2
||         STDW    .D2T1   A7:A6,*B5         ; |175| 
||         MVK     .L2     0x4,B8
||         ADD     .L1     A4,A3,A7          ; |185| (P) <0,0> 

           SPMASK          S1,S2,D2
||         STW     .D2T2   B16,*+B5(24)      ; |180| 
||         MV      .S1X    B5,A15            ; |175| 
||         MVKL    .S2     a_sc,B5
||         CMPGT   .L1     A7,6,A0           ; |185| (P) <0,1> 

           SPMASK          L1,S2
||         MVKH    .S2     a_sc,B5
||         MV      .L1X    B8,A5
|| [!A0]   ZERO    .D1     A7                ; |185| (P) <0,2> 
|| [ A0]   MVK     .S1     0xffffffe4,A7     ; |185| (P) <0,2> 

           SPMASK          S1
||         MV      .S1     A15,A6
||         LDW     .D2T2   *B5++,B4          ; |184| (P) <0,3>  ^ 
||         ADD     .L1     A5,A7,A7          ; |185| (P) <0,3> 

           ADD     .L1     A6,A7,A7          ; |185| (P) <0,4> 

           ADD     .L1     1,A4,A4           ; |183| (P) <0,5> 
||         LDW     .D1T2   *A7,B4            ; |185| (P) <0,5>  ^ 

           NOP             2

           STW     .D2T2   B4,*B7++          ; |184| <0,8>  ^ 
||         ADD     .L1     4,A5,A5           ; |183| <0,8> 

           NOP             1

           SPKERNEL 0,0
||         STW     .D2T2   B4,*B6++          ; |185| <0,10>  ^ 

;** --------------------------------------------------------------------------*
$C$L10:    ; PIPED LOOP EPILOG AND PROLOG
;          EXCLUSIVE CPU CYCLES: 9
           NOP             2

           SPMASKR         ;$C$L10
||         ADD     .S1     1,A3,A3           ; |182| 
||         ZERO    .D1     A4                ; |183| 

           ADD     .L2     4,B8,B8           ; |182| 
|| [ A1]   B       .S2     $C$L10            ; |182| 

           MV      .S1     A6,A15
||         MVKL    .S2     a_sc,B5
||         SUB     .D1     A1,1,A1           ; |182| 

           MVKH    .S2     a_sc,B5
||         MV      .L1X    B8,A5

           MV      .S1     A15,A6
||         MVK     .L2     0x7,B4            ; |183| 

           NOP             2
           ; BRANCHCC OCCURS {$C$L10}        ; |182| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 8
           LDW     .D2T1   *+SP(16),A3
           LDW     .D2T1   *+SP(20),A31      ; |190| 
           STW     .D2T2   B12,*+SP(48)      ; |190| 
           MVKL    .S2     a_sc,B11
           MVK     .S2     0x31,B4           ; |190| 
           STW     .D2T2   B4,*+SP(12)
           STW     .D2T1   A3,*+SP(36)       ; |190| 

           STW     .D2T1   A31,*+SP(52)      ; |190| 
||         MVKH    .S2     a_sc,B11
||         MV      .L1     A15,A10
||         ZERO    .L2     B13
||         CALL    .S1     __c6xabi_divf     ; |192| 

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L11:    
;          EXCLUSIVE CPU CYCLES: 5

           LDW     .D2T1   *B11,A4           ; |192| 
||         LDW     .D1T2   *A10,B4           ; |192| 

           ADDKPC  .S2     $C$RL10,B3,3      ; |192| 
$C$RL10:   ; CALL OCCURS {__c6xabi_divf} {0}  ; |192| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 30
           MVKL    .S1     output,A3
           MVKH    .S1     output,A3
           LDW     .D1T1   *A3,A3            ; |192| 
           NOP             4
           ADD     .L1X    B13,A3,A3         ; |192| 
           STW     .D1T1   A4,*A3            ; |192| 

           CALLP   .S2     divsp,B3
||         LDW     .D1T2   *A10,B4           ; |193| 
||         LDW     .D2T1   *B11,A4           ; |193| 

$C$RL11:   ; CALL OCCURS {divsp} {0}         ; |193| 
           MVKL    .S1     output,A3
           MVKH    .S1     output,A3
           LDW     .D1T1   *+A3(4),A3        ; |193| 
           NOP             4
           ADD     .L1X    B13,A3,A3         ; |193| 
           STW     .D1T1   A4,*A3            ; |193| 

           CALLP   .S2     divsp_c,B3
||         LDW     .D2T1   *B11,A4           ; |194| 
||         LDW     .D1T2   *A10,B4           ; |194| 

$C$RL12:   ; CALL OCCURS {divsp_c} {0}       ; |194| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 45
           MVKL    .S1     output,A3
           MVKH    .S1     output,A3
           LDW     .D1T1   *+A3(8),A3        ; |194| 
           LDW     .D2T2   *+SP(36),B6       ; |68| 
           NOP             3
           ADD     .L2X    B13,A3,B4         ; |194| 
           STW     .D2T1   A4,*B4            ; |194| 
           LDW     .D1T1   *A10++,A3         ; |195| 
           LDW     .D2T2   *B11++,B8         ; |195| 
           LDW     .D2T2   *B6,B9            ; |195| 
           LDDW    .D2T2   *+SP(48),B7:B6    ; |195| 
           NOP             1
           RCPSP   .S1     A3,A4             ; |61| 
           MPYSP   .M1     A4,A3,A5          ; |61| 
           SPDP    .S2     B8,B5:B4          ; |68| 
           ABSSP   .S1     A3,A31            ; |68| 
           ABSDP   .S2     B5:B4,B5:B4       ; |68| 
           FSUBSP  .L1     A12,A5,A5         ; |61| 
           CMPGTDP .S2     B5:B4,B7:B6,B5    ; |68| 
           ADD     .L2     B13,B9,B31        ; |195| 
           MPYSP   .M1     A4,A5,A4          ; |61| 
           XOR     .L2     1,B5,B5           ; |68| 
           ADD     .L2     4,B13,B13         ; |196| 
           CMPEQSP .S2     B8,B10,B0         ; |64| 

           MPYSP   .M1     A3,A4,A5          ; |61| 
||         CMPGTSP .S1     A31,A13,A3        ; |68| 

           AND     .L1X    B5,A3,A0          ; |68| 
||         LDW     .D2T2   *+SP(12),B5       ; |69| 

           NOP             2
           FSUBSP  .L1     A12,A5,A5         ; |61| 
           NOP             1
           SUB     .L2     B5,1,B30          ; |190| 
           MPYSP   .M1     A4,A5,A4          ; |61| 
           SUB     .L1X    B5,1,A2           ; |190| 
           STW     .D2T2   B30,*+SP(12)      ; |195| 
   [!A2]   MVKL    .S2     output,B11
   [!A2]   MVKH    .S2     output,B11
           MPYSP   .M2X    B8,A4,B4          ; |61| 
   [ A2]   BNOP    .S1     $C$L11,2          ; |190| 
   [ B0]   MV      .L2     B10,B4            ; |65| 
   [ A0]   MV      .L2     B10,B4            ; |69| 

   [ A2]   CALL    .S1     __c6xabi_divf     ; |192| 
||         STW     .D2T2   B4,*B31           ; |195| 

           ; BRANCHCC OCCURS {$C$L11}        ; |190| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 6
           CALL    .S1     divsp_v           ; |199| 
           LDW     .D2T1   *+B11(16),A6      ; |199| 
           MVKL    .S1     a_sc,A4
           MVKH    .S1     a_sc,A4
           MVK     .S2     0x31,B6           ; |199| 

           ADDKPC  .S2     $C$RL13,B3,0      ; |199| 
||         MV      .L2X    A15,B4            ; |199| 

$C$RL13:   ; CALL OCCURS {divsp_v} {0}       ; |199| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 46
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6
           MVKH    .S2     0x3eb0c6f7,B7

           LDW     .D2T1   *B11,A4           ; |66| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T2   *+B11(4),B4       ; |66| 
||         MVK     .S1     0x31,A6           ; |66| 
||         MVK     .L1     0x1,A8            ; |66| 

$C$RL14:   ; CALL OCCURS {isequal} {0}       ; |66| 
           MVKL    .S2     fcn_pass,B5
           MVKL    .S2     0x3eb0c6f7,B7
           MVKH    .S2     fcn_pass,B5
           MVKL    .S2     0xa0b5ed8d,B6

           LDW     .D2T2   *+B11(8),B4       ; |67| 
||         MVKH    .S2     0x3eb0c6f7,B7

           STW     .D2T1   A4,*+B5(4)        ; |66| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T1   *B11,A4           ; |67| 
||         MVK     .S1     0x31,A6           ; |67| 
||         MVK     .L1     0x1,A8            ; |67| 

$C$RL15:   ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     fcn_pass,B5
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6
           MVKH    .S2     fcn_pass,B5
           MVKH    .S2     0x3eb0c6f7,B7

           MV      .L1X    B11,A3            ; |67| 
||         STW     .D2T1   A4,*+B5(8)        ; |67| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A3,A4            ; |68| 
||         LDW     .D2T2   *+B11(12),B4      ; |68| 
||         MVK     .S1     0x31,A6           ; |68| 
||         MVK     .L1     0x1,A8            ; |68| 

$C$RL16:   ; CALL OCCURS {isequal} {0}       ; |68| 
           MVKL    .S2     fcn_pass,B4
           MVKL    .S2     0xa0b5ed8d,B6
           MVKL    .S2     0x3eb0c6f7,B7
           MVKH    .S2     fcn_pass,B4
           MVKH    .S2     0xa0b5ed8d,B6

           MV      .L1X    B11,A3            ; |69| 
||         STW     .D2T1   A4,*+B4(12)       ; |68| 
||         LDW     .D1T2   *A11,B4           ; |69| 
||         MVKH    .S2     0x3eb0c6f7,B7

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A3,A4            ; |69| 
||         MVK     .S1     0x31,A6           ; |69| 
||         MVK     .L1     0x1,A8            ; |69| 

$C$RL17:   ; CALL OCCURS {isequal} {0}       ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12

           MV      .L2X    A14,B4            ; |69| 
||         LDW     .D2T1   *+SP(32),A3

           LDW     .D2T2   *B4,B0            ; |72| 
           MVKL    .S2     fcn_pass,B31
           MVKH    .S2     fcn_pass,B31
           STW     .D2T1   A4,*+B31(16)      ; |69| 
           STW     .D2T1   A3,*+SP(40)       ; |72| 

   [!B0]   B       .S2     $C$L12            ; |72| 
|| [ B0]   MV      .L2X    A3,B4
|| [!B0]   MVKL    .S1     all_pass,A3
|| [!B0]   ZERO    .L1     A4                ; |72| 
||         MV      .D2     B0,B1             ; guard predicate rewrite

   [!B0]   CALL    .S2     print_test_results ; |203| 
|| [!B0]   MVKH    .S1     all_pass,A3
|| [ B0]   LDW     .D2T2   *B4,B0            ; |72| 

           STW     .D2T1   A14,*+SP(36)      ; |69| 
   [ B1]   ADD     .L2     4,B4,B4
           NOP             2
           ; BRANCHCC OCCURS {$C$L12}        ; |72| 
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
           CALL    .S1     print_test_results ; |203| 
           MVKL    .S1     all_pass,A3
           MVKH    .S1     all_pass,A3
           NOP             2
;** --------------------------------------------------------------------------*
$C$L12:    
;          EXCLUSIVE CPU CYCLES: 1

           STW     .D1T1   A4,*A3            ; |72| 
||         MVK     .L1     0x3,A4            ; |203| 
||         ADDKPC  .S2     $C$RL18,B3,0      ; |203| 

$C$RL18:   ; CALL OCCURS {print_test_results} {0}  ; |203| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 15
           MVKL    .S2     0x4000cccc,B4
           MVKL    .S2     0xcccccccd,B31
           MVK     .S2     0xed,B29

           LDW     .D2T1   *+SP(20),A3
||         MVKL    .S2     b_ext,B6

           MVKH    .S2     0x4000cccc,B4
||         STW     .D2T2   B12,*+SP(48)

           MVKH    .S2     0xcccccccd,B31
||         STW     .D2T2   B29,*+SP(12)      ; |206| 

           MVKL    .S1     a_ext,A4
||         MVKH    .S2     b_ext,B6
||         STW     .D2T2   B4,*+SP(56)       ; |213| 

           MVKH    .S1     a_ext,A4
||         MV      .L2     B6,B30            ; |206| 
||         STW     .D2T2   B31,*+SP(60)      ; |213| 

           ZERO    .L2     B5
||         STW     .D2T1   A13,*B30          ; |207| 

           MV      .L2X    A4,B13            ; |206| 
||         SET     .S2     B5,0x17,0x17,B5
||         STW     .D2T1   A3,*+SP(52)
||         MV      .L1X    B11,A15

           STW     .D2T2   B5,*B13           ; |206| 
||         MV      .L1X    B6,A10            ; |207| 
||         CALL    .S1     __c6xabi_divf     ; |209| 
||         MV      .L2X    A4,B11            ; |206| 

           LDW     .D2T1   *B11,A4           ; |209| 
||         LDW     .D1T2   *A10,B4           ; |209| 

           ZERO    .L2     B12
           NOP             2
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L13:    
;          EXCLUSIVE CPU CYCLES: 1
           ADDKPC  .S2     $C$RL19,B3,0      ; |209| 
$C$RL19:   ; CALL OCCURS {__c6xabi_divf} {0}  ; |209| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 94
           LDW     .D1T1   *A15,A3           ; |209| 
           NOP             4
           ADD     .L2X    B12,A3,B4         ; |209| 
           STW     .D2T1   A4,*B4            ; |209| 

           CALLP   .S2     divsp,B3
||         LDW     .D2T1   *B11,A4           ; |210| 
||         LDW     .D1T2   *A10,B4           ; |210| 

$C$RL20:   ; CALL OCCURS {divsp} {0}         ; |210| 
           LDW     .D1T1   *+A15(4),A3       ; |210| 
           NOP             4
           ADD     .L1X    B12,A3,A3         ; |210| 
           STW     .D1T1   A4,*A3            ; |210| 

           CALLP   .S2     divsp_c,B3
||         LDW     .D2T1   *B11,A4           ; |211| 
||         LDW     .D1T2   *A10,B4           ; |211| 

$C$RL21:   ; CALL OCCURS {divsp_c} {0}       ; |211| 
           LDW     .D1T1   *+A15(8),A3       ; |211| 
           LDW     .D2T2   *+SP(16),B6       ; |68| 
           NOP             3
           ADD     .L2X    B12,A3,B4         ; |211| 
           STW     .D2T1   A4,*B4            ; |211| 
           LDW     .D1T1   *A10,A3           ; |212| 
           LDW     .D2T2   *B11,B8           ; |212| 
           LDW     .D2T2   *B6,B9            ; |212| 
           LDDW    .D2T2   *+SP(48),B7:B6    ; |212| 
           NOP             1
           RCPSP   .S1     A3,A4             ; |61| 
           MPYSP   .M1     A4,A3,A5          ; |61| 
           SPDP    .S2     B8,B5:B4          ; |68| 
           ABSSP   .S1     A3,A31            ; |68| 
           ABSDP   .S2     B5:B4,B5:B4       ; |68| 
           FSUBSP  .L1     A12,A5,A5         ; |61| 
           CMPGTDP .S2     B5:B4,B7:B6,B5    ; |68| 
           ADD     .L2     B12,B9,B31        ; |212| 
           MPYSP   .M1     A4,A5,A4          ; |61| 
           XOR     .L2     1,B5,B5           ; |68| 
           CMPEQSP .S2     B8,B10,B0         ; |64| 
           NOP             1
           MPYSP   .M1     A3,A4,A5          ; |61| 
           CMPGTSP .S1     A31,A13,A3        ; |68| 
           AND     .L1X    B5,A3,A0          ; |68| 
           NOP             1
           FSUBSP  .L1     A12,A5,A5         ; |61| 
           NOP             2
           MPYSP   .M1     A4,A5,A4          ; |61| 
           NOP             4
           MPYSP   .M2X    B8,A4,B4          ; |61| 
           NOP             3
   [ B0]   MV      .L2     B10,B4            ; |65| 
   [ A0]   MV      .L2     B10,B4            ; |69| 
           STW     .D2T2   B4,*B31           ; |212| 
           LDDW    .D2T2   *+SP(56),B5:B4
           LDW     .D2T2   *B11,B6           ; |213| 
           LDW     .D1T1   *A10,A4           ; |214| 
           NOP             3
           MPYSPDP .M2     B6,B5:B4,B5:B4    ; |213| 
           NOP             6
           DPSP    .L2     B5:B4,B4          ; |213| 
           NOP             3

           STW     .D2T2   B4,*++B11         ; |213| 
||         ZERO    .L2     B4

           MVKH    .S2     0xbfc00000,B4
           CALLP   .S2     __c6xabi_divf,B3
$C$RL22:   ; CALL OCCURS {__c6xabi_divf} {0}  ; |214| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12
           LDW     .D2T2   *+SP(12),B4       ; |214| 
           ADD     .L2     4,B12,B12         ; |208| 
           STW     .D1T1   A4,*++A10         ; |214| 
           NOP             2

           SUB     .L1X    B4,1,A0           ; |208| 
||         SUB     .L2     B4,1,B4           ; |208| 

   [ A0]   B       .S1     $C$L13            ; |208| 
||         STW     .D2T2   B4,*+SP(12)       ; |214| 
|| [!A0]   MV      .L2X    A15,B11           ; |216| 

   [ A0]   CALL    .S1     __c6xabi_divf     ; |209| 
|| [ A0]   LDW     .D1T2   *A10,B4           ; |209| 

   [ A0]   LDW     .D2T1   *B11,A4           ; |209| 
   [!A0]   CALL    .S1     divsp_v           ; |216| 
   [!A0]   LDW     .D2T1   *+B11(16),A6      ; |216| 
   [!A0]   MVKL    .S2     b_ext,B4
           ; BRANCHCC OCCURS {$C$L13}        ; |208| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 3
           MVKH    .S2     b_ext,B4
           ADDKPC  .S2     $C$RL23,B3,0      ; |216| 

           MVK     .S2     0xed,B6           ; |216| 
||         MV      .L1X    B13,A4

$C$RL23:   ; CALL OCCURS {divsp_v} {0}       ; |216| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 42
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6
           MVKH    .S2     0x3eb0c6f7,B7

           LDW     .D2T1   *B11,A4           ; |66| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T2   *+B11(4),B4       ; |66| 
||         MVK     .S1     0xed,A6           ; |66| 
||         MVK     .L1     0x1,A8            ; |66| 

$C$RL24:   ; CALL OCCURS {isequal} {0}       ; |66| 
           MVKL    .S2     fcn_pass,B12
           MVKL    .S2     0x3eb0c6f7,B7
           MVKH    .S2     fcn_pass,B12
           MVKL    .S2     0xa0b5ed8d,B6

           LDW     .D2T2   *+B11(8),B4       ; |67| 
||         MVKH    .S2     0x3eb0c6f7,B7

           STW     .D2T1   A4,*+B12(4)       ; |66| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T1   *B11,A4           ; |67| 
||         MVK     .S1     0xed,A6           ; |67| 
||         MVK     .L1     0x1,A8            ; |67| 

$C$RL25:   ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6
           MVKH    .S2     0x3eb0c6f7,B7

           STW     .D2T1   A4,*+B12(8)       ; |67| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T2   *+B11(12),B4      ; |68| 
||         LDW     .D1T1   *A15,A4           ; |68| 
||         MVK     .S1     0xed,A6           ; |68| 
||         MVK     .L1     0x1,A8            ; |68| 

$C$RL26:   ; CALL OCCURS {isequal} {0}       ; |68| 
           MVKL    .S2     0xa0b5ed8d,B6
           MVKL    .S2     0x3eb0c6f7,B7

           STW     .D2T1   A4,*+B12(12)      ; |68| 
||         MVKH    .S2     0xa0b5ed8d,B6

           MV      .L1     A11,A3            ; |68| 
||         LDW     .D1T1   *A15,A4           ; |69| 
||         MVKH    .S2     0x3eb0c6f7,B7

           CALLP   .S2     isequal,B3
||         LDW     .D1T2   *A3,B4            ; |69| 
||         MVK     .S1     0xed,A6           ; |69| 
||         MVK     .L1     0x1,A8            ; |69| 

$C$RL27:   ; CALL OCCURS {isequal} {0}       ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 11

           LDW     .D1T1   *A14,A0           ; |72| 
||         LDW     .D2T2   *+SP(32),B4

           STW     .D2T1   A4,*+B12(16)      ; |69| 
           NOP             3

   [!A0]   B       .S1     $C$L14            ; |72| 
|| [ A0]   LDW     .D2T2   *B4,B0            ; |72| 

   [!A0]   CALL    .S1     print_test_results ; |220| 
   [!A0]   ZERO    .L1     A4                ; |72| 
   [ A0]   ADD     .L2     4,B4,B4
   [!A0]   MVKL    .S1     all_pass,A3
   [!A0]   MVKH    .S1     all_pass,A3
           ; BRANCHCC OCCURS {$C$L14}        ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10
   [ B0]   LDW     .D2T2   *B4,B4            ; |72| 
           CMPEQ   .L1     A4,0,A3           ; |72| 
           XOR     .L1     1,A3,A3           ; |72| 
   [!B0]   ZERO    .L1     A0                ; |72| 
           MVK     .L1     0x1,A4            ; |72| 
   [ B0]   CMPEQ   .L2     B4,0,B4           ; |72| 
   [ B0]   XOR     .L2     1,B4,B4           ; |72| 
           NOP             1
   [ B0]   AND     .L1X    A3,B4,A0          ; |72| 
   [!A0]   ZERO    .L1     A4                ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           CALL    .S1     print_test_results ; |220| 
           MVKL    .S1     all_pass,A3
           MVKH    .S1     all_pass,A3
           NOP             2
;** --------------------------------------------------------------------------*
$C$L14:    
;          EXCLUSIVE CPU CYCLES: 1

           STW     .D1T1   A4,*A3            ; |72| 
||         MVK     .L1     0x4,A4            ; |220| 
||         ADDKPC  .S2     $C$RL28,B3,0      ; |220| 

$C$RL28:   ; CALL OCCURS {print_test_results} {0}  ; |220| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 15

           ZERO    .L2     B13               ; |114| 
||         MVKL    .S2     cycle_counts+24,B5

           MVKH    .S2     cycle_counts+24,B5
||         ZERO    .L2     B4                ; |114| 
||         ZERO    .D2     B12               ; |114| 

           MVC     .S2     B4,TSCL           ; |115| 
||         STDW    .D2T2   B13:B12,*B5       ; |114| 

           MVC     .S2     TSCL,B6           ; |116| 
           MVC     .S2     TSCH,B4           ; |116| 
           MVKL    .S1     t_start,A3

           MVKH    .S1     t_start,A3
||         MV      .L2     B4,B7             ; |116| 

           MVC     .S2     TSCL,B4           ; |117| 
||         STDW    .D1T2   B7:B6,*A3         ; |116| 

           MVC     .S2     TSCH,B8           ; |117| 
           MVKL    .S1     t_offset,A4

           CALL    .S2     gimme_random      ; |230| 
||         SUBU    .L2     B4,B6,B5:B4       ; |117| 
||         MVKL    .S1     0x41490fda,A15

           SUB     .L2     B8,B7,B6          ; |117| 
||         EXT     .S2     B5,24,24,B5       ; |117| 
||         MVK     .S1     0x80,A3

           ADD     .L2     B6,B5,B5          ; |117| 
||         MVKH    .S1     t_offset,A4

           MVKL    .S2     0xc0c90fda,B4
||         STDW    .D1T2   B5:B4,*A4         ; |117| 
||         MVKH    .S1     0x41490fda,A15

           MVKH    .S2     0xc0c90fda,B4
||         MV      .L1     A15,A4            ; |230| 
||         STW     .D2T1   A3,*+SP(12)       ; |117| 
||         MV      .S1X    B13,A14

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L15:    
;          EXCLUSIVE CPU CYCLES: 1
           ADDKPC  .S2     $C$RL29,B3,0      ; |230| 
$C$RL29:   ; CALL OCCURS {gimme_random} {0}  ; |230| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 16
           MVKL    .S1     input,A3
           MVKH    .S1     input,A3
           LDW     .D1T2   *A3,B5            ; |230| 
           MV      .L2X    A4,B4             ; |230| 
           LDW     .D1T1   *+A3(4),A10       ; |231| 
           MV      .L1     A15,A4            ; |231| 
           NOP             1
           ADD     .L2X    A14,B5,B5         ; |230| 

           STW     .D2T2   B4,*B5            ; |230| 
||         MVKL    .S2     0xc0c90fda,B4

           MVKH    .S2     0xc0c90fda,B4
           CALLP   .S2     gimme_random,B3
$C$RL30:   ; CALL OCCURS {gimme_random} {0}  ; |231| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 58
           ADD     .L1     A10,A14,A3        ; |231| 

           STW     .D1T1   A4,*A3            ; |231| 
||         MVC     .S2     TSCL,B6           ; |122| 

           MVC     .S2     TSCH,B7           ; |122| 

           ADD     .L1     A10,A14,A3        ; |61| 
||         MVKL    .S2     input,B4
||         MVKL    .S1     output+12,A7
||         ZERO    .L2     B18
||         MV      .D2X    A10,B11           ; |61| 

           LDW     .D1T1   *A3,A3            ; |61| 
           MVKH    .S1     output+12,A7
           MVKH    .S2     input,B4
           ABSSP   .S1     A4,A4             ; |68| 
           LDW     .D1T1   *A7,A30           ; |235| 
           RCPSP   .S1     A3,A5             ; |61| 
           MPYSP   .M1     A5,A3,A6          ; |61| 
           MVKL    .S2     0x47efffff,B19
           LDW     .D2T2   *B4,B8            ; |235| 
           CMPGTSP .S1     A4,A13,A4         ; |68| 
           FSUBSP  .L1     A12,A6,A6         ; |61| 
           MVKH    .S2     0x47efffff,B19
           MVKH    .S2     0xe0000000,B18
           MPYSP   .M1     A5,A6,A5          ; |61| 
           ADD     .L2X    B8,A14,B4         ; |235| 
           LDW     .D2T2   *B4,B4            ; |235| 
           MVKL    .S2     t_start,B30
           MPYSP   .M1     A3,A5,A3          ; |61| 
           MVKH    .S2     t_start,B30
           STDW    .D2T2   B7:B6,*B30
           SPDP    .S2     B4,B17:B16        ; |68| 
           FSUBSP  .L1     A12,A3,A3         ; |61| 
           ADD     .L1X    B8,A14,A31        ; |64| 
           ABSDP   .S2     B17:B16,B17:B16   ; |68| 
           MPYSP   .M1     A5,A3,A6          ; |61| 
           MV      .L1X    B8,A10            ; |64| 
           CMPGTDP .S2     B17:B16,B19:B18,B5 ; |68| 
           LDW     .D1T1   *A31,A5           ; |64| 
           XOR     .L2     1,B5,B31          ; |68| 
           MPYSP   .M2X    B4,A6,B4          ; |61| 
           AND     .L2X    B31,A4,B0         ; |68| 
           ADD     .L1     A14,A30,A3        ; |235| 
           CMPEQSP .S1X    A5,B10,A0         ; |64| 
   [ A0]   MV      .L2     B10,B4            ; |65| 
   [ B0]   MV      .L2     B10,B4            ; |69| 

           STW     .D1T2   B4,*A3            ; |235| 
||         MVC     .S2     TSCL,B8           ; |128| 

           MVC     .S2     TSCH,B9           ; |128| 

           MVKL    .S1     t_offset,A3
||         LDW     .D2T1   *+SP(12),A28      ; |130| 
||         MVKL    .S2     t_stop,B29
||         ADD     .L1     4,A14,A14         ; |228| 

           MVKH    .S1     t_offset,A3
||         MVKH    .S2     t_stop,B29

           STDW    .D2T2   B9:B8,*B29        ; |128| 
||         LDDW    .D1T1   *A3,A5:A4         ; |130| 

           MVKL    .S1     cycle_counts+24,A29
           MVKH    .S1     cycle_counts+24,A29
           LDDW    .D1T1   *A29,A7:A6        ; |130| 
           SUB     .L1     A28,1,A0          ; |228| 
           ADDU    .L2X    A4,B6,B5:B4       ; |130| 

           ADD     .S2X    B5,A5,B5          ; |130| 
||         SUBU    .L2     B8,B4,B17:B16     ; |130| 

           ADD     .L2     B5,B7,B4          ; |130| 
||         EXT     .S2     B17,24,24,B6      ; |130| 

           SUB     .S2     B9,B4,B7          ; |130| 
||         ADDU    .L2X    A6,B16,B5:B4      ; |130| 

   [ A0]   B       .S1     $C$L15            ; |228| 
||         ADD     .L2     B7,B6,B6          ; |130| 

   [ A0]   CALL    .S1     gimme_random      ; |230| 
||         ADD     .L1X    B5,A7,A3          ; |130| 

           MV      .L1X    B4,A4             ; |130| 
||         MVKL    .S2     cycle_counts+24,B4

           MVKH    .S2     cycle_counts+24,B4
||         ADD     .L1X    A3,B6,A5          ; |130| 
||         SUB     .S1     A28,1,A3          ; |228| 

           STDW    .D2T1   A5:A4,*B4         ; |130| 
|| [ A0]   MVKL    .S2     0xc0c90fda,B4
|| [ A0]   MV      .L1     A15,A4            ; |230| 

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
|| [ A0]   MVKH    .S2     0xc0c90fda,B4
||         STW     .D2T1   A3,*+SP(12)       ; |130| 

           ; BRANCHCC OCCURS {$C$L15}        ; |228| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D2T1   *B4,A5:A4         ; |135| 
           ADDKPC  .S2     $C$RL31,B3,3      ; |135| 
$C$RL31:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 15
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |135| 
           ZERO    .L1     A13
           SET     .S1     A13,0x15,0x1d,A13
           MV      .L1X    B13,A12           ; |135| 
           SPDP    .S1     A3,A5:A4          ; |135| 
           NOP             2

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A13:A12,A5:A4,A5:A4 ; |135| 

$C$RL32:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 21
           MVKL    .S1     cycle_counts+24,A3
           MVKH    .S1     cycle_counts+24,A3
           MV      .L2     B12,B5            ; |114| 
           MV      .L2X    A3,B4
           STDW    .D2T1   A5:A4,*B4         ; |135| 
           SUBAW   .D2     B4,6,B10

           STDW    .D2T2   B13:B12,*B10      ; |114| 
||         MVC     .S2     B5,TSCL           ; |115| 

           MVC     .S2     TSCL,B4           ; |116| 
           MVC     .S2     TSCH,B5           ; |116| 
           MV      .L1X    B4,A14            ; |116| 

           MV      .L1X    B5,A12            ; |116| 
||         MVC     .S2     TSCL,B5           ; |117| 

           MVC     .S2     TSCH,B4           ; |117| 

           SUBU    .L2X    B5,A14,B7:B6      ; |117| 
||         MVKL    .S1     output,A31
||         MVK     .S2     0x80,B31

           SUB     .L1X    B4,A12,A4         ; |117| 
||         EXT     .S2     B7,24,24,B4       ; |117| 
||         MVKH    .S1     output,A31

           MV      .L1X    B6,A3             ; |117| 
||         STW     .D2T2   B31,*+SP(12)      ; |117| 
||         LDW     .D1T1   *A31,A15

           ADD     .L1X    A4,B4,A30         ; |117| 
||         STW     .D2T1   A3,*+SP(16)       ; |117| 

           STW     .D2T1   A30,*+SP(20)      ; |117| 
||         CALL    .S1     __c6xabi_divf     ; |243| 

           LDW     .D2T2   *B11++,B4         ; |243| 
||         LDW     .D1T1   *A10++,A4         ; |243| 

           NOP             3
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L16:    
;          EXCLUSIVE CPU CYCLES: 1
           ADDKPC  .S2     $C$RL33,B3,0      ; |243| 
$C$RL33:   ; CALL OCCURS {__c6xabi_divf} {0}  ; |243| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12
           LDW     .D2T2   *+SP(12),B4       ; |243| 
           STW     .D1T1   A4,*A15++         ; |243| 
           NOP             3

           SUB     .L1X    B4,1,A0           ; |242| 
||         SUB     .L2     B4,1,B4           ; |242| 

   [ A0]   B       .S1     $C$L16            ; |242| 
||         STW     .D2T2   B4,*+SP(12)       ; |243| 

   [ A0]   LDW     .D2T2   *B11++,B4         ; |243| 
|| [ A0]   CALL    .S1     __c6xabi_divf     ; |243| 

   [ A0]   LDW     .D1T1   *A10++,A4         ; |243| 
           NOP             3
           ; BRANCHCC OCCURS {$C$L16}        ; |242| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 14
           MVC     .S2     TSCL,B6           ; |128| 
           MVC     .S2     TSCH,B4           ; |128| 
           LDW     .D2T1   *+SP(16),A3       ; |128| 
           LDW     .D2T1   *+SP(20),A31      ; |128| 
           MV      .L2     B4,B7             ; |128| 
           LDDW    .D2T2   *B10,B5:B4        ; |130| 
           NOP             1
           ADDU    .L1     A3,A14,A5:A4      ; |130| 

           ADD     .S1     A5,A31,A3         ; |130| 
||         SUBU    .L1X    B6,A4,A5:A4       ; |130| 
||         CALL    .S2     __c6xabi_fltllif  ; |130| 

           ADD     .L1     A3,A12,A3         ; |130| 
||         EXT     .S1     A5,24,24,A30      ; |130| 

           ADDU    .L2X    B4,A4,B9:B8       ; |130| 
||         SUB     .L1X    B7,A3,A3          ; |130| 
||         MVKL    .S2     t_stop,B4

           ADD     .L2     B9,B5,B5          ; |130| 
||         ADD     .L1     A3,A30,A3         ; |130| 
||         MVKH    .S2     t_stop,B4

           STDW    .D2T2   B7:B6,*B4         ; |128| 
||         MV      .L1X    B8,A4             ; |130| 

           ADD     .L1X    B5,A3,A5          ; |130| 
||         ADDKPC  .S2     $C$RL34,B3,0      ; |130| 

$C$RL34:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |130| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 14
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |130| 
           MV      .L1X    B13,A12           ; |130| 
           NOP             2
           SPDP    .S1     A3,A5:A4          ; |130| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A13:A12,A5:A4,A5:A4 ; |130| 

$C$RL35:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |130| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 17

           ZERO    .L1     A15
||         MV      .L2     B12,B4            ; |114| 
||         STDW    .D2T2   B13:B12,*+B10(8)  ; |114| 

           SET     .S1     A15,0x1a,0x1d,A15
||         STDW    .D2T1   A5:A4,*B10        ; |130| 
||         MVC     .S2     B4,TSCL           ; |115| 

           MVC     .S2     TSCL,B6           ; |116| 
           MVC     .S2     TSCH,B7           ; |116| 
           MVKL    .S1     t_start,A3
           MVKH    .S1     t_start,A3

           STDW    .D1T2   B7:B6,*A3         ; |116| 
||         MVC     .S2     TSCL,B4           ; |117| 

           MVC     .S2     TSCH,B8           ; |117| 

           SUBU    .L2     B4,B6,B5:B4       ; |117| 
||         MVKL    .S2     t_offset,B11

           EXT     .S2     B5,24,24,B5       ; |117| 
||         SUB     .L2     B8,B7,B6          ; |117| 

           ADD     .L2     B6,B5,B5          ; |117| 
||         MVKH    .S2     t_offset,B11
||         MVKL    .S1     input,A3

           STDW    .D2T2   B5:B4,*B11        ; |117| 
||         MVKL    .S2     input,B4
||         MVKH    .S1     input,A3

           MVKH    .S2     input,B4
||         ADD     .L1     4,A3,A10

           LDW     .D2T2   *B4,B4            ; |251| 
||         LDW     .D1T1   *A10,A3           ; |251| 

           MVK     .S2     0x80,B31
           LDW     .D2T1   *+SP(24),A14      ; |117| 
           STW     .D2T2   B31,*+SP(12)      ; |117| 
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L17:    
;          EXCLUSIVE CPU CYCLES: 7
           NOP             1

           ADD     .L1     A12,A3,A3         ; |251| 
||         ADD     .L2X    A12,B4,B4         ; |251| 
||         CALL    .S1     divsp             ; |251| 

           LDW     .D2T1   *B4,A4            ; |251| 
||         LDW     .D1T2   *A3,B4            ; |251| 

           ADDKPC  .S2     $C$RL36,B3,3      ; |251| 
$C$RL36:   ; CALL OCCURS {divsp} {0}         ; |251| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12

           LDW     .D2T2   *+SP(12),B4       ; |251| 
||         LDW     .D1T1   *A14,A3           ; |251| 

           NOP             4

           SUB     .L1X    B4,1,A0           ; |250| 
||         SUB     .L2     B4,1,B4           ; |250| 
||         ADD     .S1     A12,A3,A3         ; |251| 

   [ A0]   B       .S1     $C$L17            ; |250| 
||         STW     .D2T2   B4,*+SP(12)       ; |251| 
||         MVKL    .S2     input,B4
||         STW     .D1T1   A4,*A3            ; |251| 

           MVKH    .S2     input,B4
|| [ A0]   LDW     .D1T1   *A10,A3           ; |251| 

   [ A0]   LDW     .D2T2   *B4,B4            ; |251| 
           ADD     .L1     4,A12,A12         ; |250| 
           NOP             2
           ; BRANCHCC OCCURS {$C$L17}        ; |250| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 20
           MVC     .S2     TSCL,B6           ; |128| 
           MVC     .S2     TSCH,B7           ; |128| 

           MVKL    .S1     t_start,A14
||         MV      .L2     B11,B4

           MVKH    .S1     t_start,A14
||         LDDW    .D2T2   *B4,B5:B4         ; |130| 

           LDDW    .D1T1   *A14,A7:A6        ; |130| 
           NOP             4
           ADDU    .L1X    B4,A6,A5:A4       ; |130| 

           ADD     .L1X    A5,B5,A31         ; |130| 
||         LDDW    .D2T2   *+B10(8),B5:B4    ; |130| 

           ADD     .L1     A31,A7,A3         ; |130| 
||         SUBU    .L2X    B6,A4,B9:B8       ; |130| 

           EXT     .S2     B9,24,24,B16      ; |130| 
           SUB     .L2X    B7,A3,B31         ; |130| 
           CALL    .S1     __c6xabi_fltllif  ; |130| 
           ADDU    .L2     B4,B8,B9:B8       ; |130| 

           ADD     .L2     B9,B5,B4          ; |130| 
||         ADD     .S2     B31,B16,B5        ; |130| 

           ADD     .L2     B4,B5,B9          ; |130| 
||         MVKL    .S2     t_stop,B4

           MVKH    .S2     t_stop,B4

           STDW    .D2T2   B7:B6,*B4         ; |128| 
||         DADD    .L1X    0,B9:B8,A5:A4     ; |130| 
||         ADDKPC  .S2     $C$RL37,B3,0      ; |130| 

$C$RL37:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |130| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12
           MPYSP   .M1     A15,A4,A3         ; |130| 
           MV      .L1X    B13,A12           ; |130| 
           NOP             2
           SPDP    .S1     A3,A5:A4          ; |130| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A13:A12,A5:A4,A5:A4 ; |130| 

$C$RL38:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |130| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 17
           STDW    .D2T2   B13:B12,*+B10(16) ; |114| 

           ADDAD   .D2     B10,1,B11
||         MV      .L2     B12,B4            ; |114| 

           STDW    .D2T1   A5:A4,*B11        ; |130| 
||         MVC     .S2     B4,TSCL           ; |115| 

           MVC     .S2     TSCL,B8           ; |116| 
           MVC     .S2     TSCH,B4           ; |116| 

           MV      .L1     A14,A3            ; |116| 
||         MV      .L2     B4,B9             ; |116| 

           STDW    .D1T2   B9:B8,*A3         ; |116| 
||         MVC     .S2     TSCL,B5           ; |117| 

           MVC     .S2     TSCH,B4           ; |117| 
           MVKL    .S2     t_offset,B31

           SUBU    .L2     B5,B8,B7:B6       ; |117| 
||         MVKH    .S2     t_offset,B31

           SUB     .L2     B4,B9,B5          ; |117| 
||         EXT     .S2     B7,24,24,B4       ; |117| 

           ADD     .L2     B5,B4,B7          ; |117| 
||         MVKL    .S2     input,B4

           STDW    .D2T2   B7:B6,*B31        ; |117| 
||         MVKH    .S2     input,B4

           LDW     .D1T1   *A10,A3           ; |259| 
||         LDW     .D2T2   *B4,B4            ; |259| 

           MVK     .S2     0x80,B30
           LDW     .D2T1   *+SP(28),A12      ; |117| 

           STW     .D2T2   B30,*+SP(12)      ; |117| 
||         MV      .L1X    B13,A14

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L18:    
;          EXCLUSIVE CPU CYCLES: 7
           NOP             1

           ADD     .L1     A14,A3,A3         ; |259| 
||         ADD     .L2X    A14,B4,B4         ; |259| 
||         CALL    .S1     divsp_c           ; |259| 

           LDW     .D2T1   *B4,A4            ; |259| 
||         LDW     .D1T2   *A3,B4            ; |259| 

           ADDKPC  .S2     $C$RL39,B3,3      ; |259| 
$C$RL39:   ; CALL OCCURS {divsp_c} {0}       ; |259| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12

           LDW     .D2T2   *+SP(12),B4       ; |259| 
||         LDW     .D1T1   *A12,A3           ; |259| 

           NOP             4

           SUB     .L1X    B4,1,A0           ; |258| 
||         SUB     .L2     B4,1,B4           ; |258| 
||         ADD     .S1     A14,A3,A3         ; |259| 

   [ A0]   B       .S1     $C$L18            ; |258| 
||         STW     .D2T2   B4,*+SP(12)       ; |259| 
||         MVKL    .S2     input,B4
||         STW     .D1T1   A4,*A3            ; |259| 

           MVKH    .S2     input,B4
|| [ A0]   LDW     .D1T1   *A10,A3           ; |259| 

   [ A0]   LDW     .D2T2   *B4,B4            ; |259| 
           ADD     .L1     4,A14,A14         ; |258| 
           NOP             2
           ; BRANCHCC OCCURS {$C$L18}        ; |258| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 17
           MVC     .S2     TSCL,B6           ; |128| 
           MVC     .S2     TSCH,B7           ; |128| 

           MVKL    .S1     t_start,A14
||         MVKL    .S2     t_offset,B4

           MVKH    .S2     t_offset,B4
||         MVKH    .S1     t_start,A14

           LDDW    .D2T2   *B4,B9:B8         ; |130| 
||         LDDW    .D1T1   *A14,A5:A4        ; |130| 

           MV      .L2     B10,B31           ; |128| 
           LDDW    .D2T2   *+B31(16),B17:B16 ; |130| 
           STW     .D2T2   B10,*+SP(12)      ; |130| 
           NOP             1
           ADDU    .L2X    B8,A4,B5:B4       ; |130| 

           ADD     .S2     B5,B9,B4          ; |130| 
||         SUBU    .L2     B6,B4,B9:B8       ; |130| 

           MV      .L2     B8,B5             ; |130| 
||         ADD     .S2X    B4,A5,B4          ; |130| 
||         CALL    .S1     __c6xabi_fltllif  ; |130| 

           ADDU    .L2     B16,B5,B9:B8      ; |130| 
||         EXT     .S2     B9,24,24,B5       ; |130| 
||         SUB     .D2     B7,B4,B4          ; |130| 

           ADD     .L2     B4,B5,B5          ; |130| 
||         ADD     .S2     B9,B17,B4         ; |130| 

           ADD     .L2     B4,B5,B9          ; |130| 
||         MVKL    .S2     t_stop,B4

           MVKH    .S2     t_stop,B4

           STDW    .D2T2   B7:B6,*B4         ; |128| 
||         DADD    .L1X    0,B9:B8,A5:A4     ; |130| 
||         ADDKPC  .S2     $C$RL40,B3,0      ; |130| 

$C$RL40:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |130| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 112
           MPYSP   .M1     A15,A4,A3         ; |130| 
           MV      .L1X    B13,A12           ; |130| 
           NOP             3
           SPDP    .S2X    A3,B5:B4          ; |130| 
           NOP             2

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1X    A13:A12,B5:B4,A5:A4 ; |130| 

$C$RL41:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |130| 
           LDW     .D2T2   *+SP(12),B4
           ADDAD   .D2     B11,1,B10
           MV      .L2     B12,B31           ; |114| 
           STDW    .D2T1   A5:A4,*B10        ; |130| 
           NOP             1

           STDW    .D2T2   B13:B12,*+B4(32)  ; |114| 
||         MVC     .S2     B31,TSCL          ; |115| 

           MVC     .S2     TSCL,B4           ; |116| 
           MVC     .S2     TSCH,B5           ; |116| 

           STDW    .D1T2   B5:B4,*A14        ; |116| 
||         MVC     .S2     TSCL,B6           ; |117| 

           MVC     .S2     TSCH,B8           ; |117| 
           MVKL    .S1     input,A3
           MVKH    .S1     input,A3
           SUBU    .L2     B6,B4,B7:B6       ; |117| 

           MV      .L2X    A3,B16            ; |266| 
||         MVKL    .S1     t_offset,A3

           MVKH    .S1     t_offset,A3

           MVKL    .S1     output,A12
||         MV      .L2X    A10,B9            ; |117| 
||         EXT     .S2     B7,24,24,B5       ; |117| 
||         SUB     .D2     B8,B5,B7          ; |117| 

           MVKH    .S1     output,A12
||         LDW     .D2T2   *B9,B4            ; |266| 
||         MV      .L2X    A3,B11            ; |117| 
||         ADD     .S2     B7,B5,B7          ; |117| 

           LDW     .D1T1   *+A12(16),A6      ; |266| 
||         STDW    .D2T2   B7:B6,*B11        ; |117| 
||         MVK     .S2     0x80,B6           ; |266| 

           CALLP   .S2     divsp_v,B3
||         LDW     .D2T1   *B16,A4           ; |266| 

$C$RL42:   ; CALL OCCURS {divsp_v} {0}       ; |266| 
           MVC     .S2     TSCL,B8           ; |128| 
           MVC     .S2     TSCH,B4           ; |128| 

           LDDW    .D1T1   *A14,A7:A6        ; |130| 
||         LDDW    .D2T2   *B11,B7:B6        ; |130| 

           MVK     .S1     16,A10
           ADD     .L1X    B10,A10,A10
           MVKL    .S1     t_stop,A3

           LDDW    .D1T1   *A10,A17:A16      ; |130| 
||         MVKH    .S1     t_stop,A3

           ADDU    .L1X    B6,A6,A5:A4       ; |130| 

           MV      .L2     B4,B9             ; |128| 
||         MV      .S2X    A3,B4             ; |128| 
||         ADD     .L1X    A5,B7,A3          ; |130| 

           SUBU    .L1X    B8,A4,A9:A8       ; |130| 

           ADD     .L1     A3,A7,A4          ; |130| 
||         EXT     .S1     A9,24,24,A3       ; |130| 

           SUB     .S1X    B9,A4,A6          ; |130| 
||         ADDU    .L1     A16,A8,A5:A4      ; |130| 

           ADD     .L1     A5,A17,A3         ; |130| 
||         ADD     .S1     A6,A3,A5          ; |130| 

           CALLP   .S2     __c6xabi_fltllif,B3
||         ADD     .L1     A3,A5,A5          ; |130| 
||         STDW    .D2T2   B9:B8,*B4         ; |128| 

$C$RL43:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |130| 
           MPYSP   .M1     A15,A4,A3         ; |130| 
           MV      .L1     A13,A5            ; |130| 
           MV      .L1X    B13,A4            ; |130| 
           NOP             2
           SPDP    .S1     A3,A7:A6          ; |130| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A5:A4,A7:A6,A5:A4 ; |130| 

$C$RL44:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |130| 
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6

           STDW    .D1T1   A5:A4,*A10        ; |130| 
||         MVKH    .S2     0x3eb0c6f7,B7

           LDW     .D1T2   *+A12(4),B4       ; |66| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A12,A4           ; |66| 
||         MVK     .S1     0x80,A6           ; |66| 
||         MVK     .L1     0x1,A8            ; |66| 

$C$RL45:   ; CALL OCCURS {isequal} {0}       ; |66| 
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6
           MVKL    .S2     fcn_pass,B10
           MVKH    .S2     0x3eb0c6f7,B7
           MVKH    .S2     0xa0b5ed8d,B6

           MV      .L1     A4,A3             ; |66| 
||         LDW     .D1T1   *A12,A4           ; |67| 
||         MVKH    .S2     fcn_pass,B10

           CALLP   .S2     isequal,B3
||         LDW     .D1T2   *+A12(8),B4       ; |67| 
||         STW     .D2T1   A3,*+B10(4)       ; |66| 
||         MVK     .S1     0x80,A6           ; |67| 
||         MVK     .L1     0x1,A8            ; |67| 

$C$RL46:   ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6
           MVKH    .S2     0x3eb0c6f7,B7

           STW     .D2T1   A4,*+B10(8)       ; |67| 
||         LDW     .D1T2   *+A12(12),B4      ; |68| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A12,A4           ; |68| 
||         MVK     .S1     0x80,A6           ; |68| 
||         MVK     .L1     0x1,A8            ; |68| 

$C$RL47:   ; CALL OCCURS {isequal} {0}       ; |68| 
           MVKL    .S2     0x3eb0c6f7,B7
           MVKL    .S2     0xa0b5ed8d,B6
           MVKH    .S2     0x3eb0c6f7,B7

           STW     .D2T1   A4,*+B10(12)      ; |68| 
||         LDW     .D1T2   *A11,B4           ; |69| 
||         MVKH    .S2     0xa0b5ed8d,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A12,A4           ; |69| 
||         MVK     .S1     0x80,A6           ; |69| 
||         MVK     .L1     0x1,A8            ; |69| 

$C$RL48:   ; CALL OCCURS {isequal} {0}       ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 16
           LDW     .D2T2   *+SP(36),B4       ; |69| 
           STW     .D2T1   A4,*+B10(16)      ; |69| 
           NOP             3
           LDW     .D2T2   *B4,B0            ; |72| 
           LDW     .D2T2   *+SP(40),B4
           NOP             3

   [!B0]   B       .S1     $C$L19            ; |72| 
||         MV      .L2     B0,B1             ; guard predicate rewrite

   [ B0]   LDW     .D2T2   *B4,B0            ; |72| 
   [ B1]   ADD     .L2     4,B4,B4
           NOP             3
           ; BRANCHCC OCCURS {$C$L19}        ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 15
   [ B0]   LDW     .D2T2   *B4,B4            ; |72| 
   [!B0]   MV      .L1X    B13,A0            ; |72| 
           CMPEQ   .L1     A4,0,A3           ; |72| 
           XOR     .L1     1,A3,A3           ; |72| 
           NOP             1
   [ B0]   CMPEQ   .L2     B4,0,B4           ; |72| 
   [ B0]   XOR     .L2     1,B4,B4           ; |72| 
           NOP             1
   [ B0]   AND     .L1X    A3,B4,A0          ; |72| 
   [ A0]   B       .S1     $C$L20            ; |72| 
   [ A0]   CALL    .S1     print_test_results ; |272| 
           MVK     .L1     0x1,A3            ; |72| 
   [ A0]   MVKL    .S1     all_pass,A4
   [ A0]   MVKH    .S1     all_pass,A4
           NOP             1
           ; BRANCHCC OCCURS {$C$L20}        ; |72| 
;** --------------------------------------------------------------------------*
$C$L19:    
;          EXCLUSIVE CPU CYCLES: 5
           CALL    .S1     print_test_results ; |272| 
           MVKL    .S1     all_pass,A4
           MVKH    .S1     all_pass,A4
           MV      .L1X    B12,A3
           NOP             1
;** --------------------------------------------------------------------------*
$C$L20:    
;          EXCLUSIVE CPU CYCLES: 1

           STW     .D1T1   A3,*A4            ; |72| 
||         MVK     .L1     0x2,A4            ; |272| 
||         ADDKPC  .S2     $C$RL49,B3,0      ; |272| 

$C$RL49:   ; CALL OCCURS {print_test_results} {0}  ; |272| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 30
           MVKL    .S2     $C$SL2+0,B4
           MVKH    .S2     $C$SL2+0,B4

           CALLP   .S2     printf,B3
||         STW     .D2T2   B4,*+SP(4)        ; |273| 

$C$RL50:   ; CALL OCCURS {printf} {0}        ; |273| 
           MVKL    .S2     $C$SL3+0,B4
           MVKH    .S2     $C$SL3+0,B4

           CALLP   .S2     printf,B3
||         STW     .D2T2   B4,*+SP(4)        ; |273| 

$C$RL51:   ; CALL OCCURS {printf} {0}        ; |273| 
           MVKL    .S1     $C$SL1+0,A10
           MVKH    .S1     $C$SL1+0,A10

           CALLP   .S2     print_profile_results,B3
||         MV      .L1     A10,A4            ; |280| 

$C$RL52:   ; CALL OCCURS {print_profile_results} {0}  ; |280| 

           CALLP   .S2     print_memory_results,B3
||         MV      .L1     A10,A4            ; |283| 

$C$RL53:   ; CALL OCCURS {print_memory_results} {0}  ; |283| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 11
           LDW     .D2T2   *++SP(72),B3      ; |284| 
           LDDW    .D2T1   *++SP,A13:A12     ; |284| 
           LDDW    .D2T1   *++SP,A15:A14     ; |284| 
           LDDW    .D2T2   *++SP,B11:B10     ; |284| 
           LDDW    .D2T2   *++SP,B13:B12     ; |284| 

           LDW     .D2T1   *++SP(8),A10      ; |284| 
||         RET     .S2     B3                ; |284| 

           LDW     .D2T1   *++SP(8),A11      ; |284| 
           NOP             4
           ; BRANCH OCCURS {B3}              ; |284| 
;******************************************************************************
;* STRINGS                                                                    *
;******************************************************************************
	.sect	".const:.string"
$C$SL1:	.string	"divSP",0
$C$SL2:	.string	"----------------------------------------",0
$C$SL3:	.string	"----------------------------------------",10,0
;*****************************************************************************
;* UNDEFINED EXTERNAL REFERENCES                                             *
;*****************************************************************************
	.global	printf
	.global	driver_init
	.global	print_profile_results
	.global	print_memory_results
	.global	print_test_results
	.global	gimme_random
	.global	isequal
	.global	divsp
	.global	divsp_c
	.global	divsp_v
	.global	t_start
	.global	t_stop
	.global	t_offset
	.global	cycle_counts
	.global	fcn_pass
	.global	all_pass
	.global	a_ext
	.global	b_ext
	.global	a_sc
	.global	b_sc
	.global	output
	.global	input
	.global	__c6xabi_divf
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
