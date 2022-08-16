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
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low;
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high;
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low;
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high;
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low;
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(wb_commit,0,0);
    VL_OUT(instr,31,0);
    VL_OUT(wb_instr,31,0);
    VL_OUT64(pc,63,0);
    VL_OUT64(wb_pc,63,0);
    VL_OUT64(next_pc,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__if_block;
        CData/*4:0*/ top__DOT__id_rs1;
        CData/*0:0*/ top__DOT__id_ALUSrcA_o;
        CData/*0:0*/ top__DOT__id_MemToReg_o;
        CData/*0:0*/ top__DOT__id_MemWen_o;
        CData/*0:0*/ top__DOT__id_wen_o;
        CData/*0:0*/ top__DOT__id_CsrToReg_o;
        CData/*0:0*/ top__DOT__id_Ebreak_o;
        CData/*1:0*/ top__DOT__id_ALUSrcB_o;
        CData/*2:0*/ top__DOT__id_MemOp_o;
        CData/*4:0*/ top__DOT__id_ALUOp_o;
        CData/*1:0*/ top__DOT__id_MulOp_o;
        CData/*2:0*/ top__DOT__id_CsrOp;
        CData/*0:0*/ top__DOT__id_Ecall;
        CData/*0:0*/ top__DOT__id_Mret;
        CData/*0:0*/ top__DOT__id_Csrwen;
        CData/*0:0*/ top__DOT__running_r;
        CData/*0:0*/ top__DOT__running;
        CData/*0:0*/ top__DOT__id_use_rd;
        CData/*0:0*/ top__DOT__id_ex_hazard;
        CData/*0:0*/ top__DOT__id_m_hazard;
        CData/*0:0*/ top__DOT__id_wb_hazard;
        CData/*0:0*/ top__DOT__load_use;
        CData/*0:0*/ top__DOT__is_Csrwen;
        CData/*0:0*/ top__DOT__wb_commit_r;
        CData/*0:0*/ top__DOT__ID_Reg__DOT__valid_r;
        CData/*2:0*/ top__DOT__my_idu__DOT__ExtOp;
        CData/*2:0*/ top__DOT__my_idu__DOT__Branch;
        CData/*0:0*/ top__DOT__my_idu__DOT__na_alu__DOT__SUBctr;
        CData/*0:0*/ top__DOT__my_idu__DOT__na_alu__DOT__SIGctr;
        CData/*0:0*/ top__DOT__my_idu__DOT__na_alu__DOT__ALctr;
        CData/*0:0*/ top__DOT__my_idu__DOT__na_alu__DOT__SFTctr;
        CData/*0:0*/ top__DOT__my_idu__DOT__na_alu__DOT__Wctr;
        CData/*3:0*/ top__DOT__my_idu__DOT__na_alu__DOT__OPctr;
        CData/*0:0*/ top__DOT__my_idu__DOT__nextaddr__DOT__NexA;
        CData/*0:0*/ top__DOT__my_idu__DOT__nextaddr__DOT__NexB;
        CData/*0:0*/ top__DOT__EX_Reg__DOT__valid_r;
        CData/*4:0*/ top__DOT__EX_Reg__DOT__rd_r;
        CData/*0:0*/ top__DOT__EX_Reg__DOT__ALUSrcA_r;
        CData/*0:0*/ top__DOT__EX_Reg__DOT__MemToReg_r;
        CData/*0:0*/ top__DOT__EX_Reg__DOT__MemWen_r;
        CData/*0:0*/ top__DOT__EX_Reg__DOT__wen_r;
        CData/*0:0*/ top__DOT__EX_Reg__DOT__CsrToReg_r;
        CData/*1:0*/ top__DOT__EX_Reg__DOT__ALUSrcB_r;
        CData/*2:0*/ top__DOT__EX_Reg__DOT__MemOp_r;
        CData/*4:0*/ top__DOT__EX_Reg__DOT__ALUOp_r;
        CData/*1:0*/ top__DOT__EX_Reg__DOT__MulOp_r;
        CData/*0:0*/ top__DOT__EX_Reg__DOT__Ebreak_r;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__SUBctr;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__SIGctr;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__ALctr;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__SFTctr;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__Wctr;
        CData/*3:0*/ top__DOT__my_exu__DOT__alu64__DOT__OPctr;
        CData/*0:0*/ top__DOT__M_Reg__DOT__valid_r;
        CData/*2:0*/ top__DOT__M_Reg__DOT__MemOp_r;
        CData/*0:0*/ top__DOT__M_Reg__DOT__MemWen_r;
        CData/*4:0*/ top__DOT__M_Reg__DOT__rd_r;
        CData/*0:0*/ top__DOT__M_Reg__DOT__wen_r;
        CData/*0:0*/ top__DOT__M_Reg__DOT__MemToReg_r;
        CData/*0:0*/ top__DOT__M_Reg__DOT__CsrToReg_r;
        CData/*0:0*/ top__DOT__M_Reg__DOT__Ebreak_r;
        CData/*0:0*/ top__DOT__my_mu__DOT__is_wen;
        CData/*7:0*/ top__DOT__my_mu__DOT__mem__DOT__wmask;
    };
    struct {
        CData/*7:0*/ top__DOT__my_mu__DOT__mem__DOT__datab;
        CData/*7:0*/ top__DOT__my_mu__DOT__mem__DOT__bytes;
        CData/*0:0*/ top__DOT__WB_Reg__DOT__valid_r;
        CData/*0:0*/ top__DOT__WB_Reg__DOT__wen_r;
        CData/*4:0*/ top__DOT__WB_Reg__DOT__waddr_r;
        CData/*0:0*/ top__DOT__WB_Reg__DOT__Ebreak_r;
        SData/*11:0*/ top__DOT__id_CsrId;
        SData/*15:0*/ top__DOT__my_mu__DOT__mem__DOT__datah;
        IData/*31:0*/ top__DOT__if_instr_o;
        IData/*31:0*/ top__DOT__wb_instr_r;
        IData/*31:0*/ top__DOT__ID_Reg__DOT__instr_r;
        IData/*31:0*/ top__DOT__EX_Reg__DOT__instr_r;
        IData/*31:0*/ top__DOT__my_exu__DOT__alu64__DOT__sllWres;
        IData/*31:0*/ top__DOT__my_exu__DOT__alu64__DOT__srWres;
        VlWide<4>/*127:0*/ top__DOT__my_exu__DOT__alu64__DOT__mulres;
        IData/*31:0*/ top__DOT__my_exu__DOT__alu64__DOT__divresW;
        IData/*31:0*/ top__DOT__my_exu__DOT__alu64__DOT__remresW;
        IData/*31:0*/ top__DOT__M_Reg__DOT__instr_r;
        IData/*31:0*/ top__DOT__my_mu__DOT__mem__DOT__i;
        IData/*31:0*/ top__DOT__my_mu__DOT__mem__DOT__dataw;
        IData/*31:0*/ top__DOT__WB_Reg__DOT__instr_r;
        QData/*63:0*/ top__DOT__dnpc;
        QData/*63:0*/ top__DOT__if_pc_o;
        QData/*63:0*/ top__DOT__id_csrres_o;
        QData/*63:0*/ top__DOT__id_busa_o;
        QData/*63:0*/ top__DOT__id_busb_o;
        QData/*63:0*/ top__DOT__id_imm_o;
        QData/*63:0*/ top__DOT__m_ALURes_i;
        QData/*63:0*/ top__DOT__m_rfdata_o;
        QData/*63:0*/ top__DOT__wb_pc_r;
        QData/*63:0*/ top__DOT__next_pc_r;
        QData/*63:0*/ top__DOT__my_ifu__DOT__now_pc;
        QData/*63:0*/ top__DOT__my_ifu__DOT__rdata;
        QData/*63:0*/ top__DOT__my_ifu__DOT__valid_dnpc;
        QData/*63:0*/ top__DOT__ID_Reg__DOT__pc_r;
        QData/*63:0*/ top__DOT__my_idu__DOT__alu_inA;
        QData/*63:0*/ top__DOT__my_idu__DOT__na_alu__DOT__adderres;
        QData/*63:0*/ top__DOT__my_idu__DOT__na_alu__DOT__adderb;
        QData/*63:0*/ top__DOT__my_idu__DOT__nextaddr__DOT__SrcA;
        QData/*63:0*/ top__DOT__my_idu__DOT__nextaddr__DOT__SrcB;
        QData/*63:0*/ top__DOT__my_idu__DOT__nextaddr__DOT__respc;
        QData/*63:0*/ top__DOT__EX_Reg__DOT__pc_r;
        QData/*63:0*/ top__DOT__EX_Reg__DOT__busa_r;
        QData/*63:0*/ top__DOT__EX_Reg__DOT__busb_r;
        QData/*63:0*/ top__DOT__EX_Reg__DOT__imm_r;
        QData/*63:0*/ top__DOT__EX_Reg__DOT__Csrres_r;
        QData/*63:0*/ top__DOT__my_exu__DOT__res;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu_inA;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu_inB;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__adderres;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__adderb;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__mulresW;
        QData/*63:0*/ top__DOT__M_Reg__DOT__pc_r;
        QData/*63:0*/ top__DOT__M_Reg__DOT__raddr_r;
        QData/*63:0*/ top__DOT__M_Reg__DOT__wdata_r;
        QData/*63:0*/ top__DOT__M_Reg__DOT__Csrres_r;
        QData/*63:0*/ top__DOT__my_mu__DOT__mem__DOT__dataout;
        QData/*63:0*/ top__DOT__my_mu__DOT__mem__DOT__datain;
        QData/*63:0*/ top__DOT__my_mu__DOT__mem__DOT__datad;
        QData/*63:0*/ top__DOT__WB_Reg__DOT__pc_r;
        QData/*63:0*/ top__DOT__WB_Reg__DOT__wdata_r;
        QData/*63:0*/ top__DOT__csrfile__DOT__csrin;
        QData/*63:0*/ top__DOT__csrfile__DOT__mtvec;
        QData/*63:0*/ top__DOT__csrfile__DOT__mepc;
    };
    struct {
        QData/*63:0*/ top__DOT__csrfile__DOT__mcause;
        QData/*63:0*/ top__DOT__csrfile__DOT__mstatus;
        QData/*63:0*/ top__DOT__csrfile__DOT__mscratch;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__regfile__DOT__rf;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vtask_pmem_read__1__rdata;
    QData/*63:0*/ __Vtask_pmem_read__3__rdata;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;

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
