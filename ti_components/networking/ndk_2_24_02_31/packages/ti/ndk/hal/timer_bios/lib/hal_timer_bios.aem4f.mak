#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#
#  target compatibility key = ti.targets.arm.elf.M4F{1,0,5.2,5
#
ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/hal_timer_bios/package/package_ti.ndk.hal.timer_bios.oem4f.dep
package/lib/lib/hal_timer_bios/package/package_ti.ndk.hal.timer_bios.oem4f.dep: ;
endif

package/lib/lib/hal_timer_bios/package/package_ti.ndk.hal.timer_bios.oem4f: | .interfaces
package/lib/lib/hal_timer_bios/package/package_ti.ndk.hal.timer_bios.oem4f: package/package_ti.ndk.hal.timer_bios.c lib/hal_timer_bios.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/hal_timer_bios/package -fr=./package/lib/lib/hal_timer_bios/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/hal_timer_bios/package -s oem4f $< -C   -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/hal_timer_bios/package -fr=./package/lib/lib/hal_timer_bios/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/hal_timer_bios/package/package_ti.ndk.hal.timer_bios.oem4f: export C_DIR=
package/lib/lib/hal_timer_bios/package/package_ti.ndk.hal.timer_bios.oem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

package/lib/lib/hal_timer_bios/package/package_ti.ndk.hal.timer_bios.sem4f: | .interfaces
package/lib/lib/hal_timer_bios/package/package_ti.ndk.hal.timer_bios.sem4f: package/package_ti.ndk.hal.timer_bios.c lib/hal_timer_bios.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f -n $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/hal_timer_bios/package -fr=./package/lib/lib/hal_timer_bios/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/hal_timer_bios/package -s oem4f $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/hal_timer_bios/package -fr=./package/lib/lib/hal_timer_bios/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/hal_timer_bios/package/package_ti.ndk.hal.timer_bios.sem4f: export C_DIR=
package/lib/lib/hal_timer_bios/package/package_ti.ndk.hal.timer_bios.sem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/hal_timer_bios/lltimer.oem4f.dep
package/lib/lib/hal_timer_bios/lltimer.oem4f.dep: ;
endif

package/lib/lib/hal_timer_bios/lltimer.oem4f: | .interfaces
package/lib/lib/hal_timer_bios/lltimer.oem4f: lltimer.c lib/hal_timer_bios.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/hal_timer_bios -fr=./package/lib/lib/hal_timer_bios -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/hal_timer_bios -s oem4f $< -C   -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/hal_timer_bios -fr=./package/lib/lib/hal_timer_bios
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/hal_timer_bios/lltimer.oem4f: export C_DIR=
package/lib/lib/hal_timer_bios/lltimer.oem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

package/lib/lib/hal_timer_bios/lltimer.sem4f: | .interfaces
package/lib/lib/hal_timer_bios/lltimer.sem4f: lltimer.c lib/hal_timer_bios.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f -n $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/hal_timer_bios -fr=./package/lib/lib/hal_timer_bios -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/hal_timer_bios -s oem4f $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/hal_timer_bios -fr=./package/lib/lib/hal_timer_bios
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/hal_timer_bios/lltimer.sem4f: export C_DIR=
package/lib/lib/hal_timer_bios/lltimer.sem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

clean,em4f ::
	-$(RM) package/lib/lib/hal_timer_bios/package/package_ti.ndk.hal.timer_bios.oem4f
	-$(RM) package/lib/lib/hal_timer_bios/lltimer.oem4f
	-$(RM) package/lib/lib/hal_timer_bios/package/package_ti.ndk.hal.timer_bios.sem4f
	-$(RM) package/lib/lib/hal_timer_bios/lltimer.sem4f

lib/hal_timer_bios.aem4f: package/lib/lib/hal_timer_bios/package/package_ti.ndk.hal.timer_bios.oem4f package/lib/lib/hal_timer_bios/lltimer.oem4f lib/hal_timer_bios.aem4f.mak

clean::
	-$(RM) lib/hal_timer_bios.aem4f.mak
