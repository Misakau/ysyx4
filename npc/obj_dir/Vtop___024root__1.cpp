// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__11(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__11\n"); );
    // Body
    if ((0U != (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        if ((1U != (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
            if ((2U != (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datad 
                    = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r;
            }
        }
    }
    if ((0U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffffeU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (1U & (IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                >> (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                             << 3U))))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffffdU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (2U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                 >> (0x3fU & ((IData)(1U) 
                                              + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U)))))) 
                        << 1U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffffbU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (4U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                 >> (0x3fU & ((IData)(2U) 
                                              + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U)))))) 
                        << 2U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffff7U & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (8U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                 >> (0x3fU & ((IData)(3U) 
                                              + (0x38U 
                                                 & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                    << 3U)))))) 
                        << 3U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffffefU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x10U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                    >> (0x3fU & ((IData)(4U) 
                                                 + 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                     << 3U)))))) 
                           << 4U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffffdfU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x20U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                    >> (0x3fU & ((IData)(5U) 
                                                 + 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                     << 3U)))))) 
                           << 5U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffffbfU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x40U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                    >> (0x3fU & ((IData)(6U) 
                                                 + 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                     << 3U)))))) 
                           << 6U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffff7fU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x80U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                    >> (0x3fU & ((IData)(7U) 
                                                 + 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                     << 3U)))))) 
                           << 7U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffeffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x100U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                     >> (0x3fU & ((IData)(8U) 
                                                  + 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                            << 8U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffdffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x200U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                     >> (0x3fU & ((IData)(9U) 
                                                  + 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                            << 9U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffbffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x400U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                     >> (0x3fU & ((IData)(0xaU) 
                                                  + 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                            << 0xaU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffff7ffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x800U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                     >> (0x3fU & ((IData)(0xbU) 
                                                  + 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                            << 0xbU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffefffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x1000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                      >> (0x3fU & ((IData)(0xcU) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                             << 0xcU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffdfffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x2000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                             << 0xdU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffbfffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x4000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                      >> (0x3fU & ((IData)(0xeU) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                             << 0xeU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffff7fffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x8000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                      >> (0x3fU & ((IData)(0xfU) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                             << 0xfU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffeffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x10000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                       >> (0x3fU & 
                                           ((IData)(0x10U) 
                                            + (0x38U 
                                               & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                              << 0x10U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffdffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x20000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                       >> (0x3fU & 
                                           ((IData)(0x11U) 
                                            + (0x38U 
                                               & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                              << 0x11U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffbffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x40000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                       >> (0x3fU & 
                                           ((IData)(0x12U) 
                                            + (0x38U 
                                               & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                              << 0x12U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfff7ffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x80000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                       >> (0x3fU & 
                                           ((IData)(0x13U) 
                                            + (0x38U 
                                               & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                  << 3U)))))) 
                              << 0x13U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffefffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x100000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                        >> (0x3fU & 
                                            ((IData)(0x14U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 0x14U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffdfffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x200000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                        >> (0x3fU & 
                                            ((IData)(0x15U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 0x15U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffbfffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x400000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                        >> (0x3fU & 
                                            ((IData)(0x16U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 0x16U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xff7fffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x800000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                        >> (0x3fU & 
                                            ((IData)(0x17U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 0x17U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfeffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x1000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                         >> (0x3fU 
                                             & ((IData)(0x18U) 
                                                + (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                                << 0x18U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfdffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x2000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                         >> (0x3fU 
                                             & ((IData)(0x19U) 
                                                + (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                                << 0x19U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfbffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x4000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                         >> (0x3fU 
                                             & ((IData)(0x1aU) 
                                                + (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                                << 0x1aU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xf7ffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x8000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                         >> (0x3fU 
                                             & ((IData)(0x1bU) 
                                                + (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                                << 0x1bU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xefffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x10000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                          >> (0x3fU 
                                              & ((IData)(0x1cU) 
                                                 + 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                     << 3U)))))) 
                                 << 0x1cU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xdfffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x20000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                          >> (0x3fU 
                                              & ((IData)(0x1dU) 
                                                 + 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                     << 3U)))))) 
                                 << 0x1dU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xbfffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x40000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                          >> (0x3fU 
                                              & ((IData)(0x1eU) 
                                                 + 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                     << 3U)))))) 
                                 << 0x1eU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0x7fffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
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
                   | (1U & (IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                    >> (0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))))));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0xfdU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (2U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                     >> (0x3fU & ((IData)(1U) 
                                                  + 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                            << 1U)));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0xfbU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (4U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                     >> (0x3fU & ((IData)(2U) 
                                                  + 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                            << 2U)));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0xf7U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (8U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                     >> (0x3fU & ((IData)(3U) 
                                                  + 
                                                  (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                            << 3U)));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0xefU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (0x10U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                        >> (0x3fU & 
                                            ((IData)(4U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 4U)));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0xdfU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (0x20U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                        >> (0x3fU & 
                                            ((IData)(5U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 5U)));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0xbfU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (0x40U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                        >> (0x3fU & 
                                            ((IData)(6U) 
                                             + (0x38U 
                                                & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                   << 3U)))))) 
                               << 6U)));
            vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
                = ((0x7fU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
                   | (0x80U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
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
                       | (1U & (IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                        >> (0x38U & 
                                            ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                             << 3U))))));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xfffdU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (2U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                         >> (0x3fU 
                                             & ((IData)(1U) 
                                                + (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                                << 1U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xfffbU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (4U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                         >> (0x3fU 
                                             & ((IData)(2U) 
                                                + (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                                << 2U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xfff7U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (8U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                         >> (0x3fU 
                                             & ((IData)(3U) 
                                                + (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U)))))) 
                                << 3U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xffefU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x10U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                            >> (0x3fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                                   << 4U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xffdfU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x20U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                            >> (0x3fU 
                                                & ((IData)(5U) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                                   << 5U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xffbfU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x40U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                            >> (0x3fU 
                                                & ((IData)(6U) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                                   << 6U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xff7fU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x80U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                            >> (0x3fU 
                                                & ((IData)(7U) 
                                                   + 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                       << 3U)))))) 
                                   << 7U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xfeffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x100U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                             >> (0x3fU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    (0x38U 
                                                     & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                        << 3U)))))) 
                                    << 8U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xfdffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x200U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                             >> (0x3fU 
                                                 & ((IData)(9U) 
                                                    + 
                                                    (0x38U 
                                                     & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                        << 3U)))))) 
                                    << 9U)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xfbffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x400U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                             >> (0x3fU 
                                                 & ((IData)(0xaU) 
                                                    + 
                                                    (0x38U 
                                                     & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                        << 3U)))))) 
                                    << 0xaU)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xf7ffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x800U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                             >> (0x3fU 
                                                 & ((IData)(0xbU) 
                                                    + 
                                                    (0x38U 
                                                     & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                        << 3U)))))) 
                                    << 0xbU)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xefffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x1000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                              >> (0x3fU 
                                                  & ((IData)(0xcU) 
                                                     + 
                                                     (0x38U 
                                                      & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                         << 3U)))))) 
                                     << 0xcU)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xdfffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x2000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                              >> (0x3fU 
                                                  & ((IData)(0xdU) 
                                                     + 
                                                     (0x38U 
                                                      & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                         << 3U)))))) 
                                     << 0xdU)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0xbfffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x4000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
                                              >> (0x3fU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     (0x38U 
                                                      & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                         << 3U)))))) 
                                     << 0xeU)));
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
                    = ((0x7fffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
                       | (0x8000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout_read_r 
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
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__12\n"); );
    // Body
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

void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__1(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___combo__TOP__10(Vtop___024root* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low__5(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high__6(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop___024root___settle__TOP__8(Vtop___024root* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__7(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__8(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop___024root___settle__TOP__9(Vtop___024root* vlSelf);

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
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__10(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___multiclk__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    Vtop___024root___combo__TOP__12(vlSelf);
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low__5((&vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high__6((&vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high));
    Vtop___024root___settle__TOP__8(vlSelf);
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__7((&vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__8((&vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high));
    Vtop___024root___settle__TOP__9(vlSelf);
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
