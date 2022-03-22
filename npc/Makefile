VFILES := $(wildcard vsrc/*.v)
CFILES := $(wildcard csrc/*.cpp)
VERILATOR = verilator
# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe --build --top-module top
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
# VERILATOR_FLAGS += -Os -x-assign 0
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
# VERILATOR_FLAGS += --assert
# Generate coverage analysis
# VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt

# Input files for Verilator
VERILATOR_INPUT = $(VFILES) $(CFILES)
LDFLAGS = -lreadline
LDFLAGS += -ldl 
CFLAGS = -DITRACE
#LDFLAGS += -L$(NEMU_HOME)/build -lriscv64-nemu-interpreter-so
#FILEPATH ?= ./csrc/a.in
#TEST_PATH ?= ../am-kernels/tests/cpu-tests/build/$(IMAGE).bin
CXXSRC = csrc/disasm.cc
CFLAGS += -I/usr/lib/llvm-11/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_LIMIT_MACROS -fPIE
LDFLAGS += $(shell llvm-config-11 --libs)
IMG ?= /home/wang/ysyx-workbench/am-kernels/tests/cpu-tests/build/bit-riscv64-npc.bin
LOGS ?= $(NPC_HOME)/logs/npc-logs.txt
all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) $(VERILATOR_INPUT) $(CXXSRC)
	@rm -rf logs
	@mkdir -p logs
	@cd logs && touch npc-logs.txt && cd ../
	obj_dir/Vtop +trace -i $(IMG) -l $(LOGS)
#npcrun:
#	obj_dir/Vtop +trace $(TEST_PATH)$(IMAGE)
clean:
	rm -rf obj_dir
.PHONY: clean run	
include ../Makefile
# @echo "Write this Makefile by your self."#simor := V$(x) \
	#obj_dir/$(simor) \
