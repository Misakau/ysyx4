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
    VL_OUT8(i_rw_req_o,0,0);
    VL_OUT8(i_rw_valid_o,0,0);
    VL_IN8(i_rw_ready_i,0,0);
    VL_OUT(instr,31,0);
    VL_OUT(wb_instr,31,0);
    VL_INW(i_data_read_i,127,0,4);
    VL_OUT64(pc,63,0);
    VL_OUT64(wb_pc,63,0);
    VL_OUT64(next_pc,63,0);
    VL_OUT64(i_rw_addr_o,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__id_en;
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
        CData/*0:0*/ top__DOT__cpu_halt;
        CData/*0:0*/ top__DOT__is_Csrwen;
        CData/*0:0*/ top__DOT__alu_busy;
        CData/*0:0*/ top__DOT__wb_commit_r;
        CData/*0:0*/ top__DOT__my_ifu__DOT__i_cpu_ready;
        CData/*0:0*/ top__DOT__my_ifu__DOT__cpu_req_valid;
        CData/*0:0*/ top__DOT__my_ifu__DOT__old_instr;
        CData/*0:0*/ top__DOT__my_ifu__DOT__cache_doing;
        CData/*0:0*/ top__DOT__my_ifu__DOT__start;
        CData/*2:0*/ top__DOT__my_ifu__DOT__icache__DOT__cur_status;
        CData/*2:0*/ top__DOT__my_ifu__DOT__icache__DOT__next_status;
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
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__op_mul;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__mul_doing;
    };
    struct {
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__mul_ready;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__mul_out_valid;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__mul_valid;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__div_doing;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__div_valid;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__old_div;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__calculate_done;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__done_to_ready;
        CData/*6:0*/ top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout;
        CData/*3:0*/ top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r;
        CData/*6:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__done_to_ready;
        CData/*0:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done;
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
        CData/*7:0*/ top__DOT__my_mu__DOT__mem__DOT__datab;
        CData/*7:0*/ top__DOT__my_mu__DOT__mem__DOT__bytes;
        CData/*0:0*/ top__DOT__WB_Reg__DOT__valid_r;
        CData/*0:0*/ top__DOT__WB_Reg__DOT__wen_r;
        CData/*4:0*/ top__DOT__WB_Reg__DOT__waddr_r;
        CData/*0:0*/ top__DOT__WB_Reg__DOT__Ebreak_r;
        SData/*11:0*/ top__DOT__id_CsrId;
        SData/*15:0*/ top__DOT__my_mu__DOT__mem__DOT__datah;
        IData/*31:0*/ top__DOT__wb_instr_r;
        IData/*31:0*/ top__DOT__my_ifu__DOT__instr_read_r;
        IData/*31:0*/ top__DOT__my_ifu__DOT__icache__DOT__i;
        IData/*31:0*/ top__DOT__ID_Reg__DOT__instr_r;
        IData/*31:0*/ top__DOT__EX_Reg__DOT__instr_r;
        IData/*31:0*/ top__DOT__my_exu__DOT__alu64__DOT__sllWres;
        IData/*31:0*/ top__DOT__my_exu__DOT__alu64__DOT__srWres;
        VlWide<3>/*64:0*/ top__DOT__my_exu__DOT__alu64__DOT__multiplicand;
        VlWide<3>/*64:0*/ top__DOT__my_exu__DOT__alu64__DOT__multiplier;
        VlWide<5>/*131:0*/ top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result;
        VlWide<5>/*131:0*/ top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r;
        VlWide<3>/*66:0*/ top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r;
        VlWide<5>/*131:0*/ top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result;
        VlWide<5>/*131:0*/ top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result;
        VlWide<4>/*127:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r;
        IData/*31:0*/ top__DOT__M_Reg__DOT__instr_r;
        IData/*31:0*/ top__DOT__my_mu__DOT__mem__DOT__i;
        IData/*31:0*/ top__DOT__my_mu__DOT__mem__DOT__dataw;
        IData/*31:0*/ top__DOT__WB_Reg__DOT__instr_r;
        QData/*63:0*/ top__DOT__dnpc;
        QData/*63:0*/ top__DOT__if_pc_o;
        QData/*63:0*/ top__DOT__id_csrres_o;
        QData/*63:0*/ top__DOT__id_busa_o;
    };
    struct {
        QData/*63:0*/ top__DOT__id_busb_o;
        QData/*63:0*/ top__DOT__id_imm_o;
        QData/*63:0*/ top__DOT__m_ALURes_i;
        QData/*63:0*/ top__DOT__m_rfdata_o;
        QData/*63:0*/ top__DOT__ex_dnpc;
        QData/*63:0*/ top__DOT__m_dnpc;
        QData/*63:0*/ top__DOT__wb_dnpc;
        QData/*63:0*/ top__DOT__wb_pc_r;
        QData/*63:0*/ top__DOT__next_pc_r;
        QData/*63:0*/ top__DOT__my_ifu__DOT__cpu_data_read;
        QData/*63:0*/ top__DOT__ID_Reg__DOT__pc_r;
        QData/*63:0*/ top__DOT__my_idu__DOT__addr_res;
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
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__result_hi_r;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__result_lo_r;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__rlo;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__dividend;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__divisor;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__quotient;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__remainder;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__quotient_r;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__remainder_r;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r;
        QData/*63:0*/ top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub;
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
        QData/*63:0*/ top__DOT__csrfile__DOT__mcause;
        QData/*63:0*/ top__DOT__csrfile__DOT__mstatus;
        QData/*63:0*/ top__DOT__csrfile__DOT__mscratch;
        VlUnpacked<CData/*0:0*/, 256> top__DOT__my_ifu__DOT__icache__DOT__V;
        VlUnpacked<QData/*51:0*/, 256> top__DOT__my_ifu__DOT__icache__DOT__tag;
        VlUnpacked<VlWide<4>/*127:0*/, 4> top__DOT__my_ifu__DOT__icache__DOT__line_o;
        VlUnpacked<CData/*0:0*/, 4> top__DOT__my_ifu__DOT__icache__DOT__line_wen;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__my_ifu__DOT__icache__DOT__ram0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__my_ifu__DOT__icache__DOT__ram1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__my_ifu__DOT__icache__DOT__ram2__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__my_ifu__DOT__icache__DOT__ram3__DOT__ram;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 32> top__DOT__regfile__DOT__rf;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<4>/*127:0*/ top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram0__Q;
    VlWide<4>/*127:0*/ top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram1__Q;
    VlWide<4>/*127:0*/ top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram2__Q;
    VlWide<4>/*127:0*/ top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram3__Q;
    QData/*63:0*/ __Vtask_pmem_read__2__rdata;
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
