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
extern const VlUnpacked<CData/*7:0*/, 8> Vtop__ConstPool__TABLE_6ec5454f_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_8db4e481_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_3bb6ad21_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_a9c47812_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_aa2192ff_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_75c68e7d_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_b668f0ff_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx2;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0;
    // Body
    __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 = 0U;
    if (((IData)(vlSelf->top__DOT__wen) & (~ (IData)(vlSelf->rst)))) {
        __Vdlyvval__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 
            = ((IData)(vlSelf->top__DOT__MemToReg) ? 
               ((4U & (IData)(vlSelf->top__DOT__MemOp))
                 ? ((2U & (IData)(vlSelf->top__DOT__MemOp))
                     ? ((1U & (IData)(vlSelf->top__DOT__MemOp))
                         ? 0ULL : (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)))
                     : ((1U & (IData)(vlSelf->top__DOT__MemOp))
                         ? (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab))
                         : (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw))))
                 : ((2U & (IData)(vlSelf->top__DOT__MemOp))
                     ? ((1U & (IData)(vlSelf->top__DOT__MemOp))
                         ? vlSelf->top__DOT__my_exu__DOT__mem__DOT__datad
                         : (((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                                            >> 0x3fU)))))) 
                             << 0x10U) | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah))))
                     : ((1U & (IData)(vlSelf->top__DOT__MemOp))
                         ? (((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                                            >> 0x3fU)))))) 
                             << 8U) | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab)))
                         : (((QData)((IData)((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                                                    >> 0x3fU))))))) 
                             << 0x20U) | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw))))))
                : vlSelf->top__DOT__my_exu__DOT__res);
        __Vdlyvset__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__my_exu__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->top__DOT__instr_i >> 7U));
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
                            vlSelf->top__DOT__MemWen = 0U;
                            vlSelf->top__DOT__MemOp = 0U;
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
                        vlSelf->top__DOT__MemWen = 0U;
                        vlSelf->top__DOT__MemOp = 0U;
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
                    vlSelf->top__DOT__MemWen = 0U;
                    vlSelf->top__DOT__MemOp = 0U;
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
            if ((8U & vlSelf->top__DOT__instr_i)) {
                if (VL_UNLIKELY((4U & vlSelf->top__DOT__instr_i))) {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__instr_i));
                } else if (VL_LIKELY((2U & vlSelf->top__DOT__instr_i))) {
                    if (VL_LIKELY((1U & vlSelf->top__DOT__instr_i))) {
                        vlSelf->top__DOT__MemWen = 0U;
                        vlSelf->top__DOT__MemOp = 0U;
                        vlSelf->top__DOT__MemToReg = 0U;
                        vlSelf->top__DOT__Branch = 0U;
                        if ((0U == (7U & (vlSelf->top__DOT__instr_i 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__ALUSrcB = 0U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__wen = 1U;
                            vlSelf->top__DOT__ALUOp 
                                = ((0x20U == (vlSelf->top__DOT__instr_i 
                                              >> 0x19U))
                                    ? 0x18U : ((1U 
                                                == 
                                                (vlSelf->top__DOT__instr_i 
                                                 >> 0x19U))
                                                ? 0x19U
                                                : 0x10U));
                        } else if ((1U == (7U & (vlSelf->top__DOT__instr_i 
                                                 >> 0xcU)))) {
                            vlSelf->top__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__ALUSrcB = 0U;
                            vlSelf->top__DOT__ALUOp = 0x11U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__wen = 1U;
                        } else {
                            vlSelf->top__DOT__ALUSrcA = 1U;
                            vlSelf->top__DOT__ALUSrcB = 0U;
                            vlSelf->top__DOT__ALUOp 
                                = ((0x40000000U & vlSelf->top__DOT__instr_i)
                                    ? 0x1dU : 0x15U);
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__wen = 1U;
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
                        vlSelf->top__DOT__MemWen = 0U;
                        vlSelf->top__DOT__MemOp = 0U;
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
                    vlSelf->top__DOT__MemWen = 0U;
                    vlSelf->top__DOT__MemOp = 0U;
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
                vlSelf->top__DOT__MemWen = 1U;
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
        if ((8U & vlSelf->top__DOT__instr_i)) {
            if (VL_UNLIKELY((4U & vlSelf->top__DOT__instr_i))) {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
            } else if (VL_LIKELY((2U & vlSelf->top__DOT__instr_i))) {
                if (VL_LIKELY((1U & vlSelf->top__DOT__instr_i))) {
                    vlSelf->top__DOT__MemWen = 0U;
                    vlSelf->top__DOT__MemOp = 0U;
                    vlSelf->top__DOT__MemToReg = 0U;
                    vlSelf->top__DOT__Branch = 0U;
                    if ((0U == (7U & (vlSelf->top__DOT__instr_i 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = 0x10U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__wen = 1U;
                    } else if ((1U == (7U & (vlSelf->top__DOT__instr_i 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = 0x11U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__wen = 1U;
                    } else {
                        vlSelf->top__DOT__ALUSrcA = 1U;
                        vlSelf->top__DOT__ALUSrcB = 1U;
                        vlSelf->top__DOT__ALUOp = (
                                                   (0x40000000U 
                                                    & vlSelf->top__DOT__instr_i)
                                                    ? 0x1dU
                                                    : 0x15U);
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__wen = 1U;
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__instr_i));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__instr_i));
            }
        } else if ((4U & vlSelf->top__DOT__instr_i)) {
            if (VL_LIKELY((2U & vlSelf->top__DOT__instr_i))) {
                if (VL_LIKELY((1U & vlSelf->top__DOT__instr_i))) {
                    vlSelf->top__DOT__MemWen = 0U;
                    vlSelf->top__DOT__MemOp = 0U;
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
                vlSelf->top__DOT__MemWen = 0U;
                vlSelf->top__DOT__MemOp = 0U;
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
            vlSelf->top__DOT__MemWen = 0U;
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
        = Vtop__ConstPool__TABLE_8db4e481_0[__Vtableidx1];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr 
        = Vtop__ConstPool__TABLE_3bb6ad21_0[__Vtableidx1];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr 
        = Vtop__ConstPool__TABLE_a9c47812_0[__Vtableidx1];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr 
        = Vtop__ConstPool__TABLE_aa2192ff_0[__Vtableidx1];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr 
        = Vtop__ConstPool__TABLE_75c68e7d_0[__Vtableidx1];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr 
        = Vtop__ConstPool__TABLE_b668f0ff_0[__Vtableidx1];
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
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
           << (0x1fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr)
            ? ((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
               >> (0x1fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))
            : ((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
               >> (0x1fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
        = (vlSelf->top__DOT__my_exu__DOT__alu_inB ^ 
           (- (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr))));
}

void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_4f660885_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_1d882cf2_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx3;
    // Body
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
        = (((QData)((IData)(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                              [3U] << 0x18U) | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                   [0U]))))) 
            << 0x20U) | (QData)((IData)(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                               [0U]))))));
    vlSelf->top__DOT__my_exu__DOT__res = ((0U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                           ? ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                               ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)))
                                               : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)
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
                                                    ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr)
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres)))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                                        ? 
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))
                                                        : 
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres)))
                                                       : 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       << 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))
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
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x3fU))) 
                                                                               | (((IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                                                >> 0x3fU)) 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                                >> 0x3fU))) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x3fU))))) 
                                                                              ^ (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x3fU)))
                                                                              : 
                                                                             (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                                               >> 3U) 
                                                                              ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr))))))
                                                       : 0ULL)))))));
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__my_exu__DOT__res, vlSelf->__Vtask_pmem_read__3__rdata);
    vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
        = vlSelf->__Vtask_pmem_read__3__rdata;
    if (vlSelf->top__DOT__MemWen) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__my_exu__DOT__res, vlSelf->top__DOT__my_exu__DOT__busb, (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__wmask));
    }
    __Vtableidx3 = ((0x10U & ((IData)(vlSelf->top__DOT__my_exu__DOT__res) 
                              << 4U)) | ((((0ULL == vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)
                                            ? 1U : 0U) 
                                          << 3U) | (IData)(vlSelf->top__DOT__Branch)));
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexA 
        = Vtop__ConstPool__TABLE_4f660885_0[__Vtableidx3];
    vlSelf->top__DOT__my_exu__DOT__nextaddr__DOT__NexB 
        = Vtop__ConstPool__TABLE_1d882cf2_0[__Vtableidx3];
    if ((0U != (3U & (IData)(vlSelf->top__DOT__MemOp)))) {
        if ((1U != (3U & (IData)(vlSelf->top__DOT__MemOp)))) {
            if ((2U != (3U & (IData)(vlSelf->top__DOT__MemOp)))) {
                vlSelf->top__DOT__my_exu__DOT__mem__DOT__datad 
                    = vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout;
            }
        }
    }
    vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp = 
        (0x38U & ((IData)(vlSelf->top__DOT__my_exu__DOT__res) 
                  << 3U));
    if ((0U == (3U & (IData)(vlSelf->top__DOT__MemOp)))) {
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfffffffeU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (1U & (IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                >> (0x3fU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfffffffdU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (2U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(1U) 
                                              + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                        << 1U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfffffffbU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (4U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(2U) 
                                              + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                        << 2U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfffffff7U & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (8U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(3U) 
                                              + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                        << 3U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xffffffefU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x10U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(4U) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                           << 4U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xffffffdfU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x20U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(5U) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                           << 5U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xffffffbfU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x40U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(6U) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                           << 6U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xffffff7fU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x80U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(7U) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                           << 7U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfffffeffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x100U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(8U) 
                                                  + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                            << 8U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfffffdffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x200U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(9U) 
                                                  + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                            << 9U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfffffbffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x400U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(0xaU) 
                                                  + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                            << 0xaU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfffff7ffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x800U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(0xbU) 
                                                  + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                            << 0xbU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xffffefffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x1000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xcU) 
                                                   + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                             << 0xcU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xffffdfffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x2000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                             << 0xdU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xffffbfffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x4000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xeU) 
                                                   + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                             << 0xeU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xffff7fffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x8000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xfU) 
                                                   + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                             << 0xfU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfffeffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x10000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                       >> (0x3fU & 
                                           ((IData)(0x10U) 
                                            + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                              << 0x10U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfffdffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x20000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                       >> (0x3fU & 
                                           ((IData)(0x11U) 
                                            + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                              << 0x11U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfffbffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x40000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                       >> (0x3fU & 
                                           ((IData)(0x12U) 
                                            + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                              << 0x12U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfff7ffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x80000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                       >> (0x3fU & 
                                           ((IData)(0x13U) 
                                            + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                              << 0x13U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xffefffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x100000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(0x14U) 
                                             + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                               << 0x14U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xffdfffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x200000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(0x15U) 
                                             + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                               << 0x15U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xffbfffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x400000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(0x16U) 
                                             + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                               << 0x16U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xff7fffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x800000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(0x17U) 
                                             + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                               << 0x17U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfeffffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x1000000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(0x18U) 
                                                + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                                << 0x18U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfdffffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x2000000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(0x19U) 
                                                + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                                << 0x19U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xfbffffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x4000000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(0x1aU) 
                                                + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                                << 0x1aU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xf7ffffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x8000000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(0x1bU) 
                                                + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                                << 0x1bU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xefffffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x10000000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                          >> (0x3fU 
                                              & ((IData)(0x1cU) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                                 << 0x1cU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xdfffffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x20000000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                          >> (0x3fU 
                                              & ((IData)(0x1dU) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                                 << 0x1dU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0xbfffffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | (0x40000000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                          >> (0x3fU 
                                              & ((IData)(0x1eU) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                                 << 0x1eU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw 
            = ((0x7fffffffU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataw) 
               | ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                           >> (0x3fU & ((IData)(0x1fU) 
                                        + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                  << 0x1fU));
    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__MemOp)))) {
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab 
            = ((0xfeU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab)) 
               | (1U & (IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                >> (0x3fU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab 
            = ((0xfdU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab)) 
               | (2U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(1U) 
                                              + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                        << 1U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab 
            = ((0xfbU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab)) 
               | (4U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(2U) 
                                              + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                        << 2U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab 
            = ((0xf7U & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab)) 
               | (8U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(3U) 
                                              + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                        << 3U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab 
            = ((0xefU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab)) 
               | (0x10U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(4U) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                           << 4U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab 
            = ((0xdfU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab)) 
               | (0x20U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(5U) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                           << 5U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab 
            = ((0xbfU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab)) 
               | (0x40U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(6U) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                           << 6U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab 
            = ((0x7fU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datab)) 
               | (0x80U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(7U) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                           << 7U)));
    } else if ((2U == (3U & (IData)(vlSelf->top__DOT__MemOp)))) {
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (1U & (IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                >> (0x3fU & vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (2U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(1U) 
                                              + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                        << 1U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (4U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(2U) 
                                              + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                        << 2U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (8U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(3U) 
                                              + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                        << 3U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xffefU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (0x10U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(4U) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                           << 4U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (0x20U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(5U) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                           << 5U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (0x40U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(6U) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                           << 6U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (0x80U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(7U) 
                                                 + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                           << 7U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (0x100U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(8U) 
                                                  + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                            << 8U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (0x200U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(9U) 
                                                  + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                            << 9U)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (0x400U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(0xaU) 
                                                  + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                            << 0xaU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (0x800U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(0xbU) 
                                                  + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                            << 0xbU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xefffU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (0x1000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xcU) 
                                                   + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                             << 0xcU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (0x2000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                             << 0xdU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (0x4000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xeU) 
                                                   + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                             << 0xeU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (0x8000U & ((IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xfU) 
                                                   + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp)))) 
                             << 0xfU)));
        vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__my_exu__DOT__mem__DOT__datah)) 
               | (1U & (IData)((vlSelf->top__DOT__my_exu__DOT__mem__DOT__dataout 
                                >> (0x3fU & ((IData)(0x10U) 
                                             + vlSelf->top__DOT__my_exu__DOT__mem__DOT__tmp))))));
    }
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

void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__1(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2(Vtop_ysyx_220053_Adder32* vlSelf);
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
        Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__1((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low));
        Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high));
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
