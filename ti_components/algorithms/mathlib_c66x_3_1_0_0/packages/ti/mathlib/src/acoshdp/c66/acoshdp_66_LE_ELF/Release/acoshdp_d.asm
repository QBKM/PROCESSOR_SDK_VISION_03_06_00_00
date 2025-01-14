;******************************************************************************
;* TMS320C6x C/C++ Codegen                                          PC v7.4.2 *
;* Date/Time created: Mon Nov 04 22:09:54 2013                                *
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
	.word	05be02646h,0412af0e3h		; a[0] @ 0
	.word	020423b0eh,04121197ah		; a[1] @ 64
	.word	066ce505bh,040fdd968h		; a[2] @ 128
	.word	0bb561764h,0411dd368h		; a[3] @ 192
	.word	09b258ad4h,040ed382dh		; a[4] @ 256
	.word	09d3b8af1h,04121d565h		; a[5] @ 320
	.word	0357bd563h,04116dda3h		; a[6] @ 384
	.word	0dfabcffdh,0412bd534h		; a[7] @ 448
	.word	09ea2edd6h,04129b83fh		; a[8] @ 512
	.word	0f33d2956h,0411316d3h		; a[9] @ 576
	.word	0dea31975h,0412616dbh		; a[10] @ 640
	.word	0442a927bh,04128999fh		; a[11] @ 704
	.word	0f4b223d4h,040ff1162h		; a[12] @ 768
	.word	048aef7d0h,0412c7afbh		; a[13] @ 832
	.word	02e682152h,041172716h		; a[14] @ 896
	.word	024213a0ch,041027270h		; a[15] @ 960
	.word	038de59bdh,041197540h		; a[16] @ 1024
	.word	07a42ff59h,041093db2h		; a[17] @ 1088
	.word	005c96031h,041008b60h		; a[18] @ 1152
	.word	05caf84bdh,0411ec7d7h		; a[19] @ 1216
	.word	09a7f221fh,041283555h		; a[20] @ 1280
	.word	0d3cf04b5h,0411eac9bh		; a[21] @ 1344
	.word	039f9c122h,04116eaf8h		; a[22] @ 1408
	.word	0a6c4fb47h,040e6e078h		; a[23] @ 1472
	.word	03822eae7h,0412d5011h		; a[24] @ 1536
	.word	0bfeef292h,04127c24ah		; a[25] @ 1600
	.word	09f912a5fh,040f71020h		; a[26] @ 1664
	.word	0ca0f4d7bh,0411f93ddh		; a[27] @ 1728
	.word	0dd928fbah,0410697d4h		; a[28] @ 1792
	.word	0409807c9h,04122381ah		; a[29] @ 1856
	.word	0117bc141h,0412a26cbh		; a[30] @ 1920
	.word	047531048h,04110c1a9h		; a[31] @ 1984
	.word	03d9fb898h,0411513c1h		; a[32] @ 2048
	.word	0c0d5984dh,040f7c32ah		; a[33] @ 2112
	.word	098b47263h,04129bddbh		; a[34] @ 2176
	.word	08969a0aeh,0410ff548h		; a[35] @ 2240
	.word	006488758h,0412b9a46h		; a[36] @ 2304
	.word	006eb412ch,040d6a8f9h		; a[37] @ 2368
	.word	0be2003ach,04128c59dh		; a[38] @ 2432
	.word	04b40db92h,040d69449h		; a[39] @ 2496
	.word	0e4d6eb34h,0412c62c5h		; a[40] @ 2560
	.word	02aca361ah,0412575b2h		; a[41] @ 2624
	.word	06a712282h,040fe2defh		; a[42] @ 2688
	.word	0b2c9696bh,04124bc73h		; a[43] @ 2752
	.word	03d4e0978h,040f240cfh		; a[44] @ 2816
	.word	0d6f2a5a4h,040f30c52h		; a[45] @ 2880
	.word	04f937238h,04126276dh		; a[46] @ 2944
	.word	0403d3ca1h,0412d4cc8h		; a[47] @ 3008
	.word	06b23eac1h,041220aeeh		; a[48] @ 3072
	.word	03dc66326h,041243069h		; a[49] @ 3136
	.word	0775cb5e3h,04104bdf4h		; a[50] @ 3200
	.word	093161a1eh,04106d07ch		; a[51] @ 3264
	.word	03d990951h,041131ff5h		; a[52] @ 3328
	.word	073e56473h,04121564bh		; a[53] @ 3392
	.word	08c2a7e59h,041220d47h		; a[54] @ 3456
	.word	01d64f2c9h,04110086bh		; a[55] @ 3520
	.word	0fcdb6a1fh,04124d9ech		; a[56] @ 3584
	.word	0387d4e09h,0411f4735h		; a[57] @ 3648
	.word	05dbb6aa5h,0412631a5h		; a[58] @ 3712
	.word	05f922963h,04125ad41h		; a[59] @ 3776
	.word	07feab368h,04126368dh		; a[60] @ 3840
	.word	013f65dc0h,041283cbfh		; a[61] @ 3904
	.word	0c21bd8a4h,0412ba7f5h		; a[62] @ 3968
	.word	058c2140ch,04122db3ch		; a[63] @ 4032
	.word	06f2ae07eh,040f23957h		; a[64] @ 4096
	.word	0b2319e08h,04113223bh		; a[65] @ 4160
	.word	01f05ea25h,040e2d284h		; a[66] @ 4224
	.word	0a346a352h,04124ed79h		; a[67] @ 4288
	.word	09c435844h,0412cad97h		; a[68] @ 4352
	.word	059ad2136h,041212e6dh		; a[69] @ 4416
	.word	0d7dd68fch,04123ba2eh		; a[70] @ 4480
	.word	0412a5f4fh,041084c18h		; a[71] @ 4544
	.word	0911cb03ah,041001909h		; a[72] @ 4608
	.word	0ee15d123h,041230cd6h		; a[73] @ 4672
	.word	01ae865b0h,041298aa9h		; a[74] @ 4736
	.word	00b3b67b5h,040e15eefh		; a[75] @ 4800
	.word	08183c36eh,040ed7e79h		; a[76] @ 4864
	.word	05f865d7dh,04105633eh		; a[77] @ 4928
	.word	036c8853fh,0411326bfh		; a[78] @ 4992
	.word	00ec980e8h,04124ad32h		; a[79] @ 5056
	.word	0c2aa0522h,04125f43eh		; a[80] @ 5120
	.word	0cf0f1daah,0411db3d4h		; a[81] @ 5184
	.word	028c4d80ch,0411689beh		; a[82] @ 5248
	.word	090e0a84ch,041076d08h		; a[83] @ 5312
	.word	062055e0eh,0412577bfh		; a[84] @ 5376
	.word	01b8179e8h,0411a39cdh		; a[85] @ 5440
	.word	0efac710dh,0412b3befh		; a[86] @ 5504
	.word	0aa0dd5ach,0410d19ddh		; a[87] @ 5568
	.word	0415aebdfh,041086339h		; a[88] @ 5632
	.word	0f8ac555eh,0411c1878h		; a[89] @ 5696
	.word	02a353c22h,04116bd96h		; a[90] @ 5760
	.word	05a908a26h,040f3c7c4h		; a[91] @ 5824
	.word	0936c2d50h,0412e4754h		; a[92] @ 5888
	.word	0380614edh,04123426bh		; a[93] @ 5952
	.word	023a73995h,0412abd5eh		; a[94] @ 6016
	.word	080f58cdfh,041211d7eh		; a[95] @ 6080
	.word	0e8e1932dh,0411b2e12h		; a[96] @ 6144
	.word	0a6f7d30bh,0412228b9h		; a[97] @ 6208
	.word	094cf4a56h,040f4f620h		; a[98] @ 6272
	.word	06e9f4fbch,040ff0d6eh		; a[99] @ 6336
	.word	04aedb4a4h,041203e1dh		; a[100] @ 6400
	.word	0f32a355eh,04121e2c6h		; a[101] @ 6464
	.word	09083f69ah,0410f6359h		; a[102] @ 6528
	.word	07ee9325eh,04128d96eh		; a[103] @ 6592
	.word	0ad5e071ch,04128dc5eh		; a[104] @ 6656
	.word	0231b65b7h,0411b02fch		; a[105] @ 6720
	.word	0b7215c71h,0410e86bch		; a[106] @ 6784
	.word	0fef72134h,0410fd030h		; a[107] @ 6848
	.word	0c94b167fh,0411b47a9h		; a[108] @ 6912
	.word	0c0512c42h,041222bafh		; a[109] @ 6976
	.word	0a5044509h,0411f9324h		; a[110] @ 7040
	.word	04a7c2515h,04124ed13h		; a[111] @ 7104
	.word	0bebbe29ah,041058158h		; a[112] @ 7168
	.word	0a6f5a2afh,040ed87f3h		; a[113] @ 7232
	.word	09db7d69ch,040fa6616h		; a[114] @ 7296
	.word	0b8770d7eh,0412bc170h		; a[115] @ 7360
	.word	04cf0d18fh,041155a32h		; a[116] @ 7424
	.word	0180f0557h,0411bf2d0h		; a[117] @ 7488
	.word	01f78897fh,041240945h		; a[118] @ 7552
	.word	069d44490h,04115082bh		; a[119] @ 7616
	.word	0565f3af9h,0412b5ab0h		; a[120] @ 7680
	.word	0e860b7d1h,0412e6a58h		; a[121] @ 7744
	.word	0fcfe6c82h,041183cbfh		; a[122] @ 7808
	.word	0ea2b8265h,040580f5dh		; a[123] @ 7872
	.word	0b738609ah,0411545a8h		; a[124] @ 7936
	.word	08263736dh,0411d6d9ah		; a[125] @ 8000
	.word	0d5c34b44h,041032985h		; a[126] @ 8064
	.word	0a32d905ch,0411cedc7h		; a[127] @ 8128
	.word	048bdf315h,04129812dh		; a[128] @ 8192
	.word	038776816h,041129a29h		; a[129] @ 8256
	.word	036283177h,04115f77ah		; a[130] @ 8320
	.word	0cab1df0bh,0412d6f9fh		; a[131] @ 8384
	.word	0dd9b3652h,040f0ab74h		; a[132] @ 8448
	.word	0eb1cb542h,0411c807fh		; a[133] @ 8512
	.word	0358298cch,040cc3746h		; a[134] @ 8576
	.word	0889019beh,0410ea824h		; a[135] @ 8640
	.word	013570245h,04116058dh		; a[136] @ 8704
	.word	05f3962f8h,041207ebah		; a[137] @ 8768
	.word	07784a292h,0412662dfh		; a[138] @ 8832
	.word	0de42e481h,04126032bh		; a[139] @ 8896
	.word	0a9843584h,04122f0bah		; a[140] @ 8960
	.word	029e55f6bh,04125c376h		; a[141] @ 9024
	.word	056059063h,04125d212h		; a[142] @ 9088
	.word	06f709b74h,04115aedeh		; a[143] @ 9152
	.word	0472cf95dh,04114828dh		; a[144] @ 9216
	.word	02c63d669h,041271e58h		; a[145] @ 9280
	.word	0a8c63503h,04127393ah		; a[146] @ 9344
	.word	01bb27533h,04125ad0eh		; a[147] @ 9408
	.word	039424448h,04122c68ch		; a[148] @ 9472
	.word	04f9350aah,040de77b6h		; a[149] @ 9536
	.word	056818ee1h,0410f12b9h		; a[150] @ 9600
	.word	086d34ec7h,0412d2addh		; a[151] @ 9664
	.word	08800218eh,041009132h		; a[152] @ 9728
	.word	0e4cb0b2ch,0411e8200h		; a[153] @ 9792
	.word	01dc69220h,041065c4eh		; a[154] @ 9856
	.word	09e73c199h,04129d164h		; a[155] @ 9920
	.word	07add6678h,04105e20ch		; a[156] @ 9984
	.word	02ca08cd3h,04125e94ch		; a[157] @ 10048
	.word	046177136h,040fd155fh		; a[158] @ 10112
	.word	0d08bc317h,0412673fah		; a[159] @ 10176
	.word	09eb862b2h,04122b1d8h		; a[160] @ 10240
	.word	0ebcbdc0ch,041292d49h		; a[161] @ 10304
	.word	05ccdd93ch,0410cb5f4h		; a[162] @ 10368
	.word	08cb62698h,041215912h		; a[163] @ 10432
	.word	0375d38c0h,0412bca10h		; a[164] @ 10496
	.word	07c47c668h,04121963fh		; a[165] @ 10560
	.word	0abfd5022h,041125a31h		; a[166] @ 10624
	.word	0a8e9e93dh,0412abe7fh		; a[167] @ 10688
	.word	099d3b0edh,04100ba0bh		; a[168] @ 10752
	.word	08f901df0h,04111db71h		; a[169] @ 10816
	.word	0db7a94f2h,04124335eh		; a[170] @ 10880
	.word	063604692h,0412869a2h		; a[171] @ 10944
	.word	0275455c3h,0412cd115h		; a[172] @ 11008
	.word	0f44a2fcfh,0412bac92h		; a[173] @ 11072
	.word	0bb38d60ah,041112c55h		; a[174] @ 11136
	.word	0bb729cd6h,040e9d28ch		; a[175] @ 11200
	.word	0e795266dh,04121bdbfh		; a[176] @ 11264
	.word	081c81400h,0412cf1f6h		; a[177] @ 11328
	.word	055e6d084h,041258dd1h		; a[178] @ 11392
	.word	09ec9e8edh,0412d71a7h		; a[179] @ 11456
	.word	0887ecc8fh,0412b096bh		; a[180] @ 11520
	.word	024b6dbcah,0411fbf65h		; a[181] @ 11584
	.word	0985a3429h,040efab9fh		; a[182] @ 11648
	.word	0c486cebch,0411b02a0h		; a[183] @ 11712
	.word	09c87f603h,0411215f1h		; a[184] @ 11776
	.word	0bb6df902h,04114c8b2h		; a[185] @ 11840
	.word	00bcabed6h,040f8c07fh		; a[186] @ 11904
	.word	088fce091h,0412e4faeh		; a[187] @ 11968
	.word	09732c478h,04129daddh		; a[188] @ 12032
	.word	0782c17b6h,04125c370h		; a[189] @ 12096
	.word	0a624dd2fh,0410045f7h		; a[190] @ 12160
	.word	0fa3cb817h,041261c92h		; a[191] @ 12224
	.word	0f824b9f4h,041035079h		; a[192] @ 12288
	.word	0427dd94ah,041204d21h		; a[193] @ 12352
	.word	060e42b8eh,040f5106fh		; a[194] @ 12416
	.word	0a67f9e46h,041135db2h		; a[195] @ 12480
	.word	09e395663h,0411b30a1h		; a[196] @ 12544
	.word	038aae445h,04111d92bh		; a[197] @ 12608
	.word	026e8f953h,0411d3709h		; a[198] @ 12672
	.word	0aa1130aah,040f1a205h		; a[199] @ 12736
	.word	0c7b2788eh,04120292bh		; a[200] @ 12800

;	C:\MATHLIB_Tools\CCSV5_4_0\ccsv5\tools\compiler\c6000_7.4.2\bin\opt6x.exe C:\\DOCUME~1\\a0868396\\LOCALS~1\\Temp\\143322 C:\\DOCUME~1\\a0868396\\LOCALS~1\\Temp\\143324 
	.sect	".text:optci"
	.clink

;******************************************************************************
;* FUNCTION NAME: logdp_acoshdp_i                                             *
;*                                                                            *
;*   Regs Modified     : A0,A3,A4,A5,A6,A7,A8,A9,B0,B1,B4,B5,B6,B7,B8,B9,A16, *
;*                           A17,A18,A19,A20,A21,A22,A23,A24,A25,B16,B17      *
;*   Regs Used         : A0,A3,A4,A5,A6,A7,A8,A9,B0,B1,B3,B4,B5,B6,B7,B8,B9,  *
;*                           A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,B16,B17  *
;*   Local Frame Size  : 0 Args + 0 Auto + 0 Save = 0 byte                    *
;******************************************************************************
logdp_acoshdp_i:
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 149
           CLR     .S1     A5,20,31,A3       ; |115| 

           ZERO    .L2     B5
||         EXTU    .S1     A5,1,21,A0        ; |110| 

           SET     .S2     B5,0x15,0x1d,B5
||         SET     .S1     A3,21,29,A9       ; |115| 
||         MV      .L1     A4,A8             ; |115| 
||         ZERO    .L2     B4                ; |121| 

   [!A0]   ZERO    .L1     A9:A8             ; |118| 
           FSUBDP  .L1X    A9:A8,B5:B4,A7:A6 ; |121| 
           MVKL    .S2     0x3fe6a09e,B7
           MVKL    .S2     0x667f3bcd,B6

           FSUBDP  .L1X    A7:A6,B5:B4,A17:A16 ; |121| 
||         MVKH    .S2     0x3fe6a09e,B7

           MVKH    .S2     0x667f3bcd,B6
           CMPGTDP .S2X    A9:A8,B7:B6,B0    ; |127| 

           MV      .L1X    B5,A19            ; |121| 
||         ZERO    .S1     A18               ; |121| 

   [!B0]   DADD    .L1     0,A7:A6,A17:A16   ; |128| 
||         FMPYDP  .M1     A19:A18,A9:A8,A7:A6 ; |122| 

           MV      .L2     B5,B7             ; |121| 
   [!B0]   FMPYDP  .M2X    B5:B4,A17:A16,B9:B8 ; |129| 
           ZERO    .L2     B6                ; |121| 
           MVKL    .S1     0xc041d580,A9
           FADDDP  .L2X    B5:B4,A7:A6,B5:B4 ; |122| 
   [!B0]   FADDDP  .L2     B7:B6,B9:B8,B5:B4 ; |129| 
           ZERO    .S2     B9
           SET     .S2     B9,0x1e,0x1e,B9
           RCPDP   .S2     B5:B4,B7:B6       ; |69| 
           MV      .L2X    A18,B8            ; |69| 
           FMPYDP  .M2     B5:B4,B7:B6,B17:B16 ; |69| 
           MVKL    .S1     0x4b67ce0f,A8
           MVKH    .S1     0xc041d580,A9
           MVKH    .S1     0x4b67ce0f,A8
           FSUBDP  .L2     B9:B8,B17:B16,B17:B16 ; |69| 
           MV      .L1X    B9,A21            ; |69| 
           ZERO    .L1     A20               ; |67| 
           FMPYDP  .M2     B7:B6,B17:B16,B7:B6 ; |69| 
           MVK     .S1     1022,A3           ; |110| 
           SUB     .L1     A0,A3,A3          ; |110| 
   [!B0]   SUB     .L1     A3,1,A3           ; |130| 
           FMPYDP  .M2     B5:B4,B7:B6,B17:B16 ; |69| 
           NOP             3
           FSUBDP  .L2     B9:B8,B17:B16,B17:B16 ; |69| 
           NOP             2
           FMPYDP  .M2     B7:B6,B17:B16,B7:B6 ; |69| 
           NOP             3
           FMPYDP  .M2     B5:B4,B7:B6,B5:B4 ; |69| 
           NOP             3
           FSUBDP  .L2     B9:B8,B5:B4,B5:B4 ; |69| 
           ZERO    .L2     B8                ; |67| 
           NOP             1
           FMPYDP  .M2     B7:B6,B5:B4,B5:B4 ; |69| 
           MVKL    .S2     0xb356bd29,B6
           MVKL    .S2     0xbfe94415,B7
           MVKH    .S2     0xb356bd29,B6
           MVKH    .S2     0xbfe94415,B7
           FMPYDP  .M1X    A17:A16,B5:B4,A7:A6 ; |69| 
           ZERO    .L2     B5:B4             ; |71| 
           CMPEQDP .S2X    A17:A16,B5:B4,B1  ; |71| 
           MVKL    .S1     0xc0880bfe,A17
   [ B1]   ZERO    .L1     A7:A6             ; |72| 
           DADD    .L1     0,A7:A6,A19:A18   ; |75| 
           FMPYDP  .M1     A19:A18,A19:A18,A7:A6 ; |134| 
           MVKL    .S2     0x40738083,B5
           MVKL    .S2     0xfa15267e,B4
           MVKH    .S2     0x40738083,B5
           FADDDP  .L1     A9:A8,A7:A6,A9:A8 ; |67| 
           MVKH    .S2     0xfa15267e,B4
           MVKL    .S1     0x9c0d9077,A16
           FMPYDP  .M1     A7:A6,A9:A8,A9:A8 ; |67| 
           MVKH    .S1     0xc0880bfe,A17
           MVKH    .S1     0x9c0d9077,A16
           NOP             1
           FADDDP  .L1X    B5:B4,A9:A8,A9:A8 ; |67| 
           NOP             2
           FMPYDP  .M1     A7:A6,A9:A8,A9:A8 ; |67| 
           NOP             3
           FADDDP  .L1     A17:A16,A9:A8,A25:A24 ; |67| 
           NOP             2
           RCPDP   .S1     A25:A24,A9:A8     ; |67| 
           NOP             1
           FMPYDP  .M1     A9:A8,A25:A24,A17:A16 ; |67| 
           NOP             3
           FSUBDP  .L1     A21:A20,A17:A16,A17:A16 ; |67| 
           MVKL    .S1     0x2016afed,A20
           MVKL    .S1     0x4030624a,A21
           FMPYDP  .M1     A9:A8,A17:A16,A9:A8 ; |67| 
           MVKH    .S1     0x2016afed,A20
           MVKH    .S1     0x4030624a,A21
           NOP             1
           FMPYDP  .M1     A9:A8,A25:A24,A17:A16 ; |67| 
           NOP             4
           FSUBDP  .L2X    B9:B8,A17:A16,B5:B4 ; |67| 
           FMPYDP  .M1X    B7:B6,A7:A6,A17:A16 ; |69| 
           ZERO    .S2     B8                ; |69| 
           MVKL    .S2     0x12b3b59a,B6
           FMPYDP  .M1X    A9:A8,B5:B4,A23:A22 ; |67| 
           FADDDP  .L1     A21:A20,A17:A16,A17:A16 ; |69| 
           MVKL    .S2     0xc05007ff,B7
           MVKH    .S2     0x12b3b59a,B6
           FMPYDP  .M1     A23:A22,A25:A24,A9:A8 ; |69| 
           FMPYDP  .M1     A7:A6,A17:A16,A17:A16 ; |69| 
           MVKH    .S2     0xc05007ff,B7
           NOP             2
           FSUBDP  .L2X    B9:B8,A9:A8,B5:B4 ; |69| 
           FADDDP  .L2X    B7:B6,A17:A16,B7:B6 ; |69| 
           ZERO    .L1     A9:A8             ; |71| 
           FMPYDP  .M2X    A23:A22,B5:B4,B5:B4 ; |69| 
           CMPEQDP .S2X    B7:B6,A9:A8,B1    ; |71| 
           INTDP   .L1     A3,A17:A16        ; |140| 
           NOP             1
           FMPYDP  .M2     B7:B6,B5:B4,B5:B4 ; |69| 
           NOP             3
   [ B1]   ZERO    .L2     B5:B4             ; |72| 
           NOP             1
           FMPYDP  .M1X    A7:A6,B5:B4,A9:A8 ; |140| 
           MVKL    .S1     0xbf2bd010,A7
           MVKL    .S1     0x5c610ca8,A6
           MVKH    .S1     0xbf2bd010,A7
           FMPYDP  .M1     A19:A18,A9:A8,A9:A8 ; |140| 
           MVKH    .S1     0x5c610ca8,A6
           FMPYDP  .M1     A7:A6,A17:A16,A7:A6 ; |140| 
           MVKL    .S2     0x3fe63000,B5
           FADDDP  .L1     A9:A8,A19:A18,A9:A8 ; |140| 

           MVKH    .S2     0x3fe63000,B5
||         ZERO    .L2     B4                ; |140| 

           NOP             1
           FMPYDP  .M1X    B5:B4,A17:A16,A17:A16 ; |140| 
           FADDDP  .L1     A9:A8,A7:A6,A9:A8 ; |140| 
           MVKL    .S1     0x7fefffff,A7

           MVKH    .S1     0x7fefffff,A7
||         MVK     .D1     0xffffffff,A6     ; |142| 

           CMPGTDP .S1     A5:A4,A7:A6,A0    ; |142| 
||         FADDDP  .L1     A17:A16,A9:A8,A5:A4 ; |140| 

           RETNOP  .S2     B3,1              ; |147| 
   [ A0]   MVKL    .S1     0xfefa39ef,A4
   [ A0]   MVKL    .S1     0x40862e42,A5
   [ A0]   MVKH    .S1     0xfefa39ef,A4
   [ A0]   MVKH    .S1     0x40862e42,A5
           ; BRANCH OCCURS {B3}              ; |147| 
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
;*   Local Frame Size  : 8 Args + 108 Auto + 56 Save = 172 byte               *
;******************************************************************************
main:
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 14
           STW     .D2T1   A11,*SP--(8)      ; |141| 
           STW     .D2T1   A10,*SP--(8)      ; |141| 
           STDW    .D2T2   B13:B12,*SP--     ; |141| 
           STDW    .D2T2   B11:B10,*SP--     ; |141| 
           STDW    .D2T1   A15:A14,*SP--     ; |141| 
           STDW    .D2T1   A13:A12,*SP--     ; |141| 
           STW     .D2T2   B3,*SP--(8)       ; |141| 

           MVKL    .S1     $C$SL1+0,A4
||         ADDK    .S2     -120,SP           ; |141| 

           CALLP   .S2     driver_init,B3
||         MVKH    .S1     $C$SL1+0,A4

$C$RL0:    ; CALL OCCURS {driver_init} {0}   ; |149| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 4
           MVKL    .S1     a,A10
           MVK     .S1     0xc9,A12

           MVKH    .S1     a,A10
||         MVKL    .S2     output,B11

           CALL    .S1     acosh             ; |158| 
||         MV      .L1     A10,A11
||         MVKH    .S2     output,B11
||         ZERO    .L2     B10

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L1:    
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *A11++,A5:A4      ; |158| 
           ADDKPC  .S2     $C$RL1,B3,3       ; |158| 
$C$RL1:    ; CALL OCCURS {acosh} {0}         ; |158| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           LDW     .D2T2   *B11,B4           ; |158| 
||         SUB     .L1     A12,1,A0          ; |157| 
||         SUB     .S1     A12,1,A12         ; |157| 

   [ A0]   BNOP    .S2     $C$L1,3           ; |157| 
|| [!A0]   MVK     .S1     0xc9,A11
|| [!A0]   ADD     .L2     4,B11,B12
|| [!A0]   MV      .L1     A10,A14

           ADD     .L2     B10,B4,B4         ; |158| 
||         ADD     .S2     8,B10,B10         ; |157| 

   [ A0]   CALL    .S1     acosh             ; |158| 
|| [!A0]   ZERO    .L2     B10
||         STDW    .D2T1   A5:A4,*B4         ; |158| 

           ; BRANCHCC OCCURS {$C$L1}         ; |157| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 1
           CALL    .S1     acoshdp           ; |161| 
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L2:    
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *A10++,A5:A4      ; |161| 
           ADDKPC  .S2     $C$RL2,B3,3       ; |161| 
$C$RL2:    ; CALL OCCURS {acoshdp} {0}       ; |161| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           LDW     .D2T2   *B12,B4           ; |161| 
||         SUB     .L1     A11,1,A0          ; |160| 
||         SUB     .S1     A11,1,A11         ; |160| 

   [ A0]   BNOP    .S2     $C$L2,3           ; |160| 
|| [!A0]   MVK     .S1     0xc9,A11
|| [!A0]   MV      .L1     A14,A10

           ADD     .L2     B10,B4,B4         ; |161| 
||         ADD     .S2     8,B10,B10         ; |160| 

   [ A0]   CALL    .S1     acoshdp           ; |161| 
|| [!A0]   ADD     .L2     4,B12,B10
|| [!A0]   ZERO    .S2     B12
||         STDW    .D2T1   A5:A4,*B4         ; |161| 

           ; BRANCHCC OCCURS {$C$L2}         ; |160| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 1
           CALL    .S1     acoshdp_c         ; |164| 
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L3:    
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *A10++,A5:A4      ; |164| 
           ADDKPC  .S2     $C$RL3,B3,3       ; |164| 
$C$RL3:    ; CALL OCCURS {acoshdp_c} {0}     ; |164| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           LDW     .D2T2   *B10,B4           ; |164| 
||         SUB     .L1     A11,1,A0          ; |163| 
||         SUB     .S1     A11,1,A11         ; |163| 

   [!A0]   ZERO    .L1     A29
|| [!A0]   ZERO    .S1     A3
|| [!A0]   ZERO    .L2     B5
|| [!A0]   ZERO    .D1     A31
|| [ A0]   B       .S2     $C$L3             ; |163| 

   [!A0]   SET     .S2     B5,0x0,0x1e,B5
|| [!A0]   SET     .S1     A29,0x15,0x1d,A29

   [!A0]   SET     .S1     A3,0x14,0x1d,A3
   [!A0]   SET     .S1     A31,0x13,0x1d,A31

           ADD     .L2     B12,B4,B4         ; |164| 
||         ADD     .S2     8,B12,B12         ; |163| 
|| [!A0]   MVKL    .S1     0xfefa39ef,A30

           STDW    .D2T1   A5:A4,*B4         ; |164| 
|| [!A0]   MVKL    .S1     0x3fe62e42,A4
|| [!A0]   MVK     .L2     0xffffffff,B4
|| [ A0]   CALL    .S2     acoshdp_c         ; |164| 

           ; BRANCHCC OCCURS {$C$L3}         ; |163| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7

           MVKH    .S1     0xfefa39ef,A30
||         ZERO    .L1     A27               ; |173| 
||         STW     .D2T1   A3,*+SP(44)       ; |212| 
||         ZERO    .D1     A12               ; |173| 
||         MVK     .S2     0xc9,B2
||         ZERO    .L2     B20               ; |173| 

           MVKH    .S1     0x3fe62e42,A4
||         DADD    .L1X    0,B5:B4,A11:A10
||         STW     .D2T1   A30,*+SP(56)      ; |217| 
||         ZERO    .D1     A30               ; |173| 
||         ZERO    .L2     B22               ; |173| 
||         MV      .S2X    A31,B25           ; |173| 

           STW     .D2T1   A27,*+SP(48)
||         ZERO    .L1     A28               ; |173| 
||         MV      .S1     A14,A1
||         ZERO    .L2     B18               ; |173| 
||         MV      .S2X    A29,B19           ; |173| 
||         MV      .D1     A29,A13           ; |173| 

           STW     .D2T1   A27,*+SP(40)      ; |212| 
||         ADD     .L2X    -1,A3,B13
||         ZERO    .S2     B24               ; |173| 

           STW     .D2T1   A4,*+SP(60)       ; |217| 
||         MV      .L2X    A29,B21           ; |173| 
||         ADD     .S2     4,B10,B10

           ZERO    .L2     B26               ; |173| 
||         MV      .S2X    A29,B23           ; |173| 
||         MVK     .D2     0xfffffffe,B12    ; |220| 

           STW     .D2T1   A31,*+SP(52)      ; |173| 
;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L4:    
;          EXCLUSIVE CPU CYCLES: 81
           LDDW    .D1T1   *A1++,A27:A26     ; |167| 
           LDDW    .D2T1   *+SP(40),A7:A6
           DADD    .L1X    0,B23:B22,A17:A16
           ZERO    .L2     B5:B4             ; |179| 
           NOP             1
           FMPYDP  .M1     A27:A26,A27:A26,A5:A4 ; |212| 
           NOP             3
           FSUBDP  .L1     A5:A4,A7:A6,A5:A4 ; |212| 
           NOP             2
           RSQRDP  .S1     A5:A4,A7:A6       ; |173| 
           CMPEQDP .S2X    A5:A4,B5:B4,B0    ; |179| 
           FMPYDP  .M1     A7:A6,A5:A4,A9:A8 ; |173| 
           NOP             3
           FMPYDP  .M1     A7:A6,A9:A8,A9:A8 ; |173| 
           NOP             3
           FMPYDP  .M1     A29:A28,A9:A8,A9:A8 ; |173| 
           NOP             3
           FSUBDP  .L1     A31:A30,A9:A8,A9:A8 ; |173| 
           NOP             2
           FMPYDP  .M1     A7:A6,A9:A8,A7:A6 ; |173| 
           NOP             3
           FMPYDP  .M1     A7:A6,A5:A4,A9:A8 ; |173| 
           NOP             3
           FMPYDP  .M1     A7:A6,A9:A8,A9:A8 ; |173| 
           NOP             3
           FMPYDP  .M1     A17:A16,A9:A8,A9:A8 ; |173| 
           DADD    .L1X    0,B25:B24,A17:A16
           NOP             2
           FSUBDP  .L1     A17:A16,A9:A8,A9:A8 ; |173| 
           DADD    .L1X    0,B21:B20,A17:A16
           NOP             1
           FMPYDP  .M1     A7:A6,A9:A8,A7:A6 ; |173| 
           NOP             3
           FMPYDP  .M1     A7:A6,A5:A4,A9:A8 ; |173| 
           NOP             3
           FMPYDP  .M1     A7:A6,A9:A8,A7:A6 ; |173| 
           NOP             3

           FMPYDP  .M1     A17:A16,A7:A6,A19:A18 ; |173| 
||         LDDW    .D2T1   *+SP(48),A17:A16  ; |209| 

           ABSDP   .S1     A27:A26,A7:A6     ; |209| 
           NOP             3

           FSUBDP  .L1     A17:A16,A19:A18,A19:A18 ; |173| 
||         FMPYDP  .M1     A7:A6,A7:A6,A17:A16 ; |175| 

           NOP             2
           FMPYDP  .M1     A9:A8,A19:A18,A9:A8 ; |173| 
           CMPEQDP .S1     A5:A4,A17:A16,A0  ; |175| 
           DADD    .L1X    0,B19:B18,A5:A4   ; |176| 
           FMPYDP  .M1     A5:A4,A7:A6,A5:A4 ; |217| 
   [ A0]   DADD    .L1     0,A7:A6,A9:A8     ; |176| 
   [ B0]   ZERO    .L1     A9:A8             ; |180| 
           FMPYDP  .M1     A13:A12,A9:A8,A7:A6 ; |217| 
           CALL    .S1     logdp_acoshdp_i   ; |217| 
           ADDKPC  .S2     $C$RL4,B3,1       ; |217| 
           FADDDP  .L1     A7:A6,A5:A4,A5:A4 ; |217| 
           NOP             2
$C$RL4:    ; CALL OCCURS {logdp_acoshdp_i} {0}  ; |217| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10
           LDDW    .D2T1   *+SP(56),A7:A6
           LDW     .D2T2   *B10,B4           ; |167| 
           CMPGTDP .S2X    A27:A26,B13:B12,B0 ; |220| 
           SUB     .L2     B2,1,B2           ; |166| 
   [ B2]   B       .S1     $C$L4             ; |166| 
           FADDDP  .L1     A7:A6,A5:A4,A5:A4 ; |217| 
           ADD     .L2     B26,B4,B4         ; |167| 
           ADD     .L2     8,B26,B26         ; |166| 
   [!B0]   DADD    .L1     0,A11:A10,A5:A4   ; |221| 

   [!B2]   CALL    .S1     acoshdp_v         ; |169| 
||         STDW    .D2T1   A5:A4,*B4         ; |167| 

           ; BRANCHCC OCCURS {$C$L4}         ; |166| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDW     .D2T2   *+B11(16),B4      ; |169| 
           MV      .L1     A14,A4            ; |169| 
           MVK     .S1     0xc9,A6           ; |169| 
           ADDKPC  .S2     $C$RL5,B3,1       ; |169| 
$C$RL5:    ; CALL OCCURS {acoshdp_v} {0}     ; |169| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 46
           MVKL    .S2     0x3d719799,B7
           MVKL    .S2     0x812dea11,B6
           MVKH    .S2     0x3d719799,B7

           LDW     .D2T1   *B11,A4           ; |66| 
||         MVKH    .S2     0x812dea11,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T2   *+B11(4),B4       ; |66| 
||         MVK     .S1     0xc9,A6           ; |66| 
||         MVK     .L1     0x5,A8            ; |66| 

$C$RL6:    ; CALL OCCURS {isequal} {0}       ; |66| 
           MVKL    .S2     fcn_pass,B6
           MVKL    .S2     0x3d719799,B7
           MVKH    .S2     fcn_pass,B6
           MVKH    .S2     0x3d719799,B7

           STW     .D2T1   A4,*+B6(4)        ; |66| 
||         MVKL    .S2     0x812dea11,B6

           LDW     .D2T2   *+B11(8),B4       ; |67| 
||         MVKH    .S2     0x812dea11,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T1   *B11,A4           ; |67| 
||         MVK     .S1     0xc9,A6           ; |67| 
||         MVK     .L1     0x5,A8            ; |67| 

$C$RL7:    ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     fcn_pass,B6
           MVKL    .S2     0x3d719799,B7
           MVKH    .S2     fcn_pass,B6
           MVKH    .S2     0x3d719799,B7

           STW     .D2T1   A4,*+B6(8)        ; |67| 
||         MVKL    .S2     0x812dea11,B6

           MV      .L2     B11,B5
||         LDW     .D2T2   *+B11(12),B4      ; |68| 
||         MVKH    .S2     0x812dea11,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T1   *B5,A4            ; |68| 
||         MVK     .S1     0xc9,A6           ; |68| 
||         MVK     .L1     0x5,A8            ; |68| 

$C$RL8:    ; CALL OCCURS {isequal} {0}       ; |68| 
           MVKL    .S2     fcn_pass,B4
           MVKL    .S2     0x812dea11,B6
           MVKL    .S2     0x3d719799,B7
           MVKH    .S2     fcn_pass,B4

           ADD     .L1X    4,B10,A3
||         STW     .D2T1   A4,*+B4(12)       ; |68| 
||         MVKH    .S2     0x812dea11,B6

           STW     .D2T1   A3,*+SP(16)
||         MVKH    .S2     0x3d719799,B7

           CALLP   .S2     isequal,B3
||         LDW     .D2T1   *B11,A4           ; |69| 
||         LDW     .D1T2   *A3,B4            ; |69| 
||         MVK     .S1     0xc9,A6           ; |69| 
||         MVK     .L1     0x5,A8            ; |69| 

$C$RL9:    ; CALL OCCURS {isequal} {0}       ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 14
           MVKL    .S1     fcn_pass,A3
           MVKH    .S1     fcn_pass,A3
           ADD     .L1     4,A3,A15
           LDW     .D1T1   *A15,A0           ; |72| 
           MV      .L2X    A3,B4             ; |72| 
           STW     .D2T1   A4,*+B4(16)       ; |69| 
           ADD     .L2X    8,A3,B11
           NOP             1

   [!A0]   B       .S1     $C$L5             ; |72| 
|| [ A0]   LDW     .D2T2   *B11,B0           ; |72| 

   [!A0]   CALL    .S1     print_test_results ; |173| 
   [ A0]   ADD     .L2     4,B11,B4
   [!A0]   MV      .L1     A12,A3
   [!A0]   MVKL    .S2     all_pass,B4
   [!A0]   MVKH    .S2     all_pass,B4
           ; BRANCHCC OCCURS {$C$L5}         ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10
   [ B0]   LDW     .D2T2   *B4,B4            ; |72| 
           CMPEQ   .L1     A4,0,A3           ; |72| 
           XOR     .L1     1,A3,A3           ; |72| 
   [!B0]   MV      .L1     A12,A0            ; |72| 
           NOP             1
   [ B0]   CMPEQ   .L2     B4,0,B4           ; |72| 
   [ B0]   XOR     .L2     1,B4,B4           ; |72| 
           NOP             1

   [ B0]   AND     .L1X    A3,B4,A0          ; |72| 
||         MVK     .S1     0x1,A3            ; |72| 

   [!A0]   MV      .L1     A12,A3
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           CALL    .S1     print_test_results ; |173| 
           MVKL    .S2     all_pass,B4
           MVKH    .S2     all_pass,B4
           NOP             2
;** --------------------------------------------------------------------------*
$C$L5:    
;          EXCLUSIVE CPU CYCLES: 1

           MVK     .L1     0x1,A4            ; |173| 
||         STW     .D2T1   A3,*B4            ; |72| 
||         ADDKPC  .S2     $C$RL10,B3,0      ; |173| 

$C$RL10:   ; CALL OCCURS {print_test_results} {0}  ; |173| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 14
           LDW     .D2T1   *+SP(44),A4       ; |180| 
           MVKL    .S1     a_sc,A3
           MV      .L2X    A12,B4            ; |187| 
           MVKH    .S1     a_sc,A3
           ZERO    .L1     A7
           STW     .D2T1   A4,*+SP(36)       ; |184| 

           STW     .D2T2   B4,*+SP(32)       ; |187| 
||         ZERO    .L2     B7
||         MVKH    .S1     0xfff00000,A7
||         ZERO    .L1     A6                ; |183| 
||         STDW    .D1T1   A11:A10,*+A3(48)  ; |186| 

           LDDW    .D2T2   *+SP(32),B9:B8    ; |187| 
||         ZERO    .L1     A9
||         SET     .S2     B7,0x14,0x1e,B7
||         ZERO    .L2     B6                ; |182| 
||         STDW    .D1T1   A7:A6,*+A3(24)    ; |183| 

           ZERO    .L2     B5
||         MVKH    .S1     0x80000000,A9
||         ZERO    .L1     A8                ; |181| 
||         STDW    .D1T2   B7:B6,*+A3(16)    ; |182| 

           ADD     .L1X    1,B12,A5
||         ZERO    .L2     B4                ; |185| 
||         MVKH    .S2     0xbff00000,B5
||         STDW    .D1T1   A9:A8,*+A3(8)     ; |181| 

           ADD     .L1X    1,B12,A4
||         ZERO    .S1     A12               ; |189| 
||         STDW    .D1T2   B5:B4,*+A3(40)    ; |185| 

           STDW    .D1T1   A5:A4,*+A3(56)    ; |187| 
||         CMPEQ   .L1     A12,2,A0          ; |191| 

           ZERO    .L1     A5:A4             ; |180| 
||         STDW    .D1T2   B9:B8,*+A3(32)    ; |184| 

           STDW    .D1T1   A5:A4,*A3         ; |180| 
||         MV      .L1     A3,A14            ; |180| 
|| [ A0]   MVKL    .S1     a_sc,A3

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains control code
;*----------------------------------------------------------------------------*
$C$L6:    
;          EXCLUSIVE CPU CYCLES: 6

   [ A0]   B       .S2     $C$L7             ; |191| 
|| [!A0]   LDDW    .D1T1   *A14,A5:A4        ; |191| 
|| [ A0]   MVKH    .S1     a_sc,A3

   [!A0]   CALL    .S1     acosh             ; |191| 
   [ A0]   CALL    .S1     acoshdp_c         ; |191| 
   [ A0]   LDDW    .D1T1   *+A3(16),A5:A4    ; |191| 
           NOP             2
           ; BRANCHCC OCCURS {$C$L7}         ; |191| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 1
           ADDKPC  .S2     $C$RL11,B3,0      ; |191| 
$C$RL11:   ; CALL OCCURS {acosh} {0}         ; |191| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 6

           B       .S2     $C$L8             ; |191| 
||         MVKL    .S1     output,A3
||         CMPEQ   .L1     A12,2,A0          ; |192| 

           MVKH    .S1     output,A3

   [ A0]   BNOP    .S1     $C$L9,3           ; |192| 
||         LDW     .D1T1   *A3,A3            ; |191| 

           ; BRANCH OCCURS {$C$L8}           ; |191| 
;** --------------------------------------------------------------------------*
$C$L7:    
;          EXCLUSIVE CPU CYCLES: 8
           ADDKPC  .S2     $C$RL12,B3,1      ; |191| 
$C$RL12:   ; CALL OCCURS {acoshdp_c} {0}     ; |191| 

           MVKL    .S1     output,A3
||         CMPEQ   .L1     A12,2,A0          ; |192| 

           MVKH    .S1     output,A3

   [ A0]   BNOP    .S1     $C$L9,3           ; |192| 
||         LDW     .D1T1   *A3,A3            ; |191| 

;** --------------------------------------------------------------------------*
$C$L8:    
;          EXCLUSIVE CPU CYCLES: 2
           NOP             1

   [!A0]   CALL    .S2     acosh             ; |192| 
||         STDW    .D1T1   A5:A4,*+A3[A12]   ; |191| 
|| [ A0]   MVKL    .S1     a_sc,A3

           ; BRANCHCC OCCURS {$C$L9}         ; |192| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *A14,A5:A4        ; |192| 
           ADDKPC  .S2     $C$RL13,B3,3      ; |192| 
$C$RL13:   ; CALL OCCURS {acosh} {0}         ; |192| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 6

           B       .S1     $C$L10            ; |192| 
||         MVKL    .S2     output,B12

           MVKH    .S2     output,B12
           LDW     .D2T1   *+B12(4),A3       ; |192| 
           NOP             3
           ; BRANCH OCCURS {$C$L10}          ; |192| 
;** --------------------------------------------------------------------------*
$C$L9:    
;          EXCLUSIVE CPU CYCLES: 12

           CALL    .S2     acoshdp_c         ; |192| 
||         MVKH    .S1     a_sc,A3

           LDDW    .D1T1   *+A3(16),A5:A4    ; |192| 
           ADDKPC  .S2     $C$RL14,B3,3      ; |192| 
$C$RL14:   ; CALL OCCURS {acoshdp_c} {0}     ; |192| 
           MVKL    .S2     output,B12
           MVKH    .S2     output,B12
           LDW     .D2T1   *+B12(4),A3       ; |192| 
           NOP             3
;** --------------------------------------------------------------------------*
$C$L10:    
;          EXCLUSIVE CPU CYCLES: 7
           NOP             1

           STDW    .D1T1   A5:A4,*+A3[A12]   ; |192| 
||         CALL    .S1     acoshdp_c         ; |193| 

           LDDW    .D1T1   *A14,A5:A4        ; |193| 
           ADDKPC  .S2     $C$RL15,B3,3      ; |193| 
$C$RL15:   ; CALL OCCURS {acoshdp_c} {0}     ; |193| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 93
           LDW     .D2T1   *+B12(8),A3       ; |193| 
           ZERO    .L1     A31
           MV      .L2X    A13,B5            ; |173| 
           ZERO    .L2     B4                ; |173| 
           ZERO    .L2     B7
           STDW    .D1T1   A5:A4,*+A3[A12]   ; |193| 
           LDDW    .D1T1   *A14++,A27:A26    ; |194| 
           SET     .S1     A31,0x14,0x1d,A5
           ZERO    .L1     A4                ; |212| 
           SET     .S2     B7,0x13,0x1d,B7
           ZERO    .L2     B6                ; |173| 
           FMPYDP  .M1     A27:A26,A27:A26,A7:A6 ; |212| 
           ZERO    .L1     A30
           MV      .L2X    A13,B9            ; |173| 
           ZERO    .L2     B8                ; |173| 
           FSUBDP  .L1     A7:A6,A5:A4,A5:A4 ; |212| 
           ZERO    .L2     B31
           NOP             1
           RSQRDP  .S1     A5:A4,A9:A8       ; |173| 
           NOP             1
           FMPYDP  .M1     A9:A8,A5:A4,A7:A6 ; |173| 
           NOP             3
           FMPYDP  .M1     A9:A8,A7:A6,A7:A6 ; |173| 
           NOP             4
           FMPYDP  .M2X    B5:B4,A7:A6,B5:B4 ; |173| 
           MV      .L1     A13,A7            ; |173| 
           ZERO    .L1     A6                ; |173| 
           NOP             1
           FSUBDP  .L2     B7:B6,B5:B4,B5:B4 ; |173| 
           NOP             2
           FMPYDP  .M2X    A9:A8,B5:B4,B5:B4 ; |173| 
           NOP             3
           FMPYDP  .M2X    B5:B4,A5:A4,B7:B6 ; |173| 
           NOP             3
           FMPYDP  .M2     B5:B4,B7:B6,B7:B6 ; |173| 
           NOP             4
           FMPYDP  .M1X    A7:A6,B7:B6,A9:A8 ; |173| 
           SET     .S1     A30,0x13,0x1d,A7
           NOP             2
           FSUBDP  .L1     A7:A6,A9:A8,A7:A6 ; |173| 
           NOP             3
           FMPYDP  .M2X    B5:B4,A7:A6,B5:B4 ; |173| 
           ABSDP   .S1     A27:A26,A7:A6     ; |209| 
           NOP             2
           FMPYDP  .M2X    B5:B4,A5:A4,B7:B6 ; |173| 
           FMPYDP  .M1     A7:A6,A7:A6,A9:A8 ; |175| 
           NOP             2
           FMPYDP  .M2     B5:B4,B7:B6,B5:B4 ; |173| 
           CMPEQDP .S1     A5:A4,A9:A8,A0    ; |175| 
           NOP             2
           FMPYDP  .M2     B9:B8,B5:B4,B5:B4 ; |173| 
           SET     .S2     B31,0x13,0x1d,B9
           NOP             2
           FSUBDP  .L2     B9:B8,B5:B4,B9:B8 ; |173| 
           MV      .L2X    A13,B5            ; |175| 
           ZERO    .S2     B4                ; |217| 
           FMPYDP  .M2     B7:B6,B9:B8,B7:B6 ; |173| 
           ZERO    .L2     B9:B8             ; |179| 
           CMPEQDP .S2X    A5:A4,B9:B8,B0    ; |179| 
           MV      .L1     A13,A5            ; |179| 
   [ A0]   DADD    .L2X    0,A7:A6,B7:B6     ; |176| 
   [ B0]   ZERO    .L2     B7:B6             ; |180| 

           ZERO    .L1     A4                ; |217| 
||         FMPYDP  .M2     B5:B4,B7:B6,B5:B4 ; |217| 

           FMPYDP  .M1     A5:A4,A7:A6,A5:A4 ; |217| 
           NOP             3

           CALLP   .S2     logdp_acoshdp_i,B3
||         FADDDP  .L1X    B5:B4,A5:A4,A5:A4 ; |217| 

$C$RL16:   ; CALL OCCURS {logdp_acoshdp_i} {0}  ; |217| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 17

           MVK     .S1     12,A3
||         MVKL    .S2     0x3fefffff,B5
||         MVK     .L2     0xfffffffe,B4     ; |220| 

           ADD     .L1X    B12,A3,A3
||         MVKL    .S1     0x3fe62e42,A7
||         MVKH    .S2     0x3fefffff,B5

           MVKL    .S1     0xfefa39ef,A6
||         LDW     .D1T1   *A3,A3            ; |194| 

           MVKH    .S1     0x3fe62e42,A7
           MVKH    .S1     0xfefa39ef,A6
           FADDDP  .L1     A7:A6,A5:A4,A5:A4 ; |217| 
           CMPGTDP .S2X    A27:A26,B5:B4,B0  ; |220| 
           NOP             1
   [!B0]   DADD    .L1     0,A11:A10,A5:A4   ; |221| 

           STDW    .D1T1   A5:A4,*+A3[A12]   ; |194| 
||         ADD     .L1     1,A12,A12         ; |189| 

           CMPLT   .L1     A12,8,A0          ; |189| 

   [ A0]   BNOP    .S1     $C$L6,4           ; |189| 
||         CMPEQ   .L1     A12,2,A0          ; |191| 

   [ A0]   MVKL    .S1     a_sc,A3
           ; BRANCHCC OCCURS {$C$L6}         ; |189| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 7
           MVKL    .S1     a_sc,A4

           CALLP   .S2     acoshdp_v,B3
||         LDW     .D2T2   *+B12(16),B4      ; |196| 
||         MVKH    .S1     a_sc,A4
||         MVK     .L1     0x8,A6            ; |196| 

$C$RL17:   ; CALL OCCURS {acoshdp_v} {0}     ; |196| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 42
           MVKL    .S2     0x3d719799,B7
           MVKL    .S2     0x812dea11,B6
           MVKH    .S2     0x3d719799,B7

           LDW     .D2T1   *B12,A4           ; |66| 
||         MVKH    .S2     0x812dea11,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T2   *+B12(4),B4       ; |66| 
||         MVK     .L1     0x8,A6            ; |66| 
||         MVK     .S1     0x5,A8            ; |66| 

$C$RL18:   ; CALL OCCURS {isequal} {0}       ; |66| 
           MVKL    .S2     0x3d719799,B7

           MVKL    .S1     fcn_pass,A3
||         MVKL    .S2     0x812dea11,B6

           MVKH    .S1     fcn_pass,A3
||         MVKH    .S2     0x3d719799,B7

           STW     .D1T1   A4,*+A3(4)        ; |66| 
||         LDW     .D2T2   *+B12(8),B4       ; |67| 
||         MVKH    .S2     0x812dea11,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T1   *B12,A4           ; |67| 
||         MVK     .L1     0x8,A6            ; |67| 
||         MVK     .S1     0x5,A8            ; |67| 

$C$RL19:   ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     0x3d719799,B7

           MVKL    .S1     fcn_pass,A3
||         MVKL    .S2     0x812dea11,B6

           MVKH    .S1     fcn_pass,A3
||         MVKH    .S2     0x3d719799,B7

           MV      .L1X    B12,A5
||         STW     .D1T1   A4,*+A3(8)        ; |67| 
||         MVKH    .S2     0x812dea11,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A5,A4            ; |68| 
||         LDW     .D2T2   *+B12(12),B4      ; |68| 
||         MVK     .L1     0x8,A6            ; |68| 
||         MVK     .S1     0x5,A8            ; |68| 

$C$RL20:   ; CALL OCCURS {isequal} {0}       ; |68| 
           LDW     .D2T1   *+SP(16),A3       ; |68| 
           MVKL    .S1     fcn_pass,A5
           MVKL    .S2     0x812dea11,B6

           MVKH    .S1     fcn_pass,A5
||         MVKL    .S2     0x3d719799,B7

           STW     .D1T1   A4,*+A5(12)       ; |68| 
||         MVKH    .S2     0x812dea11,B6

           MV      .L2X    A3,B4             ; |66| 
||         MV      .L1X    B12,A6
||         STW     .D2T1   A3,*+SP(20)       ; |68| 
||         MVKH    .S2     0x3d719799,B7

           CALLP   .S2     isequal,B3
||         LDW     .D2T2   *B4,B4            ; |69| 
||         LDW     .D1T1   *A6,A4            ; |69| 
||         MVK     .L1     0x8,A6            ; |69| 
||         MVK     .S1     0x5,A8            ; |69| 

$C$RL21:   ; CALL OCCURS {isequal} {0}       ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12
           MV      .L2X    A15,B4            ; |69| 
           LDW     .D2T2   *B4,B0            ; |72| 
           MVKL    .S1     fcn_pass,A3
           MVKH    .S1     fcn_pass,A3
           STW     .D1T1   A4,*+A3(16)       ; |69| 
           STW     .D2T1   A15,*+SP(24)      ; |69| 

   [!B0]   B       .S2     $C$L11            ; |72| 
|| [!B0]   MVKL    .S1     all_pass,A3
|| [!B0]   ZERO    .L1     A4                ; |72| 
||         MV      .L2     B0,B1             ; guard predicate rewrite

   [!B0]   CALL    .S2     print_test_results ; |200| 
|| [!B0]   MVKH    .S1     all_pass,A3
|| [ B0]   LDW     .D2T2   *B11,B0           ; |72| 

   [ B1]   ADD     .L2     4,B11,B4
           NOP             3
           ; BRANCHCC OCCURS {$C$L11}        ; |72| 
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
           CALL    .S1     print_test_results ; |200| 
           MVKL    .S1     all_pass,A3
           MVKH    .S1     all_pass,A3
           NOP             2
;** --------------------------------------------------------------------------*
$C$L11:    
;          EXCLUSIVE CPU CYCLES: 1

           STW     .D1T1   A4,*A3            ; |72| 
||         MVK     .L1     0x3,A4            ; |200| 
||         ADDKPC  .S2     $C$RL22,B3,0      ; |200| 

$C$RL22:   ; CALL OCCURS {print_test_results} {0}  ; |200| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 26
           LDW     .D2T1   *+SP(56),A28      ; |217| 
           LDW     .D2T1   *+SP(60),A30      ; |220| 

           LDW     .D2T1   *+SP(52),A27      ; |217| 
||         MVK     .S2     0x3bd,B5

           STW     .D2T2   B5,*+SP(12)

           STW     .D2T2   B10,*+SP(28)      ; |220| 
||         ZERO    .L1     A5                ; |212| 

           STW     .D2T1   A5,*+SP(88)

           STW     .D2T1   A5,*+SP(40)       ; |212| 
||         ZERO    .L1     A4                ; |212| 

           STW     .D2T1   A4,*+SP(104)      ; |203| 
           STW     .D2T1   A4,*+SP(64)

           STW     .D2T1   A4,*+SP(48)       ; |212| 
||         ZERO    .L1     A26               ; |212| 

           STW     .D2T1   A26,*+SP(72)

           STW     .D2T1   A26,*+SP(80)      ; |203| 
||         MV      .L1     A13,A29           ; |173| 

           STW     .D2T1   A29,*+SP(108)     ; |173| 
           STW     .D2T1   A29,*+SP(92)      ; |173| 

           STW     .D2T1   A29,*+SP(76)      ; |173| 
||         MVKL    .S1     0xcccccccd,A31

           STW     .D2T1   A26,*+SP(56)      ; |212| 
||         MVKL    .S1     0x4000cccc,A3

           STW     .D2T1   A29,*+SP(60)      ; |173| 
||         MVKH    .S1     0xcccccccd,A31
||         MVKL    .S2     a_ext,B4

           STW     .D2T1   A31,*+SP(112)     ; |209| 
||         MVKH    .S2     a_ext,B4
||         MVKH    .S1     0x4000cccc,A3

           STW     .D2T1   A3,*+SP(116)      ; |209| 

           LDDW    .D2T2   *+SP(32),B5:B4    ; |203| 
||         MV      .L1X    B4,A14            ; |203| 
||         MV      .L2     B4,B6             ; |203| 

           STW     .D2T1   A27,*+SP(84)      ; |173| 
           STW     .D2T1   A27,*+SP(68)      ; |173| 
           STW     .D2T1   A28,*+SP(96)      ; |217| 
           STW     .D2T1   A30,*+SP(100)     ; |217| 

           CALL    .S1     acosh             ; |205| 
||         STDW    .D2T2   B5:B4,*B6         ; |203| 

           LDDW    .D1T1   *A14,A5:A4        ; |205| 
||         ZERO    .L2     B10               ; |212| 
||         ZERO    .L1     A12               ; |212| 
||         MVK     .S2     0xfffffffe,B12    ; |220| 

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
$C$L12:    
;          EXCLUSIVE CPU CYCLES: 4
           ADDKPC  .S2     $C$RL23,B3,3      ; |205| 
$C$RL23:   ; CALL OCCURS {acosh} {0}         ; |205| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 129
           MVKL    .S2     output,B4
           MVKH    .S2     output,B4
           LDW     .D2T2   *B4,B4            ; |205| 
           NOP             4
           ADD     .L2     B10,B4,B4         ; |205| 
           STDW    .D2T1   A5:A4,*B4         ; |205| 

           CALLP   .S2     acoshdp,B3
||         LDDW    .D1T1   *A14,A5:A4        ; |206| 

$C$RL24:   ; CALL OCCURS {acoshdp} {0}       ; |206| 
           MVKL    .S2     output,B4
           MVKH    .S2     output,B4
           LDW     .D2T2   *+B4(4),B4        ; |206| 
           NOP             4
           ADD     .L2     B10,B4,B4         ; |206| 
           STDW    .D2T1   A5:A4,*B4         ; |206| 

           CALLP   .S2     acoshdp_c,B3
||         LDDW    .D1T1   *A14,A5:A4        ; |207| 

$C$RL25:   ; CALL OCCURS {acoshdp_c} {0}     ; |207| 
           MVKL    .S2     output,B4
           MVKH    .S2     output,B4
           LDW     .D2T2   *+B4(8),B4        ; |207| 
           LDDW    .D2T1   *+SP(56),A17:A16
           NOP             3
           ADD     .L2     B10,B4,B4         ; |207| 
           STDW    .D2T1   A5:A4,*B4         ; |207| 
           LDDW    .D1T1   *A14,A27:A26      ; |208| 
           LDDW    .D2T1   *+SP(40),A5:A4
           ZERO    .L2     B5:B4             ; |179| 
           NOP             2
           FMPYDP  .M1     A27:A26,A27:A26,A7:A6 ; |212| 
           NOP             3
           FSUBDP  .L1     A7:A6,A5:A4,A5:A4 ; |212| 
           NOP             2
           RSQRDP  .S1     A5:A4,A9:A8       ; |173| 
           CMPEQDP .S2X    A5:A4,B5:B4,B0    ; |179| 
           FMPYDP  .M1     A9:A8,A5:A4,A7:A6 ; |173| 
           NOP             3
           FMPYDP  .M1     A9:A8,A7:A6,A7:A6 ; |173| 
           NOP             3

           FMPYDP  .M1     A17:A16,A7:A6,A17:A16 ; |173| 
||         LDDW    .D2T1   *+SP(48),A7:A6

           NOP             4
           FSUBDP  .L1     A7:A6,A17:A16,A7:A6 ; |173| 
           NOP             2
           FMPYDP  .M1     A9:A8,A7:A6,A9:A8 ; |173| 
           NOP             3
           FMPYDP  .M1     A9:A8,A5:A4,A7:A6 ; |173| 
           NOP             3

           FMPYDP  .M1     A9:A8,A7:A6,A17:A16 ; |173| 
||         LDDW    .D2T1   *+SP(72),A7:A6

           NOP             4

           FMPYDP  .M1     A7:A6,A17:A16,A17:A16 ; |173| 
||         LDDW    .D2T1   *+SP(64),A7:A6

           NOP             4
           FSUBDP  .L1     A7:A6,A17:A16,A7:A6 ; |173| 
           LDDW    .D2T1   *+SP(88),A17:A16
           NOP             1
           FMPYDP  .M1     A9:A8,A7:A6,A7:A6 ; |173| 
           NOP             3
           FMPYDP  .M1     A7:A6,A5:A4,A9:A8 ; |173| 
           NOP             3
           FMPYDP  .M1     A7:A6,A9:A8,A7:A6 ; |173| 
           NOP             3

           FMPYDP  .M1     A17:A16,A7:A6,A19:A18 ; |173| 
||         LDDW    .D2T1   *+SP(80),A17:A16  ; |209| 

           ABSDP   .S1     A27:A26,A7:A6     ; |209| 
           NOP             3
           FSUBDP  .L1     A17:A16,A19:A18,A19:A18 ; |173| 
           FMPYDP  .M1     A7:A6,A7:A6,A17:A16 ; |175| 
           NOP             1
           FMPYDP  .M1     A9:A8,A19:A18,A9:A8 ; |173| 
           NOP             1
           CMPEQDP .S1     A5:A4,A17:A16,A0  ; |175| 
           FMPYDP  .M1     A13:A12,A7:A6,A5:A4 ; |217| 

           LDDW    .D2T1   *+SP(104),A7:A6   ; |180| 
|| [ A0]   DADD    .L1     0,A7:A6,A9:A8     ; |176| 

   [ B0]   ZERO    .L1     A9:A8             ; |180| 
           NOP             3
           FMPYDP  .M1     A7:A6,A9:A8,A7:A6 ; |217| 
           NOP             3

           CALLP   .S2     logdp_acoshdp_i,B3
||         FADDDP  .L1     A7:A6,A5:A4,A5:A4 ; |217| 

$C$RL26:   ; CALL OCCURS {logdp_acoshdp_i} {0}  ; |217| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 24
           LDW     .D2T2   *+SP(28),B4       ; |217| 
           LDDW    .D2T1   *+SP(96),A7:A6
           CMPGTDP .S2X    A27:A26,B13:B12,B0 ; |220| 
           NOP             2
           LDW     .D2T2   *B4,B4            ; |208| 
           FADDDP  .L1     A7:A6,A5:A4,A5:A4 ; |217| 
           NOP             2
   [!B0]   DADD    .L1     0,A11:A10,A5:A4   ; |221| 
           ADD     .L2     B10,B4,B4         ; |208| 
           STDW    .D2T1   A5:A4,*B4         ; |208| 

           LDW     .D2T2   *+SP(12),B4
||         LDDW    .D1T1   *A14,A7:A6        ; |209| 

           LDDW    .D2T1   *+SP(112),A5:A4
           ADD     .L2     8,B10,B10         ; |204| 
           NOP             2

           SUB     .L1X    B4,1,A0           ; |204| 
||         SUB     .L2     B4,1,B4           ; |204| 

   [ A0]   BNOP    .S1     $C$L12,2          ; |204| 
||         FMPYDP  .M1     A5:A4,A7:A6,A5:A4 ; |209| 
|| [!A0]   MVKL    .S2     output,B10

   [!A0]   MVKH    .S2     output,B10

   [ A0]   CALL    .S2     acosh             ; |205| 
||         STDW    .D1T1   A5:A4,*++A14      ; |209| 
||         STW     .D2T2   B4,*+SP(12)       ; |209| 
|| [!A0]   MVKL    .S1     a_ext,A4

   [!A0]   CALL    .S1     acoshdp_v         ; |211| 
|| [!A0]   LDW     .D2T2   *+B10(16),B4      ; |211| 
|| [ A0]   LDDW    .D1T1   *A14,A5:A4        ; |205| 

           ; BRANCHCC OCCURS {$C$L12}        ; |204| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           MVKH    .S1     a_ext,A4
           MVK     .S1     0x3bd,A6          ; |211| 
           ADDKPC  .S2     $C$RL27,B3,2      ; |211| 
$C$RL27:   ; CALL OCCURS {acoshdp_v} {0}     ; |211| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 43
           MVKL    .S2     0x3d719799,B7
           MVKL    .S2     0x812dea11,B6
           MVKH    .S2     0x3d719799,B7

           LDW     .D2T1   *B10,A4           ; |66| 
||         MVKH    .S2     0x812dea11,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T2   *+B10(4),B4       ; |66| 
||         MVK     .S1     0x3bd,A6          ; |66| 
||         MVK     .L1     0x5,A8            ; |66| 

$C$RL28:   ; CALL OCCURS {isequal} {0}       ; |66| 
           MVKL    .S2     fcn_pass,B12
           MVKL    .S2     0x3d719799,B7
           MVKH    .S2     fcn_pass,B12
           MVKL    .S2     0x812dea11,B6

           LDW     .D2T2   *+B10(8),B4       ; |67| 
||         MVKH    .S2     0x3d719799,B7

           STW     .D2T1   A4,*+B12(4)       ; |66| 
||         MVKH    .S2     0x812dea11,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T1   *B10,A4           ; |67| 
||         MVK     .S1     0x3bd,A6          ; |67| 
||         MVK     .L1     0x5,A8            ; |67| 

$C$RL29:   ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     0x3d719799,B7
           MVKL    .S2     0x812dea11,B6
           MVKH    .S2     0x3d719799,B7

           MV      .L1X    B10,A3            ; |67| 
||         STW     .D2T1   A4,*+B12(8)       ; |67| 
||         MVKH    .S2     0x812dea11,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A3,A4            ; |68| 
||         LDW     .D2T2   *+B10(12),B4      ; |68| 
||         MVK     .S1     0x3bd,A6          ; |68| 
||         MVK     .L1     0x5,A8            ; |68| 

$C$RL30:   ; CALL OCCURS {isequal} {0}       ; |68| 
           LDW     .D2T1   *+SP(16),A5       ; |68| 
           MVKL    .S2     0x3d719799,B7
           MVKL    .S2     0x812dea11,B6
           MVKH    .S2     0x3d719799,B7

           MV      .L2     B10,B4            ; |68| 
||         STW     .D2T1   A4,*+B12(12)      ; |68| 
||         MVKH    .S2     0x812dea11,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T1   *B4,A4            ; |69| 
||         LDW     .D1T2   *A5,B4            ; |69| 
||         MVK     .S1     0x3bd,A6          ; |69| 
||         MVK     .L1     0x5,A8            ; |69| 

$C$RL31:   ; CALL OCCURS {isequal} {0}       ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 11
           LDW     .D1T1   *A15,A0           ; |72| 
           MV      .L2     B11,B4            ; |72| 
           STW     .D2T1   A4,*+B12(16)      ; |69| 
           NOP             2

   [ A0]   ADD     .L2     4,B4,B4
|| [!A0]   B       .S1     $C$L13            ; |72| 
|| [ A0]   LDW     .D2T2   *B4,B0            ; |72| 

   [!A0]   CALL    .S1     print_test_results ; |217| 
   [!A0]   MVKL    .S1     all_pass,A3
   [!A0]   MVKH    .S1     all_pass,A3
   [!A0]   MV      .L2X    A12,B4
   [!A0]   MV      .L2X    A3,B5
           ; BRANCHCC OCCURS {$C$L13}        ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10
   [ B0]   LDW     .D2T2   *B4,B4            ; |72| 
           CMPEQ   .L1     A4,0,A3           ; |72| 
           XOR     .L1     1,A3,A3           ; |72| 
   [!B0]   MV      .L1     A12,A0            ; |72| 
           NOP             1
   [ B0]   CMPEQ   .L2     B4,0,B4           ; |72| 
   [ B0]   XOR     .L2     1,B4,B4           ; |72| 
           NOP             1

   [ B0]   AND     .L1X    A3,B4,A0          ; |72| 
||         MVK     .L2     0x1,B4            ; |72| 

   [!A0]   MV      .L2X    A12,B4
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           CALL    .S1     print_test_results ; |217| 
           MVKL    .S1     all_pass,A3
           MVKH    .S1     all_pass,A3
           NOP             1
           MV      .L2X    A3,B5
;** --------------------------------------------------------------------------*
$C$L13:    
;          EXCLUSIVE CPU CYCLES: 1

           MVK     .L1     0x4,A4            ; |217| 
||         STW     .D2T2   B4,*B5            ; |72| 
||         ADDKPC  .S2     $C$RL32,B3,0      ; |217| 

$C$RL32:   ; CALL OCCURS {print_test_results} {0}  ; |217| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 14
           MVKL    .S1     cycle_counts+24,A3

           MVKH    .S1     cycle_counts+24,A3
||         MV      .L2X    A12,B4            ; |114| 
||         MV      .L1     A12,A13           ; |114| 

           MVC     .S2     B4,TSCL           ; |115| 
||         STDW    .D1T1   A13:A12,*A3       ; |114| 

           MVC     .S2     TSCL,B6           ; |116| 
           MVC     .S2     TSCH,B4           ; |116| 
           MVKL    .S1     t_start,A3

           MVKH    .S1     t_start,A3
||         MV      .L2     B4,B7             ; |116| 

           MVC     .S2     TSCL,B4           ; |117| 
||         STDW    .D1T2   B7:B6,*A3         ; |116| 

           MVC     .S2     TSCH,B8           ; |117| 

           CALL    .S1     gimme_random      ; |227| 
||         SUBU    .L2     B4,B6,B5:B4       ; |117| 

           EXT     .S2     B5,24,24,B6       ; |117| 
||         SUB     .L2     B8,B7,B31         ; |117| 
||         MVKL    .S1     t_offset,A3

           ADD     .L2     B31,B6,B5         ; |117| 
||         MVKH    .S1     t_offset,A3

           ZERO    .L2     B5
||         STDW    .D1T2   B5:B4,*A3         ; |117| 
||         MVK     .S2     0x80,B10

           MVKH    .S2     0xbff00000,B5
||         MV      .L2X    A13,B4            ; |227| 
||         MV      .L1     A13,A15           ; |117| 
||         MV      .D1     A12,A4            ; |227| 
||         MVKL    .S1     0x412e8482,A5

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L14:    
;          EXCLUSIVE CPU CYCLES: 1

           ADDKPC  .S2     $C$RL33,B3,0      ; |227| 
||         MVKH    .S1     0x412e8482,A5

$C$RL33:   ; CALL OCCURS {gimme_random} {0}  ; |227| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 95
           MVKL    .S2     input,B4
           MVKH    .S2     input,B4
           LDW     .D2T2   *B4,B4            ; |227| 
           DADD    .L1     0,A5:A4,A27:A26   ; |227| 
           NOP             3
           ADD     .L2X    A15,B4,B4         ; |227| 

           STDW    .D2T1   A27:A26,*B4       ; |227| 
||         MVC     .S2     TSCL,B18          ; |122| 

           MVC     .S2     TSCH,B19          ; |122| 
           FMPYDP  .M1     A27:A26,A27:A26,A7:A6 ; |212| 
           ZERO    .L1     A5
           SET     .S1     A5,0x14,0x1d,A5
           MV      .L1     A12,A4            ; |212| 
           FSUBDP  .L1     A7:A6,A5:A4,A9:A8 ; |212| 
           ZERO    .L2     B5
           SET     .S2     B5,0x15,0x1d,B5
           RSQRDP  .S1     A9:A8,A5:A4       ; |173| 
           MV      .L2X    A13,B4            ; |173| 
           FMPYDP  .M1     A5:A4,A9:A8,A7:A6 ; |173| 
           ZERO    .L2     B7
           SET     .S2     B7,0x13,0x1d,B7
           MV      .L2X    A13,B6            ; |173| 
           FMPYDP  .M1     A5:A4,A7:A6,A7:A6 ; |173| 
           ZERO    .L1     A31
           ZERO    .L2     B9
           SET     .S2     B9,0x13,0x1d,B9
           MV      .L2X    A13,B8            ; |173| 
           FMPYDP  .M2X    B5:B4,A7:A6,B5:B4 ; |173| 
           ZERO    .L1     A17
           SET     .S1     A17,0x15,0x1d,A17
           MV      .L1     A12,A16           ; |173| 
           FSUBDP  .L2     B7:B6,B5:B4,B5:B4 ; |173| 
           MV      .L1X    B9,A19            ; |173| 
           MV      .L1     A12,A18           ; |209| 
           FMPYDP  .M2X    A5:A4,B5:B4,B5:B4 ; |173| 
           MV      .L1     A12,A4            ; |173| 
           SET     .S1     A31,0x15,0x1d,A5
           ZERO    .L2     B31
           FMPYDP  .M2X    B5:B4,A9:A8,B7:B6 ; |173| 
           ZERO    .L2     B12               ; |217| 
           NOP             2
           FMPYDP  .M2     B5:B4,B7:B6,B7:B6 ; |173| 
           NOP             3
           FMPYDP  .M2X    A5:A4,B7:B6,B7:B6 ; |173| 
           NOP             3
           FSUBDP  .L2     B9:B8,B7:B6,B7:B6 ; |173| 
           NOP             2
           FMPYDP  .M2     B5:B4,B7:B6,B5:B4 ; |173| 
           ZERO    .L2     B7:B6             ; |179| 
           NOP             3
           FMPYDP  .M1X    B5:B4,A9:A8,A5:A4 ; |173| 
           CMPEQDP .S1X    A9:A8,B7:B6,A0    ; |179| 
           NOP             2
           FMPYDP  .M1X    B5:B4,A5:A4,A7:A6 ; |173| 
           SET     .S2     B31,0x15,0x1d,B5
           ZERO    .L2     B4                ; |217| 
           MV      .L2     B5,B13            ; |179| 
           FMPYDP  .M1     A17:A16,A7:A6,A17:A16 ; |173| 
           ABSDP   .S1     A27:A26,A7:A6     ; |209| 
           NOP             2

           FSUBDP  .L1     A19:A18,A17:A16,A19:A18 ; |173| 
||         FMPYDP  .M1     A7:A6,A7:A6,A17:A16 ; |175| 

           FMPYDP  .M2X    B5:B4,A7:A6,B5:B4 ; |217| 
           NOP             1
           FMPYDP  .M1     A5:A4,A19:A18,A5:A4 ; |173| 
           CMPEQDP .S1     A9:A8,A17:A16,A1  ; |175| 
           NOP             2
   [ A1]   DADD    .L1     0,A7:A6,A5:A4     ; |176| 
   [ A0]   ZERO    .L1     A5:A4             ; |180| 
           NOP             1
           FMPYDP  .M2X    B13:B12,A5:A4,B7:B6 ; |217| 
           NOP             3
           FADDDP  .L2     B7:B6,B5:B4,B5:B4 ; |217| 
           NOP             3

           CALLP   .S2     logdp_acoshdp_i,B3
||         DADD    .L1X    0,B5:B4,A5:A4     ; |217| 

$C$RL34:   ; CALL OCCURS {logdp_acoshdp_i} {0}  ; |217| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 26

           MVKL    .S1     output+12,A6
||         MVKL    .S2     0x3fe62e42,B5

           MVKH    .S1     output+12,A6
||         MVKL    .S2     0xfefa39ef,B4

           LDW     .D1T1   *A6,A8            ; |231| 
||         MVKH    .S2     0x3fe62e42,B5
||         MVKL    .S1     0x3fefffff,A7
||         MVK     .L1     0xfffffffe,A6     ; |220| 

           MVKH    .S2     0xfefa39ef,B4
||         MVKH    .S1     0x3fefffff,A7

           CMPGTDP .S1     A27:A26,A7:A6,A0  ; |220| 
           FADDDP  .L1X    B5:B4,A5:A4,A5:A4 ; |217| 
           MVKL    .S1     t_start,A3
           MVKH    .S1     t_start,A3

           STDW    .D1T2   B19:B18,*A3
||         ADD     .L1     A15,A8,A3         ; |231| 
|| [!A0]   DADD    .S1     0,A11:A10,A5:A4   ; |221| 

           STDW    .D1T1   A5:A4,*A3         ; |231| 
||         MVC     .S2     TSCL,B16          ; |128| 

           MVC     .S2     TSCH,B6           ; |128| 

           MVKL    .S2     t_offset,B12
||         MVKL    .S1     cycle_counts+24,A3
||         SUB     .L1X    B10,1,A0          ; |225| 
||         MV      .L2     B6,B17            ; |128| 

           MVKH    .S2     t_offset,B12
||         MVKH    .S1     cycle_counts+24,A3

           LDDW    .D2T2   *B12,B9:B8        ; |130| 
||         LDDW    .D1T1   *A3,A7:A6         ; |130| 
||         MV      .L1     A3,A14            ; |128| 
||         MVKL    .S2     t_stop,B6

           MVKH    .S2     t_stop,B6
           STDW    .D2T2   B17:B16,*B6       ; |128| 
           NOP             2
           ADDU    .L2     B8,B18,B5:B4      ; |130| 

           ADD     .S2     B5,B9,B7          ; |130| 
||         SUBU    .L2     B16,B4,B5:B4      ; |130| 

           ADD     .L2     B7,B19,B7         ; |130| 
|| [ A0]   B       .S1     $C$L14            ; |225| 

           SUB     .L2     B17,B7,B5         ; |130| 
||         EXT     .S2     B5,24,24,B7       ; |130| 
|| [ A0]   CALL    .S1     gimme_random      ; |227| 
||         ADDU    .L1X    A6,B4,A5:A4       ; |130| 

           ADD     .L2     B5,B7,B4          ; |130| 
||         ADD     .L1     A5,A7,A3          ; |130| 
|| [ A0]   ZERO    .S2     B5

   [ A0]   MVKH    .S2     0xbff00000,B5

           ADD     .L1X    A3,B4,A5          ; |130| 
||         ADD     .S1     8,A15,A15         ; |225| 
|| [ A0]   MV      .L2X    A13,B4            ; |227| 

           STDW    .D1T1   A5:A4,*A14        ; |130| 
|| [ A0]   MVKL    .S1     0x412e8482,A5
||         SUB     .L2     B10,1,B10         ; |225| 
|| [ A0]   MV      .L1     A12,A4            ; |227| 

           ; BRANCHCC OCCURS {$C$L14}        ; |225| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 6

           CALLP   .S2     __c6xabi_fltllif,B3
||         LDDW    .D1T1   *A14,A5:A4        ; |135| 

$C$RL35:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 14
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |135| 
           MV      .L1     A12,A10           ; |135| 
           MV      .L1X    B13,A11           ; |135| 
           NOP             1
           SPDP    .S1     A3,A5:A4          ; |135| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A11:A10,A5:A4,A5:A4 ; |135| 

$C$RL36:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 11

           MV      .L2X    A14,B4
||         SUBAW   .D1     A14,6,A3

           STDW    .D1T1   A13:A12,*A3       ; |114| 
||         MV      .L2X    A13,B5            ; |114| 

           MVC     .S2     B5,TSCL           ; |115| 
||         STDW    .D2T1   A5:A4,*B4         ; |135| 

           MVC     .S2     TSCL,B4           ; |116| 
           MVC     .S2     TSCH,B6           ; |116| 
           MVC     .S2     TSCL,B5           ; |117| 
           MVC     .S2     TSCH,B7           ; |117| 
           SUBU    .L2     B5,B4,B5:B4       ; |117| 

           EXT     .S2     B5,24,24,B6       ; |117| 
||         SUB     .L2     B7,B6,B5          ; |117| 

           ADD     .L2     B5,B6,B5          ; |117| 

           STDW    .D2T2   B5:B4,*B12        ; |117| 
||         MVK     .S1     0x80,A15

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L15:    
;          EXCLUSIVE CPU CYCLES: 15
           MVC     .S2     TSCL,B4           ; |122| 
           MVC     .S2     TSCH,B5           ; |122| 
           MVKL    .S1     input,A3
           MVKH    .S1     input,A3
           LDW     .D1T1   *A3,A3            ; |240| 
           MVKL    .S2     t_start,B6
           MVKH    .S2     t_start,B6
           STDW    .D2T2   B5:B4,*B6         ; |122| 
           NOP             1

           ADD     .L1     A10,A3,A3         ; |240| 
||         CALL    .S1     acosh             ; |240| 

           LDDW    .D1T1   *A3,A5:A4         ; |240| 
           ADDKPC  .S2     $C$RL37,B3,3      ; |240| 
$C$RL37:   ; CALL OCCURS {acosh} {0}         ; |240| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 24
           MVKL    .S2     output,B13
           MVKH    .S2     output,B13
           LDW     .D2T2   *B13,B4           ; |240| 
           NOP             4
           ADD     .L1X    A10,B4,A3         ; |240| 

           STDW    .D1T1   A5:A4,*A3         ; |240| 
||         MVC     .S2     TSCL,B16          ; |128| 

           MVC     .S2     TSCH,B4           ; |128| 

           MVKL    .S2     t_start,B5
||         MV      .L1X    B12,A14           ; |128| 
||         MVKL    .S1     cycle_counts,A3
||         SUB     .D1     A15,1,A0          ; |238| 
||         MV      .L2     B4,B17            ; |128| 

           MVKH    .S2     t_start,B5
||         LDDW    .D1T1   *A14,A5:A4        ; |130| 
||         MVKH    .S1     cycle_counts,A3
||         SUB     .L1     A15,1,A15         ; |238| 

           LDDW    .D2T2   *B5,B9:B8         ; |130| 
||         LDDW    .D1T1   *A3,A7:A6         ; |130| 
||         MVKL    .S2     cycle_counts,B4
||         MVKL    .S1     t_stop,A31
||         ADD     .L1     8,A10,A10         ; |238| 

           MVKH    .S1     t_stop,A31
           MVKH    .S2     cycle_counts,B4
           STDW    .D1T2   B17:B16,*A31      ; |128| 
   [!A0]   MV      .L1X    B4,A15
           ADDU    .L2X    A4,B8,B7:B6       ; |130| 

           ADD     .S2X    B7,A5,B5          ; |130| 
|| [ A0]   B       .S1     $C$L15            ; |238| 
||         SUBU    .L2     B16,B6,B7:B6      ; |130| 

           ADD     .D2     B5,B9,B5          ; |130| 
||         EXT     .S2     B7,24,24,B8       ; |130| 
||         ADDU    .L2X    A6,B6,B7:B6       ; |130| 

           SUB     .L2     B17,B5,B5         ; |130| 

           ADD     .L2X    B7,A7,B5          ; |130| 
||         ADD     .S2     B5,B8,B7          ; |130| 

           ADD     .L2     B5,B7,B7          ; |130| 

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
||         STDW    .D2T2   B7:B6,*B4         ; |130| 

           ; BRANCHCC OCCURS {$C$L15}        ; |238| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *A15,A5:A4        ; |135| 
           ADDKPC  .S2     $C$RL38,B3,3      ; |135| 
$C$RL38:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 14
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |135| 
           MV      .L1     A12,A10           ; |135| 
           NOP             2
           SPDP    .S1     A3,A5:A4          ; |135| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A11:A10,A5:A4,A5:A4 ; |135| 

$C$RL39:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10

           STDW    .D1T1   A13:A12,*+A15(16) ; |114| 
||         MV      .L2X    A13,B4            ; |114| 

           MVC     .S2     B4,TSCL           ; |115| 
||         STDW    .D1T1   A5:A4,*A15        ; |135| 

           MVC     .S2     TSCL,B5           ; |116| 
           MVC     .S2     TSCH,B4           ; |116| 
           MVC     .S2     TSCL,B6           ; |117| 
           MVC     .S2     TSCH,B9           ; |117| 
           SUBU    .L2     B6,B5,B7:B6       ; |117| 

           EXT     .S2     B7,24,24,B5       ; |117| 
||         SUB     .L2     B9,B4,B4          ; |117| 
||         MVK     .S1     0x80,A3

           ADD     .L2     B4,B5,B7          ; |117| 
||         MV      .S2X    A14,B8            ; |117| 

           STDW    .D2T2   B7:B6,*B8         ; |117| 
||         MV      .L2X    A3,B10            ; |117| 

;*----------------------------------------------------------------------------*
;*   SOFTWARE PIPELINE INFORMATION
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains a call
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*      Disqualified loop: Loop contains non-pipelinable instructions
;*----------------------------------------------------------------------------*
$C$L16:    
;          EXCLUSIVE CPU CYCLES: 15
           MVC     .S2     TSCL,B4           ; |122| 
           MVC     .S2     TSCH,B5           ; |122| 
           MVKL    .S1     input,A3
           MVKH    .S1     input,A3
           LDW     .D1T1   *A3,A3            ; |249| 
           MVKL    .S2     t_start,B6
           MVKH    .S2     t_start,B6
           STDW    .D2T2   B5:B4,*B6         ; |122| 
           NOP             1

           ADD     .L1     A10,A3,A3         ; |249| 
||         CALL    .S1     acoshdp_c         ; |249| 

           LDDW    .D1T1   *A3,A5:A4         ; |249| 
           ADDKPC  .S2     $C$RL40,B3,3      ; |249| 
$C$RL40:   ; CALL OCCURS {acoshdp_c} {0}     ; |249| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 23
           ADDAD   .D2     B13,1,B4
           LDW     .D2T2   *B4,B4            ; |249| 
           NOP             4
           ADD     .L1X    A10,B4,A3         ; |249| 

           STDW    .D1T1   A5:A4,*A3         ; |249| 
||         MVC     .S2     TSCL,B6           ; |128| 

           MVC     .S2     TSCH,B7           ; |128| 

           MVKL    .S2     t_start,B4
||         LDDW    .D1T1   *A14,A5:A4        ; |130| 
||         SUB     .L1X    B10,1,A0          ; |247| 
||         MVKL    .S1     t_stop,A31
||         SUB     .L2     B10,1,B10         ; |247| 

           MVKH    .S2     t_start,B4
||         ADDAD   .D1     A15,2,A3
||         MVKH    .S1     t_stop,A31
||         ADD     .L1     8,A10,A10         ; |247| 

           LDDW    .D2T2   *B4,B9:B8         ; |130| 
||         LDDW    .D1T1   *A3,A7:A6         ; |130| 

   [!A0]   MV      .L1     A15,A3
           MVK     .S2     16,B12
           STDW    .D1T2   B7:B6,*A31        ; |128| 
           ADD     .L2X    A15,B12,B12
           ADDU    .L2X    A4,B8,B5:B4       ; |130| 

           ADD     .S2X    B5,A5,B8          ; |130| 
|| [ A0]   B       .S1     $C$L16            ; |247| 
||         SUBU    .L2     B6,B4,B5:B4       ; |130| 

           ADD     .D2     B8,B9,B8          ; |130| 
||         EXT     .S2     B5,24,24,B31      ; |130| 
||         ADDU    .L2X    A6,B4,B5:B4       ; |130| 

           SUB     .L2     B7,B8,B9          ; |130| 
||         ADD     .S2X    B5,A7,B5          ; |130| 

           ADD     .L2     B9,B31,B8         ; |130| 
           ADD     .L2     B5,B8,B5          ; |130| 

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
||         STDW    .D2T2   B5:B4,*B12        ; |130| 

           ; BRANCHCC OCCURS {$C$L16}        ; |247| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *+A3(16),A5:A4    ; |135| 
           ADDKPC  .S2     $C$RL41,B3,3      ; |135| 
$C$RL41:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 14
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |135| 
           MV      .L1     A12,A10           ; |135| 
           NOP             2
           SPDP    .S1     A3,A5:A4          ; |135| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A11:A10,A5:A4,A5:A4 ; |135| 

$C$RL42:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 10

           MV      .L1     A15,A3            ; |135| 
||         STDW    .D2T1   A5:A4,*B12        ; |135| 
||         MV      .L2X    A13,B4            ; |114| 

           MVC     .S2     B4,TSCL           ; |115| 
||         STDW    .D1T1   A13:A12,*+A3(8)   ; |114| 

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
$C$L17:    
;          EXCLUSIVE CPU CYCLES: 15
           MVC     .S2     TSCL,B4           ; |122| 
           MVC     .S2     TSCH,B5           ; |122| 
           MVKL    .S1     input,A3
           MVKH    .S1     input,A3
           LDW     .D1T1   *A3,A3            ; |258| 
           MVKL    .S2     t_start,B6
           MVKH    .S2     t_start,B6
           STDW    .D2T2   B5:B4,*B6         ; |122| 
           NOP             1

           ADD     .L1     A10,A3,A3         ; |258| 
||         CALL    .S1     acoshdp           ; |258| 

           LDDW    .D1T1   *A3,A5:A4         ; |258| 
           ADDKPC  .S2     $C$RL43,B3,3      ; |258| 
$C$RL43:   ; CALL OCCURS {acoshdp} {0}       ; |258| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 23
           ADD     .L2     4,B13,B4
           LDW     .D2T2   *B4,B4            ; |258| 
           NOP             4
           ADD     .L1X    A10,B4,A3         ; |258| 

           STDW    .D1T1   A5:A4,*A3         ; |258| 
||         MVC     .S2     TSCL,B16          ; |128| 

           MVC     .S2     TSCH,B4           ; |128| 

           MVKL    .S2     t_start,B10
||         LDW     .D2T1   *+SP(12),A31      ; |128| 
||         MVKL    .S1     cycle_counts+8,A3
||         MV      .L2     B4,B17            ; |128| 
||         ADD     .L1     8,A10,A10         ; |256| 

           MVKH    .S2     t_start,B10
||         LDDW    .D1T1   *A14,A5:A4        ; |130| 
||         MVKH    .S1     cycle_counts+8,A3

           LDDW    .D2T2   *B10,B7:B6        ; |130| 
||         LDDW    .D1T1   *A3,A7:A6         ; |130| 
||         MVKL    .S1     t_stop,A15

           MV      .L2X    A3,B12            ; |128| 
||         MVKH    .S1     t_stop,A15

           STDW    .D1T2   B17:B16,*A15      ; |128| 
           SUB     .L1     A31,1,A0          ; |256| 

   [!A0]   MVK     .S1     8,A3
||         STW     .D2T1   A0,*+SP(12)       ; |130| 

           ADDU    .L2X    A4,B6,B9:B8       ; |130| 
|| [!A0]   SUB     .L1X    B12,A3,A3

           ADD     .S2X    B9,A5,B6          ; |130| 
|| [ A0]   B       .S1     $C$L17            ; |256| 
||         SUBU    .L2     B16,B8,B5:B4      ; |130| 

           ADD     .D2     B6,B7,B6          ; |130| 
||         EXT     .S2     B5,24,24,B7       ; |130| 
||         ADDU    .L2X    A6,B4,B5:B4       ; |130| 

           SUB     .L2     B17,B6,B6         ; |130| 
||         ADD     .S2X    B5,A7,B5          ; |130| 

           ADD     .L2     B6,B7,B6          ; |130| 
           ADD     .L2     B5,B6,B5          ; |130| 

   [!A0]   CALL    .S1     __c6xabi_fltllif  ; |135| 
||         STDW    .D2T2   B5:B4,*B12        ; |130| 

           ; BRANCHCC OCCURS {$C$L17}        ; |256| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 5
           LDDW    .D1T1   *+A3(8),A5:A4     ; |135| 
           ADDKPC  .S2     $C$RL44,B3,3      ; |135| 
$C$RL44:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |135| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 108
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |135| 
           MV      .L1     A13,A10           ; |135| 
           NOP             2
           SPDP    .S1     A3,A5:A4          ; |135| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A11:A10,A5:A4,A5:A4 ; |135| 

$C$RL45:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |135| 
           MV      .L1X    B12,A10           ; |135| 
           SUBAW   .D1     A10,2,A3

           MV      .L2X    A12,B4            ; |114| 
||         STDW    .D1T1   A5:A4,*A10        ; |135| 

           STDW    .D1T1   A13:A12,*+A3(32)  ; |114| 
||         MVC     .S2     B4,TSCL           ; |115| 

           MVC     .S2     TSCL,B6           ; |116| 
           MVC     .S2     TSCH,B7           ; |116| 

           STDW    .D2T2   B7:B6,*B10        ; |116| 
||         MVC     .S2     TSCL,B4           ; |117| 

           MVC     .S2     TSCH,B8           ; |117| 

           MVKL    .S1     input,A3
||         SUBU    .L2     B4,B6,B5:B4       ; |117| 

           MVKH    .S1     input,A3
||         EXT     .S2     B5,24,24,B6       ; |117| 
||         SUB     .L2     B8,B7,B31         ; |117| 

           ADD     .L2     B31,B6,B5         ; |117| 

           MV      .L2X    A3,B9             ; |265| 
||         MV      .L1X    B13,A12           ; |117| 
||         STDW    .D1T2   B5:B4,*A14        ; |117| 

           CALLP   .S2     acoshdp_v,B3
||         LDW     .D2T1   *B9,A4            ; |265| 
||         LDW     .D1T2   *+A12(16),B4      ; |265| 
||         MVK     .S1     0x80,A6           ; |265| 

$C$RL46:   ; CALL OCCURS {acoshdp_v} {0}     ; |265| 
           MVC     .S2     TSCL,B8           ; |128| 
           MVC     .S2     TSCH,B4           ; |128| 

           LDDW    .D1T1   *A14,A5:A4        ; |130| 
||         LDDW    .D2T2   *B10,B7:B6        ; |130| 
||         MVK     .S2     24,B10

           ADD     .L2X    A10,B10,B10

           MV      .L2     B4,B9             ; |128| 
||         LDDW    .D2T2   *B10,B5:B4        ; |130| 

           NOP             2
           ADDU    .L1X    A4,B6,A7:A6       ; |130| 

           ADD     .S1     A7,A5,A3          ; |130| 
||         SUBU    .L1X    B8,A6,A5:A4       ; |130| 

           ADDU    .L1X    B4,A4,A7:A6       ; |130| 

           ADD     .L2X    A3,B7,B4          ; |130| 
||         EXT     .S1     A5,24,24,A3       ; |130| 

           SUB     .L2     B9,B4,B7          ; |130| 
||         ADD     .S2X    A7,B5,B5          ; |130| 

           ADD     .L2X    B7,A3,B7          ; |130| 

           ADD     .L2     B5,B7,B5          ; |130| 
||         MV      .S2X    A6,B4             ; |130| 

           MV      .L2X    A15,B6            ; |128| 

           CALLP   .S2     __c6xabi_fltllif,B3
||         DADD    .L1X    0,B5:B4,A5:A4     ; |130| 
||         STDW    .D2T2   B9:B8,*B6         ; |128| 

$C$RL47:   ; CALL OCCURS {__c6xabi_fltllif} {0}  ; |130| 
           ZERO    .L1     A3
           SET     .S1     A3,0x1a,0x1d,A3
           MPYSP   .M1     A3,A4,A3          ; |130| 
           MV      .L1     A13,A10           ; |130| 
           NOP             2
           SPDP    .S1     A3,A5:A4          ; |130| 
           NOP             1

           CALLP   .S2     __c6xabi_fixdlli,B3
||         FADDDP  .L1     A11:A10,A5:A4,A5:A4 ; |130| 

$C$RL48:   ; CALL OCCURS {__c6xabi_fixdlli} {0}  ; |130| 
           MVKL    .S2     0x3d719799,B7
           MVKL    .S2     0x812dea11,B6
           MVKH    .S2     0x3d719799,B7

           STDW    .D2T1   A5:A4,*B10        ; |130| 
||         LDW     .D1T2   *+A12(4),B4       ; |66| 
||         MVKH    .S2     0x812dea11,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A12,A4           ; |66| 
||         MVK     .L1     0x5,A8            ; |66| 
||         MVK     .S1     0x80,A6           ; |66| 

$C$RL49:   ; CALL OCCURS {isequal} {0}       ; |66| 
           MVKL    .S2     0x812dea11,B6
           MVKL    .S2     0x3d719799,B7

           LDW     .D1T2   *+A12(8),B4       ; |67| 
||         MVKL    .S1     fcn_pass,A10
||         MVKH    .S2     0x812dea11,B6

           MV      .L1     A4,A3             ; |66| 
||         LDW     .D1T1   *A12,A4           ; |67| 
||         MVKH    .S1     fcn_pass,A10
||         MVKH    .S2     0x3d719799,B7

           CALLP   .S2     isequal,B3
||         STW     .D1T1   A3,*+A10(4)       ; |66| 
||         MVK     .S1     0x80,A6           ; |67| 
||         MVK     .L1     0x5,A8            ; |67| 

$C$RL50:   ; CALL OCCURS {isequal} {0}       ; |67| 
           MVKL    .S2     0x3d719799,B7
           MVKL    .S2     0x812dea11,B6

           STW     .D1T1   A4,*+A10(8)       ; |67| 
||         MVKH    .S2     0x3d719799,B7

           LDW     .D1T2   *+A12(12),B4      ; |68| 
||         MVKH    .S2     0x812dea11,B6

           CALLP   .S2     isequal,B3
||         LDW     .D1T1   *A12,A4           ; |68| 
||         MVK     .S1     0x80,A6           ; |68| 
||         MVK     .L1     0x5,A8            ; |68| 

$C$RL51:   ; CALL OCCURS {isequal} {0}       ; |68| 
           LDW     .D2T2   *+SP(20),B4       ; |68| 
           MVKL    .S2     0x3d719799,B7
           MVKL    .S2     0x812dea11,B6
           MVKH    .S2     0x3d719799,B7

           STW     .D1T1   A4,*+A10(12)      ; |68| 
||         MVKH    .S2     0x812dea11,B6

           CALLP   .S2     isequal,B3
||         LDW     .D2T2   *B4,B4            ; |69| 
||         LDW     .D1T1   *A12,A4           ; |69| 
||         MVK     .S1     0x80,A6           ; |69| 
||         MVK     .L1     0x5,A8            ; |69| 

$C$RL52:   ; CALL OCCURS {isequal} {0}       ; |69| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 16
           LDW     .D2T2   *+SP(24),B4       ; |69| 
           STW     .D1T1   A4,*+A10(16)      ; |69| 
           NOP             3
           LDW     .D2T2   *B4,B0            ; |72| 
           NOP             4

   [!B0]   BNOP    .S1     $C$L18,4          ; |72| 
||         MV      .L2     B0,B1             ; guard predicate rewrite
|| [ B0]   LDW     .D2T2   *B11,B0           ; |72| 

   [ B1]   ADD     .L2     4,B11,B4
           ; BRANCHCC OCCURS {$C$L18}        ; |72| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 15
   [ B0]   LDW     .D2T2   *B4,B4            ; |72| 
   [!B0]   MV      .L1     A13,A0            ; |72| 
           CMPEQ   .L1     A4,0,A3           ; |72| 
           XOR     .L1     1,A3,A3           ; |72| 
           NOP             1
   [ B0]   CMPEQ   .L2     B4,0,B4           ; |72| 
   [ B0]   XOR     .L2     1,B4,B4           ; |72| 
           NOP             1
   [ B0]   AND     .L1X    A3,B4,A0          ; |72| 
   [ A0]   B       .S1     $C$L19            ; |72| 
   [ A0]   CALL    .S1     print_test_results ; |271| 
           MVK     .L1     0x1,A3            ; |72| 
   [ A0]   MVKL    .S1     all_pass,A4
   [ A0]   MVKH    .S1     all_pass,A4
           NOP             1
           ; BRANCHCC OCCURS {$C$L19}        ; |72| 
;** --------------------------------------------------------------------------*
$C$L18:    
;          EXCLUSIVE CPU CYCLES: 5
           CALL    .S1     print_test_results ; |271| 
           MVKL    .S1     all_pass,A4
           MVKH    .S1     all_pass,A4
           MV      .L1     A13,A3
           NOP             1
;** --------------------------------------------------------------------------*
$C$L19:    
;          EXCLUSIVE CPU CYCLES: 1

           STW     .D1T1   A3,*A4            ; |72| 
||         MVK     .L1     0x2,A4            ; |271| 
||         ADDKPC  .S2     $C$RL53,B3,0      ; |271| 

$C$RL53:   ; CALL OCCURS {print_test_results} {0}  ; |271| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 30
           MVKL    .S2     $C$SL2+0,B4
           MVKH    .S2     $C$SL2+0,B4

           CALLP   .S2     printf,B3
||         STW     .D2T2   B4,*+SP(4)        ; |272| 

$C$RL54:   ; CALL OCCURS {printf} {0}        ; |272| 
           MVKL    .S2     $C$SL3+0,B4
           MVKH    .S2     $C$SL3+0,B4

           CALLP   .S2     printf,B3
||         STW     .D2T2   B4,*+SP(4)        ; |272| 

$C$RL55:   ; CALL OCCURS {printf} {0}        ; |272| 
           MVKL    .S1     $C$SL1+0,A10
           MVKH    .S1     $C$SL1+0,A10

           CALLP   .S2     print_profile_results,B3
||         MV      .L1     A10,A4            ; |279| 

$C$RL56:   ; CALL OCCURS {print_profile_results} {0}  ; |279| 

           CALLP   .S2     print_memory_results,B3
||         MV      .L1     A10,A4            ; |282| 

$C$RL57:   ; CALL OCCURS {print_memory_results} {0}  ; |282| 
;** --------------------------------------------------------------------------*
;          EXCLUSIVE CPU CYCLES: 12
           ADDK    .S2     120,SP            ; |283| 
           LDW     .D2T2   *++SP(8),B3       ; |283| 
           LDDW    .D2T1   *++SP,A13:A12     ; |283| 
           LDDW    .D2T1   *++SP,A15:A14     ; |283| 
           LDDW    .D2T2   *++SP,B11:B10     ; |283| 
           LDDW    .D2T2   *++SP,B13:B12     ; |283| 

           LDW     .D2T1   *++SP(8),A10      ; |283| 
||         RET     .S2     B3                ; |283| 

           LDW     .D2T1   *++SP(8),A11      ; |283| 
           NOP             4
           ; BRANCH OCCURS {B3}              ; |283| 
;******************************************************************************
;* STRINGS                                                                    *
;******************************************************************************
	.sect	".const:.string"
$C$SL1:	.string	"acoshDP",0
$C$SL2:	.string	"----------------------------------------",0
$C$SL3:	.string	"----------------------------------------",10,0
;*****************************************************************************
;* UNDEFINED EXTERNAL REFERENCES                                             *
;*****************************************************************************
	.global	printf
	.global	acosh
	.global	driver_init
	.global	print_profile_results
	.global	print_memory_results
	.global	print_test_results
	.global	gimme_random
	.global	isequal
	.global	acoshdp_c
	.global	acoshdp
	.global	acoshdp_v
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
