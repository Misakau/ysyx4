// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__my_exu__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__my_exu__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

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
                                              : (((QData)((IData)(
                                                                  ((vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                                                    [3U] 
                                                                    << 0x18U) 
                                                                   | ((vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                                                       [2U] 
                                                                       << 0x10U) 
                                                                      | ((vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                                                          [1U] 
                                                                          << 8U) 
                                                                         | vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                                                         [0U]))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                                                     [3U] 
                                                                     << 0x18U) 
                                                                    | ((vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                                                        [2U] 
                                                                        << 0x10U) 
                                                                       | ((vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                                                           [1U] 
                                                                           << 8U) 
                                                                          | (0xfeU 
                                                                             & vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                                                             [0U]))))))));
    if (((IData)(vlSelf->top__DOT__wen) & (~ (IData)(vlSelf->rst)))) {
        __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 
            = ((0xfU == (IData)(vlSelf->top__DOT__ALUOp))
                ? vlSelf->top__DOT__my_exu__DOT__alu_inB
                : (((QData)((IData)(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                      [3U] << 0x18U) 
                                     | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                         [2U] << 0x10U) 
                                        | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                            [1U] << 8U) 
                                           | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                           [0U]))))) 
                    << 0x20U) | (QData)((IData)(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                                  [3U] 
                                                  << 0x18U) 
                                                 | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                                     [2U] 
                                                     << 0x10U) 
                                                    | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                                        [1U] 
                                                        << 8U) 
                                                       | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                                       [0U])))))));
        __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->instr_i >> 7U));
    }
    if (__Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0) {
        vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[__Vdlyvdim0__top__DOT__my_exu__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    }
    vlSelf->pc = vlSelf->top__DOT__my_ifu__DOT__now_pc;
}

void Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(CData/*0:0*/ done);

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Body
    if ((0x40U & vlSelf->instr_i)) {
        if (VL_LIKELY((0x20U & vlSelf->instr_i))) {
            if ((0x10U & vlSelf->instr_i)) {
                if (VL_UNLIKELY((8U & vlSelf->instr_i))) {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->instr_i));
                } else if (VL_UNLIKELY((4U & vlSelf->instr_i))) {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->instr_i));
                } else if (VL_LIKELY((2U & vlSelf->instr_i))) {
                    if (VL_LIKELY((1U & vlSelf->instr_i))) {
                        if (VL_LIKELY((1U == (vlSelf->instr_i 
                                              >> 0x14U)))) {
                            vlSelf->top__DOT__Branch = 0U;
                            vlSelf->top__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__ALUSrcB = 1U;
                            vlSelf->top__DOT__ALUOp = 0U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                            vlSelf->top__DOT__wen = 0U;
                            Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(1U);
                        } else {
                            VL_WRITEF("no\n");
                        }
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->instr_i));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->instr_i));
                }
            } else if ((8U & vlSelf->instr_i)) {
                if (VL_LIKELY((4U & vlSelf->instr_i))) {
                    if (VL_LIKELY((2U & vlSelf->instr_i))) {
                        if (VL_LIKELY((1U & vlSelf->instr_i))) {
                            vlSelf->top__DOT__Branch = 1U;
                            vlSelf->top__DOT__ALUSrcA = 0U;
                            vlSelf->top__DOT__ALUSrcB = 2U;
                            vlSelf->top__DOT__ALUOp = 0U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 4U;
                            vlSelf->top__DOT__wen = 1U;
                        } else {
                            VL_WRITEF("no, op=%x\n",
                                      7,(0x7fU & vlSelf->instr_i));
                        }
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->instr_i));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->instr_i));
                }
            } else if (VL_LIKELY((4U & vlSelf->instr_i))) {
                if (VL_LIKELY((2U & vlSelf->instr_i))) {
                    if (VL_LIKELY((1U & vlSelf->instr_i))) {
                        vlSelf->top__DOT__Branch = 2U;
                        vlSelf->top__DOT__ALUSrcA = 0U;
                        vlSelf->top__DOT__ALUSrcB = 2U;
                        vlSelf->top__DOT__ALUOp = 0U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__wen = 1U;
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->instr_i));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->instr_i));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->instr_i));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->instr_i));
        }
    } else if ((0x20U & vlSelf->instr_i)) {
        if (VL_LIKELY((0x10U & vlSelf->instr_i))) {
            if (VL_UNLIKELY((8U & vlSelf->instr_i))) {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->instr_i));
            } else if (VL_LIKELY((4U & vlSelf->instr_i))) {
                if (VL_LIKELY((2U & vlSelf->instr_i))) {
                    if (VL_LIKELY((1U & vlSelf->instr_i))) {
                        vlSelf->top__DOT__Branch = 0U;
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = 0xfU;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 1U;
                        vlSelf->top__DOT__wen = 1U;
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->instr_i));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->instr_i));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->instr_i));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->instr_i));
        }
    } else if (VL_LIKELY((0x10U & vlSelf->instr_i))) {
        if (VL_UNLIKELY((8U & vlSelf->instr_i))) {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->instr_i));
        } else if ((4U & vlSelf->instr_i)) {
            if (VL_LIKELY((2U & vlSelf->instr_i))) {
                if (VL_LIKELY((1U & vlSelf->instr_i))) {
                    vlSelf->top__DOT__Branch = 0U;
                    vlSelf->top__DOT__ALUSrcA = 0U;
                    vlSelf->top__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 1U;
                    vlSelf->top__DOT__wen = 1U;
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->instr_i));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->instr_i));
            }
        } else if (VL_LIKELY((2U & vlSelf->instr_i))) {
            if (VL_LIKELY((1U & vlSelf->instr_i))) {
                vlSelf->top__DOT__Branch = 0U;
                if (VL_LIKELY((0U == (7U & (vlSelf->instr_i 
                                            >> 0xcU))))) {
                    vlSelf->top__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__wen = 1U;
                } else {
                    VL_WRITEF("no\n");
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->instr_i));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->instr_i));
        }
    } else {
        VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->instr_i));
    }
    vlSelf->top__DOT__my_exu__DOT__busa = ((0U == (0x1fU 
                                                   & (vlSelf->instr_i 
                                                      >> 0xfU)))
                                            ? 0ULL : 
                                           vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->instr_i 
                                                >> 0xfU))]);
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexB 
        = ((1U == (IData)(vlSelf->top__DOT__Branch)) 
           | (2U == (IData)(vlSelf->top__DOT__Branch)));
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexA 
        = ((1U != (IData)(vlSelf->top__DOT__Branch)) 
           & (2U == (IData)(vlSelf->top__DOT__Branch)));
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
    vlSelf->top__DOT__my_exu__DOT__alu_inA = ((IData)(vlSelf->top__DOT__ALUSrcA)
                                               ? vlSelf->top__DOT__my_exu__DOT__busa
                                               : vlSelf->pc);
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexA)
            ? vlSelf->top__DOT__my_exu__DOT__busa : vlSelf->pc);
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexB)
            ? vlSelf->top__DOT__imm : 4ULL);
    vlSelf->top__DOT__my_exu__DOT__alu_inB = ((1U == (IData)(vlSelf->top__DOT__ALUSrcB))
                                               ? vlSelf->top__DOT__imm
                                               : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ALUSrcB))
                                                   ? 
                                                  ((0U 
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
                                                       >> 0x14U))])
                                                   : 4ULL));
}

void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__1(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__2(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__3(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__4(Vtop_ysyx_220053_Adder32* vlSelf);

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
    vlSelf->__Vm_traceActivity[2U] = 1U;
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__1((&vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__2((&vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__3((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__4((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high));
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
