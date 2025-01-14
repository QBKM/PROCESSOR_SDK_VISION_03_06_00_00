#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#
#  target compatibility key = ti.targets.arm.elf.M4F{1,0,5.2,5
#
ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/netctrl_full_ipv4/package/package_ti.ndk.netctrl.oem4f.dep
package/lib/lib/netctrl_full_ipv4/package/package_ti.ndk.netctrl.oem4f.dep: ;
endif

package/lib/lib/netctrl_full_ipv4/package/package_ti.ndk.netctrl.oem4f: | .interfaces
package/lib/lib/netctrl_full_ipv4/package/package_ti.ndk.netctrl.oem4f: package/package_ti.ndk.netctrl.c lib/netctrl_full_ipv4.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -D_NDK_EXTERN_CONFIG  -DNETSRV_ENABLE_TELNET=1 -DNETSRV_ENABLE_HTTP=1 -DNETSRV_ENABLE_NAT=1 -DNETSRV_ENABLE_DHCPCLIENT=1 -DNETSRV_ENABLE_DHCPSERVER=1 -DNETSRV_ENABLE_DNSSERVER=1 -DUSE_EVENT_SEMAPHORE=1 -DUSE_SERIAL_PORT=0  -D_INCLUDE_NIMU_CODE   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/netctrl_full_ipv4/package -fr=./package/lib/lib/netctrl_full_ipv4/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/netctrl_full_ipv4/package -s oem4f $< -C   -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -D_NDK_EXTERN_CONFIG  -DNETSRV_ENABLE_TELNET=1 -DNETSRV_ENABLE_HTTP=1 -DNETSRV_ENABLE_NAT=1 -DNETSRV_ENABLE_DHCPCLIENT=1 -DNETSRV_ENABLE_DHCPSERVER=1 -DNETSRV_ENABLE_DNSSERVER=1 -DUSE_EVENT_SEMAPHORE=1 -DUSE_SERIAL_PORT=0  -D_INCLUDE_NIMU_CODE   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/netctrl_full_ipv4/package -fr=./package/lib/lib/netctrl_full_ipv4/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/netctrl_full_ipv4/package/package_ti.ndk.netctrl.oem4f: export C_DIR=
package/lib/lib/netctrl_full_ipv4/package/package_ti.ndk.netctrl.oem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

package/lib/lib/netctrl_full_ipv4/package/package_ti.ndk.netctrl.sem4f: | .interfaces
package/lib/lib/netctrl_full_ipv4/package/package_ti.ndk.netctrl.sem4f: package/package_ti.ndk.netctrl.c lib/netctrl_full_ipv4.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f -n $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -D_NDK_EXTERN_CONFIG  -DNETSRV_ENABLE_TELNET=1 -DNETSRV_ENABLE_HTTP=1 -DNETSRV_ENABLE_NAT=1 -DNETSRV_ENABLE_DHCPCLIENT=1 -DNETSRV_ENABLE_DHCPSERVER=1 -DNETSRV_ENABLE_DNSSERVER=1 -DUSE_EVENT_SEMAPHORE=1 -DUSE_SERIAL_PORT=0  -D_INCLUDE_NIMU_CODE   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/netctrl_full_ipv4/package -fr=./package/lib/lib/netctrl_full_ipv4/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/netctrl_full_ipv4/package -s oem4f $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -D_NDK_EXTERN_CONFIG  -DNETSRV_ENABLE_TELNET=1 -DNETSRV_ENABLE_HTTP=1 -DNETSRV_ENABLE_NAT=1 -DNETSRV_ENABLE_DHCPCLIENT=1 -DNETSRV_ENABLE_DHCPSERVER=1 -DNETSRV_ENABLE_DNSSERVER=1 -DUSE_EVENT_SEMAPHORE=1 -DUSE_SERIAL_PORT=0  -D_INCLUDE_NIMU_CODE   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/netctrl_full_ipv4/package -fr=./package/lib/lib/netctrl_full_ipv4/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/netctrl_full_ipv4/package/package_ti.ndk.netctrl.sem4f: export C_DIR=
package/lib/lib/netctrl_full_ipv4/package/package_ti.ndk.netctrl.sem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/netctrl_full_ipv4/netctrl.oem4f.dep
package/lib/lib/netctrl_full_ipv4/netctrl.oem4f.dep: ;
endif

package/lib/lib/netctrl_full_ipv4/netctrl.oem4f: | .interfaces
package/lib/lib/netctrl_full_ipv4/netctrl.oem4f: netctrl.c lib/netctrl_full_ipv4.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -D_NDK_EXTERN_CONFIG  -DNETSRV_ENABLE_TELNET=1 -DNETSRV_ENABLE_HTTP=1 -DNETSRV_ENABLE_NAT=1 -DNETSRV_ENABLE_DHCPCLIENT=1 -DNETSRV_ENABLE_DHCPSERVER=1 -DNETSRV_ENABLE_DNSSERVER=1 -DUSE_EVENT_SEMAPHORE=1 -DUSE_SERIAL_PORT=0  -D_INCLUDE_NIMU_CODE   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/netctrl_full_ipv4 -fr=./package/lib/lib/netctrl_full_ipv4 -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/netctrl_full_ipv4 -s oem4f $< -C   -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -D_NDK_EXTERN_CONFIG  -DNETSRV_ENABLE_TELNET=1 -DNETSRV_ENABLE_HTTP=1 -DNETSRV_ENABLE_NAT=1 -DNETSRV_ENABLE_DHCPCLIENT=1 -DNETSRV_ENABLE_DHCPSERVER=1 -DNETSRV_ENABLE_DNSSERVER=1 -DUSE_EVENT_SEMAPHORE=1 -DUSE_SERIAL_PORT=0  -D_INCLUDE_NIMU_CODE   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/netctrl_full_ipv4 -fr=./package/lib/lib/netctrl_full_ipv4
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/netctrl_full_ipv4/netctrl.oem4f: export C_DIR=
package/lib/lib/netctrl_full_ipv4/netctrl.oem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

package/lib/lib/netctrl_full_ipv4/netctrl.sem4f: | .interfaces
package/lib/lib/netctrl_full_ipv4/netctrl.sem4f: netctrl.c lib/netctrl_full_ipv4.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f -n $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -D_NDK_EXTERN_CONFIG  -DNETSRV_ENABLE_TELNET=1 -DNETSRV_ENABLE_HTTP=1 -DNETSRV_ENABLE_NAT=1 -DNETSRV_ENABLE_DHCPCLIENT=1 -DNETSRV_ENABLE_DHCPSERVER=1 -DNETSRV_ENABLE_DNSSERVER=1 -DUSE_EVENT_SEMAPHORE=1 -DUSE_SERIAL_PORT=0  -D_INCLUDE_NIMU_CODE   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/netctrl_full_ipv4 -fr=./package/lib/lib/netctrl_full_ipv4 -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/netctrl_full_ipv4 -s oem4f $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -D_NDK_EXTERN_CONFIG  -DNETSRV_ENABLE_TELNET=1 -DNETSRV_ENABLE_HTTP=1 -DNETSRV_ENABLE_NAT=1 -DNETSRV_ENABLE_DHCPCLIENT=1 -DNETSRV_ENABLE_DHCPSERVER=1 -DNETSRV_ENABLE_DNSSERVER=1 -DUSE_EVENT_SEMAPHORE=1 -DUSE_SERIAL_PORT=0  -D_INCLUDE_NIMU_CODE   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/netctrl_full_ipv4 -fr=./package/lib/lib/netctrl_full_ipv4
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/netctrl_full_ipv4/netctrl.sem4f: export C_DIR=
package/lib/lib/netctrl_full_ipv4/netctrl.sem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/netctrl_full_ipv4/netsrv.oem4f.dep
package/lib/lib/netctrl_full_ipv4/netsrv.oem4f.dep: ;
endif

package/lib/lib/netctrl_full_ipv4/netsrv.oem4f: | .interfaces
package/lib/lib/netctrl_full_ipv4/netsrv.oem4f: netsrv.c lib/netctrl_full_ipv4.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -D_NDK_EXTERN_CONFIG  -DNETSRV_ENABLE_TELNET=1 -DNETSRV_ENABLE_HTTP=1 -DNETSRV_ENABLE_NAT=1 -DNETSRV_ENABLE_DHCPCLIENT=1 -DNETSRV_ENABLE_DHCPSERVER=1 -DNETSRV_ENABLE_DNSSERVER=1 -DUSE_EVENT_SEMAPHORE=1 -DUSE_SERIAL_PORT=0  -D_INCLUDE_NIMU_CODE   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/netctrl_full_ipv4 -fr=./package/lib/lib/netctrl_full_ipv4 -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/netctrl_full_ipv4 -s oem4f $< -C   -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -D_NDK_EXTERN_CONFIG  -DNETSRV_ENABLE_TELNET=1 -DNETSRV_ENABLE_HTTP=1 -DNETSRV_ENABLE_NAT=1 -DNETSRV_ENABLE_DHCPCLIENT=1 -DNETSRV_ENABLE_DHCPSERVER=1 -DNETSRV_ENABLE_DNSSERVER=1 -DUSE_EVENT_SEMAPHORE=1 -DUSE_SERIAL_PORT=0  -D_INCLUDE_NIMU_CODE   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/netctrl_full_ipv4 -fr=./package/lib/lib/netctrl_full_ipv4
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/netctrl_full_ipv4/netsrv.oem4f: export C_DIR=
package/lib/lib/netctrl_full_ipv4/netsrv.oem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

package/lib/lib/netctrl_full_ipv4/netsrv.sem4f: | .interfaces
package/lib/lib/netctrl_full_ipv4/netsrv.sem4f: netsrv.c lib/netctrl_full_ipv4.aem4f.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem4f -n $< ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -D_NDK_EXTERN_CONFIG  -DNETSRV_ENABLE_TELNET=1 -DNETSRV_ENABLE_HTTP=1 -DNETSRV_ENABLE_NAT=1 -DNETSRV_ENABLE_DHCPCLIENT=1 -DNETSRV_ENABLE_DHCPSERVER=1 -DNETSRV_ENABLE_DNSSERVER=1 -DUSE_EVENT_SEMAPHORE=1 -DUSE_SERIAL_PORT=0  -D_INCLUDE_NIMU_CODE   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/netctrl_full_ipv4 -fr=./package/lib/lib/netctrl_full_ipv4 -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/netctrl_full_ipv4 -s oem4f $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M4 --abi=eabi --float_support=fpv4spd16 -eo.oem4f -ea.sem4f  -ms  -Dxdc_target_name__=M4F -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_5_2_5 -O2  -D_NDK_EXTERN_CONFIG  -DNETSRV_ENABLE_TELNET=1 -DNETSRV_ENABLE_HTTP=1 -DNETSRV_ENABLE_NAT=1 -DNETSRV_ENABLE_DHCPCLIENT=1 -DNETSRV_ENABLE_DHCPSERVER=1 -DNETSRV_ENABLE_DNSSERVER=1 -DUSE_EVENT_SEMAPHORE=1 -DUSE_SERIAL_PORT=0  -D_INCLUDE_NIMU_CODE   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.arm.elf.M4F.rootDir)/include/rts -I$(ti.targets.arm.elf.M4F.rootDir)/include  -fs=./package/lib/lib/netctrl_full_ipv4 -fr=./package/lib/lib/netctrl_full_ipv4
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/netctrl_full_ipv4/netsrv.sem4f: export C_DIR=
package/lib/lib/netctrl_full_ipv4/netsrv.sem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

clean,em4f ::
	-$(RM) package/lib/lib/netctrl_full_ipv4/package/package_ti.ndk.netctrl.oem4f
	-$(RM) package/lib/lib/netctrl_full_ipv4/netctrl.oem4f
	-$(RM) package/lib/lib/netctrl_full_ipv4/netsrv.oem4f
	-$(RM) package/lib/lib/netctrl_full_ipv4/package/package_ti.ndk.netctrl.sem4f
	-$(RM) package/lib/lib/netctrl_full_ipv4/netctrl.sem4f
	-$(RM) package/lib/lib/netctrl_full_ipv4/netsrv.sem4f

lib/netctrl_full_ipv4.aem4f: package/lib/lib/netctrl_full_ipv4/package/package_ti.ndk.netctrl.oem4f package/lib/lib/netctrl_full_ipv4/netctrl.oem4f package/lib/lib/netctrl_full_ipv4/netsrv.oem4f lib/netctrl_full_ipv4.aem4f.mak

clean::
	-$(RM) lib/netctrl_full_ipv4.aem4f.mak
