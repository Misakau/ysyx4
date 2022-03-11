// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__my_ifu__DOT__now_pc = ((IData)(vlSelf->rst)
                                              ? 0x80000000ULL
                                              : vlSelf->top__DOT__my_ifu__DOT__dnpc);
    vlSelf->top__DOT__my_ifu__DOT__dnpc = (4ULL + vlSelf->top__DOT__my_ifu__DOT__now_pc);
    vlSelf->pc = vlSelf->top__DOT__my_ifu__DOT__now_pc;
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__immI = (((- (QData)((IData)((vlSelf->instr_i 
                                                   >> 0x1fU)))) 
                               << 0xcU) | (QData)((IData)(
                                                          (vlSelf->instr_i 
                                                           >> 0x14U))));
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5\n"); );
    // Body
    VL_WRITEF("wen = %1#, wdata= %x, waddr = %x\n0#: %x\n1#: %x\n2#: %x\n3#: %x\n",
              1,vlSelf->top__DOT__wen,64,(((QData)((IData)(
                                                           ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                                             [3U] 
                                                             << 0x18U) 
                                                            | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                                                [2U] 
                                                                << 0x10U) 
                                                               | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                                                   [1U] 
                                                                   << 8U) 
                                                                  | vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                                                  [0U]))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                                              [3U] 
                                                              << 0x18U) 
                                                             | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                                                 [2U] 
                                                                 << 0x10U) 
                                                                | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                                                    [1U] 
                                                                    << 8U) 
                                                                   | vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                                                   [0U])))))),
              5,(0x1fU & (vlSelf->instr_i >> 7U)),64,
              vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
              [0U],64,vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
              [1U],64,vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
              [2U],64,vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
              [3U]);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__6\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    // Body
    __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 = 0U;
    if (vlSelf->top__DOT__wen) {
        __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 
            = (((QData)((IData)(((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                  [3U] << 0x18U) | 
                                 ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                   [2U] << 0x10U) | 
                                  ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                    [1U] << 8U) | vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                   [0U]))))) << 0x20U) 
               | (QData)((IData)(((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                   [3U] << 0x18U) | 
                                  ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                    [2U] << 0x10U) 
                                   | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                       [1U] << 8U) 
                                      | vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                      [0U]))))));
        __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->instr_i >> 7U));
    }
    if (__Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0) {
        vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[__Vdlyvdim0__top__DOT__my_exu__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    }
}

void Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(CData/*0:0*/ done);

VL_INLINE_OPT void Vtop___024root___combo__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__7\n"); );
    // Body
    if ((0x13U == (0x7fU & vlSelf->instr_i))) {
        if (VL_LIKELY((0U == (7U & (vlSelf->instr_i 
                                    >> 0xcU))))) {
            vlSelf->top__DOT__wen = 1U;
        } else {
            VL_WRITEF("no\n");
        }
    } else if (VL_LIKELY((0x73U == (0x7fU & vlSelf->instr_i)))) {
        if (VL_LIKELY((1ULL == vlSelf->top__DOT__immI))) {
            Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(1U);
        } else {
            VL_WRITEF("no\n");
        }
    } else {
        VL_WRITEF("no\n");
    }
    vlSelf->top__DOT__my_exu__DOT__busa = ((0U == (0x1fU 
                                                   & (vlSelf->instr_i 
                                                      >> 0xfU)))
                                            ? 0ULL : 
                                           vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->instr_i 
                                                >> 0xfU))]);
}

void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__1(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__2(Vtop_ysyx_220053_Adder32* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    Vtop___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__7(vlSelf);
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__1((&vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__2((&vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high));
    Vtop___024root___settle__TOP__5(vlSelf);
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
    __req |= ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low____Vcellout__gen__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__gen__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high____Vcellout__gen__c)
        || (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low____Vcellout__gen__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLU4.v:3: __Vcellout__gen__c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[0].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[0].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[1].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[1].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[2].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[2].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[3].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[3].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__gen__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high____Vcellout__gen__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLU4.v:3: __Vcellout__gen__c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[0].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[0].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[1].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[1].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[2].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[2].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[3].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: vsrc/CLA4.v:10: genblk2[3].adder8.adder_high.c\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low____Vcellout__gen__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high____Vcellout__gen__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__gen__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlSelf->__Vchglast__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c;
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
}
#endif  // VL_DEBUG
