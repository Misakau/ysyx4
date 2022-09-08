// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024unit.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void c_trap(svBit done);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(CData/*0:0*/ done) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit\n"); );
    // Body
    svBit done__Vcvt;
    for (size_t done__Vidx = 0; done__Vidx < 1; ++done__Vidx) done__Vcvt = done;
    c_trap(done__Vcvt);
}
