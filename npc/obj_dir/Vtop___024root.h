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
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low;
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high;
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low;
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high;
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low;
    Vtop_ysyx_220053_Adder32* __PVT__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(wb_commit,0,0);
    VL_OUT8(mem_valid,0,0);
    VL_OUT8(wb_dev_o,0,0);
    VL_OUT8(d_rw_ready,0,0);
    VL_IN8(axi_aw_ready_i,0,0);
    VL_OUT8(axi_aw_valid_o,0,0);
    VL_OUT8(axi_aw_prot_o,2,0);
    VL_OUT8(axi_aw_id_o,3,0);
    VL_OUT8(axi_aw_user_o,0,0);
    VL_OUT8(axi_aw_len_o,7,0);
    VL_OUT8(axi_aw_size_o,2,0);
    VL_OUT8(axi_aw_burst_o,1,0);
    VL_OUT8(axi_aw_lock_o,0,0);
    VL_OUT8(axi_aw_cache_o,3,0);
    VL_OUT8(axi_aw_qos_o,3,0);
    VL_OUT8(axi_aw_region_o,3,0);
    VL_IN8(axi_w_ready_i,0,0);
    VL_OUT8(axi_w_valid_o,0,0);
    VL_OUT8(axi_w_strb_o,7,0);
    VL_OUT8(axi_w_last_o,0,0);
    VL_OUT8(axi_w_user_o,0,0);
    VL_OUT8(axi_b_ready_o,0,0);
    VL_IN8(axi_b_valid_i,0,0);
    VL_IN8(axi_b_resp_i,1,0);
    VL_IN8(axi_b_id_i,3,0);
    VL_IN8(axi_b_user_i,0,0);
    VL_IN8(axi_ar_ready_i,0,0);
    VL_OUT8(axi_ar_valid_o,0,0);
    VL_OUT8(axi_ar_prot_o,2,0);
    VL_OUT8(axi_ar_id_o,3,0);
    VL_OUT8(axi_ar_user_o,0,0);
    VL_OUT8(axi_ar_len_o,7,0);
    VL_OUT8(axi_ar_size_o,2,0);
    VL_OUT8(axi_ar_burst_o,1,0);
    VL_OUT8(axi_ar_lock_o,0,0);
    VL_OUT8(axi_ar_cache_o,3,0);
    VL_OUT8(axi_ar_qos_o,3,0);
    VL_OUT8(axi_ar_region_o,3,0);
    VL_OUT8(axi_r_ready_o,0,0);
    VL_IN8(axi_r_valid_i,0,0);
    VL_IN8(axi_r_resp_i,1,0);
    VL_IN8(axi_r_last_i,0,0);
    VL_IN8(axi_r_id_i,3,0);
    VL_IN8(axi_r_user_i,0,0);
    VL_OUT(instr,31,0);
    VL_OUT(wb_instr,31,0);
    VL_OUT64(pc,63,0);
    VL_OUT64(wb_pc,63,0);
    VL_OUT64(next_pc,63,0);
    VL_OUT64(axi_aw_addr_o,63,0);
    VL_OUT64(axi_w_data_o,63,0);
    VL_OUT64(axi_ar_addr_o,63,0);
    VL_IN64(axi_r_data_i,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__rw_req_o;
        CData/*0:0*/ top__DOT__rw_valid_o;
        CData/*7:0*/ top__DOT__rw_size_o;
        CData/*0:0*/ top__DOT__rw_dev_o;
        CData/*0:0*/ top__DOT__core__DOT__i_rw_req_o;
        CData/*0:0*/ top__DOT__core__DOT__i_rw_valid_o;
        CData/*0:0*/ top__DOT__core__DOT__i_rw_ready_i;
        CData/*0:0*/ top__DOT__core__DOT__d_rw_req_o;
        CData/*0:0*/ top__DOT__core__DOT__d_rw_valid_o;
        CData/*0:0*/ top__DOT__core__DOT__d_rw_ready_i;
        CData/*0:0*/ top__DOT__core__DOT__mstatus_MIE;
        CData/*0:0*/ top__DOT__core__DOT__Time_interrupt;
        CData/*0:0*/ top__DOT__core__DOT__id_en;
        CData/*0:0*/ top__DOT__core__DOT__ex_en;
        CData/*0:0*/ top__DOT__core__DOT__id_block;
        CData/*0:0*/ top__DOT__core__DOT__id_ALUSrcA_o;
        CData/*0:0*/ top__DOT__core__DOT__id_MemToReg_o;
        CData/*0:0*/ top__DOT__core__DOT__id_MemWen_o;
        CData/*0:0*/ top__DOT__core__DOT__id_wen_o;
        CData/*0:0*/ top__DOT__core__DOT__id_CsrToReg_o;
        CData/*0:0*/ top__DOT__core__DOT__id_Ebreak_o;
        CData/*0:0*/ top__DOT__core__DOT__id_Fence_i_o;
        CData/*0:0*/ top__DOT__core__DOT__id_Csri_o;
        CData/*1:0*/ top__DOT__core__DOT__id_ALUSrcB_o;
        CData/*2:0*/ top__DOT__core__DOT__id_MemOp_o;
        CData/*4:0*/ top__DOT__core__DOT__id_ALUOp_o;
        CData/*1:0*/ top__DOT__core__DOT__id_MulOp_o;
        CData/*2:0*/ top__DOT__core__DOT__id_CsrOp;
        CData/*0:0*/ top__DOT__core__DOT__id_Ecall;
        CData/*0:0*/ top__DOT__core__DOT__id_Mret;
        CData/*0:0*/ top__DOT__core__DOT__id_Csrwen;
        CData/*0:0*/ top__DOT__core__DOT__running_r;
        CData/*0:0*/ top__DOT__core__DOT__Fence_i_commit;
        CData/*0:0*/ top__DOT__core__DOT__running;
        CData/*0:0*/ top__DOT__core__DOT__id_use_rd;
        CData/*0:0*/ top__DOT__core__DOT__id_ex_hazard;
        CData/*0:0*/ top__DOT__core__DOT__id_m_hazard;
        CData/*0:0*/ top__DOT__core__DOT__id_wb_hazard;
        CData/*0:0*/ top__DOT__core__DOT__has_fence_i;
        CData/*0:0*/ top__DOT__core__DOT__if_busy;
        CData/*0:0*/ top__DOT__core__DOT__cpu_halt;
        CData/*0:0*/ top__DOT__core__DOT__is_Csrwen;
        CData/*0:0*/ top__DOT__core__DOT__alu_busy;
        CData/*0:0*/ top__DOT__core__DOT__m_busy;
        CData/*7:0*/ top__DOT__core__DOT__d_rw_size_o;
        CData/*0:0*/ top__DOT__core__DOT__is_Fence_i;
        CData/*0:0*/ top__DOT__core__DOT__is_MemToReg;
        CData/*0:0*/ top__DOT__core__DOT__is_men;
        CData/*0:0*/ top__DOT__core__DOT__dev_o;
        CData/*0:0*/ top__DOT__core__DOT__wb_commit_r;
        CData/*0:0*/ top__DOT__core__DOT__my_ifu__DOT__old_instr;
        CData/*0:0*/ top__DOT__core__DOT__my_ifu__DOT__cache_doing;
        CData/*0:0*/ top__DOT__core__DOT__my_ifu__DOT__i_cpu_ready;
        CData/*0:0*/ top__DOT__core__DOT__my_ifu__DOT__cpu_req_valid;
        CData/*0:0*/ top__DOT__core__DOT__my_ifu__DOT__start;
        CData/*2:0*/ top__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status;
        CData/*2:0*/ top__DOT__core__DOT__my_ifu__DOT__icache__DOT__next_status;
        CData/*0:0*/ top__DOT__core__DOT__ID_Reg__DOT__valid_r;
        CData/*2:0*/ top__DOT__core__DOT__my_idu__DOT__ExtOp;
        CData/*2:0*/ top__DOT__core__DOT__my_idu__DOT__Branch;
        CData/*0:0*/ top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr;
        CData/*0:0*/ top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SIGctr;
        CData/*0:0*/ top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__ALctr;
        CData/*0:0*/ top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SFTctr;
    };
    struct {
        CData/*0:0*/ top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr;
        CData/*3:0*/ top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__OPctr;
        CData/*0:0*/ top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__NexA;
        CData/*0:0*/ top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__NexB;
        CData/*0:0*/ top__DOT__core__DOT__EX_Reg__DOT__valid_r;
        CData/*4:0*/ top__DOT__core__DOT__EX_Reg__DOT__rd_r;
        CData/*0:0*/ top__DOT__core__DOT__EX_Reg__DOT__ALUSrcA_r;
        CData/*0:0*/ top__DOT__core__DOT__EX_Reg__DOT__MemToReg_r;
        CData/*0:0*/ top__DOT__core__DOT__EX_Reg__DOT__MemWen_r;
        CData/*0:0*/ top__DOT__core__DOT__EX_Reg__DOT__wen_r;
        CData/*0:0*/ top__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r;
        CData/*1:0*/ top__DOT__core__DOT__EX_Reg__DOT__ALUSrcB_r;
        CData/*2:0*/ top__DOT__core__DOT__EX_Reg__DOT__MemOp_r;
        CData/*4:0*/ top__DOT__core__DOT__EX_Reg__DOT__ALUOp_r;
        CData/*1:0*/ top__DOT__core__DOT__EX_Reg__DOT__MulOp_r;
        CData/*0:0*/ top__DOT__core__DOT__EX_Reg__DOT__Ebreak_r;
        CData/*0:0*/ top__DOT__core__DOT__EX_Reg__DOT__Fence_i_r;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__SFTctr;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr;
        CData/*3:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__op_mul;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_doing;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_ready;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_valid;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_doing;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_valid;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__calculate_done;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__done_to_ready;
        CData/*6:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout;
        CData/*3:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r;
        CData/*6:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__done_to_ready;
        CData/*0:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done;
        CData/*0:0*/ top__DOT__core__DOT__M_Reg__DOT__valid_r;
        CData/*2:0*/ top__DOT__core__DOT__M_Reg__DOT__MemOp_r;
        CData/*0:0*/ top__DOT__core__DOT__M_Reg__DOT__MemWen_r;
        CData/*4:0*/ top__DOT__core__DOT__M_Reg__DOT__rd_r;
        CData/*0:0*/ top__DOT__core__DOT__M_Reg__DOT__wen_r;
        CData/*0:0*/ top__DOT__core__DOT__M_Reg__DOT__MemToReg_r;
        CData/*0:0*/ top__DOT__core__DOT__M_Reg__DOT__CsrToReg_r;
        CData/*0:0*/ top__DOT__core__DOT__M_Reg__DOT__Ebreak_r;
        CData/*0:0*/ top__DOT__core__DOT__M_Reg__DOT__Fence_i_r;
        CData/*0:0*/ top__DOT__core__DOT__my_mu__DOT__vis_mem;
        CData/*7:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask;
        CData/*0:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_req_valid;
        CData/*0:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__d_cpu_ready;
        CData/*0:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__cache_doing;
        CData/*7:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__datab;
    };
    struct {
        CData/*7:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__bytes;
        CData/*7:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt;
        CData/*3:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status;
        CData/*3:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status;
        CData/*0:0*/ top__DOT__core__DOT__WB_Reg__DOT__valid_r;
        CData/*0:0*/ top__DOT__core__DOT__WB_Reg__DOT__wen_r;
        CData/*4:0*/ top__DOT__core__DOT__WB_Reg__DOT__waddr_r;
        CData/*0:0*/ top__DOT__core__DOT__WB_Reg__DOT__Ebreak_r;
        CData/*0:0*/ top__DOT__core__DOT__WB_Reg__DOT__Fence_i_r;
        CData/*1:0*/ top__DOT__core__DOT__arbiter__DOT__cur_status;
        CData/*1:0*/ top__DOT__core__DOT__arbiter__DOT__next_status;
        CData/*0:0*/ top__DOT__axi__DOT__aw_fire;
        CData/*0:0*/ top__DOT__axi__DOT__w_fire;
        CData/*0:0*/ top__DOT__axi__DOT__b_fire;
        CData/*0:0*/ top__DOT__axi__DOT__r_fire;
        CData/*0:0*/ top__DOT__axi__DOT__r_last;
        CData/*2:0*/ top__DOT__axi__DOT__w_status;
        CData/*2:0*/ top__DOT__axi__DOT__r_status;
        CData/*7:0*/ top__DOT__axi__DOT__rcnt;
        CData/*7:0*/ top__DOT__axi__DOT__wcnt;
        CData/*0:0*/ top__DOT__axi__DOT__rw_ready_r;
        CData/*0:0*/ top__DOT__axi__DOT__axi_w_last_r;
        CData/*7:0*/ top__DOT__axi__DOT__rw_size_r;
        SData/*11:0*/ top__DOT__core__DOT__id_CsrId;
        SData/*15:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__datah;
        VlWide<4>/*127:0*/ top__DOT__data_read_i;
        VlWide<4>/*127:0*/ top__DOT__core__DOT__d_rw_w_data_o;
        IData/*31:0*/ top__DOT__core__DOT__if_instr_o;
        IData/*31:0*/ top__DOT__core__DOT__wb_instr_r;
        IData/*31:0*/ top__DOT__core__DOT__my_ifu__DOT__instr_read_r;
        IData/*31:0*/ top__DOT__core__DOT__my_ifu__DOT__icache__DOT__i;
        IData/*31:0*/ top__DOT__core__DOT__ID_Reg__DOT__instr_r;
        IData/*31:0*/ top__DOT__core__DOT__EX_Reg__DOT__instr_r;
        IData/*31:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres;
        IData/*31:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres;
        VlWide<3>/*64:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand;
        VlWide<3>/*64:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier;
        VlWide<5>/*131:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result;
        VlWide<5>/*131:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r;
        VlWide<3>/*66:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r;
        VlWide<5>/*131:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result;
        VlWide<5>/*131:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result;
        VlWide<4>/*127:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r;
        IData/*31:0*/ top__DOT__core__DOT__M_Reg__DOT__instr_r;
        IData/*31:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__i;
        IData/*31:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw;
        VlWide<4>/*127:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram;
        VlWide<4>/*127:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen;
        IData/*31:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__i;
        IData/*31:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__j;
        IData/*31:0*/ top__DOT__core__DOT__WB_Reg__DOT__instr_r;
        QData/*63:0*/ top__DOT__rw_addr_o;
        QData/*63:0*/ top__DOT__core__DOT__i_rw_addr_o;
        QData/*63:0*/ top__DOT__core__DOT__d_rw_addr_o;
        QData/*63:0*/ top__DOT__core__DOT__dnpc;
        QData/*63:0*/ top__DOT__core__DOT__if_pc_o;
        QData/*63:0*/ top__DOT__core__DOT__id_csrres_o;
        QData/*63:0*/ top__DOT__core__DOT__id_busa_o;
        QData/*63:0*/ top__DOT__core__DOT__id_busb_o;
        QData/*63:0*/ top__DOT__core__DOT__id_imm_o;
        QData/*63:0*/ top__DOT__core__DOT__m_ALURes_i;
        QData/*63:0*/ top__DOT__core__DOT__m_rfdata_o;
        QData/*63:0*/ top__DOT__core__DOT__ex_dnpc;
        QData/*63:0*/ top__DOT__core__DOT__m_dnpc;
    };
    struct {
        QData/*63:0*/ top__DOT__core__DOT__wb_dnpc;
        QData/*63:0*/ top__DOT__core__DOT__wb_pc_r;
        QData/*63:0*/ top__DOT__core__DOT__next_pc_r;
        QData/*63:0*/ top__DOT__core__DOT__Csr_datain;
        QData/*63:0*/ top__DOT__core__DOT__my_ifu__DOT__cpu_data_read;
        QData/*63:0*/ top__DOT__core__DOT__ID_Reg__DOT__pc_r;
        QData/*63:0*/ top__DOT__core__DOT__my_idu__DOT__addr_res;
        QData/*63:0*/ top__DOT__core__DOT__my_idu__DOT__alu_inA;
        QData/*63:0*/ top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres;
        QData/*63:0*/ top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb;
        QData/*63:0*/ top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA;
        QData/*63:0*/ top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB;
        QData/*63:0*/ top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc;
        QData/*63:0*/ top__DOT__core__DOT__EX_Reg__DOT__pc_r;
        QData/*63:0*/ top__DOT__core__DOT__EX_Reg__DOT__busa_r;
        QData/*63:0*/ top__DOT__core__DOT__EX_Reg__DOT__busb_r;
        QData/*63:0*/ top__DOT__core__DOT__EX_Reg__DOT__imm_r;
        QData/*63:0*/ top__DOT__core__DOT__EX_Reg__DOT__Csrres_r;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__res;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu_inA;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu_inB;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_hi_r;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_lo_r;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient_r;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder_r;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r;
        QData/*63:0*/ top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub;
        QData/*63:0*/ top__DOT__core__DOT__M_Reg__DOT__pc_r;
        QData/*63:0*/ top__DOT__core__DOT__M_Reg__DOT__raddr_r;
        QData/*63:0*/ top__DOT__core__DOT__M_Reg__DOT__wdata_r;
        QData/*63:0*/ top__DOT__core__DOT__M_Reg__DOT__Csrres_r;
        QData/*63:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout;
        QData/*63:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__datain;
        QData/*63:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_data_read;
        QData/*63:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__datad;
        QData/*63:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime;
        QData/*63:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp;
        QData/*63:0*/ top__DOT__core__DOT__WB_Reg__DOT__pc_r;
        QData/*63:0*/ top__DOT__core__DOT__WB_Reg__DOT__wdata_r;
        QData/*63:0*/ top__DOT__core__DOT__csrfile__DOT__csrin;
        QData/*63:0*/ top__DOT__core__DOT__csrfile__DOT__mtvec;
        QData/*63:0*/ top__DOT__core__DOT__csrfile__DOT__mepc;
        QData/*63:0*/ top__DOT__core__DOT__csrfile__DOT__mcause;
        QData/*63:0*/ top__DOT__core__DOT__csrfile__DOT__mstatus;
        QData/*63:0*/ top__DOT__core__DOT__csrfile__DOT__mscratch;
        QData/*63:0*/ top__DOT__core__DOT__csrfile__DOT__mie;
        QData/*63:0*/ top__DOT__core__DOT__csrfile__DOT__mip;
        QData/*63:0*/ top__DOT__axi__DOT__rw_w_data_r;
        VlUnpacked<CData/*0:0*/, 256> top__DOT__core__DOT__my_ifu__DOT__icache__DOT__V;
        VlUnpacked<QData/*51:0*/, 256> top__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag;
        VlUnpacked<VlWide<4>/*127:0*/, 4> top__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o;
        VlUnpacked<CData/*0:0*/, 4> top__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__core__DOT__my_ifu__DOT__icache__DOT__ram0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__core__DOT__my_ifu__DOT__icache__DOT__ram1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__core__DOT__my_ifu__DOT__icache__DOT__ram2__DOT__ram;
    };
    struct {
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__core__DOT__my_ifu__DOT__icache__DOT__ram3__DOT__ram;
        VlUnpacked<CData/*0:0*/, 256> top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V;
        VlUnpacked<CData/*0:0*/, 256> top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D;
        VlUnpacked<QData/*51:0*/, 256> top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag;
        VlUnpacked<VlWide<4>/*127:0*/, 4> top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o;
        VlUnpacked<CData/*0:0*/, 4> top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram2__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram3__DOT__ram;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__core__DOT__regfile__DOT__rf;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ top__DOT__core__DOT____Vcellinp__csrfile__Time_interrupt;
    CData/*0:0*/ top__DOT__core__DOT____Vcellinp__csrfile__Ecall;
    CData/*7:0*/ __Vdly__top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt;
    CData/*0:0*/ __Vdlyvset__top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V__v256;
    CData/*0:0*/ __Vdlyvset__top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V__v256;
    CData/*0:0*/ __Vdlyvset__top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v256;
    CData/*0:0*/ __Vdlyvset__top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v256;
    CData/*7:0*/ __Vdly__top__DOT__axi__DOT__rcnt;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<4>/*127:0*/ top__DOT__core__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram0__Q;
    VlWide<4>/*127:0*/ top__DOT__core__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram1__Q;
    VlWide<4>/*127:0*/ top__DOT__core__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram2__Q;
    VlWide<4>/*127:0*/ top__DOT__core__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram3__Q;
    VlWide<4>/*127:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram0__Q;
    VlWide<4>/*127:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram1__Q;
    VlWide<4>/*127:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram2__Q;
    VlWide<4>/*127:0*/ top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram3__Q;
    QData/*51:0*/ __Vdlyvval__top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v256;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
