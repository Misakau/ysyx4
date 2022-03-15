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

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(CData/*0:0*/ done);
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_0e4c9530_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_53d48880_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_ed197e2d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_870583e7_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vtop__ConstPool__TABLE_7734b881_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    // Body
    __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 = 0U;
    if (((IData)(vlSelf->top__DOT__wen) & (~ (IData)(vlSelf->rst)))) {
        __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 
            = vlSelf->top__DOT__my_exu__DOT__res;
        __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                >> 7U)));
    }
    vlSelf->top__DOT__my_ifu__DOT__now_pc = ((IData)(vlSelf->rst)
                                              ? 0x80000000ULL
                                              : (0xfffffffffffffffeULL 
                                                 & vlSelf->top__DOT__my_exu__DOT__addr_res));
    if (__Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0) {
        vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[__Vdlyvdim0__top__DOT__my_exu__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    }
    vlSelf->pc = vlSelf->top__DOT__my_ifu__DOT__now_pc;
    VL_WRITEF("hh\n");
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->pc, vlSelf->__Vtask_pmem_read__0__rdata);
    vlSelf->top__DOT__my_ifu__DOT__rdata = vlSelf->__Vtask_pmem_read__0__rdata;
    vlSelf->instr = (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata);
    vlSelf->top__DOT__my_exu__DOT__busa = ((0U == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                              >> 0xfU))))
                                            ? 0ULL : 
                                           vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                                           [(0x1fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                        >> 0xfU)))]);
    if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                       >> 6U)))) {
        if (VL_LIKELY((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                     >> 5U))))) {
            if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                               >> 4U)))) {
                if (VL_UNLIKELY((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                               >> 3U))))) {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
                } else if (VL_UNLIKELY((1U & (IData)(
                                                     (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                      >> 2U))))) {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
                } else if (VL_LIKELY((1U & (IData)(
                                                   (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                    >> 1U))))) {
                    if (VL_LIKELY((1U & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)))) {
                        if (VL_LIKELY((1U == (0xfffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                         >> 0x14U)))))) {
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
                                                   & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
                }
            } else if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                      >> 3U)))) {
                if (VL_LIKELY((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                             >> 2U))))) {
                    if (VL_LIKELY((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                 >> 1U))))) {
                        if (VL_LIKELY((1U & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)))) {
                            vlSelf->top__DOT__Branch = 1U;
                            vlSelf->top__DOT__ALUSrcA = 0U;
                            vlSelf->top__DOT__ALUSrcB = 2U;
                            vlSelf->top__DOT__ALUOp = 0U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 4U;
                            vlSelf->top__DOT__wen = 1U;
                        } else {
                            VL_WRITEF("no, op=%x\n",
                                      7,(0x7fU & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
                        }
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
                }
            } else if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                      >> 2U)))) {
                if (VL_LIKELY((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                             >> 1U))))) {
                    if (VL_LIKELY((1U & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)))) {
                        vlSelf->top__DOT__Branch = 2U;
                        vlSelf->top__DOT__ALUSrcA = 0U;
                        vlSelf->top__DOT__ALUSrcB = 2U;
                        vlSelf->top__DOT__ALUOp = 0U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__wen = 1U;
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
                }
            } else if (VL_LIKELY((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                >> 1U))))) {
                if (VL_LIKELY((1U & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)))) {
                    if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                           >> 0xdU)))) {
                            if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                               >> 0xcU)))) {
                                vlSelf->top__DOT__ALUSrcA = 1U;
                                vlSelf->top__DOT__ALUSrcB = 0U;
                                vlSelf->top__DOT__ALUOp = 3U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                                vlSelf->top__DOT__Branch = 7U;
                                vlSelf->top__DOT__wen = 0U;
                            } else {
                                vlSelf->top__DOT__ALUSrcA = 1U;
                                vlSelf->top__DOT__ALUSrcB = 0U;
                                vlSelf->top__DOT__ALUOp = 3U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                                vlSelf->top__DOT__Branch = 6U;
                                vlSelf->top__DOT__wen = 0U;
                            }
                        } else if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                  >> 0xcU)))) {
                            vlSelf->top__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__ALUSrcB = 0U;
                            vlSelf->top__DOT__ALUOp = 2U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                            vlSelf->top__DOT__Branch = 7U;
                            vlSelf->top__DOT__wen = 0U;
                        } else {
                            vlSelf->top__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__ALUSrcB = 0U;
                            vlSelf->top__DOT__ALUOp = 2U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                            vlSelf->top__DOT__Branch = 6U;
                            vlSelf->top__DOT__wen = 0U;
                        }
                    } else if (VL_UNLIKELY((1U & (IData)(
                                                         (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                          >> 0xdU))))) {
                        VL_WRITEF("no\n");
                    } else if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                              >> 0xcU)))) {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 0U;
                        vlSelf->top__DOT__ALUOp = 2U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                        vlSelf->top__DOT__Branch = 5U;
                        vlSelf->top__DOT__wen = 0U;
                    } else {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 0U;
                        vlSelf->top__DOT__ALUOp = 2U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                        vlSelf->top__DOT__Branch = 4U;
                        vlSelf->top__DOT__wen = 0U;
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
        }
    } else if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                              >> 5U)))) {
        if (VL_LIKELY((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                     >> 4U))))) {
            if (VL_UNLIKELY((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                           >> 3U))))) {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
            } else if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                      >> 2U)))) {
                if (VL_LIKELY((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                             >> 1U))))) {
                    if (VL_LIKELY((1U & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)))) {
                        vlSelf->top__DOT__Branch = 0U;
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = 0xfU;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 1U;
                        vlSelf->top__DOT__wen = 1U;
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
                }
            } else if (VL_LIKELY((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                >> 1U))))) {
                if (VL_LIKELY((1U & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)))) {
                    vlSelf->top__DOT__Branch = 0U;
                    if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                           >> 0xdU)))) {
                            if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                               >> 0xcU)))) {
                                vlSelf->top__DOT__ALUSrcA = 1U;
                                vlSelf->top__DOT__ALUSrcB = 0U;
                                vlSelf->top__DOT__ALUOp = 7U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__wen = 1U;
                            } else {
                                vlSelf->top__DOT__ALUSrcA = 1U;
                                vlSelf->top__DOT__ALUSrcB = 0U;
                                vlSelf->top__DOT__ALUOp = 6U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__wen = 1U;
                            }
                        } else if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                  >> 0xcU)))) {
                            vlSelf->top__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__ALUSrcB = 0U;
                            vlSelf->top__DOT__ALUOp 
                                = ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                  >> 0x1eU)))
                                    ? 0xdU : 5U);
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__wen = 1U;
                        } else {
                            vlSelf->top__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__ALUSrcB = 0U;
                            vlSelf->top__DOT__ALUOp = 4U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__wen = 1U;
                        }
                    } else if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                              >> 0xdU)))) {
                        if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                           >> 0xcU)))) {
                            vlSelf->top__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__ALUSrcB = 0U;
                            vlSelf->top__DOT__ALUOp = 3U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__wen = 1U;
                        } else {
                            vlSelf->top__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__ALUSrcB = 0U;
                            vlSelf->top__DOT__ALUOp = 2U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__wen = 1U;
                        }
                    } else if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                              >> 0xcU)))) {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 0U;
                        vlSelf->top__DOT__ALUOp = 1U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                        vlSelf->top__DOT__wen = 1U;
                    } else {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 0U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                        vlSelf->top__DOT__wen = 1U;
                        vlSelf->top__DOT__ALUOp = (
                                                   (0x20U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                >> 0x19U))))
                                                    ? 8U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                 >> 0x19U))))
                                                     ? 9U
                                                     : 0U));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
        }
    } else if (VL_LIKELY((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                        >> 4U))))) {
        if (VL_UNLIKELY((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                       >> 3U))))) {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
        } else if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                  >> 2U)))) {
            if (VL_LIKELY((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                         >> 1U))))) {
                if (VL_LIKELY((1U & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)))) {
                    vlSelf->top__DOT__Branch = 0U;
                    vlSelf->top__DOT__ALUSrcA = 0U;
                    vlSelf->top__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 1U;
                    vlSelf->top__DOT__wen = 1U;
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
            }
        } else if (VL_LIKELY((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                            >> 1U))))) {
            if (VL_LIKELY((1U & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)))) {
                vlSelf->top__DOT__Branch = 0U;
                if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                   >> 0xeU)))) {
                    if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                       >> 0xdU)))) {
                        if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                           >> 0xcU)))) {
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
                    } else if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                              >> 0xcU)))) {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                               >> 0x1eU)))
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
                } else if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                          >> 0xdU)))) {
                    if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                       >> 0xcU)))) {
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
                } else if ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                          >> 0xcU)))) {
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
                VL_WRITEF("no, op=%x\n",7,(0x7fU & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
        }
    } else {
        VL_WRITEF("no, op=%x\n",7,(0x7fU & (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata)));
    }
    vlSelf->top__DOT__my_exu__DOT__alu_inA = ((IData)(vlSelf->top__DOT__ALUSrcA)
                                               ? vlSelf->top__DOT__my_exu__DOT__busa
                                               : vlSelf->pc);
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
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                 >> 0x1fU)))))) 
                                  << 0xcU) | (QData)((IData)(
                                                             (0xfffU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                         >> 0x14U))))));
    } else if ((1U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))) {
        vlSelf->top__DOT__imm = (((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((IData)(
                                                                       (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                        >> 0xcU)) 
                                                               << 0xcU))));
    } else if ((2U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))) {
        vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                 >> 0x1fU)))))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                           >> 0x19U)) 
                                                                  << 5U)) 
                                                              | (0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                            >> 7U)))))));
    } else if ((3U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))) {
        vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                 >> 0x1fU)))))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0x800U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                           >> 7U)) 
                                                                  << 0xbU)) 
                                                              | ((0x7e0U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                              >> 0x19U)) 
                                                                     << 5U)) 
                                                                 | (0x1eU 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                                >> 8U)) 
                                                                       << 1U)))))));
    } else if ((4U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))) {
        vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                 >> 0x1fU)))))) 
                                  << 0x14U) | (QData)((IData)(
                                                              ((0xff000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                            >> 0xcU)) 
                                                                   << 0xcU)) 
                                                               | ((0x800U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                               >> 0x14U)) 
                                                                      << 0xbU)) 
                                                                  | (0x7feU 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                                >> 0x15U)) 
                                                                        << 1U)))))));
    } else if ((5U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))) {
        vlSelf->top__DOT__imm = 0ULL;
    }
    vlSelf->top__DOT__my_exu__DOT__alu_inB = ((1U == (IData)(vlSelf->top__DOT__ALUSrcB))
                                               ? vlSelf->top__DOT__imm
                                               : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ALUSrcB))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                                >> 0x14U))))
                                                    ? 0ULL
                                                    : 
                                                   vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                                                   [
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                               >> 0x14U)))])
                                                   : 4ULL));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
        = (vlSelf->top__DOT__my_exu__DOT__alu_inB ^ 
           (- (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr))));
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_4f660885_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_1d882cf2_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx2;
    // Body
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
    vlSelf->top__DOT__my_exu__DOT__res = ((0U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                           ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0
                                           : ((1U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                               ? (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                  & vlSelf->top__DOT__my_exu__DOT__alu_inB)
                                               : ((2U 
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
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     << 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))
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
    __Vtableidx2 = ((0x10U & ((IData)(vlSelf->top__DOT__my_exu__DOT__res) 
                              << 4U)) | ((((0ULL == vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0)
                                            ? 1U : 0U) 
                                          << 3U) | (IData)(vlSelf->top__DOT__Branch)));
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexA 
        = Vtop__ConstPool__TABLE_4f660885_0[__Vtableidx2];
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexB 
        = Vtop__ConstPool__TABLE_1d882cf2_0[__Vtableidx2];
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexB)
            ? vlSelf->top__DOT__imm : 4ULL);
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexA)
            ? vlSelf->top__DOT__my_exu__DOT__busa : vlSelf->pc);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
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
}

void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low__1(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high__2(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__3(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__4(Vtop_ysyx_220053_Adder32* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low__1((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low));
        Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high__2((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high));
        Vtop___024root___sequent__TOP__3(vlSelf);
        Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__3((&vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low));
        Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__4((&vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high));
        Vtop___024root___sequent__TOP__4(vlSelf);
    }
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
