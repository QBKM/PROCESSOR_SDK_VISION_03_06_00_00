#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#
#  target compatibility key = gnu.targets.arm.A15F{1,0,4.9,3
#
ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/hal_ser_stub/package/package_ti.ndk.hal.ser_stub.oa15fg.dep
package/lib/lib/hal_ser_stub/package/package_ti.ndk.hal.ser_stub.oa15fg.dep: ;
endif

package/lib/lib/hal_ser_stub/package/package_ti.ndk.hal.ser_stub.oa15fg: | .interfaces
package/lib/lib/hal_ser_stub/package/package_ti.ndk.hal.ser_stub.oa15fg: package/package_ti.ndk.hal.ser_stub.c lib/hal_ser_stub.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c  -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2  -I/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm//libs/install-native/arm-none-eabi/include   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/hal_ser_stub/package/package_ti.ndk.hal.ser_stub.oa15fg: export LD_LIBRARY_PATH=

package/lib/lib/hal_ser_stub/package/package_ti.ndk.hal.ser_stub.sa15fg: | .interfaces
package/lib/lib/hal_ser_stub/package/package_ti.ndk.hal.ser_stub.sa15fg: package/package_ti.ndk.hal.ser_stub.c lib/hal_ser_stub.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg -S $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c -S -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/hal_ser_stub/package/package_ti.ndk.hal.ser_stub.sa15fg: export LD_LIBRARY_PATH=

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/hal_ser_stub/llserstb.oa15fg.dep
package/lib/lib/hal_ser_stub/llserstb.oa15fg.dep: ;
endif

package/lib/lib/hal_ser_stub/llserstb.oa15fg: | .interfaces
package/lib/lib/hal_ser_stub/llserstb.oa15fg: llserstb.c lib/hal_ser_stub.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c  -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2  -I/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm//libs/install-native/arm-none-eabi/include   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/hal_ser_stub/llserstb.oa15fg: export LD_LIBRARY_PATH=

package/lib/lib/hal_ser_stub/llserstb.sa15fg: | .interfaces
package/lib/lib/hal_ser_stub/llserstb.sa15fg: llserstb.c lib/hal_ser_stub.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg -S $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c -S -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/hal_ser_stub/llserstb.sa15fg: export LD_LIBRARY_PATH=

clean,a15fg ::
	-$(RM) package/lib/lib/hal_ser_stub/package/package_ti.ndk.hal.ser_stub.oa15fg
	-$(RM) package/lib/lib/hal_ser_stub/llserstb.oa15fg
	-$(RM) package/lib/lib/hal_ser_stub/package/package_ti.ndk.hal.ser_stub.sa15fg
	-$(RM) package/lib/lib/hal_ser_stub/llserstb.sa15fg

lib/hal_ser_stub.aa15fg: package/lib/lib/hal_ser_stub/package/package_ti.ndk.hal.ser_stub.oa15fg package/lib/lib/hal_ser_stub/llserstb.oa15fg lib/hal_ser_stub.aa15fg.mak

clean::
	-$(RM) lib/hal_ser_stub.aa15fg.mak
