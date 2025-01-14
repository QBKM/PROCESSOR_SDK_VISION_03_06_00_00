#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#
#  target compatibility key = ti.targets.arm.elf.M4F{1,0,5.2,5
#
ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/os_sem/package/package_ti.ndk.os.oem4f.dep
package/lib/lib/os_sem/package/package_ti.ndk.os.oem4f.dep: ;
endif

package/lib/lib/os_sem/package/package_ti.ndk.os.oem4f: | .interfaces
package/lib/lib/os_sem/package/package_ti.ndk.os.oem4f: package/package_ti.ndk.os.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem/package -fr=./package/lib/lib/os_sem/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem/package -s oem4f $< -C   -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem/package -fr=./package/lib/lib/os_sem/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/package/package_ti.ndk.os.oem4f: export C_DIR=
package/lib/lib/os_sem/package/package_ti.ndk.os.oem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

package/lib/lib/os_sem/package/package_ti.ndk.os.sem4f: | .interfaces
package/lib/lib/os_sem/package/package_ti.ndk.os.sem4f: package/package_ti.ndk.os.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f -n $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem/package -fr=./package/lib/lib/os_sem/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem/package -s oem4f $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem/package -fr=./package/lib/lib/os_sem/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/package/package_ti.ndk.os.sem4f: export C_DIR=
package/lib/lib/os_sem/package/package_ti.ndk.os.sem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/os_sem/efs.oem4f.dep
package/lib/lib/os_sem/efs.oem4f.dep: ;
endif

package/lib/lib/os_sem/efs.oem4f: | .interfaces
package/lib/lib/os_sem/efs.oem4f: efs.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C   -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/efs.oem4f: export C_DIR=
package/lib/lib/os_sem/efs.oem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

package/lib/lib/os_sem/efs.sem4f: | .interfaces
package/lib/lib/os_sem/efs.sem4f: efs.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f -n $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/efs.sem4f: export C_DIR=
package/lib/lib/os_sem/efs.sem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/os_sem/mem.oem4f.dep
package/lib/lib/os_sem/mem.oem4f.dep: ;
endif

package/lib/lib/os_sem/mem.oem4f: | .interfaces
package/lib/lib/os_sem/mem.oem4f: mem.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C   -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/mem.oem4f: export C_DIR=
package/lib/lib/os_sem/mem.oem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

package/lib/lib/os_sem/mem.sem4f: | .interfaces
package/lib/lib/os_sem/mem.sem4f: mem.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f -n $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/mem.sem4f: export C_DIR=
package/lib/lib/os_sem/mem.sem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/os_sem/mem_data.oem4f.dep
package/lib/lib/os_sem/mem_data.oem4f.dep: ;
endif

package/lib/lib/os_sem/mem_data.oem4f: | .interfaces
package/lib/lib/os_sem/mem_data.oem4f: mem_data.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C   -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/mem_data.oem4f: export C_DIR=
package/lib/lib/os_sem/mem_data.oem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

package/lib/lib/os_sem/mem_data.sem4f: | .interfaces
package/lib/lib/os_sem/mem_data.sem4f: mem_data.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f -n $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/mem_data.sem4f: export C_DIR=
package/lib/lib/os_sem/mem_data.sem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/os_sem/oem.oem4f.dep
package/lib/lib/os_sem/oem.oem4f.dep: ;
endif

package/lib/lib/os_sem/oem.oem4f: | .interfaces
package/lib/lib/os_sem/oem.oem4f: oem.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C   -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/oem.oem4f: export C_DIR=
package/lib/lib/os_sem/oem.oem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

package/lib/lib/os_sem/oem.sem4f: | .interfaces
package/lib/lib/os_sem/oem.sem4f: oem.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f -n $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/oem.sem4f: export C_DIR=
package/lib/lib/os_sem/oem.sem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/os_sem/ossys.oem4f.dep
package/lib/lib/os_sem/ossys.oem4f.dep: ;
endif

package/lib/lib/os_sem/ossys.oem4f: | .interfaces
package/lib/lib/os_sem/ossys.oem4f: ossys.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C   -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/ossys.oem4f: export C_DIR=
package/lib/lib/os_sem/ossys.oem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

package/lib/lib/os_sem/ossys.sem4f: | .interfaces
package/lib/lib/os_sem/ossys.sem4f: ossys.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f -n $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/ossys.sem4f: export C_DIR=
package/lib/lib/os_sem/ossys.sem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/os_sem/task.oem4f.dep
package/lib/lib/os_sem/task.oem4f.dep: ;
endif

package/lib/lib/os_sem/task.oem4f: | .interfaces
package/lib/lib/os_sem/task.oem4f: task.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C   -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/task.oem4f: export C_DIR=
package/lib/lib/os_sem/task.oem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

package/lib/lib/os_sem/task.sem4f: | .interfaces
package/lib/lib/os_sem/task.sem4f: task.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f -n $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/task.sem4f: export C_DIR=
package/lib/lib/os_sem/task.sem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/os_sem/semaphore.oem4f.dep
package/lib/lib/os_sem/semaphore.oem4f.dep: ;
endif

package/lib/lib/os_sem/semaphore.oem4f: | .interfaces
package/lib/lib/os_sem/semaphore.oem4f: semaphore.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C   -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/semaphore.oem4f: export C_DIR=
package/lib/lib/os_sem/semaphore.oem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

package/lib/lib/os_sem/semaphore.sem4f: | .interfaces
package/lib/lib/os_sem/semaphore.sem4f: semaphore.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f -n $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/semaphore.sem4f: export C_DIR=
package/lib/lib/os_sem/semaphore.sem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/os_sem/intmgmt.oem4f.dep
package/lib/lib/os_sem/intmgmt.oem4f.dep: ;
endif

package/lib/lib/os_sem/intmgmt.oem4f: | .interfaces
package/lib/lib/os_sem/intmgmt.oem4f: intmgmt.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C   -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/intmgmt.oem4f: export C_DIR=
package/lib/lib/os_sem/intmgmt.oem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

package/lib/lib/os_sem/intmgmt.sem4f: | .interfaces
package/lib/lib/os_sem/intmgmt.sem4f: intmgmt.c lib/os_sem.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f -n $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/os_sem -s oem4f $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2 -DUSE_LL_SEMAPHORE=1 -D_NDK_EXTERN_CONFIG   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/os_sem -fr=./package/lib/lib/os_sem
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/os_sem/intmgmt.sem4f: export C_DIR=
package/lib/lib/os_sem/intmgmt.sem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

clean,em4f ::
	-$(RM) package/lib/lib/os_sem/package/package_ti.ndk.os.oem4f
	-$(RM) package/lib/lib/os_sem/efs.oem4f
	-$(RM) package/lib/lib/os_sem/mem.oem4f
	-$(RM) package/lib/lib/os_sem/mem_data.oem4f
	-$(RM) package/lib/lib/os_sem/oem.oem4f
	-$(RM) package/lib/lib/os_sem/ossys.oem4f
	-$(RM) package/lib/lib/os_sem/task.oem4f
	-$(RM) package/lib/lib/os_sem/semaphore.oem4f
	-$(RM) package/lib/lib/os_sem/intmgmt.oem4f
	-$(RM) package/lib/lib/os_sem/package/package_ti.ndk.os.sem4f
	-$(RM) package/lib/lib/os_sem/efs.sem4f
	-$(RM) package/lib/lib/os_sem/mem.sem4f
	-$(RM) package/lib/lib/os_sem/mem_data.sem4f
	-$(RM) package/lib/lib/os_sem/oem.sem4f
	-$(RM) package/lib/lib/os_sem/ossys.sem4f
	-$(RM) package/lib/lib/os_sem/task.sem4f
	-$(RM) package/lib/lib/os_sem/semaphore.sem4f
	-$(RM) package/lib/lib/os_sem/intmgmt.sem4f

lib/os_sem.aem4f: package/lib/lib/os_sem/package/package_ti.ndk.os.oem4f package/lib/lib/os_sem/efs.oem4f package/lib/lib/os_sem/mem.oem4f package/lib/lib/os_sem/mem_data.oem4f package/lib/lib/os_sem/oem.oem4f package/lib/lib/os_sem/ossys.oem4f package/lib/lib/os_sem/task.oem4f package/lib/lib/os_sem/semaphore.oem4f package/lib/lib/os_sem/intmgmt.oem4f lib/os_sem.aem4f.mak

clean::
	-$(RM) lib/os_sem.aem4f.mak
