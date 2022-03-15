// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root____Vdpiimwrap_top__DOT__my_exu__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp1;
    // Body
    __Vtemp1[0U] = 0x2e766364U;
    __Vtemp1[1U] = 0x64756d70U;
    __Vtemp1[2U] = 0x766c745fU;
    __Vtemp1[3U] = 0x6f67732fU;
    __Vtemp1[4U] = 0x6cU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("hello world\n");
    Vtop___024root____Vdpiimwrap_top__DOT__my_exu__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf);
}

void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5\n"); );
    // Body
    vlSelf->pc = vlSelf->top__DOT__my_ifu__DOT__now_pc;
}

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(CData/*0:0*/ done);

void Vtop___024root___initial__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__6\n"); );
    // Variables
    QData/*63:0*/ __Vtask_pmem_read__0__rdata;
    // Body
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->pc, __Vtask_pmem_read__0__rdata);
        vlSelf->top__DOT__my_ifu__DOT__rdata = __Vtask_pmem_read__0__rdata;
    }
    vlSelf->instr = (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata);
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
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_0e4c9530_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_53d48880_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_ed197e2d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_870583e7_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vtop__ConstPool__TABLE_7734b881_0;

void Vtop___024root___settle__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__7\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    // Body
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
}

void Vtop___024root___initial__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__8\n"); );
    // Body
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
}

void Vtop___024root___settle__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__9\n"); );
    // Body
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

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtop___024root___initial__TOP__6(vlSelf);
    Vtop___024root___initial__TOP__8(vlSelf);
}

void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low__1(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high__2(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__3(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__4(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf);

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop___024root___settle__TOP__7(vlSelf);
    Vtop___024root___settle__TOP__9(vlSelf);
    Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low__1((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high__2((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder1__DOT__adder_high));
    Vtop___024root___sequent__TOP__3(vlSelf);
    Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__3((&vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__4((&vlSymsp->TOP__top__DOT__my_exu__DOT__nextaddr__DOT__pcadder__DOT__adder_high));
    Vtop___024root___sequent__TOP__4(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ALUOp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Branch = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_ifu__DOT__fclk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_ifu__DOT__now_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_ifu__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__ExtOp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_exu__DOT__busa = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu_inA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu_inB = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__addr_res = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__res0 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
