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
LDFLAGS += -ldl -lSDL2

CXXSRC = csrc/disasm.cc
CFLAGS += -I/usr/lib/llvm-11/include -std=c++14   -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_LIMIT_MACROS -fPIE
LDFLAGS += $(shell llvm-config-11 --libs)
IMG ?= $(NPC_HOME)/div-riscv64-npc.bin
LOGS ?= $(NPC_HOME)/logs/npc-logs.txt
REF_SO ?= $(NPC_HOME)/riscv64-nemu-interpreter-so

NPC_FLARGS ?= -l $(LOGS)

# open difftest
#NPC_FLARGS += -d $(REF_SO)

# load image
NPC_FLARGS += -i $(IMG)

# open ITRACE
#CFLAGS += -DITRACE

all:
	@echo "Write this Makefile by your self."
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) $(VERILATOR_INPUT) $(CXXSRC)
	@rm -rf logs
	@mkdir -p logs
	@cd logs && touch npc-logs.txt && cd ../
sim:all
	obj_dir/Vtop +trace $(NPC_FLARGS)
clean:
	rm -rf obj_dir
.PHONY: clean run	
include ../Makefile
# @echo "Write this Makefile by your self."#simor := V$(x) \
	#obj_dir/$(simor) \
