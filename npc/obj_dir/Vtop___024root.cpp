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
    vlSelf->top__DOT__my_ifu__DOT__dnpc = (4ULL + vlSelf->top__DOT__my_ifu__DOT__now_pc);
    vlSelf->pc = vlSelf->top__DOT__my_ifu__DOT__now_pc;
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__4\n"); );
    // Body
    VL_WRITEF("wen = %1#,raaddr=%2#, radata=%x, rbddr=%2#, rbdata=%x, wdata= %x, waddr = %x\n0#: %x\n1#: %x\n2#: %x\n3#: %x\n",
              1,vlSelf->top__DOT__wen,5,(IData)(vlSelf->top__DOT__rs1),
              64,vlSelf->top__DOT__my_exu__DOT__busa,
              5,(0x1fU & (vlSelf->instr_i >> 0x14U)),
              64,((0U == (0x1fU & (vlSelf->instr_i 
                                   >> 0x14U))) ? 0ULL
                   : vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                  [(0x1fU & (vlSelf->instr_i >> 0x14U))]),
              64,(((QData)((IData)(((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                     [3U] << 0x18U) 
                                    | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                        [2U] << 0x10U) 
                                       | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                           [1U] << 8U) 
                                          | vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                          [0U]))))) 
                   << 0x20U) | (QData)((IData)(((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
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

void Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(CData/*0:0*/ done);

VL_INLINE_OPT void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__5\n"); );
    // Body
    if ((0x37U == (0x7fU & vlSelf->instr_i))) {
        vlSelf->top__DOT__ALUSrcB = 1U;
        vlSelf->top__DOT__my_idu__DOT__ExtOp = 1U;
        vlSelf->top__DOT__wen = 1U;
    } else if ((0x13U == (0x7fU & vlSelf->instr_i))) {
        if (VL_LIKELY((0U == (7U & (vlSelf->instr_i 
                                    >> 0xcU))))) {
            vlSelf->top__DOT__ALUSrcB = 1U;
            vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
            vlSelf->top__DOT__wen = 1U;
        } else {
            VL_WRITEF("no\n");
        }
    } else if (VL_LIKELY((0x73U == (0x7fU & vlSelf->instr_i)))) {
        if (VL_LIKELY((1U == (vlSelf->instr_i >> 0x14U)))) {
            vlSelf->top__DOT__ALUSrcB = 1U;
            vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
            vlSelf->top__DOT__wen = 0U;
            Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(1U);
        } else {
            VL_WRITEF("no\n");
        }
    } else {
        VL_WRITEF("no\n");
    }
    if ((0U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))) {
        vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                     (vlSelf->instr_i 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             (vlSelf->instr_i 
                                                              >> 0x14U))));
    } else if ((1U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))) {
        vlSelf->top__DOT__imm = (((QData)((IData)((- (IData)(
                                                             (vlSelf->instr_i 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->instr_i))));
    } else if ((2U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))) {
        vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                     (vlSelf->instr_i 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->instr_i 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->instr_i 
                                                                    >> 7U))))));
    } else if ((3U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))) {
        vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                     (vlSelf->instr_i 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0x800U 
                                                               & (vlSelf->instr_i 
                                                                  << 4U)) 
                                                              | ((0x7e0U 
                                                                  & (vlSelf->instr_i 
                                                                     >> 0x14U)) 
                                                                 | (0x1eU 
                                                                    & (vlSelf->instr_i 
                                                                       >> 7U)))))));
    } else if ((4U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))) {
        vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                     (vlSelf->instr_i 
                                                      >> 0x1fU)))) 
                                  << 0x14U) | (QData)((IData)(
                                                              ((0xff000U 
                                                                & vlSelf->instr_i) 
                                                               | ((0x800U 
                                                                   & (vlSelf->instr_i 
                                                                      >> 9U)) 
                                                                  | (0x7feU 
                                                                     & (vlSelf->instr_i 
                                                                        >> 0x14U)))))));
    } else if ((5U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))) {
        vlSelf->top__DOT__imm = 0ULL;
    }
    vlSelf->top__DOT__rs1 = (0x1fU & ((1U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                       ? (vlSelf->instr_i 
                                          >> 7U) : 
                                      (vlSelf->instr_i 
                                       >> 0xfU)));
    vlSelf->top__DOT__my_exu__DOT__alu_inB = ((IData)(vlSelf->top__DOT__ALUSrcB)
                                               ? vlSelf->top__DOT__imm
                                               : ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->instr_i 
                                                       >> 0x14U)))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->instr_i 
                                                      >> 0x14U))]));
    vlSelf->top__DOT__my_exu__DOT__busa = ((0U == (IData)(vlSelf->top__DOT__rs1))
                                            ? 0ULL : 
                                           vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                                           [vlSelf->top__DOT__rs1]);
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
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low__1((&vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high__2((&vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high));
    Vtop___024root___settle__TOP__4(vlSelf);
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
