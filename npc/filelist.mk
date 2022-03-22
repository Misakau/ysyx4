ifdef ITRACE
CXXSRC = csrc/disasm.cc
CXXFLAGS += $(shell llvm-config-11 --cxxflags) -fPIE
LIBS += $(shell llvm-config-11 --libs)
endif
