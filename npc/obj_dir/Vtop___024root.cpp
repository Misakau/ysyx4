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

VL_INLINE_OPT void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__my_exu__DOT__addr_res = (((QData)((IData)(
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
                                                                        | vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                                                        [0U]))))));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0 
        = (((QData)((IData)(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__ff
                              [3U] << 0x18U) | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__ff
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__ff
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__ff
                                                   [0U]))))) 
            << 0x20U) | (QData)((IData)(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low.__PVT__ff
                                               [0U]))))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    // Body
    __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 = 0U;
    vlSelf->top__DOT__my_ifu__DOT__now_pc = ((IData)(vlSelf->rst)
                                              ? 0x80000000ULL
                                              : (0xfffffffffffffffeULL 
                                                 & vlSelf->top__DOT__my_exu__DOT__addr_res));
    if (((IData)(vlSelf->top__DOT__wen) & (~ (IData)(vlSelf->rst)))) {
        __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 
            = ((0U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0
                : ((1U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                    ? (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                       & vlSelf->top__DOT__my_exu__DOT__alu_inB)
                    : ((2U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                        ? (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                           | vlSelf->top__DOT__my_exu__DOT__alu_inB)
                        : ((3U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                            ? (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                               ^ vlSelf->top__DOT__my_exu__DOT__alu_inB)
                            : ((4U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4
                                : ((5U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                    ? vlSelf->top__DOT__my_exu__DOT__alu_inB
                                    : ((6U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
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
                                                                           (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0 
                                                                            >> 0x3fU))) 
                                                                | (((IData)(
                                                                            (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                                             >> 0x3fU)) 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                               >> 0x3fU))) 
                                                                   & (~ (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0 
                                                                                >> 0x3fU))))) 
                                                               ^ (IData)(
                                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0 
                                                                          >> 0x3fU)))
                                                               : 
                                                              (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high.__PVT__cout_temp) 
                                                                >> 3U) 
                                                               ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr))))))
                                        : 0ULL)))))));
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
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_0e4c9530_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_53d48880_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_ed197e2d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_870583e7_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vtop__ConstPool__TABLE_7734b881_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__5\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
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
                if ((0x4000U & vlSelf->instr_i)) {
                    if ((0x2000U & vlSelf->instr_i)) {
                        if ((0x1000U & vlSelf->instr_i)) {
                            vlSelf->top__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__ALUSrcB = 1U;
                            vlSelf->top__DOT__ALUOp = 7U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                            vlSelf->top__DOT__wen = 1U;
                        } else {
                            vlSelf->top__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__ALUSrcB = 1U;
                            vlSelf->top__DOT__ALUOp = 6U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                            vlSelf->top__DOT__wen = 1U;
                        }
                    } else if ((0x1000U & vlSelf->instr_i)) {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = (
                                                   (0x40000000U 
                                                    & vlSelf->instr_i)
                                                    ? 0xdU
                                                    : 5U);
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__wen = 1U;
                    } else {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = 4U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__wen = 1U;
                    }
                } else if ((0x2000U & vlSelf->instr_i)) {
                    if ((0x1000U & vlSelf->instr_i)) {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = 3U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__wen = 1U;
                    } else {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = 2U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__wen = 1U;
                    }
                } else if ((0x1000U & vlSelf->instr_i)) {
                    vlSelf->top__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__ALUOp = 1U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__wen = 1U;
                } else {
                    vlSelf->top__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__wen = 1U;
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
    __Vtableidx1 = vlSelf->top__DOT__ALUOp;
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr 
        = Vtop__ConstPool__TABLE_0e4c9530_0[__Vtableidx1];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr 
        = Vtop__ConstPool__TABLE_53d48880_0[__Vtableidx1];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr 
        = Vtop__ConstPool__TABLE_ed197e2d_0[__Vtableidx1];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr 
        = Vtop__ConstPool__TABLE_870583e7_0[__Vtableidx1];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr 
        = Vtop__ConstPool__TABLE_7734b881_0[__Vtableidx1];
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
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr)
            ? (1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                             >> 0x3fU))) : 0U);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
        = (vlSelf->top__DOT__my_exu__DOT__alu_inB ^ 
           (- (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr))));
    if (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr) {
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | (IData)((IData)((1U & ((0U >= ((IData)(0x40U) 
                                                - (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                         ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                         : (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((1U >= ((IData)(0x40U) 
                                                 - 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 1U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((2U >= ((IData)(0x40U) 
                                                 - 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 2U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((3U >= ((IData)(0x40U) 
                                                 - 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(3U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 3U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((4U >= ((IData)(0x40U) 
                                                 - 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(4U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 4U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((5U >= ((IData)(0x40U) 
                                                 - 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(5U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 5U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((6U >= ((IData)(0x40U) 
                                                 - 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(6U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 6U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((7U >= ((IData)(0x40U) 
                                                 - 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(7U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 7U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((8U >= ((IData)(0x40U) 
                                                 - 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(8U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 8U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((9U >= ((IData)(0x40U) 
                                                 - 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(9U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 9U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0xaU >= ((IData)(0x40U) 
                                                   - 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0xaU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0xaU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0xbU >= ((IData)(0x40U) 
                                                   - 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0xbU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0xbU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0xcU >= ((IData)(0x40U) 
                                                   - 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0xcU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0xcU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0xdU >= ((IData)(0x40U) 
                                                   - 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0xdU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0xdU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0xeU >= ((IData)(0x40U) 
                                                   - 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0xeU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0xeU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0xfU >= ((IData)(0x40U) 
                                                   - 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0xfU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0xfU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x10U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x10U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x10U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x11U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x11U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x11U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x12U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x12U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x12U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x13U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x13U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x13U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x14U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x14U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x14U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x15U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x15U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x15U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x16U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x16U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x16U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x17U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x17U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x17U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x18U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x18U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x18U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x19U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x19U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x19U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x1aU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x1aU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x1aU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x1bU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x1bU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x1bU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x1cU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x1cU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x1cU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x1dU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x1dU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x1dU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x1eU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x1eU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x1eU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x1fU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x1fU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x1fU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x20U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x20U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x20U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x21U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x21U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x21U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x22U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x22U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x22U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x23U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x23U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x23U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x24U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x24U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x24U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x25U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x25U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x25U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x26U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x26U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x26U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x27U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x27U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x27U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x28U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x28U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x28U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x29U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x29U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x29U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x2aU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x2aU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x2aU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x2bU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x2bU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x2bU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x2cU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x2cU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x2cU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x2dU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x2dU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x2dU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x2eU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x2eU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x2eU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x2fU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x2fU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x2fU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x30U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x30U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x30U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x31U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x31U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x31U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x32U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x32U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x32U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x33U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x33U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x33U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x34U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x34U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x34U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x35U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x35U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x35U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x36U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x36U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x36U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x37U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x37U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x37U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x38U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x38U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x38U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x39U >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x39U) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x39U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x3aU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x3aU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x3aU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x3bU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x3bU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x3bU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x3cU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x3cU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x3cU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x3dU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x3dU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x3dU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x3eU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x3eU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x3eU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & ((0x3fU >= 
                                          ((IData)(0x40U) 
                                           - (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                          ? (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__shifter__DOT__sgn)
                                          : (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 
                                                     (0x3fU 
                                                      & ((IData)(0x3fU) 
                                                         + (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))))))) 
                  << 0x3fU));
    } else {
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | (IData)((IData)(((0U >= (0x3fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                  & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                             >> (0x3fU 
                                                 & (- (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((1U >= (0x3fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(1U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 1U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((2U >= (0x3fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(2U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 2U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((3U >= (0x3fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(3U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 3U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((4U >= (0x3fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(4U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 4U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((5U >= (0x3fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(5U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 5U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((6U >= (0x3fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(6U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 6U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((7U >= (0x3fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 7U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((8U >= (0x3fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(8U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 8U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((9U >= (0x3fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(9U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 9U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0xaU >= (0x3fU 
                                             & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0xaU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0xaU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0xbU >= (0x3fU 
                                             & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0xbU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0xbU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0xcU >= (0x3fU 
                                             & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0xcU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0xcU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0xdU >= (0x3fU 
                                             & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0xdU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0xdU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0xeU >= (0x3fU 
                                             & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0xeU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0xeU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0xfU >= (0x3fU 
                                             & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0xfU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0xfU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x10U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x10U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x10U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x11U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x11U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x11U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x12U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x12U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x12U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x13U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x13U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x13U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x14U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x14U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x14U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x15U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x15U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x15U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x16U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x16U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x16U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x17U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x17U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x17U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x18U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x18U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x18U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x19U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x19U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x19U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x1aU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x1aU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x1aU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x1bU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x1bU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x1bU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x1cU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x1cU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x1cU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x1dU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x1dU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x1dU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x1eU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x1eU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x1eU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x1fU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x1fU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x1fU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x20U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x20U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x20U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x21U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x21U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x21U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x22U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x22U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x22U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x23U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x23U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x23U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x24U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x24U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x24U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x25U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x25U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x25U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x26U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x26U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x26U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x27U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x27U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x27U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x28U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x28U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x28U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x29U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x29U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x29U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x2aU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x2aU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x2aU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x2bU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x2bU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x2bU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x2cU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x2cU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x2cU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x2dU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x2dU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x2dU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x2eU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x2eU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x2eU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x2fU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x2fU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x2fU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x30U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x30U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x30U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x31U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x31U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x31U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x32U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x32U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x32U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x33U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x33U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x33U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x34U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x34U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x34U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x35U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x35U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x35U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x36U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x36U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x36U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x37U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x37U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x37U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x38U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x38U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x38U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x39U >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x39U) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x39U));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x3aU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x3aU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x3aU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x3bU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x3bU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x3bU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x3cU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x3cU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x3cU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x3dU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x3dU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x3dU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)(((0x3eU >= (0x3fU 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))) 
                                   & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> (0x3fU 
                                                  & ((IData)(0x3eU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x3eU));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(0x3fU) 
                                                     - (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))))) 
                  << 0x3fU));
    }
}

void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__1(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__2(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low__3(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high__4(Vtop_ysyx_220053_Adder32* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__1((&vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__2((&vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low__3((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high__4((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high));
    Vtop___024root___settle__TOP__3(vlSelf);
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
