#include <vcop\vcop.h>

typedef unsigned char uchar;

#pragma DATA_SECTION(__pblock_vcop_vec_update_ewr_variance_s16, ".vcop_parameter_block")
#pragma DATA_ALIGN(__pblock_vcop_vec_update_ewr_variance_s16, __ALIGNOF__(int));
unsigned short __pblock_vcop_vec_update_ewr_variance_s16[26];

unsigned int vcop_vec_update_ewr_variance_s16_param_count(void)
{
   return 26u;
}

unsigned int vcop_vec_update_ewr_variance_s16_ctrl_count(void)
{
   return 0u;
}

unsigned int vcop_vec_update_ewr_variance_s16_init(
   __vptr_int16 currentVar,
   __vptr_int16 currentVar_out,
   __vptr_int16 currentMean,
   __vptr_uint8 newestData,
   __vptr_uint8 foreground,
   unsigned short weight,
   unsigned short weight2,
   unsigned int frameSize,
   unsigned short pblock[])
{
   int __offset = 0;
   /* Loop 1 PREGS */
   __vcop_pblock_init16(pblock, __offset+_PREG(2), 0);
   __vcop_pblock_init16(pblock, __offset+_PREG(3), 0);
   __vcop_pblock_init16(pblock, __offset+_PREG(4), 0);
   __vcop_pblock_init16(pblock, __offset+_PREG(5), (frameSize/(8u))-1u);
   __vcop_pblock_init32(pblock, __offset+_PREG(6), -15);
   __vcop_pblock_init32(pblock, __offset+_PREG(8), weight2);
   __vcop_pblock_init32(pblock, __offset+_PREG(10), 1);
   __vcop_pblock_init32(pblock, __offset+_PREG(12), 0xFF);
   __vcop_pblock_init32(pblock, __offset+_PREG(14), (uchar *)foreground);
   __vcop_pblock_init32(pblock, __offset+_PREG(16), (uchar *)newestData);
   __vcop_pblock_init32(pblock, __offset+_PREG(18), (uchar *)currentMean);
   __vcop_pblock_init32(pblock, __offset+_PREG(20), (uchar *)currentVar);
   __vcop_pblock_init16(pblock, __offset+_PREG(22), 8);
   __vcop_pblock_init16(pblock, __offset+_PREG(23), 16);
   __vcop_pblock_init32(pblock, __offset+_PREG(24), 7);
   __vcop_pblock_init32(pblock, __offset+_PREG(26), -3);
   __offset += 26;

   return 26u;
}

void vcop_vec_update_ewr_variance_s16_vloops(
   unsigned short pblock[])
{
   /* Kernel-wide Vector Registers */
   #pragma VCC_VREG("R0", 16);
   #pragma VCC_VREG("R1", 17);
   #pragma VCC_VREG("R10", 18);
   #pragma VCC_VREG("R11", 19);
   #pragma VCC_VREG("R12", 20);
   #pragma VCC_VREG("R13", 21);
   #pragma VCC_VREG("R14", 22);
   #pragma VCC_VREG("R15", 23);
   #pragma VCC_VREG("R16", 24);
   #pragma VCC_VREG("R2", 25);
   #pragma VCC_VREG("R3", 26);
   #pragma VCC_VREG("R4", 27);
   #pragma VCC_VREG("R5", 28);
   #pragma VCC_VREG("R6", 29);
   #pragma VCC_VREG("R7", 30);
   #pragma VCC_VREG("R8", 31);
   #pragma VCC_VREG("R9", 32);
   #pragma VCC_VREG("fg", 33);

   __vcop_param(&pblock[0]);

   /* VLOOP 1 Start */

   /* VLOOP Local Vector Registers */
   

   /* VLOOP Local Address Generators */
   #pragma EVE_REG("Addr1", "A0");
   #pragma EVE_REG("Addr2", "A1");
   #pragma EVE_REG("Addr3", "A2");
   /* VLOOP Loop Control Variables   */
   #pragma EVE_REG("I1", "I4");
   

   __vcop_vloop(__vcop_compute(), 27u, 13u, 1u);
   __vcop_vinit(__vcop_sizeW(), __vcop_once(), _PREG(24), _VREG(21));
   __vcop_vinit(__vcop_sizeW(), __vcop_once(), _PREG(26), _VREG(22));
   __vcop_vinit(__vcop_sizeW(), __vcop_once(), _PREG(6), _VREG(23));
   __vcop_vinit(__vcop_sizeW(), __vcop_once(), _PREG(8), _VREG(20));
   __vcop_vinit(__vcop_sizeW(), __vcop_once(), _PREG(10), _VREG(19));
   __vcop_vinit(__vcop_sizeW(), __vcop_once(), _PREG(12), _VREG(24));
   __vcop_vagen(_AGEN(0), _PREG(22), _PREG(0), _PREG(0), _PREG(0));
   __vcop_vagen(_AGEN(1), _PREG(23), _PREG(0), _PREG(0), _PREG(0));
   __vcop_vagen(_AGEN(2), _PREG(1), _PREG(0), _PREG(0), _PREG(0));
   __vcop_vload(__vcop_sizeBU(), __vcop_npt(), _PREG(14), _AGEN(2), _VREG(33), __vcop_alws());
   __vcop_vload(__vcop_sizeBU(), __vcop_npt(), _PREG(16), _AGEN(0), _VREG(31), __vcop_alws());
   __vcop_vload(__vcop_sizeH(), __vcop_npt(), _PREG(18), _AGEN(1), _VREG(32), __vcop_alws());
   __vcop_vload(__vcop_sizeH(), __vcop_npt(), _PREG(20), _AGEN(1), _VREG(18), __vcop_alws());
   __vcop_vshf(_VREG(31), _VREG(21), _VREG(30));
   __vcop_vshf(_VREG(18), _VREG(22), _VREG(26));
   __vcop_vsub(_VREG(30), _VREG(32), _VREG(30));
   __vcop_vxor(_VREG(24), _VREG(33), _VREG(28));
   __vcop_vmpy(_VREG(30), _VREG(30), _VREG(17), _PREG(0));
   __vcop_vbitunpk(_VREG(28), _VREG(19), _VREG(27));
   __vcop_vshf(_VREG(17), _VREG(23), _VREG(25));
   __vcop_vsub(_VREG(25), _VREG(26), _VREG(26));
   __vcop_vmpy(_VREG(26), _VREG(20), _VREG(25), _PREG(0));
   __vcop_vshf(_VREG(25), _VREG(23), _VREG(17));
   __vcop_vadd(_VREG(18), _VREG(17), _VREG(29));
   __vcop_vabs(_VREG(29), _VREG(29));
   __vcop_vstore(__vcop_predicate(_VREG(27)), __vcop_sizeH(), __vcop_npt(), __vcop_alws(), _VREG(29), _PREG(20), _AGEN(1), _PREG(0));
   __vcop_vloop_end(1u);

}

void vcop_vec_update_ewr_variance_s16(
   __vptr_int16 currentVar,
   __vptr_int16 currentVar_out,
   __vptr_int16 currentMean,
   __vptr_uint8 newestData,
   __vptr_uint8 foreground,
   unsigned short weight,
   unsigned short weight2,
   unsigned int frameSize)
{
   VCOP_BUF_SWITCH_SET(WBUF_SYST, IBUFHB_SYST, IBUFLB_SYST,
                   IBUFHA_SYST, IBUFLA_SYST);
   vcop_vec_update_ewr_variance_s16_init(currentVar, currentVar_out, currentMean, newestData, foreground, weight, weight2, frameSize, __pblock_vcop_vec_update_ewr_variance_s16);

   VCOP_BUF_SWITCH_SET(WBUF_VCOP, IBUFHB_VCOP, IBUFLB_VCOP,
                   IBUFHA_VCOP, IBUFLA_VCOP);
   vcop_vec_update_ewr_variance_s16_vloops(__pblock_vcop_vec_update_ewr_variance_s16);

   _vcop_vloop_done();
   VCOP_BUF_SWITCH_SET(WBUF_SYST, IBUFHB_SYST, IBUFLB_SYST,
                   IBUFHA_SYST, IBUFLA_SYST);
}

void vcop_vec_update_ewr_variance_s16_custom(
   __vptr_int16 currentVar,
   __vptr_int16 currentVar_out,
   __vptr_int16 currentMean,
   __vptr_uint8 newestData,
   __vptr_uint8 foreground,
   unsigned short weight,
   unsigned short weight2,
   unsigned int frameSize,
   unsigned short pblock[])
{
   VCOP_BUF_SWITCH_SET(WBUF_SYST, IBUFHB_SYST, IBUFLB_SYST,
                   IBUFHA_SYST, IBUFLA_SYST);
   vcop_vec_update_ewr_variance_s16_init(currentVar, currentVar_out, currentMean, newestData, foreground, weight, weight2, frameSize, pblock);

   VCOP_BUF_SWITCH_SET(WBUF_VCOP, IBUFHB_VCOP, IBUFLB_VCOP,
                   IBUFHA_VCOP, IBUFLA_VCOP);
   vcop_vec_update_ewr_variance_s16_vloops(pblock);

   _vcop_vloop_done();
   VCOP_BUF_SWITCH_SET(WBUF_SYST, IBUFHB_SYST, IBUFLB_SYST,
                   IBUFHA_SYST, IBUFLA_SYST);
}
