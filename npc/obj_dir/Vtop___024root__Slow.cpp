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

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(CData/*0:0*/ done);
extern const VlUnpacked<CData/*7:0*/, 8> Vtop__ConstPool__TABLE_6ec5454f_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_0e4c9530_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_53d48880_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_ed197e2d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_870583e7_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vtop__ConstPool__TABLE_7734b881_0;

void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    // Body
    vlSelf->pc = vlSelf->top__DOT__my_ifu__DOT__now_pc;
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->pc, vlSelf->__Vtask_pmem_read__0__rdata);
    vlSelf->top__DOT__my_ifu__DOT__rdata = vlSelf->__Vtask_pmem_read__0__rdata;
    vlSelf->top__DOT__instr_i = ((1U & (IData)((vlSelf->pc 
                                                >> 2U)))
                                  ? (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                             >> 0x20U))
                                  : (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata));
    vlSelf->instr = vlSelf->top__DOT__instr_i;
    vlSelf->top__DOT__my_exu__DOT__busa = ((0U == (0x1fU 
                                                   & (vlSelf->top__DOT__instr_i 
                                                      >> 0xfU)))
                                            ? 0ULL : 
                                           vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->top__DOT__instr_i 
                                                >> 0xfU))]);
    vlSelf->top__DOT__my_exu__DOT__busb = ((0U == (0x1fU 
                                                   & (vlSelf->top__DOT__instr_i 
                                                      >> 0x14U)))
                                            ? 0ULL : 
                                           vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                                           [(0x1fU 
                                             & (vlSelf->top__DOT__instr_i 
                                                >> 0x14U))]);
    if ((0x40U & vlSelf->top__DOT__instr_i)) {
        if (VL_LIKELY((0x20U & vlSelf->top__DOT__instr_i))) {
            if ((0x10U & vlSelf->top__DOT__instr_i)) {
                if (VL_UNLIKELY((8U & vlSelf->top__DOT__instr_i))) {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__instr_i));
                } else if (VL_UNLIKELY((4U & vlSelf->top__DOT__instr_i))) {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__instr_i));
                } else if (VL_LIKELY((2U & vlSelf->top__DOT__instr_i))) {
                    if (VL_LIKELY((1U & vlSelf->top__DOT__instr_i))) {
                        if (VL_LIKELY((1U == (vlSelf->top__DOT__instr_i 
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
                                                   & vlSelf->top__DOT__instr_i));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__instr_i));
                }
            } else if ((8U & vlSelf->top__DOT__instr_i)) {
                if (VL_LIKELY((4U & vlSelf->top__DOT__instr_i))) {
                    if (VL_LIKELY((2U & vlSelf->top__DOT__instr_i))) {
                        if (VL_LIKELY((1U & vlSelf->top__DOT__instr_i))) {
                            vlSelf->top__DOT__MemOp = 3U;
                            vlSelf->top__DOT__MemToReg = 0U;
                            vlSelf->top__DOT__Branch = 1U;
                            vlSelf->top__DOT__ALUSrcA = 0U;
                            vlSelf->top__DOT__ALUSrcB = 2U;
                            vlSelf->top__DOT__ALUOp = 0U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 4U;
                            vlSelf->top__DOT__wen = 1U;
                        } else {
                            VL_WRITEF("no, op=%x\n",
                                      7,(0x7fU & vlSelf->top__DOT__instr_i));
                        }
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->top__DOT__instr_i));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__instr_i));
                }
            } else if ((4U & vlSelf->top__DOT__instr_i)) {
                if (VL_LIKELY((2U & vlSelf->top__DOT__instr_i))) {
                    if (VL_LIKELY((1U & vlSelf->top__DOT__instr_i))) {
                        vlSelf->top__DOT__MemOp = 3U;
                        vlSelf->top__DOT__MemToReg = 0U;
                        vlSelf->top__DOT__Branch = 2U;
                        vlSelf->top__DOT__ALUSrcA = 0U;
                        vlSelf->top__DOT__ALUSrcB = 2U;
                        vlSelf->top__DOT__ALUOp = 0U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__wen = 1U;
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->top__DOT__instr_i));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__instr_i));
                }
            } else if (VL_LIKELY((2U & vlSelf->top__DOT__instr_i))) {
                if (VL_LIKELY((1U & vlSelf->top__DOT__instr_i))) {
                    vlSelf->top__DOT__MemOp = 3U;
                    vlSelf->top__DOT__MemToReg = 0U;
                    if ((0x4000U & vlSelf->top__DOT__instr_i)) {
                        if ((0x2000U & vlSelf->top__DOT__instr_i)) {
                            if ((0x1000U & vlSelf->top__DOT__instr_i)) {
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
                        } else if ((0x1000U & vlSelf->top__DOT__instr_i)) {
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
                    } else if (VL_UNLIKELY((0x2000U 
                                            & vlSelf->top__DOT__instr_i))) {
                        VL_WRITEF("no\n");
                    } else if ((0x1000U & vlSelf->top__DOT__instr_i)) {
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
                                               & vlSelf->top__DOT__instr_i));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
        }
    } else if ((0x20U & vlSelf->top__DOT__instr_i)) {
        if ((0x10U & vlSelf->top__DOT__instr_i)) {
            if (VL_UNLIKELY((8U & vlSelf->top__DOT__instr_i))) {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
            } else if ((4U & vlSelf->top__DOT__instr_i)) {
                if (VL_LIKELY((2U & vlSelf->top__DOT__instr_i))) {
                    if (VL_LIKELY((1U & vlSelf->top__DOT__instr_i))) {
                        vlSelf->top__DOT__MemOp = 3U;
                        vlSelf->top__DOT__MemToReg = 0U;
                        vlSelf->top__DOT__Branch = 0U;
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = 0xfU;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 1U;
                        vlSelf->top__DOT__wen = 1U;
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->top__DOT__instr_i));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__instr_i));
                }
            } else if (VL_LIKELY((2U & vlSelf->top__DOT__instr_i))) {
                if (VL_LIKELY((1U & vlSelf->top__DOT__instr_i))) {
                    vlSelf->top__DOT__MemOp = 3U;
                    vlSelf->top__DOT__MemToReg = 0U;
                    vlSelf->top__DOT__Branch = 0U;
                    if ((0x4000U & vlSelf->top__DOT__instr_i)) {
                        if ((0x2000U & vlSelf->top__DOT__instr_i)) {
                            if ((0x1000U & vlSelf->top__DOT__instr_i)) {
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
                        } else if ((0x1000U & vlSelf->top__DOT__instr_i)) {
                            vlSelf->top__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__ALUSrcB = 0U;
                            vlSelf->top__DOT__ALUOp 
                                = ((0x40000000U & vlSelf->top__DOT__instr_i)
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
                    } else if ((0x2000U & vlSelf->top__DOT__instr_i)) {
                        if ((0x1000U & vlSelf->top__DOT__instr_i)) {
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
                    } else if ((0x1000U & vlSelf->top__DOT__instr_i)) {
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
                                                    (vlSelf->top__DOT__instr_i 
                                                     >> 0x19U))
                                                    ? 8U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (vlSelf->top__DOT__instr_i 
                                                      >> 0x19U))
                                                     ? 9U
                                                     : 0U));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__instr_i));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
            }
        } else if (VL_UNLIKELY((8U & vlSelf->top__DOT__instr_i))) {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
        } else if (VL_UNLIKELY((4U & vlSelf->top__DOT__instr_i))) {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
        } else if (VL_LIKELY((2U & vlSelf->top__DOT__instr_i))) {
            if (VL_LIKELY((1U & vlSelf->top__DOT__instr_i))) {
                vlSelf->top__DOT__MemToReg = 0U;
                vlSelf->top__DOT__Branch = 0U;
                if (VL_UNLIKELY((0x4000U & vlSelf->top__DOT__instr_i))) {
                    VL_WRITEF("no\n");
                } else if ((0x2000U & vlSelf->top__DOT__instr_i)) {
                    if ((0x1000U & vlSelf->top__DOT__instr_i)) {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = 0U;
                        vlSelf->top__DOT__MemOp = 3U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__wen = 0U;
                    } else {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = 0U;
                        vlSelf->top__DOT__MemOp = 0U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__wen = 0U;
                    }
                } else if ((0x1000U & vlSelf->top__DOT__instr_i)) {
                    vlSelf->top__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__MemOp = 2U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__wen = 0U;
                } else {
                    vlSelf->top__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__MemOp = 1U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__wen = 0U;
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
        }
    } else if ((0x10U & vlSelf->top__DOT__instr_i)) {
        if (VL_UNLIKELY((8U & vlSelf->top__DOT__instr_i))) {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
        } else if ((4U & vlSelf->top__DOT__instr_i)) {
            if (VL_LIKELY((2U & vlSelf->top__DOT__instr_i))) {
                if (VL_LIKELY((1U & vlSelf->top__DOT__instr_i))) {
                    vlSelf->top__DOT__MemOp = 3U;
                    vlSelf->top__DOT__MemToReg = 0U;
                    vlSelf->top__DOT__Branch = 0U;
                    vlSelf->top__DOT__ALUSrcA = 0U;
                    vlSelf->top__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 1U;
                    vlSelf->top__DOT__wen = 1U;
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__instr_i));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
            }
        } else if (VL_LIKELY((2U & vlSelf->top__DOT__instr_i))) {
            if (VL_LIKELY((1U & vlSelf->top__DOT__instr_i))) {
                vlSelf->top__DOT__MemOp = 3U;
                vlSelf->top__DOT__MemToReg = 0U;
                vlSelf->top__DOT__Branch = 0U;
                if ((0x4000U & vlSelf->top__DOT__instr_i)) {
                    if ((0x2000U & vlSelf->top__DOT__instr_i)) {
                        if ((0x1000U & vlSelf->top__DOT__instr_i)) {
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
                    } else if ((0x1000U & vlSelf->top__DOT__instr_i)) {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = (
                                                   (0x40000000U 
                                                    & vlSelf->top__DOT__instr_i)
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
                } else if ((0x2000U & vlSelf->top__DOT__instr_i)) {
                    if ((0x1000U & vlSelf->top__DOT__instr_i)) {
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
                } else if ((0x1000U & vlSelf->top__DOT__instr_i)) {
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
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
        }
    } else if (VL_UNLIKELY((8U & vlSelf->top__DOT__instr_i))) {
        VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
    } else if (VL_UNLIKELY((4U & vlSelf->top__DOT__instr_i))) {
        VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
    } else if (VL_LIKELY((2U & vlSelf->top__DOT__instr_i))) {
        if (VL_LIKELY((1U & vlSelf->top__DOT__instr_i))) {
            vlSelf->top__DOT__MemToReg = 1U;
            vlSelf->top__DOT__Branch = 0U;
            if ((0x4000U & vlSelf->top__DOT__instr_i)) {
                if ((0x2000U & vlSelf->top__DOT__instr_i)) {
                    if (VL_UNLIKELY((0x1000U & vlSelf->top__DOT__instr_i))) {
                        VL_WRITEF("no\n");
                    } else {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = 0U;
                        vlSelf->top__DOT__MemOp = 4U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__wen = 1U;
                    }
                } else if ((0x1000U & vlSelf->top__DOT__instr_i)) {
                    vlSelf->top__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__MemOp = 6U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__wen = 1U;
                } else {
                    vlSelf->top__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__MemOp = 5U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__wen = 1U;
                }
            } else if ((0x2000U & vlSelf->top__DOT__instr_i)) {
                if ((0x1000U & vlSelf->top__DOT__instr_i)) {
                    vlSelf->top__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__MemOp = 3U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__wen = 1U;
                } else {
                    vlSelf->top__DOT__ALUSrcA = 1U;
                    vlSelf->top__DOT__ALUSrcB = 1U;
                    vlSelf->top__DOT__ALUOp = 0U;
                    vlSelf->top__DOT__MemOp = 0U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__wen = 1U;
                }
            } else if ((0x1000U & vlSelf->top__DOT__instr_i)) {
                vlSelf->top__DOT__ALUSrcA = 1U;
                vlSelf->top__DOT__ALUSrcB = 1U;
                vlSelf->top__DOT__ALUOp = 0U;
                vlSelf->top__DOT__MemOp = 2U;
                vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                vlSelf->top__DOT__wen = 1U;
            } else {
                vlSelf->top__DOT__ALUSrcA = 1U;
                vlSelf->top__DOT__ALUSrcB = 1U;
                vlSelf->top__DOT__ALUOp = 0U;
                vlSelf->top__DOT__MemOp = 1U;
                vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                vlSelf->top__DOT__wen = 1U;
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
        }
    } else {
        VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
    }
    if ((0U == (3U & (IData)(vlSelf->top__DOT__MemOp)))) {
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__i = 0x20U;
    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__MemOp)))) {
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__i = 8U;
    } else if ((2U == (3U & (IData)(vlSelf->top__DOT__MemOp)))) {
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__i = 0x11U;
    }
    __Vtableidx2 = vlSelf->top__DOT__MemOp;
    vlSelf->top__DOT__my_exu__DOT__mem__DOT__wmask 
        = Vtop__ConstPool__TABLE_6ec5454f_0[__Vtableidx2];
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
    vlSelf->top__DOT__imm = ((0U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                              ? (((- (QData)((IData)(
                                                     (vlSelf->top__DOT__instr_i 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             (vlSelf->top__DOT__instr_i 
                                                              >> 0x14U))))
                              : ((1U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__instr_i 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top__DOT__instr_i))))
                                  : ((2U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                      ? (((- (QData)((IData)(
                                                             (vlSelf->top__DOT__instr_i 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->top__DOT__instr_i 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->top__DOT__instr_i 
                                                                  >> 7U))))))
                                      : ((3U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                          ? (((- (QData)((IData)(
                                                                 (vlSelf->top__DOT__instr_i 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               ((0x800U 
                                                                 & (vlSelf->top__DOT__instr_i 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (vlSelf->top__DOT__instr_i 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (vlSelf->top__DOT__instr_i 
                                                                         >> 7U)))))))
                                          : ((4U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                              ? (((- (QData)((IData)(
                                                                     (vlSelf->top__DOT__instr_i 
                                                                      >> 0x1fU)))) 
                                                  << 0x14U) 
                                                 | (QData)((IData)(
                                                                   ((0xff000U 
                                                                     & vlSelf->top__DOT__instr_i) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->top__DOT__instr_i 
                                                                           >> 9U)) 
                                                                       | (0x7feU 
                                                                          & (vlSelf->top__DOT__instr_i 
                                                                             >> 0x14U)))))))
                                              : 0ULL)))));
    vlSelf->top__DOT__my_exu__DOT__alu_inB = ((1U == (IData)(vlSelf->top__DOT__ALUSrcB))
                                               ? vlSelf->top__DOT__imm
                                               : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ALUSrcB))
                                                   ? vlSelf->top__DOT__my_exu__DOT__busb
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
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
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
    vlSelf->top__DOT__instr_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemToReg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ALUOp = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__Branch = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__MemOp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_ifu__DOT__fclk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_ifu__DOT__now_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_ifu__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__ExtOp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_exu__DOT__busa = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__busb = VL_RAND_RESET_Q(64);
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
    vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__mem__DOT__wmask = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__my_exu__DOT__mem__DOT__datad = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__my_exu__DOT__mem__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__SrcB = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_pmem_read__0__rdata = 0;
    vlSelf->__Vtask_pmem_read__3__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
