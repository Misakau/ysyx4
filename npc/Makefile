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
#FILEPATH ?= ./csrc/a.in
#TEST_PATH ?= ../am-kernels/tests/cpu-tests/build/$(IMAGE).bin
all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(VERILATOR_FLAGS) -LDFLAGS $(LDFLAGS) $(VERILATOR_INPUT)

	@rm -rf logs
	@mkdir -p logs
	obj_dir/Vtop +trace
#npcrun:
#	obj_dir/Vtop +trace $(TEST_PATH)$(IMAGE)
clean:
	rm -rf obj_dir
.PHONY: clean run	
include ../Makefile
# @echo "Write this Makefile by your self."#simor := V$(x) \
	#obj_dir/$(simor) \
