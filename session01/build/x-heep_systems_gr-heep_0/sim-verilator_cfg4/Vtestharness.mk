# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vtestharness.mk

default: Vtestharness

### Constants...
# Perl executable (from $PERL, defaults to 'perl' if not set)
PERL = perl
# Python3 executable (from $PYTHON3, defaults to 'python3' if not set)
PYTHON3 = python3
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/jamirand/tools/verilator/5.040/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?=
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?=

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vtestharness
# Module prefix (from --prefix)
VM_MODPREFIX = Vtestharness
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
  -I../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/dv/dpi/uartdpi \
  -I../../../hw/vendor/x-heep/hw/vendor/openhwgroup_cv32e20/vendor/lowrisc_ip/dv/sv/dv_utils \
  -I../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/prim/rtl \
  -I../../../hw/vendor/x-heep/hw/vendor/pulp_platform_common_cells/include \
  -I../../../hw/vendor/x-heep/hw/vendor/pulp_platform_register_interface/include \
  -I../../../hw/vendor/x-heep/hw/vendor/openhwgroup_cv32e20/rtl \
  -I../../../hw/vendor/x-heep/hw/vendor/pulp_platform_axi/include \
  -I../../../hw/vendor/x-heep/hw/vendor/xheep_dma/data \
  -I../../../hw/vendor/x-heep/hw/vendor/pulp_platform_serial_link/src/axis/include \
  -I../../../tb \
  -Wall -fpermissive \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
  -lz \
  -pthread -lutil -lelf \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
  uartdpi \
  XHEEP_CmdLineOptions \
  tb_top \
  tb_top \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
  . \
  ../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/dv/dpi/uartdpi \
  ../../../tb \

### Default rules...
# Include list of all generated classes
include Vtestharness_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

uartdpi.o: ../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/dv/dpi/uartdpi/uartdpi.c 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
XHEEP_CmdLineOptions.o: ../../../tb/XHEEP_CmdLineOptions.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
tb_top.o: ../../../tb/tb_top.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<
tb_top.o: tb_top.cpp 
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST)  -c -o $@ $<

### Link rules... (from --exe)
Vtestharness: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@

# Verilated -*- Makefile -*-
