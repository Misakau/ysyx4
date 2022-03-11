// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_ysyx_220053_Adder32.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__1(Vtop_ysyx_220053_Adder32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__1\n"); );
    // Body
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((IData)(vlSymsp->TOP.top__DOT__my_exu__DOT__busa) 
                   | (IData)((QData)((IData)(vlSymsp->TOP.top__DOT__immI)))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((IData)(vlSymsp->TOP.top__DOT__my_exu__DOT__busa) 
                   & (IData)((QData)((IData)(vlSymsp->TOP.top__DOT__immI)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 8U)) | (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                               >> 8U))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 8U)) & (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                               >> 8U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x10U)) | (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 0x10U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x10U)) & (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 0x10U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x18U)) | (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 0x18U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x18U)) & (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 0x18U))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 4U)) | (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                               >> 4U))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 4U)) & (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                               >> 4U))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0xcU)) | (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                 >> 0xcU))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0xcU)) & (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                 >> 0xcU))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x14U)) | (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 0x14U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x14U)) & (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 0x14U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x1cU)) | (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 0x1cU))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x1cU)) & (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 0x1cU))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p 
        = (0xfU & ((IData)(vlSymsp->TOP.top__DOT__my_exu__DOT__busa) 
                   | (IData)((QData)((IData)(vlSymsp->TOP.top__DOT__immI)))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g 
        = (0xfU & ((IData)(vlSymsp->TOP.top__DOT__my_exu__DOT__busa) 
                   & (IData)((QData)((IData)(vlSymsp->TOP.top__DOT__immI)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 8U)) | (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                               >> 8U))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 8U)) & (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                               >> 8U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x10U)) | (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 0x10U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x10U)) & (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 0x10U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x18U)) | (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 0x18U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x18U)) & (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 0x18U))));
    vlSelf->__PVT__g[0U] = (0xffU & ((IData)(vlSymsp->TOP.top__DOT__my_exu__DOT__busa) 
                                     & (IData)((QData)((IData)(vlSymsp->TOP.top__DOT__immI)))));
    vlSelf->__PVT__g[1U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                                              >> 8U)) 
                                     & (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                >> 8U))));
    vlSelf->__PVT__g[2U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                                              >> 0x10U)) 
                                     & (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                >> 0x10U))));
    vlSelf->__PVT__g[3U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                                              >> 0x18U)) 
                                     & (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                >> 0x18U))));
    vlSelf->__PVT__p[0U] = (0xffU & ((IData)(vlSymsp->TOP.top__DOT__my_exu__DOT__busa) 
                                     | (IData)((QData)((IData)(vlSymsp->TOP.top__DOT__immI)))));
    vlSelf->__PVT__p[1U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                                              >> 8U)) 
                                     | (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                >> 8U))));
    vlSelf->__PVT__p[2U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                                              >> 0x10U)) 
                                     | (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                >> 0x10U))));
    vlSelf->__PVT__p[3U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                                              >> 0x18U)) 
                                     | (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                >> 0x18U))));
    vlSelf->__PVT__Pg = ((0xeU & (IData)(vlSelf->__PVT__Pg)) 
                         | ((0xffU == vlSelf->__PVT__p
                             [0U]) ? 1U : 0U));
    vlSelf->__PVT__Pg = ((0xdU & (IData)(vlSelf->__PVT__Pg)) 
                         | (((0xffU == vlSelf->__PVT__p
                              [1U]) ? 1U : 0U) << 1U));
    vlSelf->__PVT__Pg = ((0xbU & (IData)(vlSelf->__PVT__Pg)) 
                         | (((0xffU == vlSelf->__PVT__p
                              [2U]) ? 1U : 0U) << 2U));
    vlSelf->__PVT__Pg = ((7U & (IData)(vlSelf->__PVT__Pg)) 
                         | (((0xffU == vlSelf->__PVT__p
                              [3U]) ? 1U : 0U) << 3U));
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
    vlSelf->__Vcellout__gen__c = ((0xeU & (IData)(vlSelf->__Vcellout__gen__c)) 
                                  | (1U & (IData)(vlSelf->__PVT__Gg)));
    vlSelf->__Vcellout__gen__c = ((0xdU & (IData)(vlSelf->__Vcellout__gen__c)) 
                                  | (2U & ((IData)(vlSelf->__PVT__Gg) 
                                           | ((IData)(vlSelf->__PVT__Pg) 
                                              & ((IData)(vlSelf->__Vcellout__gen__c) 
                                                 << 1U)))));
    vlSelf->__Vcellout__gen__c = ((0xbU & (IData)(vlSelf->__Vcellout__gen__c)) 
                                  | (4U & ((IData)(vlSelf->__PVT__Gg) 
                                           | ((IData)(vlSelf->__PVT__Pg) 
                                              & ((IData)(vlSelf->__Vcellout__gen__c) 
                                                 << 1U)))));
    vlSelf->__Vcellout__gen__c = ((7U & (IData)(vlSelf->__Vcellout__gen__c)) 
                                  | (8U & ((IData)(vlSelf->__PVT__Gg) 
                                           | ((IData)(vlSelf->__PVT__Pg) 
                                              & ((IData)(vlSelf->__Vcellout__gen__c) 
                                                 << 1U)))));
    vlSelf->__PVT__c = ((IData)(vlSelf->__Vcellout__gen__c) 
                        << 1U);
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((IData)(vlSymsp->TOP.top__DOT__my_exu__DOT__busa) 
                     ^ (IData)((QData)((IData)(vlSymsp->TOP.top__DOT__immI)))) 
                    ^ (IData)(vlSelf->__PVT__c))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 8U)) ^ (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                 >> 8U))) 
                    ^ ((IData)(vlSelf->__PVT__c) >> 1U))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 0x10U)) ^ (IData)(
                                                   ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                    >> 0x10U))) 
                    ^ ((IData)(vlSelf->__PVT__c) >> 2U))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 0x18U)) ^ (IData)(
                                                   ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                    >> 0x18U))) 
                    ^ ((IData)(vlSelf->__PVT__c) >> 3U))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & (IData)(vlSelf->__PVT__c)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__c) 
                          >> 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__c) 
                          >> 2U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__c) 
                          >> 3U)))));
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
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 1U)) ^ (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 1U))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 2U)) ^ (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 2U))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 3U)) ^ (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 3U))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 9U)) ^ (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 9U))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0xaU)) ^ (IData)(
                                                   ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                    >> 0xaU))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0xbU)) ^ (IData)(
                                                   ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                    >> 0xbU))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x11U)) ^ (IData)(
                                                    ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                     >> 0x11U))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x12U)) ^ (IData)(
                                                    ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                     >> 0x12U))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x13U)) ^ (IData)(
                                                    ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                     >> 0x13U))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x19U)) ^ (IData)(
                                                    ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                     >> 0x19U))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x1aU)) ^ (IData)(
                                                    ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                     >> 0x1aU))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x1bU)) ^ (IData)(
                                                    ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                     >> 0x1bU))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 4U)) ^ (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                 >> 4U))) 
                    ^ (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 0xcU)) ^ (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                   >> 0xcU))) 
                    ^ (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 0x14U)) ^ (IData)(
                                                   ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                    >> 0x14U))) 
                    ^ (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 0x1cU)) ^ (IData)(
                                                   ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                    >> 0x1cU))) 
                    ^ (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 5U)) ^ (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 5U))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 6U)) ^ (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 6U))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 7U)) ^ (IData)(((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                  >> 7U))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->__PVT__cout_temp = ((0xeU & (IData)(vlSelf->__PVT__cout_temp)) 
                                | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 3U)));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0xdU)) ^ (IData)(
                                                   ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                    >> 0xdU))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0xeU)) ^ (IData)(
                                                   ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                    >> 0xeU))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0xfU)) ^ (IData)(
                                                   ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                    >> 0xfU))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->__PVT__cout_temp = ((0xdU & (IData)(vlSelf->__PVT__cout_temp)) 
                                | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 2U)));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x15U)) ^ (IData)(
                                                    ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                     >> 0x15U))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x16U)) ^ (IData)(
                                                    ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                     >> 0x16U))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x17U)) ^ (IData)(
                                                    ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                     >> 0x17U))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->__PVT__cout_temp = ((0xbU & (IData)(vlSelf->__PVT__cout_temp)) 
                                | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 1U)));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x1dU)) ^ (IData)(
                                                    ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                     >> 0x1dU))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x1eU)) ^ (IData)(
                                                    ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                     >> 0x1eU))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x1fU)) ^ (IData)(
                                                    ((QData)((IData)(vlSymsp->TOP.top__DOT__immI)) 
                                                     >> 0x1fU))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->__PVT__cout_temp = ((7U & (IData)(vlSelf->__PVT__cout_temp)) 
                                | (8U & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)));
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

VL_INLINE_OPT void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__2(Vtop_ysyx_220053_Adder32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__2\n"); );
    // Body
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x20U)) | (IData)((QData)((IData)(
                                                                 (vlSymsp->TOP.top__DOT__immI 
                                                                  >> 0x20U))))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x20U)) & (IData)((QData)((IData)(
                                                                 (vlSymsp->TOP.top__DOT__immI 
                                                                  >> 0x20U))))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x28U)) | (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 8U))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x28U)) & (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 8U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x30U)) | (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 0x10U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x30U)) & (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 0x10U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x38U)) | (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 0x18U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x38U)) & (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 0x18U))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x24U)) | (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 4U))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x24U)) & (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 4U))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x2cU)) | (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 0xcU))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x2cU)) & (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 0xcU))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x34U)) | (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 0x14U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x34U)) & (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 0x14U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x3cU)) | (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 0x1cU))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x3cU)) & (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 0x1cU))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x20U)) | (IData)((QData)((IData)(
                                                                 (vlSymsp->TOP.top__DOT__immI 
                                                                  >> 0x20U))))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x20U)) & (IData)((QData)((IData)(
                                                                 (vlSymsp->TOP.top__DOT__immI 
                                                                  >> 0x20U))))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x28U)) | (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 8U))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x28U)) & (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 8U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x30U)) | (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 0x10U))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x30U)) & (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 0x10U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x38U)) | (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 0x18U))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g 
        = (0xfU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                            >> 0x38U)) & (IData)(((QData)((IData)(
                                                                  (vlSymsp->TOP.top__DOT__immI 
                                                                   >> 0x20U))) 
                                                  >> 0x18U))));
    vlSelf->__PVT__g[0U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                                              >> 0x20U)) 
                                     & (IData)((QData)((IData)(
                                                               (vlSymsp->TOP.top__DOT__immI 
                                                                >> 0x20U))))));
    vlSelf->__PVT__g[1U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                                              >> 0x28U)) 
                                     & (IData)(((QData)((IData)(
                                                                (vlSymsp->TOP.top__DOT__immI 
                                                                 >> 0x20U))) 
                                                >> 8U))));
    vlSelf->__PVT__g[2U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                                              >> 0x30U)) 
                                     & (IData)(((QData)((IData)(
                                                                (vlSymsp->TOP.top__DOT__immI 
                                                                 >> 0x20U))) 
                                                >> 0x10U))));
    vlSelf->__PVT__g[3U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                                              >> 0x38U)) 
                                     & (IData)(((QData)((IData)(
                                                                (vlSymsp->TOP.top__DOT__immI 
                                                                 >> 0x20U))) 
                                                >> 0x18U))));
    vlSelf->__PVT__p[0U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                                              >> 0x20U)) 
                                     | (IData)((QData)((IData)(
                                                               (vlSymsp->TOP.top__DOT__immI 
                                                                >> 0x20U))))));
    vlSelf->__PVT__p[1U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                                              >> 0x28U)) 
                                     | (IData)(((QData)((IData)(
                                                                (vlSymsp->TOP.top__DOT__immI 
                                                                 >> 0x20U))) 
                                                >> 8U))));
    vlSelf->__PVT__p[2U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                                              >> 0x30U)) 
                                     | (IData)(((QData)((IData)(
                                                                (vlSymsp->TOP.top__DOT__immI 
                                                                 >> 0x20U))) 
                                                >> 0x10U))));
    vlSelf->__PVT__p[3U] = (0xffU & ((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                                              >> 0x38U)) 
                                     | (IData)(((QData)((IData)(
                                                                (vlSymsp->TOP.top__DOT__immI 
                                                                 >> 0x20U))) 
                                                >> 0x18U))));
    vlSelf->__PVT__Pg = ((0xeU & (IData)(vlSelf->__PVT__Pg)) 
                         | ((0xffU == vlSelf->__PVT__p
                             [0U]) ? 1U : 0U));
    vlSelf->__PVT__Pg = ((0xdU & (IData)(vlSelf->__PVT__Pg)) 
                         | (((0xffU == vlSelf->__PVT__p
                              [1U]) ? 1U : 0U) << 1U));
    vlSelf->__PVT__Pg = ((0xbU & (IData)(vlSelf->__PVT__Pg)) 
                         | (((0xffU == vlSelf->__PVT__p
                              [2U]) ? 1U : 0U) << 2U));
    vlSelf->__PVT__Pg = ((7U & (IData)(vlSelf->__PVT__Pg)) 
                         | (((0xffU == vlSelf->__PVT__p
                              [3U]) ? 1U : 0U) << 3U));
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
    vlSelf->__Vcellout__gen__c = ((0xeU & (IData)(vlSelf->__Vcellout__gen__c)) 
                                  | (1U & ((IData)(vlSelf->__PVT__Gg) 
                                           | ((IData)(vlSelf->__PVT__Pg) 
                                              & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                                 >> 3U)))));
    vlSelf->__Vcellout__gen__c = ((0xdU & (IData)(vlSelf->__Vcellout__gen__c)) 
                                  | (2U & ((IData)(vlSelf->__PVT__Gg) 
                                           | ((IData)(vlSelf->__PVT__Pg) 
                                              & ((IData)(vlSelf->__Vcellout__gen__c) 
                                                 << 1U)))));
    vlSelf->__Vcellout__gen__c = ((0xbU & (IData)(vlSelf->__Vcellout__gen__c)) 
                                  | (4U & ((IData)(vlSelf->__PVT__Gg) 
                                           | ((IData)(vlSelf->__PVT__Pg) 
                                              & ((IData)(vlSelf->__Vcellout__gen__c) 
                                                 << 1U)))));
    vlSelf->__Vcellout__gen__c = ((7U & (IData)(vlSelf->__Vcellout__gen__c)) 
                                  | (8U & ((IData)(vlSelf->__PVT__Gg) 
                                           | ((IData)(vlSelf->__PVT__Pg) 
                                              & ((IData)(vlSelf->__Vcellout__gen__c) 
                                                 << 1U)))));
    vlSelf->__PVT__c = (((IData)(vlSelf->__Vcellout__gen__c) 
                         << 1U) | (1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                         >> 3U)));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 0x20U)) ^ (IData)((QData)((IData)(
                                                                   (vlSymsp->TOP.top__DOT__immI 
                                                                    >> 0x20U))))) 
                    ^ (IData)(vlSelf->__PVT__c))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 0x28U)) ^ (IData)(
                                                   ((QData)((IData)(
                                                                    (vlSymsp->TOP.top__DOT__immI 
                                                                     >> 0x20U))) 
                                                    >> 8U))) 
                    ^ ((IData)(vlSelf->__PVT__c) >> 1U))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 0x30U)) ^ (IData)(
                                                   ((QData)((IData)(
                                                                    (vlSymsp->TOP.top__DOT__immI 
                                                                     >> 0x20U))) 
                                                    >> 0x10U))) 
                    ^ ((IData)(vlSelf->__PVT__c) >> 2U))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 0x38U)) ^ (IData)(
                                                   ((QData)((IData)(
                                                                    (vlSymsp->TOP.top__DOT__immI 
                                                                     >> 0x20U))) 
                                                    >> 0x18U))) 
                    ^ ((IData)(vlSelf->__PVT__c) >> 3U))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & (IData)(vlSelf->__PVT__c)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__c) 
                          >> 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__c) 
                          >> 2U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__c) 
                          >> 3U)))));
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
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x21U)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 1U))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x22U)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 2U))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x23U)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 3U))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x29U)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 9U))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x2aU)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xaU))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x2bU)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xbU))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x31U)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x11U))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x32U)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x12U))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x33U)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x13U))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x39U)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x19U))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x3aU)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1aU))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x3bU)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1bU))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 0x24U)) ^ (IData)(
                                                   ((QData)((IData)(
                                                                    (vlSymsp->TOP.top__DOT__immI 
                                                                     >> 0x20U))) 
                                                    >> 4U))) 
                    ^ (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 0x2cU)) ^ (IData)(
                                                   ((QData)((IData)(
                                                                    (vlSymsp->TOP.top__DOT__immI 
                                                                     >> 0x20U))) 
                                                    >> 0xcU))) 
                    ^ (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 0x34U)) ^ (IData)(
                                                   ((QData)((IData)(
                                                                    (vlSymsp->TOP.top__DOT__immI 
                                                                     >> 0x20U))) 
                                                    >> 0x14U))) 
                    ^ (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                              >> 0x3cU)) ^ (IData)(
                                                   ((QData)((IData)(
                                                                    (vlSymsp->TOP.top__DOT__immI 
                                                                     >> 0x20U))) 
                                                    >> 0x1cU))) 
                    ^ (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__cout_temp = ((0xeU & (IData)(vlSelf->__PVT__cout_temp)) 
                                | (1U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 3U)));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x25U)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 5U))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x26U)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 6U))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x27U)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 7U))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__cout_temp = ((0xdU & (IData)(vlSelf->__PVT__cout_temp)) 
                                | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 2U)));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x2dU)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xdU))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x2eU)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xeU))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x2fU)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xfU))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__cout_temp = ((0xbU & (IData)(vlSelf->__PVT__cout_temp)) 
                                | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 1U)));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x35U)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x15U))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x36U)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x16U))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x37U)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x17U))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    vlSelf->__PVT__cout_temp = ((7U & (IData)(vlSelf->__PVT__cout_temp)) 
                                | (8U & (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x3dU)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1dU))) 
                     ^ (IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
                    << 1U)));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x3eU)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1eU))) 
                     << 2U) ^ (0xfffffffcU & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((((IData)((vlSymsp->TOP.top__DOT__my_exu__DOT__busa 
                               >> 0x3fU)) ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSymsp->TOP.top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1fU))) 
                     << 3U) ^ (0xfffffff8U & ((IData)(vlSelf->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
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
