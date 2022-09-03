// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root____Vdpiimwrap_top__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1;
    // Body
    __Vtemp1[0U] = 0x2e766364U;
    __Vtemp1[1U] = 0x64756d70U;
    __Vtemp1[2U] = 0x766c745fU;
    __Vtemp1[3U] = 0x6f67732fU;
    __Vtemp1[4U] = 0x6cU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("hello world\n");
    Vtop___024root____Vdpiimwrap_top__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__regfile__DOT__rf);
}

void Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(CData/*0:0*/ done);
extern const VlUnpacked<CData/*7:0*/, 8> Vtop__ConstPool__TABLE_bef31cc5_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_8db4e481_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_6ee9ed8c_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_a9c47812_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_aa2192ff_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_f4558aae_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtop__ConstPool__TABLE_6fbd8736_0;
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*7:0*/ bytes);
extern const VlUnpacked<CData/*2:0*/, 64> Vtop__ConstPool__TABLE_091dc012_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_9a38e7b0_0;
void Vtop___024unit____Vdpiimwrap_get_instr_TOP____024unit(IData/*31:0*/ instr);

void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5\n"); );
    // Variables
    CData/*5:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*4:0*/ __Vtableidx4;
    CData/*2:0*/ __Vtableidx5;
    CData/*3:0*/ __Vtableidx6;
    VlWide<3>/*95:0*/ __Vtemp110;
    VlWide<3>/*95:0*/ __Vtemp111;
    VlWide<3>/*95:0*/ __Vtemp112;
    VlWide<3>/*95:0*/ __Vtemp113;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<5>/*159:0*/ __Vtemp144;
    VlWide<5>/*159:0*/ __Vtemp145;
    VlWide<5>/*159:0*/ __Vtemp146;
    VlWide<5>/*159:0*/ __Vtemp147;
    // Body
    if (vlSelf->top__DOT__WB_Reg__DOT__Ebreak_r) {
        Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(1U);
    }
    vlSelf->wb_commit = vlSelf->top__DOT__wb_commit_r;
    vlSelf->wb_pc = vlSelf->top__DOT__wb_pc_r;
    vlSelf->wb_instr = vlSelf->top__DOT__wb_instr_r;
    vlSelf->next_pc = vlSelf->top__DOT__next_pc_r;
    vlSelf->rw_w_data_o[0U] = vlSelf->top__DOT__d_rw_w_data_o[0U];
    vlSelf->rw_w_data_o[1U] = vlSelf->top__DOT__d_rw_w_data_o[1U];
    vlSelf->rw_w_data_o[2U] = vlSelf->top__DOT__d_rw_w_data_o[2U];
    vlSelf->rw_w_data_o[3U] = vlSelf->top__DOT__d_rw_w_data_o[3U];
    __Vtemp110[0U] = 1U;
    __Vtemp110[1U] = 0U;
    __Vtemp110[2U] = 0U;
    __Vtemp111[0U] = ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                       << 1U) | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                                 >> 0x1fU));
    __Vtemp111[1U] = ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                       << 1U) | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                                 >> 0x1fU));
    __Vtemp111[2U] = (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                      >> 0x1fU);
    __Vtemp112[0U] = (IData)((~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r));
    __Vtemp112[1U] = (IData)(((~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r) 
                              >> 0x20U));
    __Vtemp112[2U] = 1U;
    VL_ADD_W(3, __Vtemp113, __Vtemp111, __Vtemp112);
    VL_ADD_W(3, __Vtemp114, __Vtemp110, __Vtemp113);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s 
        = (1U & __Vtemp114[2U]);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub 
        = (1ULL + ((((QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U])) 
                     << 0x21U) | (((QData)((IData)(
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U])) 
                                   << 1U) | ((QData)((IData)(
                                                             vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U])) 
                                             >> 0x1fU))) 
                   + (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r)));
    if ((0U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 0x20U;
    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 8U;
    } else if ((2U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 0x10U;
    }
    if ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__cur_status))) {
        vlSelf->rw_addr_o = vlSelf->top__DOT__d_rw_addr_o;
        vlSelf->rw_req_o = vlSelf->top__DOT__d_rw_req_o;
        vlSelf->rw_valid_o = vlSelf->top__DOT__d_rw_valid_o;
    } else {
        vlSelf->rw_addr_o = ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__cur_status))
                              ? vlSelf->top__DOT__i_rw_addr_o
                              : 0ULL);
        vlSelf->rw_req_o = ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__cur_status)) 
                            & (IData)(vlSelf->top__DOT__i_rw_req_o));
        vlSelf->rw_valid_o = ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__cur_status)) 
                              & (IData)(vlSelf->top__DOT__i_rw_valid_o));
    }
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0U][0U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram0__Q[0U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0U][1U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram0__Q[1U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0U][2U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram0__Q[2U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0U][3U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram0__Q[3U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1U][0U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram1__Q[0U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1U][1U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram1__Q[1U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1U][2U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram1__Q[2U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1U][3U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram1__Q[3U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2U][0U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram2__Q[0U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2U][1U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram2__Q[1U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2U][2U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram2__Q[2U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2U][3U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram2__Q[3U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3U][0U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram3__Q[0U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3U][1U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram3__Q[1U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3U][2U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram3__Q[2U];
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3U][3U] 
        = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram3__Q[3U];
    vlSelf->top__DOT__i_rw_ready_i = ((2U != (IData)(vlSelf->top__DOT__arbiter__DOT__cur_status)) 
                                      & ((1U == (IData)(vlSelf->top__DOT__arbiter__DOT__cur_status)) 
                                         & (IData)(vlSelf->rw_ready_i)));
    vlSelf->top__DOT__d_rw_ready_i = ((2U == (IData)(vlSelf->top__DOT__arbiter__DOT__cur_status)) 
                                      & (IData)(vlSelf->rw_ready_i));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel 
        = ((8U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                   << 1U) & ((0xfffffff8U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                              << 2U) 
                                             & ((~ 
                                                 vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                                << 3U))) 
                             | (((~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                     >> 1U)) & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                << 3U)))) | ((4U & 
                                              (((~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                  >> 2U)) 
                                                << 2U) 
                                               & ((0xfffffffcU 
                                                   & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                       << 1U) 
                                                      & ((~ 
                                                          vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                                         << 2U))) 
                                                  | (((~ 
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                        >> 1U)) 
                                                      & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                                     << 2U)))) 
                                             | ((2U 
                                                 & (((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                      >> 1U) 
                                                     & ((~ 
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                          >> 1U)) 
                                                        << 1U)) 
                                                    & ((~ 
                                                        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                                       << 1U))) 
                                                | (1U 
                                                   & (((~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                         >> 2U)) 
                                                       & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                          >> 1U)) 
                                                      & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])))));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient 
        = (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s) 
            ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s))
            ? (1ULL + (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r))
            : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s)
            ? (1ULL + (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r))
            : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r);
    __Vtableidx5 = vlSelf->top__DOT__M_Reg__DOT__MemOp_r;
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__bytes = 
        Vtop__ConstPool__TABLE_bef31cc5_0[__Vtableidx5];
    __Vtableidx4 = vlSelf->top__DOT__EX_Reg__DOT__ALUOp_r;
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr 
        = Vtop__ConstPool__TABLE_8db4e481_0[__Vtableidx4];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr 
        = Vtop__ConstPool__TABLE_6ee9ed8c_0[__Vtableidx4];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr 
        = Vtop__ConstPool__TABLE_a9c47812_0[__Vtableidx4];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr 
        = Vtop__ConstPool__TABLE_aa2192ff_0[__Vtableidx4];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr 
        = Vtop__ConstPool__TABLE_f4558aae_0[__Vtableidx4];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr 
        = Vtop__ConstPool__TABLE_6fbd8736_0[__Vtableidx4];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[0U][0U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram0__Q[0U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[0U][1U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram0__Q[1U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[0U][2U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram0__Q[2U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[0U][3U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram0__Q[3U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[1U][0U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram1__Q[0U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[1U][1U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram1__Q[1U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[1U][2U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram1__Q[2U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[1U][3U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram1__Q[3U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[2U][0U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram2__Q[0U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[2U][1U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram2__Q[1U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[2U][2U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram2__Q[2U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[2U][3U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram2__Q[3U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[3U][0U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram3__Q[0U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[3U][1U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram3__Q[1U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[3U][2U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram3__Q[2U];
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[3U][3U] 
        = vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram3__Q[3U];
    vlSelf->top__DOT__my_ifu__DOT__cpu_req_valid = 
        (1U & ((IData)(vlSelf->top__DOT__my_ifu__DOT__start) 
               | (((~ (IData)(vlSelf->top__DOT__my_ifu__DOT__cache_doing)) 
                   & (~ (IData)(vlSelf->top__DOT__my_ifu__DOT__i_cpu_ready))) 
                  & (~ (IData)(vlSelf->top__DOT__my_ifu__DOT__old_instr)))));
    vlSelf->top__DOT__my_exu__DOT__alu_inB = ((1U == (IData)(vlSelf->top__DOT__EX_Reg__DOT__ALUSrcB_r))
                                               ? vlSelf->top__DOT__EX_Reg__DOT__imm_r
                                               : ((0U 
                                                   == (IData)(vlSelf->top__DOT__EX_Reg__DOT__ALUSrcB_r))
                                                   ? vlSelf->top__DOT__EX_Reg__DOT__busb_r
                                                   : 4ULL));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r) 
           & (0x40U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt)));
    vlSelf->mem_valid = vlSelf->top__DOT__M_Reg__DOT__valid_r;
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__done_to_ready 
        = vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_out_valid;
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__done_to_ready 
        = vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r;
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__calculate_done 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r) 
           & ((0x10U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt)) 
              | (0U == ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                         | vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[1U]) 
                        | vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[2U]))));
    if ((0U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->top__DOT__my_mu__DOT__mem__DOT__i, 
                          (7U & (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r)))) {
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask 
                = ((~ ((IData)(1U) << (7U & vlSelf->top__DOT__my_mu__DOT__mem__DOT__i))) 
                   & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__my_mu__DOT__mem__DOT__i);
        }
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask 
            = ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask) 
               | (0xffU & ((IData)(1U) << (7U & (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r)))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask 
            = ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask) 
               | (0xffU & ((IData)(1U) << (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask 
            = ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask) 
               | (0xffU & ((IData)(1U) << (7U & ((IData)(2U) 
                                                 + (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask 
            = ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask) 
               | (0xffU & ((IData)(1U) << (7U & ((IData)(3U) 
                                                 + (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 
            ((IData)(4U) + (7U & (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r)));
        while (VL_GTS_III(1,32,32, 8U, vlSelf->top__DOT__my_mu__DOT__mem__DOT__i)) {
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask 
                = ((~ ((IData)(1U) << (7U & vlSelf->top__DOT__my_mu__DOT__mem__DOT__i))) 
                   & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__my_mu__DOT__mem__DOT__i);
        }
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->top__DOT__my_mu__DOT__mem__DOT__i, 
                          (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                    << 3U)))) {
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
                = ((~ (1ULL << (0x3fU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__i))) 
                   & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain);
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__my_mu__DOT__mem__DOT__i);
        }
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                      << 3U)))) & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)(vlSelf->top__DOT__M_Reg__DOT__wdata_r)))) 
                  << (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                               << 3U))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(1U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 1U))))) 
                  << (0x3fU & ((IData)(1U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(2U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 2U))))) 
                  << (0x3fU & ((IData)(2U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(3U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 3U))))) 
                  << (0x3fU & ((IData)(3U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(4U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 4U))))) 
                  << (0x3fU & ((IData)(4U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(5U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 5U))))) 
                  << (0x3fU & ((IData)(5U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(6U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 6U))))) 
                  << (0x3fU & ((IData)(6U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(7U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 7U))))) 
                  << (0x3fU & ((IData)(7U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(8U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 8U))))) 
                  << (0x3fU & ((IData)(8U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(9U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 9U))))) 
                  << (0x3fU & ((IData)(9U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0xaU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0xaU))))) 
                  << (0x3fU & ((IData)(0xaU) + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0xbU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0xbU))))) 
                  << (0x3fU & ((IData)(0xbU) + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0xcU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0xcU))))) 
                  << (0x3fU & ((IData)(0xcU) + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0xdU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0xdU))))) 
                  << (0x3fU & ((IData)(0xdU) + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0xeU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0xeU))))) 
                  << (0x3fU & ((IData)(0xeU) + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0xfU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0xfU))))) 
                  << (0x3fU & ((IData)(0xfU) + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x10U) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x10U))))) 
                  << (0x3fU & ((IData)(0x10U) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x11U) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x11U))))) 
                  << (0x3fU & ((IData)(0x11U) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x12U) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x12U))))) 
                  << (0x3fU & ((IData)(0x12U) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x13U) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x13U))))) 
                  << (0x3fU & ((IData)(0x13U) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x14U) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x14U))))) 
                  << (0x3fU & ((IData)(0x14U) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x15U) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x15U))))) 
                  << (0x3fU & ((IData)(0x15U) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x16U) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x16U))))) 
                  << (0x3fU & ((IData)(0x16U) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x17U) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x17U))))) 
                  << (0x3fU & ((IData)(0x17U) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x18U) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x18U))))) 
                  << (0x3fU & ((IData)(0x18U) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x19U) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x19U))))) 
                  << (0x3fU & ((IData)(0x19U) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x1aU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x1aU))))) 
                  << (0x3fU & ((IData)(0x1aU) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x1bU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x1bU))))) 
                  << (0x3fU & ((IData)(0x1bU) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x1cU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x1cU))))) 
                  << (0x3fU & ((IData)(0x1cU) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x1dU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x1dU))))) 
                  << (0x3fU & ((IData)(0x1dU) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x1eU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x1eU))))) 
                  << (0x3fU & ((IData)(0x1eU) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0x1fU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0x1fU))))) 
                  << (0x3fU & ((IData)(0x1fU) + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 
            ((IData)(0x20U) + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                        << 3U)));
        while (VL_GTS_III(1,32,32, 0x40U, vlSelf->top__DOT__my_mu__DOT__mem__DOT__i)) {
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
                = ((~ (1ULL << (0x3fU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__i))) 
                   & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain);
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__my_mu__DOT__mem__DOT__i);
        }
    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->top__DOT__my_mu__DOT__mem__DOT__i, 
                          (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                    << 3U)))) {
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
                = ((~ (1ULL << (0x3fU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__i))) 
                   & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain);
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__my_mu__DOT__mem__DOT__i);
        }
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                      << 3U)))) & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)(vlSelf->top__DOT__M_Reg__DOT__wdata_r)))) 
                  << (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                               << 3U))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(1U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 1U))))) 
                  << (0x3fU & ((IData)(1U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(2U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 2U))))) 
                  << (0x3fU & ((IData)(2U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(3U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 3U))))) 
                  << (0x3fU & ((IData)(3U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(4U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 4U))))) 
                  << (0x3fU & ((IData)(4U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(5U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 5U))))) 
                  << (0x3fU & ((IData)(5U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(6U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 6U))))) 
                  << (0x3fU & ((IData)(6U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(7U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 7U))))) 
                  << (0x3fU & ((IData)(7U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 
            ((IData)(8U) + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                     << 3U)));
        while (VL_GTS_III(1,32,32, 0x40U, vlSelf->top__DOT__my_mu__DOT__mem__DOT__i)) {
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
                = ((~ (1ULL << (0x3fU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__i))) 
                   & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain);
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__my_mu__DOT__mem__DOT__i);
        }
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->top__DOT__my_mu__DOT__mem__DOT__i, 
                          (7U & (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r)))) {
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask 
                = ((~ ((IData)(1U) << (7U & vlSelf->top__DOT__my_mu__DOT__mem__DOT__i))) 
                   & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__my_mu__DOT__mem__DOT__i);
        }
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask 
            = ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask) 
               | (0xffU & ((IData)(1U) << (7U & (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r)))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 
            ((IData)(1U) + (7U & (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r)));
        while (VL_GTS_III(1,32,32, 8U, vlSelf->top__DOT__my_mu__DOT__mem__DOT__i)) {
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask 
                = ((~ ((IData)(1U) << (7U & vlSelf->top__DOT__my_mu__DOT__mem__DOT__i))) 
                   & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__my_mu__DOT__mem__DOT__i);
        }
    } else if ((2U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->top__DOT__my_mu__DOT__mem__DOT__i, 
                          (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                    << 3U)))) {
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
                = ((~ (1ULL << (0x3fU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__i))) 
                   & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain);
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__my_mu__DOT__mem__DOT__i);
        }
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                      << 3U)))) & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)(vlSelf->top__DOT__M_Reg__DOT__wdata_r)))) 
                  << (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                               << 3U))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(1U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 1U))))) 
                  << (0x3fU & ((IData)(1U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(2U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 2U))))) 
                  << (0x3fU & ((IData)(2U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(3U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 3U))))) 
                  << (0x3fU & ((IData)(3U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(4U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 4U))))) 
                  << (0x3fU & ((IData)(4U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(5U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 5U))))) 
                  << (0x3fU & ((IData)(5U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(6U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 6U))))) 
                  << (0x3fU & ((IData)(6U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(7U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 7U))))) 
                  << (0x3fU & ((IData)(7U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(8U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 8U))))) 
                  << (0x3fU & ((IData)(8U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(9U) + 
                                      (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 9U))))) 
                  << (0x3fU & ((IData)(9U) + (0x38U 
                                              & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0xaU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0xaU))))) 
                  << (0x3fU & ((IData)(0xaU) + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0xbU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0xbU))))) 
                  << (0x3fU & ((IData)(0xbU) + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0xcU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0xcU))))) 
                  << (0x3fU & ((IData)(0xcU) + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0xdU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0xdU))))) 
                  << (0x3fU & ((IData)(0xdU) + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0xeU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0xeU))))) 
                  << (0x3fU & ((IData)(0xeU) + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = (((~ (1ULL << (0x3fU & ((IData)(0xfU) 
                                      + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__M_Reg__DOT__wdata_r 
                                                 >> 0xfU))))) 
                  << (0x3fU & ((IData)(0xfU) + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 
            ((IData)(0x10U) + (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                        << 3U)));
        while (VL_GTS_III(1,32,32, 0x40U, vlSelf->top__DOT__my_mu__DOT__mem__DOT__i)) {
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
                = ((~ (1ULL << (0x3fU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__i))) 
                   & vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain);
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__my_mu__DOT__mem__DOT__i);
        }
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->top__DOT__my_mu__DOT__mem__DOT__i, 
                          (7U & (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r)))) {
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask 
                = ((~ ((IData)(1U) << (7U & vlSelf->top__DOT__my_mu__DOT__mem__DOT__i))) 
                   & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__my_mu__DOT__mem__DOT__i);
        }
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask 
            = ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask) 
               | (0xffU & ((IData)(1U) << (7U & (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r)))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask 
            = ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask) 
               | (0xffU & ((IData)(1U) << (7U & ((IData)(1U) 
                                                 + (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 
            ((IData)(2U) + (7U & (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r)));
        while (VL_GTS_III(1,32,32, 8U, vlSelf->top__DOT__my_mu__DOT__mem__DOT__i)) {
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask 
                = ((~ ((IData)(1U) << (7U & vlSelf->top__DOT__my_mu__DOT__mem__DOT__i))) 
                   & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__my_mu__DOT__mem__DOT__i);
        }
    } else {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
            = vlSelf->top__DOT__M_Reg__DOT__wdata_r;
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask = 0xffU;
    }
    vlSelf->top__DOT__is_men = (((IData)(vlSelf->top__DOT__M_Reg__DOT__MemWen_r) 
                                 & (~ (IData)(vlSelf->rst))) 
                                & (IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r));
    vlSelf->top__DOT__is_MemToReg = (((IData)(vlSelf->top__DOT__M_Reg__DOT__MemToReg_r) 
                                      & (~ (IData)(vlSelf->rst))) 
                                     & (IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r));
    vlSelf->top__DOT__my_exu__DOT__alu_inA = ((IData)(vlSelf->top__DOT__EX_Reg__DOT__ALUSrcA_r)
                                               ? vlSelf->top__DOT__EX_Reg__DOT__busa_r
                                               : vlSelf->top__DOT__EX_Reg__DOT__pc_r);
    vlSelf->pc = vlSelf->top__DOT__if_pc_o;
    vlSelf->top__DOT__if_busy = (1U & ((~ (IData)(vlSelf->top__DOT__my_ifu__DOT__i_cpu_ready)) 
                                       & (~ (IData)(vlSelf->top__DOT__my_ifu__DOT__old_instr))));
    if ((0x40U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
        if (VL_LIKELY((0x20U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
            if ((0x10U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                if (VL_UNLIKELY((8U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                } else if (VL_UNLIKELY((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_MulOp_o = 0U;
                        vlSelf->top__DOT__id_MemWen_o = 0U;
                        vlSelf->top__DOT__id_MemOp_o = 0U;
                        vlSelf->top__DOT__id_MemToReg_o = 0U;
                        vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                        if (VL_UNLIKELY((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                            VL_WRITEF("no\n");
                        } else if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                vlSelf->top__DOT__id_Ebreak_o = 0U;
                                vlSelf->top__DOT__id_Csrwen = 1U;
                                vlSelf->top__DOT__id_Ecall = 0U;
                                vlSelf->top__DOT__id_Mret = 0U;
                                vlSelf->top__DOT__id_CsrOp = 2U;
                                vlSelf->top__DOT__id_CsrToReg_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                                vlSelf->top__DOT__id_ALUOp_o = 0U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            } else {
                                vlSelf->top__DOT__id_Ebreak_o = 0U;
                                vlSelf->top__DOT__id_Csrwen = 1U;
                                vlSelf->top__DOT__id_Ecall = 0U;
                                vlSelf->top__DOT__id_Mret = 0U;
                                vlSelf->top__DOT__id_CsrOp = 1U;
                                vlSelf->top__DOT__id_CsrToReg_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                                vlSelf->top__DOT__id_ALUOp_o = 0U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            }
                        } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            vlSelf->top__DOT__id_Ebreak_o = 0U;
                            vlSelf->top__DOT__id_Csrwen = 1U;
                            vlSelf->top__DOT__id_Ecall = 0U;
                            vlSelf->top__DOT__id_Mret = 0U;
                            vlSelf->top__DOT__id_CsrOp = 0U;
                            vlSelf->top__DOT__id_CsrToReg_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o = 0U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                        } else if ((0U == (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                           >> 0x14U))) {
                            vlSelf->top__DOT__id_Ebreak_o = 0U;
                            vlSelf->top__DOT__id_Csrwen = 0U;
                            vlSelf->top__DOT__id_Ecall = 1U;
                            vlSelf->top__DOT__id_Mret = 0U;
                            vlSelf->top__DOT__id_CsrOp = 0U;
                            vlSelf->top__DOT__id_CsrToReg_o = 0U;
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o = 0U;
                            vlSelf->top__DOT__id_wen_o = 0U;
                        } else if ((1U == (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                           >> 0x14U))) {
                            vlSelf->top__DOT__id_Ebreak_o = 1U;
                            vlSelf->top__DOT__id_Csrwen = 0U;
                            vlSelf->top__DOT__id_Ecall = 0U;
                            vlSelf->top__DOT__id_Mret = 0U;
                            vlSelf->top__DOT__id_CsrOp = 0U;
                            vlSelf->top__DOT__id_CsrToReg_o = 0U;
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o = 0U;
                            vlSelf->top__DOT__id_wen_o = 0U;
                        } else if (VL_LIKELY((0x302U 
                                              == (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x14U)))) {
                            vlSelf->top__DOT__id_Ebreak_o = 0U;
                            vlSelf->top__DOT__id_Csrwen = 0U;
                            vlSelf->top__DOT__id_Ecall = 0U;
                            vlSelf->top__DOT__id_Mret = 1U;
                            vlSelf->top__DOT__id_CsrOp = 0U;
                            vlSelf->top__DOT__id_CsrToReg_o = 0U;
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o = 0U;
                            vlSelf->top__DOT__id_wen_o = 0U;
                        } else {
                            VL_WRITEF("no\n");
                        }
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else if ((8U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                if (VL_LIKELY((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                        if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                            vlSelf->top__DOT__id_Ebreak_o = 0U;
                            vlSelf->top__DOT__id_Ecall = 0U;
                            vlSelf->top__DOT__id_Mret = 0U;
                            vlSelf->top__DOT__id_CsrOp = 0U;
                            vlSelf->top__DOT__id_CsrToReg_o = 0U;
                            vlSelf->top__DOT__id_Csrwen = 0U;
                            vlSelf->top__DOT__id_MulOp_o = 0U;
                            vlSelf->top__DOT__id_MemWen_o = 0U;
                            vlSelf->top__DOT__id_MemOp_o = 0U;
                            vlSelf->top__DOT__id_MemToReg_o = 0U;
                            vlSelf->top__DOT__my_idu__DOT__Branch = 1U;
                            vlSelf->top__DOT__id_ALUSrcA_o = 0U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 2U;
                            vlSelf->top__DOT__id_ALUOp_o = 0U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 4U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                        } else {
                            VL_WRITEF("no, op=%x\n",
                                      7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                        }
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else if ((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                        vlSelf->top__DOT__id_Ebreak_o = 0U;
                        vlSelf->top__DOT__id_Ecall = 0U;
                        vlSelf->top__DOT__id_Mret = 0U;
                        vlSelf->top__DOT__id_CsrOp = 0U;
                        vlSelf->top__DOT__id_CsrToReg_o = 0U;
                        vlSelf->top__DOT__id_Csrwen = 0U;
                        vlSelf->top__DOT__id_MulOp_o = 0U;
                        vlSelf->top__DOT__id_MemWen_o = 0U;
                        vlSelf->top__DOT__id_MemOp_o = 0U;
                        vlSelf->top__DOT__id_MemToReg_o = 0U;
                        vlSelf->top__DOT__my_idu__DOT__Branch = 2U;
                        vlSelf->top__DOT__id_ALUSrcA_o = 0U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 2U;
                        vlSelf->top__DOT__id_ALUOp_o = 0U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    vlSelf->top__DOT__id_Ebreak_o = 0U;
                    vlSelf->top__DOT__id_Ecall = 0U;
                    vlSelf->top__DOT__id_Mret = 0U;
                    vlSelf->top__DOT__id_CsrOp = 0U;
                    vlSelf->top__DOT__id_CsrToReg_o = 0U;
                    vlSelf->top__DOT__id_Csrwen = 0U;
                    vlSelf->top__DOT__id_MulOp_o = 0U;
                    vlSelf->top__DOT__id_MemWen_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 0U;
                    vlSelf->top__DOT__id_MemToReg_o = 0U;
                    if ((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                        if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 3U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                                vlSelf->top__DOT__my_idu__DOT__Branch = 7U;
                                vlSelf->top__DOT__id_wen_o = 0U;
                            } else {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 3U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                                vlSelf->top__DOT__my_idu__DOT__Branch = 6U;
                                vlSelf->top__DOT__id_wen_o = 0U;
                            }
                        } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                            vlSelf->top__DOT__id_ALUOp_o = 2U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                            vlSelf->top__DOT__my_idu__DOT__Branch = 7U;
                            vlSelf->top__DOT__id_wen_o = 0U;
                        } else {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                            vlSelf->top__DOT__id_ALUOp_o = 2U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                            vlSelf->top__DOT__my_idu__DOT__Branch = 6U;
                            vlSelf->top__DOT__id_wen_o = 0U;
                        }
                    } else if (VL_UNLIKELY((0x2000U 
                                            & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                        VL_WRITEF("no\n");
                    } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                        vlSelf->top__DOT__id_ALUOp_o = 2U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                        vlSelf->top__DOT__my_idu__DOT__Branch = 5U;
                        vlSelf->top__DOT__id_wen_o = 0U;
                    } else {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                        vlSelf->top__DOT__id_ALUOp_o = 2U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                        vlSelf->top__DOT__my_idu__DOT__Branch = 4U;
                        vlSelf->top__DOT__id_wen_o = 0U;
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
        if ((0x10U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
            if ((8U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                if (VL_UNLIKELY((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                        vlSelf->top__DOT__id_Ebreak_o = 0U;
                        vlSelf->top__DOT__id_Ecall = 0U;
                        vlSelf->top__DOT__id_Mret = 0U;
                        vlSelf->top__DOT__id_CsrOp = 0U;
                        vlSelf->top__DOT__id_CsrToReg_o = 0U;
                        vlSelf->top__DOT__id_Csrwen = 0U;
                        vlSelf->top__DOT__id_MemWen_o = 0U;
                        vlSelf->top__DOT__id_MemOp_o = 0U;
                        vlSelf->top__DOT__id_MemToReg_o = 0U;
                        vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                        if ((1U == (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                    >> 0x19U))) {
                            if ((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                    if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                        vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                        vlSelf->top__DOT__id_MulOp_o = 0U;
                                        vlSelf->top__DOT__id_ALUOp_o = 0x1cU;
                                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                        vlSelf->top__DOT__id_wen_o = 1U;
                                    } else {
                                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                        vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                        vlSelf->top__DOT__id_MulOp_o = 0U;
                                        vlSelf->top__DOT__id_ALUOp_o = 0x1eU;
                                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                        vlSelf->top__DOT__id_wen_o = 1U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                    vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                    vlSelf->top__DOT__id_MulOp_o = 0U;
                                    vlSelf->top__DOT__id_ALUOp_o = 0x1aU;
                                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                    vlSelf->top__DOT__id_wen_o = 1U;
                                } else {
                                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                    vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                    vlSelf->top__DOT__id_MulOp_o = 0U;
                                    vlSelf->top__DOT__id_ALUOp_o = 0x1bU;
                                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                    vlSelf->top__DOT__id_wen_o = 1U;
                                }
                            } else {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_MulOp_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 0x19U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            }
                        } else {
                            vlSelf->top__DOT__id_MulOp_o = 0U;
                            if ((0U == (7U & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                              >> 0xcU)))) {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                                vlSelf->top__DOT__id_ALUOp_o 
                                    = ((0x20U == (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x19U))
                                        ? 0x18U : 0x10U);
                            } else if ((1U == (7U & 
                                               (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 0x11U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            } else {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o 
                                    = ((0x40000000U 
                                        & vlSelf->top__DOT__ID_Reg__DOT__instr_r)
                                        ? 0x1dU : 0x15U);
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            }
                        }
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else if ((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                        vlSelf->top__DOT__id_Ebreak_o = 0U;
                        vlSelf->top__DOT__id_Ecall = 0U;
                        vlSelf->top__DOT__id_Mret = 0U;
                        vlSelf->top__DOT__id_CsrOp = 0U;
                        vlSelf->top__DOT__id_CsrToReg_o = 0U;
                        vlSelf->top__DOT__id_Csrwen = 0U;
                        vlSelf->top__DOT__id_MulOp_o = 0U;
                        vlSelf->top__DOT__id_MemWen_o = 0U;
                        vlSelf->top__DOT__id_MemOp_o = 0U;
                        vlSelf->top__DOT__id_MemToReg_o = 0U;
                        vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 0xfU;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 1U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    vlSelf->top__DOT__id_Ebreak_o = 0U;
                    vlSelf->top__DOT__id_Ecall = 0U;
                    vlSelf->top__DOT__id_Mret = 0U;
                    vlSelf->top__DOT__id_CsrOp = 0U;
                    vlSelf->top__DOT__id_CsrToReg_o = 0U;
                    vlSelf->top__DOT__id_Csrwen = 0U;
                    vlSelf->top__DOT__id_MemWen_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 0U;
                    vlSelf->top__DOT__id_MemToReg_o = 0U;
                    vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                    if ((1U == (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                >> 0x19U))) {
                        if ((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                    vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                    vlSelf->top__DOT__id_MulOp_o = 0U;
                                    vlSelf->top__DOT__id_ALUOp_o = 0xcU;
                                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                    vlSelf->top__DOT__id_wen_o = 1U;
                                } else {
                                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                    vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                    vlSelf->top__DOT__id_MulOp_o = 0U;
                                    vlSelf->top__DOT__id_ALUOp_o = 0xeU;
                                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                    vlSelf->top__DOT__id_wen_o = 1U;
                                }
                            } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_MulOp_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 0xaU;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            } else {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_MulOp_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 0xbU;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            }
                        } else if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_MulOp_o = 1U;
                                vlSelf->top__DOT__id_ALUOp_o = 9U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            } else {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_MulOp_o = 2U;
                                vlSelf->top__DOT__id_ALUOp_o = 9U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            }
                        } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                            vlSelf->top__DOT__id_MulOp_o = 3U;
                            vlSelf->top__DOT__id_ALUOp_o = 9U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                        } else {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                            vlSelf->top__DOT__id_MulOp_o = 0U;
                            vlSelf->top__DOT__id_ALUOp_o = 9U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                        }
                    } else {
                        vlSelf->top__DOT__id_MulOp_o = 0U;
                        if ((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                    vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                    vlSelf->top__DOT__id_ALUOp_o = 7U;
                                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                    vlSelf->top__DOT__id_wen_o = 1U;
                                } else {
                                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                    vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                    vlSelf->top__DOT__id_ALUOp_o = 6U;
                                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                    vlSelf->top__DOT__id_wen_o = 1U;
                                }
                            } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o 
                                    = ((0x40000000U 
                                        & vlSelf->top__DOT__ID_Reg__DOT__instr_r)
                                        ? 0xdU : 5U);
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            } else {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 4U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            }
                        } else if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 3U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            } else {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 2U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            }
                        } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                            vlSelf->top__DOT__id_ALUOp_o = 1U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                        } else {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o 
                                = ((0x20U == (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                              >> 0x19U))
                                    ? 8U : 0U);
                        }
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
            }
        } else if (VL_UNLIKELY((8U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
        } else if (VL_UNLIKELY((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
        } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
            if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                vlSelf->top__DOT__id_Ebreak_o = 0U;
                vlSelf->top__DOT__id_Ecall = 0U;
                vlSelf->top__DOT__id_Mret = 0U;
                vlSelf->top__DOT__id_CsrOp = 0U;
                vlSelf->top__DOT__id_CsrToReg_o = 0U;
                vlSelf->top__DOT__id_Csrwen = 0U;
                vlSelf->top__DOT__id_MulOp_o = 0U;
                vlSelf->top__DOT__id_MemWen_o = 1U;
                vlSelf->top__DOT__id_MemToReg_o = 0U;
                vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                if (VL_UNLIKELY((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    VL_WRITEF("no\n");
                } else if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 0U;
                        vlSelf->top__DOT__id_MemOp_o = 3U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 2U;
                        vlSelf->top__DOT__id_wen_o = 0U;
                    } else {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 0U;
                        vlSelf->top__DOT__id_MemOp_o = 0U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 2U;
                        vlSelf->top__DOT__id_wen_o = 0U;
                    }
                } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 2U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 2U;
                    vlSelf->top__DOT__id_wen_o = 0U;
                } else {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 1U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 2U;
                    vlSelf->top__DOT__id_wen_o = 0U;
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
        if ((8U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
            if (VL_UNLIKELY((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
            } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    vlSelf->top__DOT__id_Ebreak_o = 0U;
                    vlSelf->top__DOT__id_Ecall = 0U;
                    vlSelf->top__DOT__id_Mret = 0U;
                    vlSelf->top__DOT__id_CsrOp = 0U;
                    vlSelf->top__DOT__id_CsrToReg_o = 0U;
                    vlSelf->top__DOT__id_Csrwen = 0U;
                    vlSelf->top__DOT__id_MemWen_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 0U;
                    vlSelf->top__DOT__id_MemToReg_o = 0U;
                    vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                    if ((0U == (7U & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 0x10U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    } else if ((1U == (7U & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 0x11U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    } else {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o 
                            = ((0x40000000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)
                                ? 0x1dU : 0x15U);
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
            }
        } else if ((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
            if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    vlSelf->top__DOT__id_Ebreak_o = 0U;
                    vlSelf->top__DOT__id_Ecall = 0U;
                    vlSelf->top__DOT__id_Mret = 0U;
                    vlSelf->top__DOT__id_CsrOp = 0U;
                    vlSelf->top__DOT__id_CsrToReg_o = 0U;
                    vlSelf->top__DOT__id_Csrwen = 0U;
                    vlSelf->top__DOT__id_MulOp_o = 0U;
                    vlSelf->top__DOT__id_MemWen_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 0U;
                    vlSelf->top__DOT__id_MemToReg_o = 0U;
                    vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                    vlSelf->top__DOT__id_ALUSrcA_o = 0U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 1U;
                    vlSelf->top__DOT__id_wen_o = 1U;
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
            }
        } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
            if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                vlSelf->top__DOT__id_Ebreak_o = 0U;
                vlSelf->top__DOT__id_Ecall = 0U;
                vlSelf->top__DOT__id_Mret = 0U;
                vlSelf->top__DOT__id_CsrOp = 0U;
                vlSelf->top__DOT__id_CsrToReg_o = 0U;
                vlSelf->top__DOT__id_Csrwen = 0U;
                vlSelf->top__DOT__id_MulOp_o = 0U;
                vlSelf->top__DOT__id_MemWen_o = 0U;
                vlSelf->top__DOT__id_MemOp_o = 0U;
                vlSelf->top__DOT__id_MemToReg_o = 0U;
                vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                if ((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                        if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o = 7U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                        } else {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o = 6U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                        }
                    } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o 
                            = ((0x40000000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)
                                ? 0xdU : 5U);
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    } else {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 4U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    }
                } else if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 3U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    } else {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 2U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    }
                } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 1U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__id_wen_o = 1U;
                } else {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__id_wen_o = 1U;
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
        }
    } else if (VL_UNLIKELY((8U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
        VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
    } else if (VL_UNLIKELY((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
        VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
    } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
        if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
            vlSelf->top__DOT__id_Ebreak_o = 0U;
            vlSelf->top__DOT__id_Ecall = 0U;
            vlSelf->top__DOT__id_Mret = 0U;
            vlSelf->top__DOT__id_CsrOp = 0U;
            vlSelf->top__DOT__id_CsrToReg_o = 0U;
            vlSelf->top__DOT__id_Csrwen = 0U;
            vlSelf->top__DOT__id_MulOp_o = 0U;
            vlSelf->top__DOT__id_MemWen_o = 0U;
            vlSelf->top__DOT__id_MemToReg_o = 1U;
            vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
            if ((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    if (VL_UNLIKELY((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                        VL_WRITEF("no\n");
                    } else {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 0U;
                        vlSelf->top__DOT__id_MemOp_o = 4U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    }
                } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 6U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__id_wen_o = 1U;
                } else {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 5U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__id_wen_o = 1U;
                }
            } else if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 3U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__id_wen_o = 1U;
                } else {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 0U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__id_wen_o = 1U;
                }
            } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                vlSelf->top__DOT__id_ALUOp_o = 0U;
                vlSelf->top__DOT__id_MemOp_o = 2U;
                vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                vlSelf->top__DOT__id_wen_o = 1U;
            } else {
                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                vlSelf->top__DOT__id_ALUOp_o = 0U;
                vlSelf->top__DOT__id_MemOp_o = 1U;
                vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                vlSelf->top__DOT__id_wen_o = 1U;
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
        }
    } else {
        VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
    }
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[0U] 
        = (1U & (~ (((0U == (3U & (IData)((vlSelf->top__DOT__if_pc_o 
                                           >> 0xaU)))) 
                     & (2U == (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status))) 
                    & (IData)(vlSelf->top__DOT__i_rw_ready_i))));
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[1U] 
        = (1U & (~ (((1U == (3U & (IData)((vlSelf->top__DOT__if_pc_o 
                                           >> 0xaU)))) 
                     & (2U == (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status))) 
                    & (IData)(vlSelf->top__DOT__i_rw_ready_i))));
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[2U] 
        = (1U & (~ (((2U == (3U & (IData)((vlSelf->top__DOT__if_pc_o 
                                           >> 0xaU)))) 
                     & (2U == (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status))) 
                    & (IData)(vlSelf->top__DOT__i_rw_ready_i))));
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[3U] 
        = (1U & (~ (((3U == (3U & (IData)((vlSelf->top__DOT__if_pc_o 
                                           >> 0xaU)))) 
                     & (2U == (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status))) 
                    & (IData)(vlSelf->top__DOT__i_rw_ready_i))));
    vlSelf->d_rw_ready = vlSelf->top__DOT__d_rw_ready_i;
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[0U] 
        = (1U & (~ ((0U == (3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->top__DOT__d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[1U] 
        = (1U & (~ ((1U == (3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->top__DOT__d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[2U] 
        = (1U & (~ ((2U == (3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->top__DOT__d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[3U] 
        = (1U & (~ ((3U == (3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->top__DOT__d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout 
        = (IData)((0U != (0xaU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel))));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (1U & (~ (((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                             >> 3U) & (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]))) 
                        & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              >> 1U))) & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                              >> 2U) 
                                             & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]))))));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))) 
                    << 1U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                              & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                          >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 2U) & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]))) 
                       & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                             & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                >> 0x1fU)))))));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])))) 
                    << 1U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                              & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                          >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 2U) & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]))) 
                       & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                             & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                >> 0x1fU)))))));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])))) 
                    << 1U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                              & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                          >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 2U) & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]))) 
                       & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                             & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                >> 0x1fU)))))));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])))) 
                    << 1U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                              & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                  & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                     & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                       & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                          >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                      & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U] 
        = ((0xeU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 2U) & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]))) 
                       & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                             & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                >> 0x1fU)))))));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U] 
        = ((0xdU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])))) 
                    << 1U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U] 
        = ((0xbU & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                              & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U] 
        = ((7U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                              & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                 >> 2U))))) << 3U)));
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__M_Reg__DOT__raddr_r, vlSelf->__Vtask_pmem_read__2__rdata, (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__bytes));
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dev_dataout 
        = vlSelf->__Vtask_pmem_read__2__rdata;
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__op_mul 
        = (IData)((7U == (0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__div_valid 
        = (1U & (((((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr) 
                    >> 3U) & (~ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__div_doing))) 
                  & (~ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r))) 
                 & (~ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div))));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__my_ifu__DOT__cpu_req_valid) 
                     << 5U) | (((((1U == (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status)) 
                                  & vlSelf->top__DOT__my_ifu__DOT__icache__DOT__V
                                  [(0xffU & (IData)(
                                                    (vlSelf->top__DOT__if_pc_o 
                                                     >> 4U)))]) 
                                 & (vlSelf->top__DOT__my_ifu__DOT__icache__DOT__tag
                                    [(0xffU & (IData)(
                                                      (vlSelf->top__DOT__if_pc_o 
                                                       >> 4U)))] 
                                    == (vlSelf->top__DOT__if_pc_o 
                                        >> 0xcU))) 
                                << 4U) | (((IData)(vlSelf->top__DOT__i_rw_ready_i) 
                                           << 3U) | (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status))));
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__next_status 
        = Vtop__ConstPool__TABLE_091dc012_0[__Vtableidx1];
    if (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr) {
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplier[0U] 
            = (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB);
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplier[1U] 
            = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                                       >> 0x1fU))))))));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplier[2U] 
            = (IData)(((0x1ffffffffULL & (- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                                        >> 0x1fU))))))) 
                       >> 0x20U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divisor 
            = (((QData)((IData)((- (IData)(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                       >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)));
    } else {
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplier[0U] 
            = (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB);
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplier[1U] 
            = (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inB 
                       >> 0x20U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplier[2U] 
            = (1U & ((((IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r) 
                       >> 1U) & (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r)) 
                     & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                >> 0x3fU))));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divisor 
            = vlSelf->top__DOT__my_exu__DOT__alu_inB;
    }
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
        = (vlSelf->top__DOT__my_exu__DOT__alu_inB ^ 
           (- (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr))));
    if ((6U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[0U] 
            = (((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U]) 
               | (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                  [(3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                  >> 0xaU)))][0U] & 
                  (~ vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U])));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[1U] 
            = (((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
                         >> 0x20U)) & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U]) 
               | (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                  [(3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                  >> 0xaU)))][1U] & 
                  (~ vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U])));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[2U] 
            = (((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
                & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U]) 
               | (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                  [(3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                  >> 0xaU)))][2U] & 
                  (~ vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U])));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[3U] 
            = (((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
                         >> 0x20U)) & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U]) 
               | (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                  [(3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                  >> 0xaU)))][3U] & 
                  (~ vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U])));
    } else {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[0U] 
            = vlSelf->data_read_i[0U];
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[1U] 
            = vlSelf->data_read_i[1U];
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[2U] 
            = vlSelf->data_read_i[2U];
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[3U] 
            = vlSelf->data_read_i[3U];
    }
    vlSelf->top__DOT__my_mu__DOT__vis_mem = ((IData)(vlSelf->top__DOT__is_MemToReg) 
                                             | (IData)(vlSelf->top__DOT__is_men));
    if (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr) {
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplicand[0U] 
            = (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA);
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplicand[1U] 
            = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                                       >> 0x1fU))))))));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplicand[2U] 
            = (IData)(((0x1ffffffffULL & (- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                                        >> 0x1fU))))))) 
                       >> 0x20U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__dividend 
            = (((QData)((IData)((- (IData)(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA)));
    } else {
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplicand[0U] 
            = (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA);
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplicand[1U] 
            = (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                       >> 0x20U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplicand[2U] 
            = (1U & (((IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r) 
                      >> 1U) & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                        >> 0x3fU))));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__dividend 
            = vlSelf->top__DOT__my_exu__DOT__alu_inA;
    }
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
           << (0x1fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr)
            ? VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA), 
                             (0x1fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))
            : ((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
               >> (0x1fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))));
    vlSelf->top__DOT__is_Csrwen = (((~ (IData)(vlSelf->rst)) 
                                    & (IData)(vlSelf->top__DOT__id_Csrwen)) 
                                   & (IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r));
    vlSelf->top__DOT__id_imm_o = ((0U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                   ? (((- (QData)((IData)(
                                                          (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                   >> 0x14U))))
                                   : ((1U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                       ? (((QData)((IData)(
                                                           (- (IData)(
                                                                      (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                       >> 0x1fU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->top__DOT__ID_Reg__DOT__instr_r))))
                                       : ((2U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                           ? (((- (QData)((IData)(
                                                                  (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                   >> 0x1fU)))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                       >> 7U))))))
                                           : ((3U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                              >> 7U)))))))
                                               : ((4U 
                                                   == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                        >> 0x1fU)))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     ((0xff000U 
                                                                       & vlSelf->top__DOT__ID_Reg__DOT__instr_r) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                               >> 0x14U)))))))
                                                   : 0ULL)))));
    __Vtableidx2 = vlSelf->top__DOT__id_ALUOp_o;
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr 
        = Vtop__ConstPool__TABLE_8db4e481_0[__Vtableidx2];
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SIGctr 
        = Vtop__ConstPool__TABLE_6ee9ed8c_0[__Vtableidx2];
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__ALctr 
        = Vtop__ConstPool__TABLE_a9c47812_0[__Vtableidx2];
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SFTctr 
        = Vtop__ConstPool__TABLE_aa2192ff_0[__Vtableidx2];
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__Wctr 
        = Vtop__ConstPool__TABLE_f4558aae_0[__Vtableidx2];
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__OPctr 
        = Vtop__ConstPool__TABLE_6fbd8736_0[__Vtableidx2];
    vlSelf->top__DOT__cpu_halt = ((IData)(vlSelf->top__DOT__id_Ebreak_o) 
                                  | (IData)(vlSelf->rst));
    vlSelf->top__DOT____Vcellinp__csrfile__Ecall = 
        ((IData)(vlSelf->top__DOT__id_Ecall) & (IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r));
    vlSelf->top__DOT__id_use_rd = ((IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r) 
                                   & (~ ((((((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) 
                                             | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) 
                                            | (0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) 
                                           | (IData)(vlSelf->top__DOT__id_Ebreak_o)) 
                                          | (IData)(vlSelf->top__DOT__id_Mret)) 
                                         | (IData)(vlSelf->top__DOT__id_Ecall))));
    VL_ADD_W(5, __Vtemp144, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result);
    VL_EXTEND_WI(133,1, __Vtemp145, (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
    __Vtemp146[0U] = __Vtemp145[0U];
    __Vtemp146[1U] = __Vtemp145[1U];
    __Vtemp146[2U] = __Vtemp145[2U];
    __Vtemp146[3U] = __Vtemp145[3U];
    __Vtemp146[4U] = __Vtemp145[4U];
    VL_ADD_W(5, __Vtemp147, __Vtemp144, __Vtemp146);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[0U] 
        = __Vtemp147[0U];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[1U] 
        = __Vtemp147[1U];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[2U] 
        = __Vtemp147[2U];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[3U] 
        = __Vtemp147[3U];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[4U] 
        = (0xfU & __Vtemp147[4U]);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
        = ((0xaU == (0xfU & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                     >> 0x1cU)))) ? vlSelf->top__DOT__my_mu__DOT__mem__DOT__dev_dataout
            : vlSelf->top__DOT__my_mu__DOT__mem__DOT__cpu_data_read);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_valid 
        = ((((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__op_mul) 
             & (~ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_doing))) 
            & (~ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_out_valid))) 
           & (~ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_mul)));
    vlSelf->top__DOT__alu_busy = (1U & (((((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr) 
                                           >> 3U) & 
                                          (~ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r))) 
                                         & (~ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div))) 
                                        | (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__op_mul) 
                                            & (~ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_out_valid))) 
                                           & (~ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_mul)))));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r) 
           & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__div_valid));
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__cpu_req_valid 
        = ((((~ (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__cache_doing)) 
             & (~ (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__d_cpu_ready))) 
            & (IData)(vlSelf->top__DOT__my_mu__DOT__vis_mem)) 
           & (0xaU != (0xfU & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                       >> 0x1cU)))));
    vlSelf->top__DOT__m_busy = (((~ (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__d_cpu_ready)) 
                                 & (IData)(vlSelf->top__DOT__my_mu__DOT__vis_mem)) 
                                & (0xaU != (0xfU & (IData)(
                                                           (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                            >> 0x1cU)))));
    vlSelf->top__DOT__id_CsrId = ((IData)(vlSelf->top__DOT__id_Ecall)
                                   ? 0x342U : (0xfffU 
                                               & (IData)(vlSelf->top__DOT__id_imm_o)));
    vlSelf->top__DOT__id_ex_hazard = (((IData)(vlSelf->top__DOT__id_use_rd) 
                                       & ((IData)(vlSelf->top__DOT__EX_Reg__DOT__valid_r) 
                                          & (IData)(vlSelf->top__DOT__EX_Reg__DOT__wen_r))) 
                                      & ((((0x1fU & 
                                            (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                             >> 0xfU)) 
                                           == (IData)(vlSelf->top__DOT__EX_Reg__DOT__rd_r)) 
                                          & (0U != 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                 >> 0xfU)))) 
                                         | (((0x1fU 
                                              & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                 >> 0x14U)) 
                                             == (IData)(vlSelf->top__DOT__EX_Reg__DOT__rd_r)) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0x14U))))));
    vlSelf->top__DOT__id_m_hazard = (((IData)(vlSelf->top__DOT__id_use_rd) 
                                      & ((IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r) 
                                         & (IData)(vlSelf->top__DOT__M_Reg__DOT__wen_r))) 
                                     & ((((0x1fU & 
                                           (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                            >> 0xfU)) 
                                          == (IData)(vlSelf->top__DOT__M_Reg__DOT__rd_r)) 
                                         & (0U != (0x1fU 
                                                   & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                      >> 0xfU)))) 
                                        | (((0x1fU 
                                             & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->top__DOT__M_Reg__DOT__rd_r)) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x14U))))));
    vlSelf->top__DOT__id_wb_hazard = (((IData)(vlSelf->top__DOT__id_use_rd) 
                                       & ((IData)(vlSelf->top__DOT__WB_Reg__DOT__valid_r) 
                                          & (IData)(vlSelf->top__DOT__WB_Reg__DOT__wen_r))) 
                                      & ((((0x1fU & 
                                            (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                             >> 0xfU)) 
                                           == (IData)(vlSelf->top__DOT__WB_Reg__DOT__waddr_r)) 
                                          & (0U != 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                 >> 0xfU)))) 
                                         | (((0x1fU 
                                              & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                 >> 0x14U)) 
                                             == (IData)(vlSelf->top__DOT__WB_Reg__DOT__waddr_r)) 
                                            & (0U != 
                                               (0x1fU 
                                                & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0x14U))))));
    if ((0U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffffeU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (1U & (IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                >> (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                             << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffffdU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (2U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(1U) 
                                              + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U)))))) 
                        << 1U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffffbU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (4U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(2U) 
                                              + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U)))))) 
                        << 2U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffff7U & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (8U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(3U) 
                                              + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U)))))) 
                        << 3U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffffefU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x10U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(4U) 
                                                 + 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                     << 3U)))))) 
                           << 4U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffffdfU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x20U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(5U) 
                                                 + 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                     << 3U)))))) 
                           << 5U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffffbfU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x40U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(6U) 
                                                 + 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                     << 3U)))))) 
                           << 6U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffff7fU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x80U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(7U) 
                                                 + 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                     << 3U)))))) 
                           << 7U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffeffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x100U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(8U) 
                                                  + 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                            << 8U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffdffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x200U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(9U) 
                                                  + 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                            << 9U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffbffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x400U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(0xaU) 
                                                  + 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                            << 0xaU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffff7ffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x800U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(0xbU) 
                                                  + 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                            << 0xbU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffefffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x1000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xcU) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                             << 0xcU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffdfffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x2000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                             << 0xdU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffbfffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x4000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xeU) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                             << 0xeU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffff7fffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x8000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xfU) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                             << 0xfU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffeffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x10000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                       >> (0x3fU & 
                                           ((IData)(0x10U) 
                                            + (0x38U 
                                               & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                              << 0x10U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffdffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x20000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                       >> (0x3fU & 
                                           ((IData)(0x11U) 
                                            + (0x38U 
                                               & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                              << 0x11U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffbffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x40000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                       >> (0x3fU & 
                                           ((IData)(0x12U) 
                                            + (0x38U 
                                               & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                              << 0x12U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfff7ffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x80000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                       >> (0x3fU & 
                                           ((IData)(0x13U) 
                                            + (0x38U 
                                               & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                              << 0x13U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffefffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x100000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(0x14U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 0x14U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffdfffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x200000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(0x15U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 0x15U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffbfffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x400000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(0x16U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 0x16U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xff7fffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x800000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(0x17U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 0x17U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfeffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x1000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(0x18U) 
                                                + (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                                << 0x18U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfdffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x2000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(0x19U) 
                                                + (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                                << 0x19U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfbffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x4000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(0x1aU) 
                                                + (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                                << 0x1aU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xf7ffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x8000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(0x1bU) 
                                                + (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                                << 0x1bU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xefffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x10000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                          >> (0x3fU 
                                              & ((IData)(0x1cU) 
                                                 + 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                     << 3U)))))) 
                                 << 0x1cU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xdfffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x20000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                          >> (0x3fU 
                                              & ((IData)(0x1dU) 
                                                 + 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                     << 3U)))))) 
                                 << 0x1dU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xbfffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x40000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                          >> (0x3fU 
                                              & ((IData)(0x1eU) 
                                                 + 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                     << 3U)))))) 
                                 << 0x1eU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0x7fffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                           >> (0x3fU & ((IData)(0x1fU) 
                                        + (0x38U & 
                                           ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                            << 3U)))))) 
                  << 0x1fU));
    }
    if ((0U != (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        if ((1U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0xfeU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (1U & (IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0xfdU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (2U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(1U) 
                                                  + 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                            << 1U)));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0xfbU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (4U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(2U) 
                                                  + 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                            << 2U)));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0xf7U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (8U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(3U) 
                                                  + 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                            << 3U)));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0xefU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (0x10U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(4U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 4U)));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0xdfU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (0x20U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(5U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 5U)));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0xbfU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (0x40U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(6U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 6U)));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0x7fU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (0x80U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(7U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 7U)));
        }
    }
    if ((0U != (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        if ((1U != (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
            if ((2U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xfffeU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (1U & (IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                        >> (0x38U & 
                                            ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                             << 3U))))));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xfffdU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (2U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(1U) 
                                                + (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                                << 1U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xfffbU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (4U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(2U) 
                                                + (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                                << 2U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xfff7U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (8U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(3U) 
                                                + (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                                << 3U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xffefU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x10U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                            >> (0x3fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                                   << 4U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xffdfU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x20U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                            >> (0x3fU 
                                                & ((IData)(5U) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                                   << 5U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xffbfU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x40U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                            >> (0x3fU 
                                                & ((IData)(6U) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                                   << 6U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xff7fU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x80U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                            >> (0x3fU 
                                                & ((IData)(7U) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                                   << 7U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xfeffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x100U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                             >> (0x3fU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    (0x38U 
                                                     & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                        << 3U)))))) 
                                    << 8U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xfdffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x200U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                             >> (0x3fU 
                                                 & ((IData)(9U) 
                                                    + 
                                                    (0x38U 
                                                     & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                        << 3U)))))) 
                                    << 9U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xfbffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x400U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                             >> (0x3fU 
                                                 & ((IData)(0xaU) 
                                                    + 
                                                    (0x38U 
                                                     & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                        << 3U)))))) 
                                    << 0xaU)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xf7ffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x800U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                             >> (0x3fU 
                                                 & ((IData)(0xbU) 
                                                    + 
                                                    (0x38U 
                                                     & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                        << 3U)))))) 
                                    << 0xbU)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xefffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x1000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                              >> (0x3fU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     (0x38U 
                                                      & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                         << 3U)))))) 
                                     << 0xcU)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xdfffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x2000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                              >> (0x3fU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     (0x38U 
                                                      & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                         << 3U)))))) 
                                     << 0xdU)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xbfffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x4000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                              >> (0x3fU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     (0x38U 
                                                      & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                         << 3U)))))) 
                                     << 0xeU)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0x7fffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x8000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                              >> (0x3fU 
                                                  & ((IData)(0xfU) 
                                                     + 
                                                     (0x38U 
                                                      & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                         << 3U)))))) 
                                     << 0xfU)));
            }
        }
    }
    if ((0U != (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        if ((1U != (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
            if ((2U != (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datad 
                    = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout;
            }
        }
    }
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_valid) 
           & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_ready));
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status 
        = ((4U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
            ? ((2U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                ? 0U : ((1U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                         ? 0U : ((IData)(vlSelf->top__DOT__d_rw_ready_i)
                                  ? 2U : 4U))) : ((2U 
                                                   & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__is_MemToReg)
                                                     ? 0U
                                                     : 6U)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__d_rw_ready_i)
                                                     ? 1U
                                                     : 2U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                                    ? 
                                                   ((((1U 
                                                       == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                                                      & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V
                                                      [
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                                  >> 4U)))]) 
                                                     & (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag
                                                        [
                                                        (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                                    >> 4U)))] 
                                                        == 
                                                        (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                         >> 0xcU)))
                                                     ? 3U
                                                     : 
                                                    ((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V
                                                      [
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                                  >> 4U)))] 
                                                      & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D
                                                      [
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                                  >> 4U)))])
                                                      ? 4U
                                                      : 2U))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__cpu_req_valid)
                                                     ? 1U
                                                     : 0U))));
    vlSelf->top__DOT__ex_en = (1U & (~ ((IData)(vlSelf->top__DOT__alu_busy) 
                                        | (IData)(vlSelf->top__DOT__m_busy))));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__rlo 
        = (((~ (IData)(vlSelf->top__DOT__m_busy)) & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div))
            ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_lo_r
            : (((QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[0U]))));
    __Vtableidx6 = (((IData)(vlSelf->top__DOT__if_busy) 
                     << 3U) | (((IData)(vlSelf->top__DOT__m_busy) 
                                << 2U) | (IData)(vlSelf->top__DOT__arbiter__DOT__cur_status)));
    vlSelf->top__DOT__arbiter__DOT__next_status = Vtop__ConstPool__TABLE_9a38e7b0_0
        [__Vtableidx6];
    vlSelf->top__DOT__id_csrres_o = ((0x300U == (IData)(vlSelf->top__DOT__id_CsrId))
                                      ? vlSelf->top__DOT__csrfile__DOT__mstatus
                                      : ((0x305U == (IData)(vlSelf->top__DOT__id_CsrId))
                                          ? vlSelf->top__DOT__csrfile__DOT__mtvec
                                          : ((0x340U 
                                              == (IData)(vlSelf->top__DOT__id_CsrId))
                                              ? vlSelf->top__DOT__csrfile__DOT__mscratch
                                              : ((0x341U 
                                                  == (IData)(vlSelf->top__DOT__id_CsrId))
                                                  ? vlSelf->top__DOT__csrfile__DOT__mepc
                                                  : 
                                                 ((0x342U 
                                                   == (IData)(vlSelf->top__DOT__id_CsrId))
                                                   ? vlSelf->top__DOT__csrfile__DOT__mcause
                                                   : 0ULL)))));
    vlSelf->top__DOT__load_use = ((IData)(vlSelf->top__DOT__id_ex_hazard) 
                                  & (3U == (0x7fU & vlSelf->top__DOT__EX_Reg__DOT__instr_r)));
    vlSelf->top__DOT__m_rfdata_o = ((IData)(vlSelf->top__DOT__M_Reg__DOT__CsrToReg_r)
                                     ? vlSelf->top__DOT__M_Reg__DOT__Csrres_r
                                     : ((IData)(vlSelf->top__DOT__is_MemToReg)
                                         ? ((4U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                             ? ((2U 
                                                 & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                  ? 0ULL
                                                  : (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                  ? (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab))
                                                  : (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw))))
                                             : ((2U 
                                                 & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                  ? vlSelf->top__DOT__my_mu__DOT__mem__DOT__datad
                                                  : 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah) 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab) 
                                                                          >> 7U))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw))))))
                                         : vlSelf->top__DOT__M_Reg__DOT__raddr_r));
    vlSelf->top__DOT__id_en = (1U & (~ (((IData)(vlSelf->top__DOT__load_use) 
                                         | (IData)(vlSelf->top__DOT__alu_busy)) 
                                        | (IData)(vlSelf->top__DOT__m_busy))));
    vlSelf->top__DOT__if_instr_o = (((IData)(vlSelf->top__DOT__id_en) 
                                     & (IData)(vlSelf->top__DOT__my_ifu__DOT__old_instr))
                                     ? vlSelf->top__DOT__my_ifu__DOT__instr_read_r
                                     : ((1U & (IData)(
                                                      (vlSelf->top__DOT__if_pc_o 
                                                       >> 2U)))
                                         ? (IData)(
                                                   (vlSelf->top__DOT__my_ifu__DOT__cpu_data_read 
                                                    >> 0x20U))
                                         : (IData)(vlSelf->top__DOT__my_ifu__DOT__cpu_data_read)));
    Vtop___024unit____Vdpiimwrap_get_instr_TOP____024unit(vlSelf->top__DOT__if_instr_o);
    vlSelf->instr = vlSelf->top__DOT__if_instr_o;
}

void Vtop___024root___settle__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__6\n"); );
    // Body
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
        = (((QData)((IData)(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                              [3U] << 0x18U) | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                   [0U]))))) 
            << 0x20U) | (QData)((IData)(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                               [0U]))))));
    vlSelf->top__DOT__my_exu__DOT__res = (((((((((0U 
                                                  == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr)) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                                                | (2U 
                                                   == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                                               | (3U 
                                                  == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                                              | (4U 
                                                 == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                                             | (5U 
                                                == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                                            | (6U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                                           | (7U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr)))
                                           ? ((0U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                               ? ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)))
                                                   : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)
                                               : ((1U 
                                                   == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                                   ? 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                   & vlSelf->top__DOT__my_exu__DOT__alu_inB)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                                    ? 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    | vlSelf->top__DOT__my_exu__DOT__alu_inB)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                                     ? 
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     ^ vlSelf->top__DOT__my_exu__DOT__alu_inB)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres)))
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                                         ? 
                                                        VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__my_exu__DOT__alu_inA, 
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))
                                                         : 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres)))
                                                        : 
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        << 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                                       ? vlSelf->top__DOT__my_exu__DOT__alu_inB
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                                        ? (QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr)
                                                                               ? 
                                                                              (((((~ (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                                                >> 0x3fU))) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                                >> 0x3fU)))) 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x3fU))) 
                                                                                | (((IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                                                >> 0x3fU)) 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                                >> 0x3fU))) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x3fU))))) 
                                                                               ^ (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x3fU)))
                                                                               : 
                                                                              (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                                                >> 3U) 
                                                                               ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr))))))
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r))
                                                         ? 
                                                        ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__rlo 
                                                                                >> 0x1fU))))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__rlo)))
                                                          : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__rlo)
                                                         : 
                                                        (((~ (IData)(vlSelf->top__DOT__m_busy)) 
                                                          & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div))
                                                          ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_hi_r
                                                          : 
                                                         (((QData)((IData)(
                                                                           vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U]))))))))))))
                                           : ((8U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                               ? ((
                                                   (~ (IData)(vlSelf->top__DOT__m_busy)) 
                                                   & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div))
                                                   ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient_r
                                                   : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient)
                                               : ((
                                                   (~ (IData)(vlSelf->top__DOT__m_busy)) 
                                                   & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div))
                                                   ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder_r
                                                   : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder)));
    vlSelf->top__DOT__id_busb_o = (((((IData)(vlSelf->top__DOT__id_ex_hazard) 
                                      & ((0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->top__DOT__EX_Reg__DOT__rd_r))) 
                                     | ((IData)(vlSelf->top__DOT__id_m_hazard) 
                                        & ((0x1fU & 
                                            (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                             >> 0x14U)) 
                                           == (IData)(vlSelf->top__DOT__M_Reg__DOT__rd_r)))) 
                                    | ((IData)(vlSelf->top__DOT__id_wb_hazard) 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                            >> 0x14U)) 
                                          == (IData)(vlSelf->top__DOT__WB_Reg__DOT__waddr_r))))
                                    ? (((IData)(vlSelf->top__DOT__id_ex_hazard) 
                                        & ((0x1fU & 
                                            (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                             >> 0x14U)) 
                                           == (IData)(vlSelf->top__DOT__EX_Reg__DOT__rd_r)))
                                        ? ((IData)(vlSelf->top__DOT__EX_Reg__DOT__CsrToReg_r)
                                            ? vlSelf->top__DOT__EX_Reg__DOT__Csrres_r
                                            : vlSelf->top__DOT__my_exu__DOT__res)
                                        : (((IData)(vlSelf->top__DOT__id_m_hazard) 
                                            & ((0x1fU 
                                                & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0x14U)) 
                                               == (IData)(vlSelf->top__DOT__M_Reg__DOT__rd_r)))
                                            ? vlSelf->top__DOT__m_rfdata_o
                                            : (((IData)(vlSelf->top__DOT__id_wb_hazard) 
                                                & ((0x1fU 
                                                    & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                       >> 0x14U)) 
                                                   == (IData)(vlSelf->top__DOT__WB_Reg__DOT__waddr_r)))
                                                ? vlSelf->top__DOT__WB_Reg__DOT__wdata_r
                                                : 0ULL)))
                                    : ((0U == (0x1fU 
                                               & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x14U)))
                                        ? 0ULL : vlSelf->top__DOT__regfile__DOT__rf
                                       [(0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x14U))]));
    vlSelf->top__DOT__id_busa_o = (((((IData)(vlSelf->top__DOT__id_ex_hazard) 
                                      & ((0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->top__DOT__EX_Reg__DOT__rd_r))) 
                                     | ((IData)(vlSelf->top__DOT__id_m_hazard) 
                                        & ((0x1fU & 
                                            (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                             >> 0xfU)) 
                                           == (IData)(vlSelf->top__DOT__M_Reg__DOT__rd_r)))) 
                                    | ((IData)(vlSelf->top__DOT__id_wb_hazard) 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                            >> 0xfU)) 
                                          == (IData)(vlSelf->top__DOT__WB_Reg__DOT__waddr_r))))
                                    ? (((IData)(vlSelf->top__DOT__id_ex_hazard) 
                                        & ((0x1fU & 
                                            (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                             >> 0xfU)) 
                                           == (IData)(vlSelf->top__DOT__EX_Reg__DOT__rd_r)))
                                        ? ((IData)(vlSelf->top__DOT__EX_Reg__DOT__CsrToReg_r)
                                            ? vlSelf->top__DOT__EX_Reg__DOT__Csrres_r
                                            : vlSelf->top__DOT__my_exu__DOT__res)
                                        : (((IData)(vlSelf->top__DOT__id_m_hazard) 
                                            & ((0x1fU 
                                                & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0xfU)) 
                                               == (IData)(vlSelf->top__DOT__M_Reg__DOT__rd_r)))
                                            ? vlSelf->top__DOT__m_rfdata_o
                                            : (((IData)(vlSelf->top__DOT__id_wb_hazard) 
                                                & ((0x1fU 
                                                    & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                       >> 0xfU)) 
                                                   == (IData)(vlSelf->top__DOT__WB_Reg__DOT__waddr_r)))
                                                ? vlSelf->top__DOT__WB_Reg__DOT__wdata_r
                                                : 0ULL)))
                                    : ((0U == (0x1fU 
                                               & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0xfU)))
                                        ? 0ULL : vlSelf->top__DOT__regfile__DOT__rf
                                       [(0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0xfU))]));
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
        = (((1U == (IData)(vlSelf->top__DOT__id_ALUSrcB_o))
             ? vlSelf->top__DOT__id_imm_o : ((0U == (IData)(vlSelf->top__DOT__id_ALUSrcB_o))
                                              ? vlSelf->top__DOT__id_busb_o
                                              : 4ULL)) 
           ^ (- (QData)((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr))));
    vlSelf->top__DOT__csrfile__DOT__csrin = ((0U == (IData)(vlSelf->top__DOT__id_CsrOp))
                                              ? vlSelf->top__DOT__id_busa_o
                                              : ((1U 
                                                  == (IData)(vlSelf->top__DOT__id_CsrOp))
                                                  ? 
                                                 (vlSelf->top__DOT__id_csrres_o 
                                                  | vlSelf->top__DOT__id_busa_o)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__id_CsrOp))
                                                   ? 
                                                  (vlSelf->top__DOT__id_csrres_o 
                                                   & (~ vlSelf->top__DOT__id_busa_o))
                                                   : 0ULL)));
    vlSelf->top__DOT__my_idu__DOT__alu_inA = ((IData)(vlSelf->top__DOT__id_ALUSrcA_o)
                                               ? vlSelf->top__DOT__id_busa_o
                                               : vlSelf->top__DOT__ID_Reg__DOT__pc_r);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__1(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low__5(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high__6(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop___024root___settle__TOP__7(Vtop___024root* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__7(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__8(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop___024root___settle__TOP__8(Vtop___024root* vlSelf);

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__1((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high));
    Vtop___024root___settle__TOP__6(vlSelf);
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low__5((&vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high__6((&vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high));
    Vtop___024root___settle__TOP__7(vlSelf);
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__7((&vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__8((&vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high));
    Vtop___024root___settle__TOP__8(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->wb_commit = VL_RAND_RESET_I(1);
    vlSelf->wb_pc = VL_RAND_RESET_Q(64);
    vlSelf->wb_instr = VL_RAND_RESET_I(32);
    vlSelf->next_pc = VL_RAND_RESET_Q(64);
    vlSelf->rw_addr_o = VL_RAND_RESET_Q(64);
    vlSelf->rw_req_o = VL_RAND_RESET_I(1);
    vlSelf->rw_valid_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->rw_w_data_o);
    VL_RAND_RESET_W(128, vlSelf->data_read_i);
    vlSelf->rw_ready_i = VL_RAND_RESET_I(1);
    vlSelf->d_rw_ready = VL_RAND_RESET_I(1);
    vlSelf->mem_valid = VL_RAND_RESET_I(1);
    vlSelf->wb_dev_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_rw_addr_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__i_rw_req_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_rw_valid_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__i_rw_ready_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_rw_addr_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__d_rw_req_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__d_rw_valid_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__d_rw_w_data_o);
    vlSelf->top__DOT__d_rw_ready_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__if_instr_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__if_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_csrres_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_busa_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_busb_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_imm_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_ALUSrcA_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_MemToReg_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_MemWen_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_wen_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_CsrToReg_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_Ebreak_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_ALUSrcB_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__id_MemOp_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__id_ALUOp_o = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__id_MulOp_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__id_CsrOp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__id_Ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_Mret = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_Csrwen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_CsrId = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__m_ALURes_i = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__m_rfdata_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__running_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_use_rd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_ex_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_m_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_wb_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__load_use = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__if_busy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_halt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ex_dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__m_dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wb_dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__is_Csrwen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu_busy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__m_busy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__is_MemToReg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__is_men = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dev_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb_commit_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb_pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wb_instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__next_pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT____Vcellinp__csrfile__Ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_ifu__DOT__old_instr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_ifu__DOT__cache_doing = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_ifu__DOT__instr_read_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_ifu__DOT__i_cpu_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_ifu__DOT__cpu_req_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_ifu__DOT__cpu_data_read = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_ifu__DOT__start = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__my_ifu__DOT__icache__DOT__V[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__my_ifu__DOT__icache__DOT__tag[__Vi0] = VL_RAND_RESET_Q(52);
    }
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__next_status = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(128, vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram0__Q);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram1__Q);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram2__Q);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram3__Q);
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__my_ifu__DOT__icache__DOT__ram0__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__my_ifu__DOT__icache__DOT__ram1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__my_ifu__DOT__icache__DOT__ram2__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__my_ifu__DOT__icache__DOT__ram3__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__ID_Reg__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID_Reg__DOT__instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID_Reg__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__ExtOp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_idu__DOT__Branch = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_idu__DOT__addr_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__alu_inA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SIGctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__ALctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SFTctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__Wctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__OPctr = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_Reg__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_Reg__DOT__instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EX_Reg__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_Reg__DOT__rd_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EX_Reg__DOT__busa_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_Reg__DOT__busb_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_Reg__DOT__imm_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_Reg__DOT__ALUSrcA_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_Reg__DOT__MemToReg_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_Reg__DOT__MemWen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_Reg__DOT__wen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_Reg__DOT__CsrToReg_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_Reg__DOT__ALUSrcB_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__EX_Reg__DOT__MemOp_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__EX_Reg__DOT__ALUOp_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EX_Reg__DOT__MulOp_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__EX_Reg__DOT__Csrres_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_Reg__DOT__Ebreak_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu_inA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu_inB = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__op_mul = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplicand);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplier);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_hi_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_lo_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_doing = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_mul = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__rlo = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__dividend = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divisor = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__div_doing = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result);
    VL_RAND_RESET_W(132, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r);
    VL_RAND_RESET_W(67, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__calculate_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__done_to_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__done_to_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__M_Reg__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__M_Reg__DOT__instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__M_Reg__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__M_Reg__DOT__MemOp_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__M_Reg__DOT__raddr_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__M_Reg__DOT__MemWen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__M_Reg__DOT__wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__M_Reg__DOT__Csrres_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__M_Reg__DOT__rd_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__M_Reg__DOT__wen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__M_Reg__DOT__MemToReg_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__M_Reg__DOT__CsrToReg_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__M_Reg__DOT__Ebreak_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_mu__DOT__vis_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__cpu_req_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__d_cpu_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__cpu_data_read = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__cache_doing = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dev_dataout = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__datad = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__bytes = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag[__Vi0] = VL_RAND_RESET_Q(52);
    }
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(128, vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram0__Q);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram1__Q);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram2__Q);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram3__Q);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram0__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram2__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram3__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__WB_Reg__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WB_Reg__DOT__instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WB_Reg__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__WB_Reg__DOT__wen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WB_Reg__DOT__wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__WB_Reg__DOT__waddr_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__WB_Reg__DOT__Ebreak_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__regfile__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__csrfile__DOT__csrin = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csrfile__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csrfile__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csrfile__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csrfile__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csrfile__DOT__mscratch = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__arbiter__DOT__cur_status = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__arbiter__DOT__next_status = VL_RAND_RESET_I(2);
    vlSelf->__Vtask_pmem_read__2__rdata = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
