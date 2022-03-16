// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;
class Vtop___024unit;
class Vtop_ysyx_220053_Adder32;


//----------

VL_MODULE(Vtop___024root) {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low;
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high;
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low;
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT(instr,31,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__wen;
    CData/*0:0*/ top__DOT__ALUSrcA;
    CData/*0:0*/ top__DOT__MemWen;
    CData/*0:0*/ top__DOT__MemToReg;
    CData/*1:0*/ top__DOT__ALUSrcB;
    CData/*3:0*/ top__DOT__ALUOp;
    CData/*2:0*/ top__DOT__Branch;
    CData/*2:0*/ top__DOT__MemOp;
    CData/*0:0*/ top__DOT__my_ifu__DOT__fclk;
    CData/*2:0*/ top__DOT__my_idu__DOT__ExtOp;
    CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__SUBctr;
    CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__SIGctr;
    CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__ALctr;
    CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__SFTctr;
    CData/*2:0*/ top__DOT__my_exu__DOT__alu64__DOT__OPctr;
    CData/*7:0*/ top__DOT__my_exu__DOT__mem__DOT__wmask;
    CData/*7:0*/ top__DOT__my_exu__DOT__mem__DOT__datab;
    CData/*0:0*/ top__DOT__my_exu__DOT__nextaddr__DOT__NexA;
    CData/*0:0*/ top__DOT__my_exu__DOT__nextaddr__DOT__NexB;
    SData/*15:0*/ top__DOT__my_exu__DOT__mem__DOT__datah;
    IData/*31:0*/ top__DOT__instr_i;
    IData/*31:0*/ top__DOT__my_exu__DOT__mem__DOT__dataw;
    IData/*31:0*/ top__DOT__my_exu__DOT__mem__DOT__i;
    IData/*31:0*/ top__DOT__my_exu__DOT__mem__DOT__tmp;
    QData/*63:0*/ top__DOT__imm;
    QData/*63:0*/ top__DOT__my_ifu__DOT__now_pc;
    QData/*63:0*/ top__DOT__my_ifu__DOT__rdata;
    QData/*63:0*/ top__DOT__my_exu__DOT__busa;
    QData/*63:0*/ top__DOT__my_exu__DOT__busb;
    QData/*63:0*/ top__DOT__my_exu__DOT__res;
    QData/*63:0*/ top__DOT__my_exu__DOT__alu_inA;
    QData/*63:0*/ top__DOT__my_exu__DOT__alu_inB;
    QData/*63:0*/ top__DOT__my_exu__DOT__addr_res;
    QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__res0;
    QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__adderb;
    QData/*63:0*/ top__DOT__my_exu__DOT__mem__DOT__dataout;
    QData/*63:0*/ top__DOT__my_exu__DOT__mem__DOT__datad;
    QData/*63:0*/ top__DOT__my_exu__DOT__nextaddr__DOT__SrcA;
    QData/*63:0*/ top__DOT__my_exu__DOT__nextaddr__DOT__SrcB;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__my_exu__DOT__regfile__DOT__rf;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_pmem_read__3__rdata;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
