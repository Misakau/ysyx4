// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
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
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_4f660885_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_1d882cf2_0;

VL_INLINE_OPT void Vtop___024root___settle__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__7\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx3;
    // Body
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
        = (((QData)((IData)(((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                              [3U] << 0x18U) | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                                   [0U]))))) 
            << 0x20U) | (QData)((IData)(((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                               [0U]))))));
    __Vtableidx3 = ((0x10U & ((IData)(((0U == (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__OPctr))
                                        ? ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                            : vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                        : (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SIGctr)
                                                               ? 
                                                              (((((~ (IData)(
                                                                             (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                                              >> 0x3fU))) 
                                                                  & (~ (IData)(
                                                                               (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU)))) 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                            >> 0x3fU))) 
                                                                | (((IData)(
                                                                            (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                                             >> 0x3fU)) 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                               >> 0x3fU))) 
                                                                   & (~ (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU))))) 
                                                               ^ (IData)(
                                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                          >> 0x3fU)))
                                                               : 
                                                              (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                                >> 3U) 
                                                               ^ (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))))))) 
                              << 4U)) | ((((0ULL == vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                            ? 1U : 0U) 
                                          << 3U) | (IData)(vlSelf->top__DOT__my_idu__DOT__Branch)));
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexA 
        = Vtop__ConstPool__TABLE_4f660885_0[__Vtableidx3];
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexB 
        = Vtop__ConstPool__TABLE_1d882cf2_0[__Vtableidx3];
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
        = ((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexB)
            ? vlSelf->top__DOT__id_imm_o : 4ULL);
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
        = ((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexA)
            ? vlSelf->top__DOT__id_busa_o : vlSelf->top__DOT__ID_Reg__DOT__pc_r);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__8\n"); );
    // Body
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc 
        = (((QData)((IData)(((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                              [3U] << 0x18U) | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                                   [0U]))))) 
            << 0x20U) | (QData)((IData)(((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                               [0U]))))));
    vlSelf->top__DOT__my_idu__DOT__addr_res = ((IData)(vlSelf->top__DOT__id_Ecall)
                                                ? vlSelf->top__DOT__csrfile__DOT__mtvec
                                                : ((IData)(vlSelf->top__DOT__id_Mret)
                                                    ? vlSelf->top__DOT__csrfile__DOT__mepc
                                                    : vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc));
}

extern const VlUnpacked<CData/*2:0*/, 64> Vtop__ConstPool__TABLE_091dc012_0;
void Vtop___024unit____Vdpiimwrap_get_instr_TOP____024unit(IData/*31:0*/ instr);

VL_INLINE_OPT void Vtop___024root___combo__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__9\n"); );
    // Variables
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[0U] 
        = (1U & (~ ((0U == (3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[1U] 
        = (1U & (~ ((1U == (3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[2U] 
        = (1U & (~ ((2U == (3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[3U] 
        = (1U & (~ ((3U == (3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__is_men = (((IData)(vlSelf->top__DOT__M_Reg__DOT__MemWen_r) 
                                 & (~ (IData)(vlSelf->rst))) 
                                & (IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r));
    vlSelf->top__DOT__is_MemToReg = (((IData)(vlSelf->top__DOT__M_Reg__DOT__MemToReg_r) 
                                      & (~ (IData)(vlSelf->rst))) 
                                     & (IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r));
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
            = vlSelf->d_data_read_i[0U];
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[1U] 
            = vlSelf->d_data_read_i[1U];
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[2U] 
            = vlSelf->d_data_read_i[2U];
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[3U] 
            = vlSelf->d_data_read_i[3U];
    }
    vlSelf->top__DOT__is_Csrwen = (((~ (IData)(vlSelf->rst)) 
                                    & (IData)(vlSelf->top__DOT__id_Csrwen)) 
                                   & (IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r));
    vlSelf->top__DOT__cpu_halt = ((IData)(vlSelf->top__DOT__id_Ebreak_o) 
                                  | (IData)(vlSelf->rst));
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[0U] 
        = (1U & (~ (((0U == (3U & (IData)((vlSelf->top__DOT__if_pc_o 
                                           >> 0xaU)))) 
                     & (2U == (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status))) 
                    & (IData)(vlSelf->i_rw_ready_i))));
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[1U] 
        = (1U & (~ (((1U == (3U & (IData)((vlSelf->top__DOT__if_pc_o 
                                           >> 0xaU)))) 
                     & (2U == (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status))) 
                    & (IData)(vlSelf->i_rw_ready_i))));
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[2U] 
        = (1U & (~ (((2U == (3U & (IData)((vlSelf->top__DOT__if_pc_o 
                                           >> 0xaU)))) 
                     & (2U == (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status))) 
                    & (IData)(vlSelf->i_rw_ready_i))));
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[3U] 
        = (1U & (~ (((3U == (3U & (IData)((vlSelf->top__DOT__if_pc_o 
                                           >> 0xaU)))) 
                     & (2U == (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status))) 
                    & (IData)(vlSelf->i_rw_ready_i))));
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
                                << 4U) | (((IData)(vlSelf->i_rw_ready_i) 
                                           << 3U) | (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status))));
    vlSelf->top__DOT__my_ifu__DOT__icache__DOT__next_status 
        = Vtop__ConstPool__TABLE_091dc012_0[__Vtableidx1];
    vlSelf->top__DOT__my_mu__DOT__vis_mem = ((IData)(vlSelf->top__DOT__is_MemToReg) 
                                             | (IData)(vlSelf->top__DOT__is_men));
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
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status 
        = ((4U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
            ? ((2U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                ? 0U : ((1U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                         ? 0U : ((IData)(vlSelf->d_rw_ready_i)
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
                                                   ((IData)(vlSelf->d_rw_ready_i)
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
    vlSelf->top__DOT__id_en = (1U & (~ (((IData)(vlSelf->top__DOT__load_use) 
                                         | (IData)(vlSelf->top__DOT__alu_busy)) 
                                        | (IData)(vlSelf->top__DOT__m_busy))));
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
    Vtop___024unit____Vdpiimwrap_get_instr_TOP____024unit(vlSelf->top__DOT__if_instr_o);
    vlSelf->instr = vlSelf->top__DOT__if_instr_o;
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

void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__1(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low__5(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high__6(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__7(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__8(Vtop_ysyx_220053_Adder32* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__3(vlSelf);
        Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__1((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low));
        Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high));
        Vtop___024root___sequent__TOP__4(vlSelf);
    }
    Vtop___024root___combo__TOP__9(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low__5((&vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high__6((&vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high));
    Vtop___024root___settle__TOP__7(vlSelf);
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__7((&vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__8((&vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high));
    Vtop___024root___settle__TOP__8(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->i_rw_ready_i & 0xfeU))) {
        Verilated::overWidthError("i_rw_ready_i");}
    if (VL_UNLIKELY((vlSelf->d_rw_ready_i & 0xfeU))) {
        Verilated::overWidthError("d_rw_ready_i");}
}
#endif  // VL_DEBUG
