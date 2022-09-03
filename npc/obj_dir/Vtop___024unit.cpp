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

extern "C" void pmem_read(long long raddr, long long* rdata, char bytes);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ bytes) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    char bytes__Vcvt;
    for (size_t bytes__Vidx = 0; bytes__Vidx < 1; ++bytes__Vidx) bytes__Vcvt = bytes;
    pmem_read(raddr__Vcvt, &rdata__Vcvt, bytes__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void get_instr(int instr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_get_instr_TOP____024unit(IData/*31:0*/ instr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_get_instr_TOP____024unit\n"); );
    // Body
    int instr__Vcvt;
    for (size_t instr__Vidx = 0; instr__Vidx < 1; ++instr__Vidx) instr__Vcvt = instr;
    get_instr(instr__Vcvt);
}
