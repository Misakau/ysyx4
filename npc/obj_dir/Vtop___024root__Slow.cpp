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

void Vtop___024root____Vdpiimwrap_top__DOT__mycpu__DOT__core__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->axi_aw_user_o = 0U;
    vlSelf->axi_aw_lock_o = 0U;
    vlSelf->axi_aw_cache_o = 0xfU;
    vlSelf->axi_aw_qos_o = 0U;
    vlSelf->axi_aw_region_o = 0U;
    vlSelf->axi_aw_prot_o = 0U;
    vlSelf->axi_w_user_o = 0U;
    vlSelf->axi_ar_user_o = 0U;
    vlSelf->axi_ar_lock_o = 0U;
    vlSelf->axi_ar_cache_o = 0xfU;
    vlSelf->axi_ar_qos_o = 0U;
    vlSelf->axi_ar_region_o = 0U;
    vlSelf->axi_ar_prot_o = 0U;
    vlSelf->axi_aw_id_o = 0U;
    vlSelf->axi_aw_burst_o = 1U;
    vlSelf->axi_ar_id_o = 0U;
    vlSelf->axi_ar_burst_o = 1U;
    Vtop___024root____Vdpiimwrap_top__DOT__mycpu__DOT__core__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf);
}

void Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(CData/*0:0*/ done);
extern const VlUnpacked<CData/*3:0*/, 8> Vtop__ConstPool__TABLE_42befd74_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_8db4e481_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_6ee9ed8c_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_a9c47812_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_aa2192ff_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_f4558aae_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtop__ConstPool__TABLE_6fbd8736_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_9a38e7b0_0;

void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx2;
    CData/*4:0*/ __Vtableidx4;
    CData/*2:0*/ __Vtableidx5;
    CData/*3:0*/ __Vtableidx6;
    VlWide<3>/*95:0*/ __Vtemp108;
    VlWide<3>/*95:0*/ __Vtemp109;
    VlWide<3>/*95:0*/ __Vtemp110;
    VlWide<3>/*95:0*/ __Vtemp111;
    VlWide<3>/*95:0*/ __Vtemp112;
    VlWide<5>/*159:0*/ __Vtemp130;
    VlWide<5>/*159:0*/ __Vtemp131;
    VlWide<5>/*159:0*/ __Vtemp132;
    VlWide<5>/*159:0*/ __Vtemp133;
    // Body
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Ebreak_r) {
        Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(1U);
    }
    vlSelf->wb_commit = vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_commit_r;
    vlSelf->wb_pc = vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_pc_r;
    vlSelf->wb_instr = vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_instr_r;
    vlSelf->next_pc = vlSelf->top__DOT__mycpu__DOT__core__DOT__next_pc_r;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__mstatus_MIE 
        = (1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus 
                         >> 3U)));
    vlSelf->axi_aw_valid_o = vlSelf->top__DOT__mycpu__DOT__axi__DOT__aw_valid_r;
    vlSelf->axi_ar_valid_o = (1U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status));
    __Vtemp108[0U] = 1U;
    __Vtemp108[1U] = 0U;
    __Vtemp108[2U] = 0U;
    __Vtemp109[0U] = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                       << 1U) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                                 >> 0x1fU));
    __Vtemp109[1U] = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                       << 1U) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                                 >> 0x1fU));
    __Vtemp109[2U] = (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                      >> 0x1fU);
    __Vtemp110[0U] = (IData)((~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r));
    __Vtemp110[1U] = (IData)(((~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r) 
                              >> 0x20U));
    __Vtemp110[2U] = 1U;
    VL_ADD_W(3, __Vtemp111, __Vtemp109, __Vtemp110);
    VL_ADD_W(3, __Vtemp112, __Vtemp108, __Vtemp111);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s 
        = (1U & __Vtemp112[2U]);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub 
        = (1ULL + ((((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U])) 
                     << 0x21U) | (((QData)((IData)(
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U])) 
                                   << 1U) | ((QData)((IData)(
                                                             vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U])) 
                                             >> 0x1fU))) 
                   + (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r)));
    vlSelf->axi_w_data_o = (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[
                                             (((IData)(0x3fU) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                                     << 6U))) 
                                              >> 5U)])) 
                             << ((0U == (0x1fU & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                                  << 6U)))
                                  ? 0x20U : ((IData)(0x40U) 
                                             - (0x1fU 
                                                & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                                   << 6U))))) 
                            | (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                                 << 6U)))
                                 ? 0ULL : ((QData)((IData)(
                                                           vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                                                 << 6U))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                                     << 6U))))) 
                               | ((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[
                                                  (2U 
                                                   & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                                      << 1U))])) 
                                  >> (0x1fU & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                               << 6U)))));
    if ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))) {
        vlSelf->top__DOT__mycpu__DOT__rw_req_o = vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_req_o;
        vlSelf->top__DOT__mycpu__DOT__rw_valid_o = vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o;
    } else {
        vlSelf->top__DOT__mycpu__DOT__rw_req_o = ((1U 
                                                   == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status)) 
                                                  & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_req_o));
        vlSelf->top__DOT__mycpu__DOT__rw_valid_o = 
            ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status)) 
             & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_valid_o));
    }
    vlSelf->axi_b_ready_o = (3U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status));
    vlSelf->top__DOT__mycpu__DOT__rw_addr_o = ((2U 
                                                == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                                                ? vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_addr_o
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                                                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_addr_o
                                                    : 0ULL));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0U][0U] 
        = vlSelf->top__DOT__io_sram4_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0U][1U] 
        = vlSelf->top__DOT__io_sram4_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0U][2U] 
        = vlSelf->top__DOT__io_sram4_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0U][3U] 
        = vlSelf->top__DOT__io_sram4_rdata[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1U][0U] 
        = vlSelf->top__DOT__io_sram5_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1U][1U] 
        = vlSelf->top__DOT__io_sram5_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1U][2U] 
        = vlSelf->top__DOT__io_sram5_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1U][3U] 
        = vlSelf->top__DOT__io_sram5_rdata[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2U][0U] 
        = vlSelf->top__DOT__io_sram6_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2U][1U] 
        = vlSelf->top__DOT__io_sram6_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2U][2U] 
        = vlSelf->top__DOT__io_sram6_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2U][3U] 
        = vlSelf->top__DOT__io_sram6_rdata[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3U][0U] 
        = vlSelf->top__DOT__io_sram7_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3U][1U] 
        = vlSelf->top__DOT__io_sram7_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3U][2U] 
        = vlSelf->top__DOT__io_sram7_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3U][3U] 
        = vlSelf->top__DOT__io_sram7_rdata[3U];
    vlSelf->axi_w_valid_o = vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_valid_r;
    vlSelf->axi_r_ready_o = (2U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status));
    __Vtableidx5 = vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_bytes_o 
        = Vtop__ConstPool__TABLE_42befd74_0[__Vtableidx5];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel 
        = ((8U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                   << 1U) & ((0xfffffff8U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                              << 2U) 
                                             & ((~ 
                                                 vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                                << 3U))) 
                             | (((~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                     >> 1U)) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                << 3U)))) | ((4U & 
                                              (((~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                  >> 2U)) 
                                                << 2U) 
                                               & ((0xfffffffcU 
                                                   & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                       << 1U) 
                                                      & ((~ 
                                                          vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                                         << 2U))) 
                                                  | (((~ 
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                        >> 1U)) 
                                                      & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                                     << 2U)))) 
                                             | ((2U 
                                                 & (((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                      >> 1U) 
                                                     & ((~ 
                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                          >> 1U)) 
                                                        << 1U)) 
                                                    & ((~ 
                                                        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                                       << 1U))) 
                                                | (1U 
                                                   & (((~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                         >> 2U)) 
                                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                          >> 1U)) 
                                                      & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s) 
            ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s))
            ? (1ULL + (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r))
            : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s)
            ? (1ULL + (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r))
            : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r);
    __Vtableidx4 = vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUOp_r;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr 
        = Vtop__ConstPool__TABLE_8db4e481_0[__Vtableidx4];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr 
        = Vtop__ConstPool__TABLE_6ee9ed8c_0[__Vtableidx4];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr 
        = Vtop__ConstPool__TABLE_a9c47812_0[__Vtableidx4];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SFTctr 
        = Vtop__ConstPool__TABLE_aa2192ff_0[__Vtableidx4];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr 
        = Vtop__ConstPool__TABLE_f4558aae_0[__Vtableidx4];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr 
        = Vtop__ConstPool__TABLE_6fbd8736_0[__Vtableidx4];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[0U][0U] 
        = vlSelf->top__DOT__io_sram0_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[0U][1U] 
        = vlSelf->top__DOT__io_sram0_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[0U][2U] 
        = vlSelf->top__DOT__io_sram0_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[0U][3U] 
        = vlSelf->top__DOT__io_sram0_rdata[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[1U][0U] 
        = vlSelf->top__DOT__io_sram1_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[1U][1U] 
        = vlSelf->top__DOT__io_sram1_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[1U][2U] 
        = vlSelf->top__DOT__io_sram1_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[1U][3U] 
        = vlSelf->top__DOT__io_sram1_rdata[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[2U][0U] 
        = vlSelf->top__DOT__io_sram2_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[2U][1U] 
        = vlSelf->top__DOT__io_sram2_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[2U][2U] 
        = vlSelf->top__DOT__io_sram2_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[2U][3U] 
        = vlSelf->top__DOT__io_sram2_rdata[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[3U][0U] 
        = vlSelf->top__DOT__io_sram3_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[3U][1U] 
        = vlSelf->top__DOT__io_sram3_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[3U][2U] 
        = vlSelf->top__DOT__io_sram3_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[3U][3U] 
        = vlSelf->top__DOT__io_sram3_rdata[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i 
        = ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status)) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__rw_ready_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i 
        = ((2U != (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status)) 
           & ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status)) 
              & (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__rw_ready_r)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain 
        = ((0U == (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))
            ? (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))
            : ((1U == (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))
                ? (((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                    << 0x38U) | (((QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                  << 0x30U) | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                                      << 0x18U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                                         << 0x10U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))))))))))
                : ((2U == (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))
                    ? (((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                        << 0x30U) | (((QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                      << 0x20U) | (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))))))
                    : vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r) 
           & (0x40U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__done_to_ready 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask 
        = ((0U == (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))
            ? ((0U == (7U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r)))
                ? 0xfU : ((4U == (7U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r)))
                           ? 0xf0U : 0U)) : ((1U == 
                                              (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                             >> 2U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                    ? 0x80U
                                                    : 0x40U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                    ? 0x20U
                                                    : 0x10U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                    ? 2U
                                                    : 1U)))
                                              : ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                     ? 0U
                                                     : 0xc0U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                     ? 0U
                                                     : 0x30U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                     ? 0U
                                                     : 0xcU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                     ? 0U
                                                     : 3U)))
                                                  : 0xffU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__calculate_done 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r) 
           & ((0x10U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt)) 
              | (0U == ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                         | vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[1U]) 
                        | vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[2U]))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout 
        = ((2U == (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                    >> 0x18U)))) ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp
            : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_data_read);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB 
        = ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcB_r))
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__imm_r
            : ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcB_r))
                ? vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busb_r
                : 4ULL));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcA_r)
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busa_r
            : vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__pc_r);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MemOp_o 
        = ((0x40U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
            ? 0U : ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                     ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                         ? 0U : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                  ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                      ? 0U
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                        ? 3U
                                                        : 0U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                        ? 2U
                                                        : 1U)))
                                                     : 0U)
                                                    : 0U))))
                     : ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                         ? 0U : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                  ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                        ? 0U
                                                        : 4U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                        ? 6U
                                                        : 5U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                        ? 3U
                                                        : 0U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                        ? 2U
                                                        : 1U)))
                                                     : 0U)
                                                    : 0U))))));
    if ((0x40U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o = 0U;
    } else if ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o 
            = ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                             ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                      ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                          ? ((1U == 
                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                               >> 0x19U))
                                              ? ((0x4000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 0U
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 1U
                                                    : 2U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 3U
                                                    : 0U)))
                                              : 0U)
                                          : 0U) : 0U)))
                : 0U);
    } else if ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) {
        if ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) {
            if ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) {
                vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o = 0U;
            } else if ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) {
                if ((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))) {
                    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o = 0U;
                }
            } else {
                vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o = 0U;
            }
        } else {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o = 0U;
        }
    } else {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o = 0U;
    }
    if ((0x40U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wen_o 
            = (1U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                      >> 5U) & ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? (IData)(((3U == 
                                             (0xfU 
                                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                                            & ((0x4000U 
                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                ? (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                                                : (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))))))
                                 : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                                     : (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrOp 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                          ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                              ? ((0x4000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 2U
                                                    : 1U)
                                                   : 0U)
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 2U
                                                    : 1U)
                                                   : 0U))
                                              : 0U)
                                          : 0U))) : 0U)
                : 0U);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__Branch 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? 0U : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                             ? ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? 1U : 0U)
                                     : 0U) : 0U) : 
                            ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                              ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                  ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                      ? 2U : 0U) : 0U)
                              : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                  ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                      ? ((0x4000U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                          ? ((0x2000U 
                                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                              ? ((0x1000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 7U
                                                  : 6U)
                                              : ((0x1000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 7U
                                                  : 6U))
                                          : ((0x2000U 
                                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                              ? 0U : 
                                             ((0x1000U 
                                               & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                               ? 5U
                                               : 4U)))
                                      : 0U) : 0U))))
                : 0U);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcA_o 
            = (1U & (IData)(((0x20U != (0x30U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                             | ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? (IData)((7U != (7U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                                 : (IData)((7U != (7U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                          ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                              ? ((0x4000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 1U
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 1U
                                                    : 0U))
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 1U
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 1U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                      >> 0x14U))
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                       >> 0x14U))
                                                      ? 1U
                                                      : 
                                                     ((0x302U 
                                                       == 
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                        >> 0x14U))
                                                       ? 1U
                                                       : 0U))))))
                                              : 0U)
                                          : 0U))) : 
                   ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                     ? ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                         ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                             ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? 2U : 0U) : 0U) : 0U)
                     : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                         ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                             ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? 2U : 0U) : 0U) : 0U)))
                : 0U);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? 0U : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                             ? ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? 4U : 0U)
                                     : 0U) : 0U) : 
                            ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                              ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                       ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                           ? 3U : 0U)
                                       : 0U)))) : 0U);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUOp_o 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? 0U : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                             ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                      ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                               ? ((1U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 0U
                                                     : 2U))
                                                   : 0U)
                                               : 0U))))
                : 0U);
    } else {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wen_o 
            = (1U & ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                      ? ((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                          >> 4U) & ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? (IData)((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                                     : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? ((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                             >> 1U) 
                                            & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         : ((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                             >> 1U) 
                                            & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))))
                      : ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                          ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                              ? (IData)((3U == (7U 
                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                              : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                  ? ((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                      >> 1U) & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                  : ((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                      >> 1U) & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                          : (IData)(((3U == (0xfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                                     & (IData)((0x7000U 
                                                != 
                                                (0x7000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))))))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrOp = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__Branch = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcA_o 
            = (1U & (IData)((0x17U != (0x3fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? 1U : 0U)
                                     : 0U) : 0U)) : 
                   ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                     ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                              ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                       ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                           ? ((0x4000U 
                                               & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                               ? 0U
                                               : 1U)
                                           : 0U) : 0U))))
                : ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                            ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? 1U : 0U)
                                     : 0U)) : ((4U 
                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                ? (
                                                   (2U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)))
                    : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                          ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                              ? ((0x4000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 0U
                                                    : 1U)
                                                   : 1U)
                                                  : 1U)
                                              : 0U)
                                          : 0U)))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                            ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? 5U : 0U)
                                     : 0U)) : ((4U 
                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                ? (
                                                   (2U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 5U
                                                     : 0U)
                                                    : 0U)))
                    : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                          ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                              ? 2U : 0U)
                                          : 0U)))) : 
               ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                 ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                     ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                              ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                  ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                      ? 1U : 0U) : 0U)
                              : 0U)) : 0U));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUOp_o 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                            ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? ((1U == 
                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                              >> 0x19U))
                                             ? ((0x4000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 0x1cU
                                                   : 0x1eU)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 0x1aU
                                                   : 0x1bU))
                                                 : 0x19U)
                                             : ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                     >> 0xcU)))
                                                 ? 
                                                ((0x20U 
                                                  == 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0x19U))
                                                  ? 0x18U
                                                  : 0x10U)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                      >> 0xcU)))
                                                  ? 0x11U
                                                  : 
                                                 ((0x40000000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 0x1dU
                                                   : 0x15U))))
                                         : 0U) : 0U))
                        : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                            ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                    ? 0xfU : 0U) : 0U)
                            : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                    ? ((1U == (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                               >> 0x19U))
                                        ? ((0x4000U 
                                            & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                            ? ((0x2000U 
                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 0xcU
                                                    : 0xeU)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 0xaU
                                                    : 0xbU))
                                            : 9U) : 
                                       ((0x4000U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? ((0x2000U 
                                             & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                             ? ((0x1000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                 ? 7U
                                                 : 6U)
                                             : ((0x1000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                 ? 
                                                ((0x40000000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 0xdU
                                                  : 5U)
                                                 : 4U))
                                         : ((0x2000U 
                                             & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                             ? ((0x1000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                 ? 3U
                                                 : 2U)
                                             : ((0x1000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                 ? 1U
                                                 : 
                                                ((0x20U 
                                                  == 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0x19U))
                                                  ? 8U
                                                  : 0U)))))
                                    : 0U) : 0U))) : 0U)
                : ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                            ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? ((0U == 
                                             (7U & 
                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                               >> 0xcU)))
                                             ? 0x10U
                                             : ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                     >> 0xcU)))
                                                 ? 0x11U
                                                 : 
                                                ((0x40000000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 0x1dU
                                                  : 0x15U)))
                                         : 0U) : 0U))
                        : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                            ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? ((0x4000U 
                                             & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                             ? ((0x2000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 7U
                                                  : 6U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 
                                                 ((0x40000000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 0xdU
                                                   : 5U)
                                                  : 4U))
                                             : ((0x2000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 3U
                                                  : 2U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 1U
                                                  : 0U)))
                                         : 0U) : 0U)))
                    : 0U));
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Csri_o 
        = (1U & (IData)(((0x4073U == (0x407fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                         & (IData)((0U != (0x3000U 
                                           & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ecall 
        = (IData)(((0x73U == (0x707fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                   & (0U == (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                             >> 0x14U))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Mret 
        = (IData)(((0x73U == (0x707fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                   & (((0U != (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                               >> 0x14U)) & (1U != 
                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                              >> 0x14U))) 
                      & (0x302U == (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                    >> 0x14U)))));
    vlSelf->pc = vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o;
    vlSelf->axi_w_strb_o = ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                             ? (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o)
                             : ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                                 ? ((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o 
                                                   >> 2U)))
                                     ? 0xf0U : 0xfU)
                                 : 0U));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Fence_i 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Fence_i_r) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__Time_interrupt 
        = (((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mie 
                     >> 7U)) & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus 
                                        >> 3U))) & 
           (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime 
            >= vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Fence_i_o 
        = (IData)((0xfU == (0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o 
        = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
            >> 6U) & (IData)(((0x33U == (0x703fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                              & ((0U != (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                         >> 0x14U)) 
                                 & (1U == (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                           >> 0x14U))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush 
        = ((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__fence_i_commit));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Csrwen 
        = (((~ (IData)(vlSelf->rst)) & (IData)(((0x73U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                                                & ((0x4000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                                                    : (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))))))) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r));
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__b_fire 
        = ((IData)(vlSelf->axi_b_ready_o) & (IData)(vlSelf->axi_b_valid_i));
    vlSelf->axi_aw_addr_o = (IData)(vlSelf->top__DOT__mycpu__DOT__rw_addr_o);
    vlSelf->axi_ar_addr_o = (IData)(vlSelf->top__DOT__mycpu__DOT__rw_addr_o);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_fire 
        = ((IData)(vlSelf->axi_w_ready_i) & (IData)(vlSelf->axi_w_valid_o));
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_fire 
        = ((IData)(vlSelf->axi_r_ready_o) & (IData)(vlSelf->axi_r_valid_i));
    vlSelf->top__DOT__mycpu__DOT__rw_bytes_o = ((2U 
                                                 == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                                                 ? (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_bytes_o)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                                                  ? 4U
                                                  : 0U));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout 
        = (IData)((0U != (0xaU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (1U & (~ (((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                             >> 3U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              >> 1U))) & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                              >> 2U) 
                                             & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))) 
                    << 1U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                          >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 2U) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]))) 
                       & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                >> 0x1fU)))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])))) 
                    << 1U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                          >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 2U) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]))) 
                       & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                >> 0x1fU)))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])))) 
                    << 1U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                          >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 2U) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]))) 
                       & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                >> 0x1fU)))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])))) 
                    << 1U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                          >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U] 
        = ((0xeU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 2U) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]))) 
                       & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                >> 0x1fU)))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U] 
        = ((0xdU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])))) 
                    << 1U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U] 
        = ((0xbU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U] 
        = ((7U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__op_mul 
        = (IData)((7U == (0xfU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_valid 
        = (1U & (((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr) 
                    >> 3U) & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_doing))) 
                  & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r))) 
                 & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[0U] 
        = (1U & (~ ((0U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[1U] 
        = (1U & (~ ((1U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[2U] 
        = (1U & (~ ((2U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[3U] 
        = (1U & (~ ((3U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    if ((6U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[0U] 
            = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain) 
                & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U]) 
               | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                  [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                  >> 0xaU)))][0U] & 
                  (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U])));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[1U] 
            = (((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain 
                         >> 0x20U)) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U]) 
               | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                  [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                  >> 0xaU)))][1U] & 
                  (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U])));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[2U] 
            = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain) 
                & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U]) 
               | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                  [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                  >> 0xaU)))][2U] & 
                  (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U])));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[3U] 
            = (((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain 
                         >> 0x20U)) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U]) 
               | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                  [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                  >> 0xaU)))][3U] & 
                  (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U])));
    } else {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[0U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[0U];
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[1U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[1U];
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[2U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[2U];
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[3U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[3U];
    }
    if ((0U == (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw 
            = (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout 
                       >> (0x38U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r) 
                                    << 3U))));
    }
    if ((0U != (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
        if ((1U == (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab 
                = (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x38U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U)))));
        }
    }
    if ((0U != (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
        if ((1U != (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
            if ((2U == (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
                vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah 
                    = (0xffffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout 
                                          >> (0x38U 
                                              & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U)))));
            }
        }
    }
    if ((0U != (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
        if ((1U != (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
            if ((2U != (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
                vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datad 
                    = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout;
            }
        }
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[0U] 
            = (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[1U] 
            = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB 
                                                                       >> 0x1fU))))))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[2U] 
            = (IData)(((0x1ffffffffULL & (- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB 
                                                                        >> 0x1fU))))))) 
                       >> 0x20U));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor 
            = (((QData)((IData)((- (IData)(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB 
                                                       >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)));
    } else {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[0U] 
            = (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[1U] 
            = (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB 
                       >> 0x20U));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[2U] 
            = (1U & ((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r) 
                       >> 1U) & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r)) 
                     & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB 
                                >> 0x3fU))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
        = (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB 
           ^ (- (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr))));
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[0U] 
            = (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[1U] 
            = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                                       >> 0x1fU))))))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[2U] 
            = (IData)(((0x1ffffffffULL & (- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                                        >> 0x1fU))))))) 
                       >> 0x20U));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend 
            = (((QData)((IData)((- (IData)(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA)));
    } else {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[0U] 
            = (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[1U] 
            = (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                       >> 0x20U));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[2U] 
            = (1U & (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r) 
                      >> 1U) & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                        >> 0x3fU))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA) 
           << (0x1fU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr)
            ? VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA), 
                             (0x1fU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))
            : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA) 
               >> (0x1fU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_imm_o 
        = ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp))
            ? (((- (QData)((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                  >> 0x14U)))) : ((1U 
                                                   == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                           >> 0x14U)) 
                                                                       | (0x1fU 
                                                                          & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                             >> 7U))))))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       ((0x800U 
                                                                         & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                                >> 7U)))))))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                           >> 0x1fU)))) 
                                                       << 0x14U) 
                                                      | (QData)((IData)(
                                                                        ((0xff000U 
                                                                          & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                                >> 0x14U)))))))
                                                      : 0ULL)))));
    __Vtableidx2 = vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUOp_o;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr 
        = Vtop__ConstPool__TABLE_8db4e481_0[__Vtableidx2];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SIGctr 
        = Vtop__ConstPool__TABLE_6ee9ed8c_0[__Vtableidx2];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__ALctr 
        = Vtop__ConstPool__TABLE_a9c47812_0[__Vtableidx2];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SFTctr 
        = Vtop__ConstPool__TABLE_aa2192ff_0[__Vtableidx2];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr 
        = Vtop__ConstPool__TABLE_f4558aae_0[__Vtableidx2];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__OPctr 
        = Vtop__ConstPool__TABLE_6fbd8736_0[__Vtableidx2];
    vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Ecall 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ecall) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr 
        = (0x3fU & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Fence_i)
                     ? (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt)
                     : (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                >> 4U))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Time_interrupt 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__Time_interrupt) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i 
        = (((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Fence_i_o) 
              & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r)) 
             | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Fence_i_r) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__valid_r))) 
            | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Fence_i_r) 
               & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r))) 
           & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__fence_i_commit)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__cpu_halt 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o) 
           | (IData)(vlSelf->rst));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_use_rd 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r) 
           & (~ (((((((0x37U == (0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                      | (0x17U == (0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))) 
                     | (0x6fU == (0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))) 
                    | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o)) 
                   | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Mret)) 
                  | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ecall)) 
                 | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Csri_o))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__is_men 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemWen_r) 
            & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush))) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemToReg_r) 
            & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush))) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r));
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_last 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_fire) 
           & (IData)(vlSelf->axi_r_last_i));
    VL_ADD_W(5, __Vtemp130, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result);
    VL_EXTEND_WI(133,1, __Vtemp131, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
    __Vtemp132[0U] = __Vtemp131[0U];
    __Vtemp132[1U] = __Vtemp131[1U];
    __Vtemp132[2U] = __Vtemp131[2U];
    __Vtemp132[3U] = __Vtemp131[3U];
    __Vtemp132[4U] = __Vtemp131[4U];
    VL_ADD_W(5, __Vtemp133, __Vtemp130, __Vtemp132);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[0U] 
        = __Vtemp133[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[1U] 
        = __Vtemp133[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[2U] 
        = __Vtemp133[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[3U] 
        = __Vtemp133[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[4U] 
        = (0xfU & __Vtemp133[4U]);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_valid 
        = ((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__op_mul) 
             & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_doing))) 
            & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid))) 
           & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__alu_busy 
        = (1U & (((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr) 
                    >> 3U) & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r))) 
                  & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))) 
                 | (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__op_mul) 
                     & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid))) 
                    & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul)))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_valid));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ecall)
            ? 0x342U : (0xfffU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_imm_o)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__flush 
        = ((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__if_busy 
        = (1U & (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__i_cpu_ready)) 
                  & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__old_instr))) 
                 & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_req_valid 
        = (1U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__start) 
                 | ((((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_doing)) 
                      & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__i_cpu_ready))) 
                     & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__old_instr))) 
                    & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i)))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_use_rd) 
            & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__valid_r) 
               & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__wen_r))) 
           & ((((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                          >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r)) 
               & (0U != (0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                  >> 0xfU)))) | (((0x1fU 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r)) 
                                                 & (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                        >> 0x14U))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_use_rd) 
            & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r) 
               & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wen_r))) 
           & ((((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                          >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)) 
               & (0U != (0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                  >> 0xfU)))) | (((0x1fU 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)) 
                                                 & (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                        >> 0x14U))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_use_rd) 
            & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r) 
               & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wen_r))) 
           & ((((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                          >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r)) 
               & (0U != (0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                  >> 0xfU)))) | (((0x1fU 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r)) 
                                                 & (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                        >> 0x14U))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__m_rfdata_o 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__CsrToReg_r)
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Csrres_r
            : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg)
                ? ((4U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                    ? ((2U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                        ? ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                            ? 0ULL : (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah)))
                        : ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                            ? (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab))
                            : (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))
                    : ((2U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                        ? ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datad
                            : (((- (QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah) 
                                                       >> 0xfU))))) 
                                << 0x10U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah))))
                        : ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                            ? (((- (QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab) 
                                                       >> 7U))))) 
                                << 8U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab)))
                            : (((QData)((IData)((- (IData)(
                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))))
                : vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__vis_mem 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg) 
            | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_men)) 
           | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Fence_i));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_valid) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_ready));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_csrres_o 
        = ((0x300U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId))
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus
            : ((0x304U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId))
                ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mie
                : ((0x305U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId))
                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mtvec
                    : ((0x340U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId))
                        ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mscratch
                        : ((0x341U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId))
                            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mepc
                            : ((0x342U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId))
                                ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mcause
                                : ((0x344U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId))
                                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mip
                                    : 0ULL)))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_block 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
            & (3U == (0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__instr_r))) 
           | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_req_valid 
        = ((((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cache_doing)) 
             & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__d_cpu_ready))) 
            & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__vis_mem)) 
           & (2U != (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                      >> 0x18U)))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy 
        = (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__d_cpu_ready)) 
            & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__vis_mem)) 
           & (2U != (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                      >> 0x18U)))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status 
        = ((8U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
            ? ((4U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                ? 0U : ((2U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                         ? 0U : ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                  ? 0U : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)
                                           ? 0U : 8U))))
            : ((4U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                ? ((2U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                    ? ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                        ? ((1U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i) 
                                  | (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V
                                     [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt])))
                            ? ((0xffU == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt))
                                ? 0U : 5U) : 7U) : 0U)
                    : ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                        ? 7U : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)
                                 ? 2U : 4U))) : ((2U 
                                                  & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg)
                                                    ? 0U
                                                    : 6U)
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)
                                                    ? 1U
                                                    : 2U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                                   ? 
                                                  ((((1U 
                                                      == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V
                                                     [
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                                 >> 4U)))]) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag
                                                       [
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                                   >> 4U)))] 
                                                       == 
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                        >> 0xcU)))
                                                    ? 3U
                                                    : 
                                                   ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V
                                                     [
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                                 >> 4U)))] 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D
                                                     [
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                                 >> 4U)))])
                                                     ? 4U
                                                     : 2U))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_req_valid)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Fence_i)
                                                     ? 7U
                                                     : 
                                                    ((0xaU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                                  >> 0x1cU))))
                                                      ? 8U
                                                      : 1U))
                                                    : 0U)))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en 
        = (1U & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__alu_busy) 
                    | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy))));
    __Vtableidx6 = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_busy) 
                     << 3U) | (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy) 
                                << 2U) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__next_status 
        = Vtop__ConstPool__TABLE_9a38e7b0_0[__Vtableidx6];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_en 
        = (1U & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_block) 
                     | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__alu_busy)) 
                    | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo 
        = (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
            & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul))
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_lo_r
            : (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[0U]))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__if_instr_o 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_en) 
            & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__old_instr))
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__instr_read_r
            : ((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o 
                              >> 2U))) ? (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_data_read 
                                                  >> 0x20U))
                : (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_data_read)));
    vlSelf->instr = vlSelf->top__DOT__mycpu__DOT__core__DOT__if_instr_o;
}

void Vtop___024root___settle__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__6\n"); );
    // Body
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
        = (((QData)((IData)(((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                              [3U] << 0x18U) | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                   [0U]))))) 
            << 0x20U) | (QData)((IData)(((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                               [0U]))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__res 
        = (((((((((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr)) 
                  | (1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                 | (2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                | (3U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
               | (4U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
              | (5U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
             | (6U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
            | (7U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr)))
            ? ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                    ? (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres)))
                    : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres)
                : ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                    ? (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                       & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)
                    : ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                        ? (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                           | vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)
                        : ((3U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                            ? (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               ^ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)
                            : ((4U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SFTctr)
                                    ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres)))
                                        : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                            ? VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA, 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))
                                            : (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))))
                                    : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres)))
                                        : (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                           << (0x3fU 
                                               & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))))
                                : ((5U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB
                                    : ((6U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                        ? (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr)
                                                               ? 
                                                              (((((~ (IData)(
                                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                                              >> 0x3fU))) 
                                                                  & (~ (IData)(
                                                                               (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                                >> 0x3fU)))) 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                            >> 0x3fU))) 
                                                                | (((IData)(
                                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                                             >> 0x3fU)) 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                               >> 0x3fU))) 
                                                                   & (~ (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x3fU))))) 
                                                               ^ (IData)(
                                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                          >> 0x3fU)))
                                                               : 
                                                              (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                                >> 3U) 
                                                               ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr))))))
                                        : ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r))
                                            ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo)))
                                                : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo)
                                            : (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
                                                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul))
                                                ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_hi_r
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[2U]))))))))))))
            : ((8U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                ? (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))
                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient_r
                    : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient)
                : (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))
                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder_r
                    : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busb_o 
        = (((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
              & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                           >> 0x14U)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r))) 
             | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard) 
                & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                             >> 0x14U)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)))) 
            | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard) 
               & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                            >> 0x14U)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r))))
            ? (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
                & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                             >> 0x14U)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r)))
                ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r)
                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Csrres_r
                    : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__res)
                : (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard) 
                    & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                 >> 0x14U)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)))
                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__m_rfdata_o
                    : (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard) 
                        & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                     >> 0x14U)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r)))
                        ? vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wdata_r
                        : 0ULL))) : ((0U == (0x1fU 
                                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf
                                     [(0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U))]));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busa_o 
        = (((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
              & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                           >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r))) 
             | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard) 
                & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                             >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)))) 
            | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard) 
               & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                            >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r))))
            ? (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
                & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                             >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r)))
                ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r)
                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Csrres_r
                    : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__res)
                : (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard) 
                    & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                 >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)))
                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__m_rfdata_o
                    : (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard) 
                        & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                     >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r)))
                        ? vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wdata_r
                        : 0ULL))) : ((0U == (0x1fU 
                                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU)))
                                      ? 0ULL : vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf
                                     [(0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU))]));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
        = (((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o))
             ? vlSelf->top__DOT__mycpu__DOT__core__DOT__id_imm_o
             : ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o))
                 ? vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busb_o
                 : 4ULL)) ^ (- (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__Csr_datain 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Csri_o)
            ? (QData)((IData)((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                        >> 0xfU))))
            : vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busa_o);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcA_o)
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busa_o
            : vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__pc_r);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__csrin 
        = ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrOp))
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__Csr_datain
            : ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrOp))
                ? (vlSelf->top__DOT__mycpu__DOT__core__DOT__id_csrres_o 
                   | vlSelf->top__DOT__mycpu__DOT__core__DOT__Csr_datain)
                : ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrOp))
                    ? (vlSelf->top__DOT__mycpu__DOT__core__DOT__id_csrres_o 
                       & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__Csr_datain))
                    : 0ULL)));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop_ysyx_040053_Adder32___sequent__TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__1(Vtop_ysyx_040053_Adder32* vlSelf);
void Vtop_ysyx_040053_Adder32___sequent__TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2(Vtop_ysyx_040053_Adder32* vlSelf);
void Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low__5(Vtop_ysyx_040053_Adder32* vlSelf);
void Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high__6(Vtop_ysyx_040053_Adder32* vlSelf);
void Vtop___024root___settle__TOP__7(Vtop___024root* vlSelf);
void Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__7(Vtop_ysyx_040053_Adder32* vlSelf);
void Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__8(Vtop_ysyx_040053_Adder32* vlSelf);
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
    Vtop_ysyx_040053_Adder32___sequent__TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__1((&vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low));
    Vtop_ysyx_040053_Adder32___sequent__TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2((&vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high));
    Vtop___024root___settle__TOP__6(vlSelf);
    Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low__5((&vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low));
    Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high__6((&vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high));
    Vtop___024root___settle__TOP__7(vlSelf);
    Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__7((&vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low));
    Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__8((&vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high));
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
    vlSelf->wb_dev_o = VL_RAND_RESET_I(1);
    vlSelf->axi_aw_ready_i = VL_RAND_RESET_I(1);
    vlSelf->axi_aw_valid_o = VL_RAND_RESET_I(1);
    vlSelf->axi_aw_addr_o = VL_RAND_RESET_I(32);
    vlSelf->axi_aw_prot_o = VL_RAND_RESET_I(3);
    vlSelf->axi_aw_id_o = VL_RAND_RESET_I(4);
    vlSelf->axi_aw_user_o = VL_RAND_RESET_I(1);
    vlSelf->axi_aw_len_o = VL_RAND_RESET_I(8);
    vlSelf->axi_aw_size_o = VL_RAND_RESET_I(3);
    vlSelf->axi_aw_burst_o = VL_RAND_RESET_I(2);
    vlSelf->axi_aw_lock_o = VL_RAND_RESET_I(1);
    vlSelf->axi_aw_cache_o = VL_RAND_RESET_I(4);
    vlSelf->axi_aw_qos_o = VL_RAND_RESET_I(4);
    vlSelf->axi_aw_region_o = VL_RAND_RESET_I(4);
    vlSelf->axi_w_ready_i = VL_RAND_RESET_I(1);
    vlSelf->axi_w_valid_o = VL_RAND_RESET_I(1);
    vlSelf->axi_w_data_o = VL_RAND_RESET_Q(64);
    vlSelf->axi_w_strb_o = VL_RAND_RESET_I(8);
    vlSelf->axi_w_last_o = VL_RAND_RESET_I(1);
    vlSelf->axi_w_user_o = VL_RAND_RESET_I(1);
    vlSelf->axi_b_ready_o = VL_RAND_RESET_I(1);
    vlSelf->axi_b_valid_i = VL_RAND_RESET_I(1);
    vlSelf->axi_b_resp_i = VL_RAND_RESET_I(2);
    vlSelf->axi_b_id_i = VL_RAND_RESET_I(4);
    vlSelf->axi_b_user_i = VL_RAND_RESET_I(1);
    vlSelf->axi_ar_ready_i = VL_RAND_RESET_I(1);
    vlSelf->axi_ar_valid_o = VL_RAND_RESET_I(1);
    vlSelf->axi_ar_addr_o = VL_RAND_RESET_I(32);
    vlSelf->axi_ar_prot_o = VL_RAND_RESET_I(3);
    vlSelf->axi_ar_id_o = VL_RAND_RESET_I(4);
    vlSelf->axi_ar_user_o = VL_RAND_RESET_I(1);
    vlSelf->axi_ar_len_o = VL_RAND_RESET_I(8);
    vlSelf->axi_ar_size_o = VL_RAND_RESET_I(3);
    vlSelf->axi_ar_burst_o = VL_RAND_RESET_I(2);
    vlSelf->axi_ar_lock_o = VL_RAND_RESET_I(1);
    vlSelf->axi_ar_cache_o = VL_RAND_RESET_I(4);
    vlSelf->axi_ar_qos_o = VL_RAND_RESET_I(4);
    vlSelf->axi_ar_region_o = VL_RAND_RESET_I(4);
    vlSelf->axi_r_ready_o = VL_RAND_RESET_I(1);
    vlSelf->axi_r_valid_i = VL_RAND_RESET_I(1);
    vlSelf->axi_r_resp_i = VL_RAND_RESET_I(2);
    vlSelf->axi_r_data_i = VL_RAND_RESET_Q(64);
    vlSelf->axi_r_last_i = VL_RAND_RESET_I(1);
    vlSelf->axi_r_id_i = VL_RAND_RESET_I(4);
    vlSelf->axi_r_user_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rw_addr_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rw_req_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rw_valid_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__rw_w_data_o);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__data_read_i);
    vlSelf->top__DOT__rw_ready_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rw_size_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__rw_dev_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__io_sram0_rdata);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__io_sram1_rdata);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__io_sram2_rdata);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__io_sram3_rdata);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__io_sram4_rdata);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__io_sram5_rdata);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__io_sram6_rdata);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__io_sram7_rdata);
    vlSelf->top__DOT__mycpu__DOT__io_slave_awvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__io_slave_awaddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__io_slave_awid = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__mycpu__DOT__io_slave_awlen = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mycpu__DOT__io_slave_awsize = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mycpu__DOT__io_slave_awburst = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__mycpu__DOT__io_slave_wvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__io_slave_wdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__io_slave_wstrb = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mycpu__DOT__io_slave_wlast = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__io_slave_bready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__io_slave_arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__io_slave_araddr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__io_slave_arid = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__mycpu__DOT__io_slave_arlen = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mycpu__DOT__io_slave_arsize = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mycpu__DOT__io_slave_arburst = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__mycpu__DOT__io_slave_rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__rw_addr_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__rw_req_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__rw_valid_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__mycpu__DOT__data_read_i);
    vlSelf->top__DOT__mycpu__DOT__rw_dev_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__rw_bytes_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_addr_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_req_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_valid_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_addr_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_req_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__mstatus_MIE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__Time_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__if_instr_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_block = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_csrres_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busa_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busb_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_imm_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcA_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wen_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Fence_i_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Csri_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MemOp_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUOp_o = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrOp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Mret = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__m_rfdata_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_use_rd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__fence_i_commit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__if_busy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__cpu_halt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__m_dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Csrwen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__alu_busy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_bytes_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Fence_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__is_men = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__dev_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_commit_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__next_pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__Csr_datain = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Time_interrupt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__old_instr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_doing = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__instr_read_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_data_read = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__i_cpu_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_req_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__flush = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag[__Vi0] = VL_RAND_RESET_Q(52);
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__next_status = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__Branch = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__addr_res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SIGctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__ALctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SFTctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__OPctr = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__NexA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__NexB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busa_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busb_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__imm_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcA_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemToReg_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemWen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__wen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcB_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemOp_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUOp_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Csrres_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Ebreak_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Fence_i_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SFTctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__op_mul = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_hi_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_lo_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_doing = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_doing = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result);
    VL_RAND_RESET_W(132, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r);
    VL_RAND_RESET_W(67, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__calculate_done = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__done_to_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemWen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Csrres_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemToReg_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__CsrToReg_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Ebreak_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Fence_i_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__vis_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_req_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__d_cpu_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_data_read = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cache_doing = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datad = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__cnt = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag[__Vi0] = VL_RAND_RESET_Q(52);
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Ebreak_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Fence_i_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__csrin = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mscratch = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mip = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__next_status = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_fire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__b_fire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_last = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__aw_valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_fire = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_last = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__rw_ready_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__rcnt = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__axi_size = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__sram0__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__sram1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__sram2__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__sram3__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__sram4__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__sram5__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__sram6__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__sram7__DOT__ram[__Vi0]);
    }
    vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r);
    vlSelf->__Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf__v32 = 0;
    vlSelf->__Vdlyvval__top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf__v32 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf__v32 = 0;
    vlSelf->__Vdly__top__DOT__mycpu__DOT__axi__DOT__rcnt = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
