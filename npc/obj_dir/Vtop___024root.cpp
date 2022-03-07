// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    // Body
    __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 = 0U;
    vlSelf->top__DOT__my_ifu__DOT__now_pc = ((IData)(vlSelf->rst)
                                              ? 0x80000000ULL
                                              : vlSelf->top__DOT__my_ifu__DOT__dnpc);
    if (vlSelf->top__DOT__wen) {
        __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 
            = vlSelf->top__DOT__my_exu__DOT__res;
        __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->instr_i >> 7U));
    }
    if (__Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0) {
        vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[__Vdlyvdim0__top__DOT__my_exu__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    }
    vlSelf->top__DOT__my_ifu__DOT__dnpc = (4ULL + vlSelf->top__DOT__my_ifu__DOT__now_pc);
    vlSelf->pc = vlSelf->top__DOT__my_ifu__DOT__now_pc;
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Body
    if (VL_LIKELY((0x13U == (0x7fU & vlSelf->instr_i)))) {
        if (VL_LIKELY((0U == (7U & (vlSelf->instr_i 
                                    >> 0xcU))))) {
            vlSelf->top__DOT__wen = 1U;
        } else {
            VL_FINISH_MT("vsrc/IDU.v", 32, "");
        }
    } else {
        VL_FINISH_MT("vsrc/IDU.v", 35, "");
    }
    vlSelf->top__DOT__my_exu__DOT__res = (((0U == (0x1fU 
                                                   & (vlSelf->instr_i 
                                                      >> 0xfU)))
                                            ? 0ULL : 
                                           vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->instr_i 
                                                >> 0xfU))]) 
                                          + (((- (QData)((IData)(
                                                                 (vlSelf->instr_i 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->instr_i 
                                                                >> 0x14U)))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__4(vlSelf);
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
}
#endif  // VL_DEBUG
