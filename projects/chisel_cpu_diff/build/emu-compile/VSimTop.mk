# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VSimTop.mk

default: /home/yhz/oscpu/projects/chisel_cpu_diff/build/emu

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
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
VM_PREFIX = VSimTop
# Module prefix (from --prefix)
VM_MODPREFIX = VSimTop
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-std=c++11 -static -Wall -I/home/yhz/oscpu/libraries/difftest/src/test/csrc -I/home/yhz/oscpu/libraries/difftest/src/test/csrc/common -I/home/yhz/oscpu/libraries/difftest/src/test/csrc/difftest -DVERILATOR -DNUM_CORES=1 -I/usr/include/SDL2 -D_REENTRANT -fPIE -I/home/yhz/oscpu/libraries/DRAMsim3/src -DWITH_DRAMSIM3 -DDRAMSIM3_CONFIG=\"/home/yhz/oscpu/libraries/DRAMsim3/configs/XiangShan.ini\" -DDRAMSIM3_OUTDIR=\"/home/yhz/oscpu/projects/chisel_cpu_diff/build\" \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lpthread -lSDL2 -ldl -lz -lsqlite3 /home/yhz/oscpu/libraries/DRAMsim3/build/libdramsim3.a \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	SimJTAG \
	axi4 \
	common \
	compress \
	device \
	flash \
	keyboard \
	ram \
	remote_bitbang \
	sdcard \
	uart \
	vga \
	difftest \
	goldenmem \
	interface \
	nemuproxy \
	ref \
	spikedasm \
	main \
	emu \
	logger \
	main \
	snapshot \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/yhz/oscpu/libraries/difftest/src/test/csrc/common \
	/home/yhz/oscpu/libraries/difftest/src/test/csrc/difftest \
	/home/yhz/oscpu/libraries/difftest/src/test/csrc/vcs \
	/home/yhz/oscpu/libraries/difftest/src/test/csrc/verilator \


### Default rules...
# Include list of all generated classes
include VSimTop_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

SimJTAG.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/common/SimJTAG.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
axi4.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/common/axi4.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
common.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/common/common.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
compress.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/common/compress.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/common/device.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
flash.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/common/flash.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
keyboard.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/common/keyboard.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ram.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/common/ram.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
remote_bitbang.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/common/remote_bitbang.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdcard.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/common/sdcard.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
uart.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/common/uart.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vga.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/common/vga.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/difftest/difftest.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
goldenmem.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/difftest/goldenmem.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
interface.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/difftest/interface.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
nemuproxy.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/difftest/nemuproxy.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ref.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/difftest/ref.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
spikedasm.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/difftest/spikedasm.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/vcs/main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
emu.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/verilator/emu.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
logger.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/verilator/logger.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/verilator/main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
snapshot.o: /home/yhz/oscpu/libraries/difftest/src/test/csrc/verilator/snapshot.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/yhz/oscpu/projects/chisel_cpu_diff/build/emu: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
