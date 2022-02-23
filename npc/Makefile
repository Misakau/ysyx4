all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@verilator -Wall --cc --exe --build sim_main.cpp $(find *.v)
	@echo "Write this Makefile by your self."

include ../Makefile
