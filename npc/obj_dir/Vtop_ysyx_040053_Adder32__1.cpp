// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_ysyx_040053_Adder32.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop_ysyx_040053_Adder32___sequent__TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2(Vtop_ysyx_040053_Adder32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_ysyx_040053_Adder32___sequent__TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2\n"); );
    // Body
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x20U)) | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x20U))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x20U)) & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x20U))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x28U)) | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x28U))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x28U)) & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x28U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x30U)) | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x30U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x30U)) & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x30U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x38U)) | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x38U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x38U)) & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x38U))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x24U)) | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x24U))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x24U)) & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x24U))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x2cU)) | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x2cU))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x2cU)) & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x2cU))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x34U)) | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x34U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x34U)) & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x34U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x3cU)) | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x3cU))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x3cU)) & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x3cU))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x20U)) | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x20U))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x20U)) & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x20U))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x28U)) | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x28U))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x28U)) & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x28U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x30U)) | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x30U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x30U)) & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x30U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x38U)) | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x38U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                            >> 0x38U)) & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x38U))));
    vlSelf->__PVT__g[0U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                              >> 0x20U)) 
                                     & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x20U))));
    vlSelf->__PVT__g[1U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                              >> 0x28U)) 
                                     & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x28U))));
    vlSelf->__PVT__g[2U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                              >> 0x30U)) 
                                     & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x30U))));
    vlSelf->__PVT__g[3U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                              >> 0x38U)) 
                                     & (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x38U))));
    vlSelf->__PVT__p[0U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                              >> 0x20U)) 
                                     | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x20U))));
    vlSelf->__PVT__p[1U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                              >> 0x28U)) 
                                     | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x28U))));
    vlSelf->__PVT__p[2U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                              >> 0x30U)) 
                                     | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x30U))));
    vlSelf->__PVT__p[3U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                              >> 0x38U)) 
                                     | (IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x38U))));
    vlSelf->__PVT__Pg = ((0xeU & (IData)(vlSelf->__PVT__Pg)) 
                         | ((0xffU == vlSelf->__PVT__p
                             [0U]) ? 1U : 0U));
    vlSelf->__PVT__Gg = ((0xeU & (IData)(vlSelf->__PVT__Gg)) 
                         | (1U & ((((((((vlSelf->__PVT__g
                                         [0U] >> 7U) 
                                        | ((vlSelf->__PVT__p
                                            [0U] >> 7U) 
                                           & (vlSelf->__PVT__g
                                              [0U] 
                                              >> 6U))) 
                                       | (((vlSelf->__PVT__p
                                            [0U] >> 7U) 
                                           & (vlSelf->__PVT__p
                                              [0U] 
                                              >> 6U)) 
                                          & (vlSelf->__PVT__g
                                             [0U] >> 5U))) 
                                      | ((((vlSelf->__PVT__p
                                            [0U] >> 7U) 
                                           & (vlSelf->__PVT__p
                                              [0U] 
                                              >> 6U)) 
                                          & (vlSelf->__PVT__p
                                             [0U] >> 5U)) 
                                         & (vlSelf->__PVT__g
                                            [0U] >> 4U))) 
                                     | (((((vlSelf->__PVT__p
                                            [0U] >> 7U) 
                                           & (vlSelf->__PVT__p
                                              [0U] 
                                              >> 6U)) 
                                          & (vlSelf->__PVT__p
                                             [0U] >> 5U)) 
                                         & (vlSelf->__PVT__p
                                            [0U] >> 4U)) 
                                        & (vlSelf->__PVT__g
                                           [0U] >> 3U))) 
                                    | ((((((vlSelf->__PVT__p
                                            [0U] >> 7U) 
                                           & (vlSelf->__PVT__p
                                              [0U] 
                                              >> 6U)) 
                                          & (vlSelf->__PVT__p
                                             [0U] >> 5U)) 
                                         & (vlSelf->__PVT__p
                                            [0U] >> 4U)) 
                                        & (vlSelf->__PVT__p
                                           [0U] >> 3U)) 
                                       & (vlSelf->__PVT__g
                                          [0U] >> 2U))) 
                                   | (((((((vlSelf->__PVT__p
                                            [0U] >> 7U) 
                                           & (vlSelf->__PVT__p
                                              [0U] 
                                              >> 6U)) 
                                          & (vlSelf->__PVT__p
                                             [0U] >> 5U)) 
                                         & (vlSelf->__PVT__p
                                            [0U] >> 4U)) 
                                        & (vlSelf->__PVT__p
                                           [0U] >> 3U)) 
                                       & (vlSelf->__PVT__p
                                          [0U] >> 2U)) 
                                      & (vlSelf->__PVT__g
                                         [0U] >> 1U))) 
                                  | (((((((((vlSelf->__PVT__p
                                             [0U] >> 7U) 
                                            & (vlSelf->__PVT__p
                                               [0U] 
                                               >> 6U)) 
                                           & (vlSelf->__PVT__p
                                              [0U] 
                                              >> 5U)) 
                                          & (vlSelf->__PVT__p
                                             [0U] >> 4U)) 
                                         & (vlSelf->__PVT__p
                                            [0U] >> 3U)) 
                                        & (vlSelf->__PVT__p
                                           [0U] >> 2U)) 
                                       & (vlSelf->__PVT__p
                                          [0U] >> 1U)) 
                                      & vlSelf->__PVT__p
                                      [0U]) & vlSelf->__PVT__g
                                     [0U]))));
    vlSelf->__PVT__Pg = ((0xdU & (IData)(vlSelf->__PVT__Pg)) 
                         | (((0xffU == vlSelf->__PVT__p
                              [1U]) ? 1U : 0U) << 1U));
    vlSelf->__PVT__Gg = ((0xdU & (IData)(vlSelf->__PVT__Gg)) 
                         | (2U & (((((((0x3fffffeU 
                                        & ((vlSelf->__PVT__g
                                            [1U] >> 6U) 
                                           | ((vlSelf->__PVT__p
                                               [1U] 
                                               >> 6U) 
                                              & (vlSelf->__PVT__g
                                                 [1U] 
                                                 >> 5U)))) 
                                       | (0x3fffffeU 
                                          & (((vlSelf->__PVT__p
                                               [1U] 
                                               >> 6U) 
                                              & (vlSelf->__PVT__p
                                                 [1U] 
                                                 >> 5U)) 
                                             & (vlSelf->__PVT__g
                                                [1U] 
                                                >> 4U)))) 
                                      | (0x3fffffeU 
                                         & ((((vlSelf->__PVT__p
                                               [1U] 
                                               >> 6U) 
                                              & (vlSelf->__PVT__p
                                                 [1U] 
                                                 >> 5U)) 
                                             & (vlSelf->__PVT__p
                                                [1U] 
                                                >> 4U)) 
                                            & (vlSelf->__PVT__g
                                               [1U] 
                                               >> 3U)))) 
                                     | (0x3fffffeU 
                                        & (((((vlSelf->__PVT__p
                                               [1U] 
                                               >> 6U) 
                                              & (vlSelf->__PVT__p
                                                 [1U] 
                                                 >> 5U)) 
                                             & (vlSelf->__PVT__p
                                                [1U] 
                                                >> 4U)) 
                                            & (vlSelf->__PVT__p
                                               [1U] 
                                               >> 3U)) 
                                           & (vlSelf->__PVT__g
                                              [1U] 
                                              >> 2U)))) 
                                    | (0x3fffffeU & 
                                       ((((((vlSelf->__PVT__p
                                             [1U] >> 6U) 
                                            & (vlSelf->__PVT__p
                                               [1U] 
                                               >> 5U)) 
                                           & (vlSelf->__PVT__p
                                              [1U] 
                                              >> 4U)) 
                                          & (vlSelf->__PVT__p
                                             [1U] >> 3U)) 
                                         & (vlSelf->__PVT__p
                                            [1U] >> 2U)) 
                                        & (vlSelf->__PVT__g
                                           [1U] >> 1U)))) 
                                   | (0x3fffffeU & 
                                      (((((((vlSelf->__PVT__p
                                             [1U] >> 6U) 
                                            & (vlSelf->__PVT__p
                                               [1U] 
                                               >> 5U)) 
                                           & (vlSelf->__PVT__p
                                              [1U] 
                                              >> 4U)) 
                                          & (vlSelf->__PVT__p
                                             [1U] >> 3U)) 
                                         & (vlSelf->__PVT__p
                                            [1U] >> 2U)) 
                                        & (vlSelf->__PVT__p
                                           [1U] >> 1U)) 
                                       & vlSelf->__PVT__g
                                       [1U]))) | (0x3fffffeU 
                                                  & (((((((((vlSelf->__PVT__p
                                                             [1U] 
                                                             >> 6U) 
                                                            & (vlSelf->__PVT__p
                                                               [1U] 
                                                               >> 5U)) 
                                                           & (vlSelf->__PVT__p
                                                              [1U] 
                                                              >> 4U)) 
                                                          & (vlSelf->__PVT__p
                                                             [1U] 
                                                             >> 3U)) 
                                                         & (vlSelf->__PVT__p
                                                            [1U] 
                                                            >> 2U)) 
                                                        & (vlSelf->__PVT__p
                                                           [1U] 
                                                           >> 1U)) 
                                                       & vlSelf->__PVT__p
                                                       [1U]) 
                                                      & (vlSelf->__PVT__p
                                                         [1U] 
                                                         << 1U)) 
                                                     & (vlSelf->__PVT__g
                                                        [1U] 
                                                        << 1U))))));
    vlSelf->__PVT__Pg = ((0xbU & (IData)(vlSelf->__PVT__Pg)) 
                         | (((0xffU == vlSelf->__PVT__p
                              [2U]) ? 1U : 0U) << 2U));
    vlSelf->__PVT__Gg = ((0xbU & (IData)(vlSelf->__PVT__Gg)) 
                         | (4U & (((((((0x7fffffcU 
                                        & ((vlSelf->__PVT__g
                                            [2U] >> 5U) 
                                           | ((vlSelf->__PVT__p
                                               [2U] 
                                               >> 5U) 
                                              & (vlSelf->__PVT__g
                                                 [2U] 
                                                 >> 4U)))) 
                                       | (0x7fffffcU 
                                          & (((vlSelf->__PVT__p
                                               [2U] 
                                               >> 5U) 
                                              & (vlSelf->__PVT__p
                                                 [2U] 
                                                 >> 4U)) 
                                             & (vlSelf->__PVT__g
                                                [2U] 
                                                >> 3U)))) 
                                      | (0x7fffffcU 
                                         & ((((vlSelf->__PVT__p
                                               [2U] 
                                               >> 5U) 
                                              & (vlSelf->__PVT__p
                                                 [2U] 
                                                 >> 4U)) 
                                             & (vlSelf->__PVT__p
                                                [2U] 
                                                >> 3U)) 
                                            & (vlSelf->__PVT__g
                                               [2U] 
                                               >> 2U)))) 
                                     | (0x7fffffcU 
                                        & (((((vlSelf->__PVT__p
                                               [2U] 
                                               >> 5U) 
                                              & (vlSelf->__PVT__p
                                                 [2U] 
                                                 >> 4U)) 
                                             & (vlSelf->__PVT__p
                                                [2U] 
                                                >> 3U)) 
                                            & (vlSelf->__PVT__p
                                               [2U] 
                                               >> 2U)) 
                                           & (vlSelf->__PVT__g
                                              [2U] 
                                              >> 1U)))) 
                                    | (0x7fffffcU & 
                                       ((((((vlSelf->__PVT__p
                                             [2U] >> 5U) 
                                            & (vlSelf->__PVT__p
                                               [2U] 
                                               >> 4U)) 
                                           & (vlSelf->__PVT__p
                                              [2U] 
                                              >> 3U)) 
                                          & (vlSelf->__PVT__p
                                             [2U] >> 2U)) 
                                         & (vlSelf->__PVT__p
                                            [2U] >> 1U)) 
                                        & vlSelf->__PVT__g
                                        [2U]))) | (0x7fffffcU 
                                                   & (((((((vlSelf->__PVT__p
                                                            [2U] 
                                                            >> 5U) 
                                                           & (vlSelf->__PVT__p
                                                              [2U] 
                                                              >> 4U)) 
                                                          & (vlSelf->__PVT__p
                                                             [2U] 
                                                             >> 3U)) 
                                                         & (vlSelf->__PVT__p
                                                            [2U] 
                                                            >> 2U)) 
                                                        & (vlSelf->__PVT__p
                                                           [2U] 
                                                           >> 1U)) 
                                                       & vlSelf->__PVT__p
                                                       [2U]) 
                                                      & (vlSelf->__PVT__g
                                                         [2U] 
                                                         << 1U)))) 
                                  | (0x7fffffcU & (
                                                   ((((((((vlSelf->__PVT__p
                                                           [2U] 
                                                           >> 5U) 
                                                          & (vlSelf->__PVT__p
                                                             [2U] 
                                                             >> 4U)) 
                                                         & (vlSelf->__PVT__p
                                                            [2U] 
                                                            >> 3U)) 
                                                        & (vlSelf->__PVT__p
                                                           [2U] 
                                                           >> 2U)) 
                                                       & (vlSelf->__PVT__p
                                                          [2U] 
                                                          >> 1U)) 
                                                      & vlSelf->__PVT__p
                                                      [2U]) 
                                                     & (vlSelf->__PVT__p
                                                        [2U] 
                                                        << 1U)) 
                                                    & (vlSelf->__PVT__p
                                                       [2U] 
                                                       << 2U)) 
                                                   & (vlSelf->__PVT__g
                                                      [2U] 
                                                      << 2U))))));
    vlSelf->__PVT__Pg = ((7U & (IData)(vlSelf->__PVT__Pg)) 
                         | (((0xffU == vlSelf->__PVT__p
                              [3U]) ? 1U : 0U) << 3U));
    vlSelf->__PVT__Gg = ((7U & (IData)(vlSelf->__PVT__Gg)) 
                         | (8U & (((((((0xffffff8U 
                                        & ((vlSelf->__PVT__g
                                            [3U] >> 4U) 
                                           | ((vlSelf->__PVT__p
                                               [3U] 
                                               >> 4U) 
                                              & (vlSelf->__PVT__g
                                                 [3U] 
                                                 >> 3U)))) 
                                       | (0xffffff8U 
                                          & (((vlSelf->__PVT__p
                                               [3U] 
                                               >> 4U) 
                                              & (vlSelf->__PVT__p
                                                 [3U] 
                                                 >> 3U)) 
                                             & (vlSelf->__PVT__g
                                                [3U] 
                                                >> 2U)))) 
                                      | (0xffffff8U 
                                         & ((((vlSelf->__PVT__p
                                               [3U] 
                                               >> 4U) 
                                              & (vlSelf->__PVT__p
                                                 [3U] 
                                                 >> 3U)) 
                                             & (vlSelf->__PVT__p
                                                [3U] 
                                                >> 2U)) 
                                            & (vlSelf->__PVT__g
                                               [3U] 
                                               >> 1U)))) 
                                     | (0xffffff8U 
                                        & (((((vlSelf->__PVT__p
                                               [3U] 
                                               >> 4U) 
                                              & (vlSelf->__PVT__p
                                                 [3U] 
                                                 >> 3U)) 
                                             & (vlSelf->__PVT__p
                                                [3U] 
                                                >> 2U)) 
                                            & (vlSelf->__PVT__p
                                               [3U] 
                                               >> 1U)) 
                                           & vlSelf->__PVT__g
                                           [3U]))) 
                                    | (0xffffff8U & 
                                       ((((((vlSelf->__PVT__p
                                             [3U] >> 4U) 
                                            & (vlSelf->__PVT__p
                                               [3U] 
                                               >> 3U)) 
                                           & (vlSelf->__PVT__p
                                              [3U] 
                                              >> 2U)) 
                                          & (vlSelf->__PVT__p
                                             [3U] >> 1U)) 
                                         & vlSelf->__PVT__p
                                         [3U]) & (vlSelf->__PVT__g
                                                  [3U] 
                                                  << 1U)))) 
                                   | (0xffffff8U & 
                                      (((((((vlSelf->__PVT__p
                                             [3U] >> 4U) 
                                            & (vlSelf->__PVT__p
                                               [3U] 
                                               >> 3U)) 
                                           & (vlSelf->__PVT__p
                                              [3U] 
                                              >> 2U)) 
                                          & (vlSelf->__PVT__p
                                             [3U] >> 1U)) 
                                         & vlSelf->__PVT__p
                                         [3U]) & (vlSelf->__PVT__p
                                                  [3U] 
                                                  << 1U)) 
                                       & (vlSelf->__PVT__g
                                          [3U] << 2U)))) 
                                  | (0xffffff8U & (
                                                   ((((((((vlSelf->__PVT__p
                                                           [3U] 
                                                           >> 4U) 
                                                          & (vlSelf->__PVT__p
                                                             [3U] 
                                                             >> 3U)) 
                                                         & (vlSelf->__PVT__p
                                                            [3U] 
                                                            >> 2U)) 
                                                        & (vlSelf->__PVT__p
                                                           [3U] 
                                                           >> 1U)) 
                                                       & vlSelf->__PVT__p
                                                       [3U]) 
                                                      & (vlSelf->__PVT__p
                                                         [3U] 
                                                         << 1U)) 
                                                     & (vlSelf->__PVT__p
                                                        [3U] 
                                                        << 2U)) 
                                                    & (vlSelf->__PVT__p
                                                       [3U] 
                                                       << 3U)) 
                                                   & (vlSelf->__PVT__g
                                                      [3U] 
                                                      << 3U))))));
    vlSelf->__PVT__gen__DOT__c1 = (1U & ((IData)(vlSelf->__PVT__Gg) 
                                         | ((IData)(vlSelf->__PVT__Pg) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                               >> 3U))));
    vlSelf->__PVT__gen__DOT__c2 = (1U & (((IData)(vlSelf->__PVT__Gg) 
                                          >> 1U) | 
                                         (((IData)(vlSelf->__PVT__Pg) 
                                           >> 1U) & (IData)(vlSelf->__PVT__gen__DOT__c1))));
    vlSelf->__PVT__gen__DOT__c3 = (1U & (((IData)(vlSelf->__PVT__Gg) 
                                          >> 2U) | 
                                         (((IData)(vlSelf->__PVT__Pg) 
                                           >> 2U) & (IData)(vlSelf->__PVT__gen__DOT__c2))));
    vlSelf->__PVT__c = ((0x10U & (((IData)(vlSelf->__PVT__Gg) 
                                   << 1U) | (((IData)(vlSelf->__PVT__Pg) 
                                              << 1U) 
                                             & ((IData)(vlSelf->__PVT__gen__DOT__c3) 
                                                << 4U)))) 
                        | (((IData)(vlSelf->__PVT__gen__DOT__c3) 
                            << 3U) | (((IData)(vlSelf->__PVT__gen__DOT__c2) 
                                       << 2U) | (((IData)(vlSelf->__PVT__gen__DOT__c1) 
                                                  << 1U) 
                                                 | (1U 
                                                    & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                                       >> 3U))))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x20U)) ^ (IData)(
                                                   (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x20U))) 
                    ^ (IData)(vlSelf->__PVT__c))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x28U)) ^ (IData)(
                                                   (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x28U))) 
                    ^ ((IData)(vlSelf->__PVT__c) >> 1U))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x30U)) ^ (IData)(
                                                   (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x30U))) 
                    ^ ((IData)(vlSelf->__PVT__c) >> 2U))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x38U)) ^ (IData)(
                                                   (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x38U))) 
                    ^ ((IData)(vlSelf->__PVT__c) >> 3U))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1 
        = (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                 | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                    & (IData)(vlSelf->__PVT__c))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1 
        = (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                 | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                    & ((IData)(vlSelf->__PVT__c) >> 1U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1 
        = (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                 | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                    & ((IData)(vlSelf->__PVT__c) >> 2U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1 
        = (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                 | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                    & ((IData)(vlSelf->__PVT__c) >> 3U))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((IData)((0xcU == (0xcU & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p)))) 
                      & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                         >> 1U))) | ((IData)((0xeU 
                                              == (0xeU 
                                                  & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p)))) 
                                     & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g))) 
                 | ((IData)((0xfU == (0xfU & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p)))) 
                    & (IData)(vlSelf->__PVT__c))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((IData)((0xcU == (0xcU & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p)))) 
                      & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                         >> 1U))) | ((IData)((0xeU 
                                              == (0xeU 
                                                  & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p)))) 
                                     & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g))) 
                 | ((IData)((0xfU == (0xfU & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p)))) 
                    & ((IData)(vlSelf->__PVT__c) >> 1U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((IData)((0xcU == (0xcU & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p)))) 
                      & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                         >> 1U))) | ((IData)((0xeU 
                                              == (0xeU 
                                                  & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p)))) 
                                     & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g))) 
                 | ((IData)((0xfU == (0xfU & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p)))) 
                    & ((IData)(vlSelf->__PVT__c) >> 2U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((IData)((0xcU == (0xcU & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p)))) 
                      & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                         >> 1U))) | ((IData)((0xeU 
                                              == (0xeU 
                                                  & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p)))) 
                                     & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g))) 
                 | ((IData)((0xfU == (0xfU & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p)))) 
                    & ((IData)(vlSelf->__PVT__c) >> 3U))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                  >> 1U) | (((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                             >> 1U) & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                  >> 1U) | (((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                             >> 1U) & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                  >> 1U) | (((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                             >> 1U) & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                  >> 1U) | (((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                             >> 1U) & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x24U)) ^ (IData)(
                                                   (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x24U))) 
                    ^ (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1 
        = (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                 | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                    & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x2cU)) ^ (IData)(
                                                   (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x2cU))) 
                    ^ (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1 
        = (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                 | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                    & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x34U)) ^ (IData)(
                                                   (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x34U))) 
                    ^ (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1 
        = (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                 | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                    & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x3cU)) ^ (IData)(
                                                   (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x3cU))) 
                    ^ (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1 
        = (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                 | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                    & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                  >> 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                             >> 2U) & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                  >> 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                             >> 2U) & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                  >> 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                             >> 2U) & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                  >> 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                             >> 2U) & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                  >> 1U) | (((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                             >> 1U) & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                  >> 1U) | (((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                             >> 1U) & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                  >> 1U) | (((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                             >> 1U) & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                  >> 1U) | (((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                             >> 1U) & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c 
        = ((8U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                  | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                     & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3) 
                        << 3U)))) | (((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3) 
                                      << 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2) 
                                                 << 1U) 
                                                | (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c 
        = ((8U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                  | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                     & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3) 
                        << 3U)))) | (((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3) 
                                      << 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2) 
                                                 << 1U) 
                                                | (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c 
        = ((8U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                  | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                     & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3) 
                        << 3U)))) | (((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3) 
                                      << 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2) 
                                                 << 1U) 
                                                | (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c 
        = ((8U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                  | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                     & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3) 
                        << 3U)))) | (((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3) 
                                      << 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2) 
                                                 << 1U) 
                                                | (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                  >> 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                             >> 2U) & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                  >> 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                             >> 2U) & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                  >> 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                             >> 2U) & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3 
        = (1U & (((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                  >> 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                             >> 2U) & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss 
        = ((6U & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x21U)) & ((IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x21U)) 
                                            | (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                    | ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x21U)) & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss 
        = ((5U & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x22U)) << 1U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x22U)) << 1U) | 
                      (0xfffffffeU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffeU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x22U)) 
                                       << 1U) & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss 
        = ((3U & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x23U)) << 2U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x23U)) << 2U) | 
                      (0xfffffffcU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffcU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x23U)) 
                                       << 2U) & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x21U)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x21U))) 
                     ^ (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x22U)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x22U))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x23U)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x23U))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss 
        = ((6U & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x29U)) & ((IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x29U)) 
                                            | (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                    | ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x29U)) & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss 
        = ((5U & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x2aU)) << 1U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x2aU)) << 1U) | 
                      (0xfffffffeU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffeU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x2aU)) 
                                       << 1U) & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss 
        = ((3U & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x2bU)) << 2U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x2bU)) << 2U) | 
                      (0xfffffffcU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffcU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x2bU)) 
                                       << 2U) & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x29U)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x29U))) 
                     ^ (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x2aU)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2aU))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x2bU)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2bU))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss 
        = ((6U & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x31U)) & ((IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x31U)) 
                                            | (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                    | ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x31U)) & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss 
        = ((5U & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x32U)) << 1U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x32U)) << 1U) | 
                      (0xfffffffeU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffeU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x32U)) 
                                       << 1U) & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss 
        = ((3U & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x33U)) << 2U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x33U)) << 2U) | 
                      (0xfffffffcU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffcU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x33U)) 
                                       << 2U) & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x31U)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x31U))) 
                     ^ (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x32U)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x32U))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x33U)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x33U))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss 
        = ((6U & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x39U)) & ((IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x39U)) 
                                            | (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                    | ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x39U)) & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss 
        = ((5U & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x3aU)) << 1U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x3aU)) << 1U) | 
                      (0xfffffffeU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffeU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x3aU)) 
                                       << 1U) & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss 
        = ((3U & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x3bU)) << 2U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x3bU)) << 2U) | 
                      (0xfffffffcU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffcU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x3bU)) 
                                       << 2U) & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x39U)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x39U))) 
                     ^ (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x3aU)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3aU))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x3bU)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3bU))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c 
        = ((8U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                  | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                     & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3) 
                        << 3U)))) | (((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3) 
                                      << 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2) 
                                                 << 1U) 
                                                | (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c 
        = ((8U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                  | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                     & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3) 
                        << 3U)))) | (((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3) 
                                      << 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2) 
                                                 << 1U) 
                                                | (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c 
        = ((8U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                  | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                     & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3) 
                        << 3U)))) | (((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3) 
                                      << 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2) 
                                                 << 1U) 
                                                | (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c 
        = ((8U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                  | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                     & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3) 
                        << 3U)))) | (((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3) 
                                      << 2U) | (((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2) 
                                                 << 1U) 
                                                | (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss 
        = ((6U & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x25U)) & ((IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x25U)) 
                                            | (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                    | ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x25U)) & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss 
        = ((5U & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x26U)) << 1U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x26U)) << 1U) | 
                      (0xfffffffeU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffeU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x26U)) 
                                       << 1U) & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss 
        = ((3U & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x27U)) << 2U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x27U)) << 2U) | 
                      (0xfffffffcU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffcU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x27U)) 
                                       << 2U) & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
    vlSelf->__PVT__cout_temp = ((0xeU & (IData)(vlSelf->__PVT__cout_temp)) 
                                | (1U & ((IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 3U)));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x25U)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x25U))) 
                     ^ (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x26U)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x26U))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x27U)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x27U))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss 
        = ((6U & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x2dU)) & ((IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2dU)) 
                                            | (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                    | ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x2dU)) & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss 
        = ((5U & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x2eU)) << 1U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x2eU)) << 1U) | 
                      (0xfffffffeU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffeU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x2eU)) 
                                       << 1U) & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss 
        = ((3U & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x2fU)) << 2U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x2fU)) << 2U) | 
                      (0xfffffffcU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffcU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x2fU)) 
                                       << 2U) & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
    vlSelf->__PVT__cout_temp = ((0xdU & (IData)(vlSelf->__PVT__cout_temp)) 
                                | (2U & ((IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 2U)));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x2dU)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2dU))) 
                     ^ (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x2eU)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2eU))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x2fU)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2fU))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss 
        = ((6U & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x35U)) & ((IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x35U)) 
                                            | (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                    | ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x35U)) & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss 
        = ((5U & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x36U)) << 1U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x36U)) << 1U) | 
                      (0xfffffffeU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffeU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x36U)) 
                                       << 1U) & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss 
        = ((3U & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x37U)) << 2U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x37U)) << 2U) | 
                      (0xfffffffcU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffcU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x37U)) 
                                       << 2U) & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
    vlSelf->__PVT__cout_temp = ((0xbU & (IData)(vlSelf->__PVT__cout_temp)) 
                                | (4U & ((IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 1U)));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x35U)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x35U))) 
                     ^ (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x36U)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x36U))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x37U)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x37U))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss 
        = ((6U & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                              >> 0x3dU)) & ((IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3dU)) 
                                            | (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                    | ((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x3dU)) & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss 
        = ((5U & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x3eU)) << 1U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x3eU)) << 1U) | 
                      (0xfffffffeU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffeU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x3eU)) 
                                       << 1U) & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss 
        = ((3U & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x3fU)) << 2U) & 
                     (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                >> 0x3fU)) << 2U) | 
                      (0xfffffffcU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))) 
                    | (0xfffffffcU & (((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                >> 0x3fU)) 
                                       << 2U) & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
    vlSelf->__PVT__cout_temp = ((7U & (IData)(vlSelf->__PVT__cout_temp)) 
                                | (8U & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x3dU)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3dU))) 
                     ^ (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x3eU)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3eU))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               >> 0x3fU)) ^ (IData)(
                                                    (vlSymsp->TOP.top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3fU))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              << 1U)))));
    vlSelf->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f 
        = (((IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
            << 4U) | (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    vlSelf->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f 
        = (((IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
            << 4U) | (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    vlSelf->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f 
        = (((IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
            << 4U) | (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    vlSelf->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f 
        = (((IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
            << 4U) | (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    vlSelf->__PVT__ff[0U] = vlSelf->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f;
    vlSelf->__PVT__ff[1U] = vlSelf->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f;
    vlSelf->__PVT__ff[2U] = vlSelf->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f;
    vlSelf->__PVT__ff[3U] = vlSelf->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f;
}