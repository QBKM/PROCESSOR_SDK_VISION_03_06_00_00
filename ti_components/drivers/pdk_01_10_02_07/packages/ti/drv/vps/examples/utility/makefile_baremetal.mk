#
# This file is the makefile for building VPS example utility library for bare metal use cases.
#
include $(PDK_INSTALL_PATH)/ti/build/Rules.make

MODULE_NAME = vps_examples_utility_baremetal

SRCDIR = src
INCDIR = .

# List all the external components/interfaces, whose interface header files
# need to be included for this component
INCLUDE_EXTERNAL_INTERFACES = pdk
ifeq ($(VPS_USE_TI_RTOS_MMCSD),no)
  INCLUDE_EXTERNAL_INTERFACES += edma
endif
INCLUDE_INTERNAL_INTERFACES =

CFLAGS_LOCAL_COMMON = $(PDK_CFLAGS) $(VPSLIB_CFLAGS) $(VPSDRV_CFLAGS) -DBARE_METAL
PACKAGE_SRCS_COMMON = .

# Common source files and CFLAGS across all platforms and cores
SRCS_COMMON = bsputils_app.c bsputils_buf.c bsputils_mbx.c bsputils_tsk.c \
              bsputils_prf_baremetal.c bsputils_mem.c bsputils_mem_default.c \
              bsputils_tiler.c bsputils_ub960.c bsputils_lvds.c
ifeq ($(VPS_USE_TI_RTOS_MMCSD),yes)
  SRCS_COMMON += bsputils_fileioTiRtos.c
else
  SRCS_COMMON += bsputils_fileio.c
endif
ifeq ($(VPS_USE_TI_RTOS_UART),yes)
  SRCS_COMMON += bsputils_uartTiRtos.c
else
  SRCS_COMMON += bsputils_uart.c
endif

# Core/SoC/platform specific source files and CFLAGS
# Example:
#   SRCS_<core/SoC/platform-name> =
#   CFLAGS_LOCAL_<core/SoC/platform-name> =

# Include common make files
ifeq ($(MAKERULEDIR), )
#Makerule path not defined, define this and assume relative path from ROOTDIR
  MAKERULEDIR := $(ROOTDIR)/ti/build/makerules
  export MAKERULEDIR
endif
include $(MAKERULEDIR)/common.mk

# OBJs and libraries are built by using rule defined in rules_<target>.mk
#     and need not be explicitly specified here

# Nothing beyond this point
