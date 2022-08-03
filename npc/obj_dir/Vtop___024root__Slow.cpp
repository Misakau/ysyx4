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

void Vtop___024root____Vdpiimwrap_top__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

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
    Vtop___024root____Vdpiimwrap_top__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__regfile__DOT__rf);
}

void Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(CData/*0:0*/ done);
extern const VlUnpacked<CData/*7:0*/, 8> Vtop__ConstPool__TABLE_6ec5454f_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_8db4e481_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_6ee9ed8c_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_a9c47812_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_aa2192ff_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_f4558aae_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtop__ConstPool__TABLE_6fbd8736_0;
void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024unit____Vdpiimwrap_get_instr_TOP____024unit(IData/*31:0*/ instr);

void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx3;
    CData/*2:0*/ __Vtableidx4;
    VlWide<4>/*127:0*/ __Vtemp20;
    VlWide<4>/*127:0*/ __Vtemp21;
    VlWide<4>/*127:0*/ __Vtemp22;
    VlWide<4>/*127:0*/ __Vtemp23;
    VlWide<4>/*127:0*/ __Vtemp24;
    VlWide<4>/*127:0*/ __Vtemp25;
    VlWide<4>/*127:0*/ __Vtemp26;
    VlWide<4>/*127:0*/ __Vtemp27;
    VlWide<4>/*127:0*/ __Vtemp28;
    VlWide<4>/*127:0*/ __Vtemp29;
    VlWide<4>/*127:0*/ __Vtemp30;
    VlWide<4>/*127:0*/ __Vtemp31;
    // Body
    if (vlSelf->top__DOT__WB_Reg__DOT__Ebreak_r) {
        Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(1U);
    }
    vlSelf->wb_commit = vlSelf->top__DOT__wb_commit_r;
    vlSelf->wb_pc = vlSelf->top__DOT__wb_pc_r;
    vlSelf->wb_instr = vlSelf->top__DOT__wb_instr_r;
    if ((0U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 0x20U;
    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 8U;
    } else if ((2U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = 0x10U;
    }
    __Vtableidx4 = vlSelf->top__DOT__M_Reg__DOT__MemOp_r;
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask = 
        Vtop__ConstPool__TABLE_6ec5454f_0[__Vtableidx4];
    __Vtableidx3 = vlSelf->top__DOT__EX_Reg__DOT__ALUOp_r;
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr 
        = Vtop__ConstPool__TABLE_8db4e481_0[__Vtableidx3];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr 
        = Vtop__ConstPool__TABLE_6ee9ed8c_0[__Vtableidx3];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr 
        = Vtop__ConstPool__TABLE_a9c47812_0[__Vtableidx3];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr 
        = Vtop__ConstPool__TABLE_aa2192ff_0[__Vtableidx3];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr 
        = Vtop__ConstPool__TABLE_f4558aae_0[__Vtableidx3];
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr 
        = Vtop__ConstPool__TABLE_6fbd8736_0[__Vtableidx3];
    vlSelf->top__DOT__my_exu__DOT__alu_inB = ((1U == (IData)(vlSelf->top__DOT__EX_Reg__DOT__ALUSrcB_r))
                                               ? vlSelf->top__DOT__EX_Reg__DOT__imm_r
                                               : ((0U 
                                                   == (IData)(vlSelf->top__DOT__EX_Reg__DOT__ALUSrcB_r))
                                                   ? vlSelf->top__DOT__EX_Reg__DOT__busb_r
                                                   : 4ULL));
    vlSelf->top__DOT__my_exu__DOT__alu_inA = ((IData)(vlSelf->top__DOT__EX_Reg__DOT__ALUSrcA_r)
                                               ? vlSelf->top__DOT__EX_Reg__DOT__busa_r
                                               : vlSelf->top__DOT__EX_Reg__DOT__pc_r);
    vlSelf->pc = vlSelf->top__DOT__my_ifu__DOT__now_pc;
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__my_ifu__DOT__now_pc, vlSelf->__Vtask_pmem_read__1__rdata);
    vlSelf->top__DOT__my_ifu__DOT__rdata = vlSelf->__Vtask_pmem_read__1__rdata;
    vlSelf->top__DOT__id_use_rd = ((IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r) 
                                   & (~ ((((0x37U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) 
                                           | (0x17U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) 
                                          | (0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) 
                                         | (0x73U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__ID_Reg__DOT__instr_r)))));
    vlSelf->top__DOT__id_busb = ((0U == (0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x14U)))
                                  ? 0ULL : vlSelf->top__DOT__regfile__DOT__rf
                                 [(0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                            >> 0x14U))]);
    if ((0x40U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
        if (VL_LIKELY((0x20U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
            if ((0x10U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                if (VL_UNLIKELY((8U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                } else if (VL_UNLIKELY((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_MulOp_o = 0U;
                        vlSelf->top__DOT__id_MemWen_o = 0U;
                        vlSelf->top__DOT__id_MemOp_o = 0U;
                        vlSelf->top__DOT__id_MemToReg_o = 0U;
                        vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                        if (VL_UNLIKELY((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                            VL_WRITEF("no\n");
                        } else if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                vlSelf->top__DOT__id_Ebreak_o = 0U;
                                vlSelf->top__DOT__id_Csrwen = 1U;
                                vlSelf->top__DOT__id_Ecall = 0U;
                                vlSelf->top__DOT__id_Mret = 0U;
                                vlSelf->top__DOT__id_CsrOp = 2U;
                                vlSelf->top__DOT__id_CsrToReg_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                                vlSelf->top__DOT__id_ALUOp_o = 0U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            } else {
                                vlSelf->top__DOT__id_Ebreak_o = 0U;
                                vlSelf->top__DOT__id_Csrwen = 1U;
                                vlSelf->top__DOT__id_Ecall = 0U;
                                vlSelf->top__DOT__id_Mret = 0U;
                                vlSelf->top__DOT__id_CsrOp = 1U;
                                vlSelf->top__DOT__id_CsrToReg_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                                vlSelf->top__DOT__id_ALUOp_o = 0U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            }
                        } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            vlSelf->top__DOT__id_Ebreak_o = 0U;
                            vlSelf->top__DOT__id_Csrwen = 1U;
                            vlSelf->top__DOT__id_Ecall = 0U;
                            vlSelf->top__DOT__id_Mret = 0U;
                            vlSelf->top__DOT__id_CsrOp = 0U;
                            vlSelf->top__DOT__id_CsrToReg_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o = 0U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                        } else if ((0U == (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                           >> 0x14U))) {
                            vlSelf->top__DOT__id_Ebreak_o = 0U;
                            vlSelf->top__DOT__id_Csrwen = 1U;
                            vlSelf->top__DOT__id_Ecall = 1U;
                            vlSelf->top__DOT__id_Mret = 0U;
                            vlSelf->top__DOT__id_CsrOp = 0U;
                            vlSelf->top__DOT__id_CsrToReg_o = 0U;
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o = 0U;
                            vlSelf->top__DOT__id_wen_o = 0U;
                        } else if ((1U == (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                           >> 0x14U))) {
                            vlSelf->top__DOT__id_Ebreak_o = 1U;
                            vlSelf->top__DOT__id_Csrwen = 0U;
                            vlSelf->top__DOT__id_Ecall = 0U;
                            vlSelf->top__DOT__id_Mret = 0U;
                            vlSelf->top__DOT__id_CsrOp = 0U;
                            vlSelf->top__DOT__id_CsrToReg_o = 0U;
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o = 0U;
                            vlSelf->top__DOT__id_wen_o = 0U;
                        } else if (VL_LIKELY((0x302U 
                                              == (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x14U)))) {
                            vlSelf->top__DOT__id_Ebreak_o = 0U;
                            vlSelf->top__DOT__id_Csrwen = 0U;
                            vlSelf->top__DOT__id_Ecall = 0U;
                            vlSelf->top__DOT__id_Mret = 1U;
                            vlSelf->top__DOT__id_CsrOp = 0U;
                            vlSelf->top__DOT__id_CsrToReg_o = 0U;
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o = 0U;
                            vlSelf->top__DOT__id_wen_o = 0U;
                        } else {
                            VL_WRITEF("no\n");
                        }
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else if ((8U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                if (VL_LIKELY((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                        if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                            vlSelf->top__DOT__id_Ebreak_o = 0U;
                            vlSelf->top__DOT__id_Ecall = 0U;
                            vlSelf->top__DOT__id_Mret = 0U;
                            vlSelf->top__DOT__id_CsrOp = 0U;
                            vlSelf->top__DOT__id_CsrToReg_o = 0U;
                            vlSelf->top__DOT__id_Csrwen = 0U;
                            vlSelf->top__DOT__id_MulOp_o = 0U;
                            vlSelf->top__DOT__id_MemWen_o = 0U;
                            vlSelf->top__DOT__id_MemOp_o = 0U;
                            vlSelf->top__DOT__id_MemToReg_o = 0U;
                            vlSelf->top__DOT__my_idu__DOT__Branch = 1U;
                            vlSelf->top__DOT__id_ALUSrcA_o = 0U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 2U;
                            vlSelf->top__DOT__id_ALUOp_o = 0U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 4U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                        } else {
                            VL_WRITEF("no, op=%x\n",
                                      7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                        }
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else if ((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                        vlSelf->top__DOT__id_Ebreak_o = 0U;
                        vlSelf->top__DOT__id_Ecall = 0U;
                        vlSelf->top__DOT__id_Mret = 0U;
                        vlSelf->top__DOT__id_CsrOp = 0U;
                        vlSelf->top__DOT__id_CsrToReg_o = 0U;
                        vlSelf->top__DOT__id_Csrwen = 0U;
                        vlSelf->top__DOT__id_MulOp_o = 0U;
                        vlSelf->top__DOT__id_MemWen_o = 0U;
                        vlSelf->top__DOT__id_MemOp_o = 0U;
                        vlSelf->top__DOT__id_MemToReg_o = 0U;
                        vlSelf->top__DOT__my_idu__DOT__Branch = 2U;
                        vlSelf->top__DOT__id_ALUSrcA_o = 0U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 2U;
                        vlSelf->top__DOT__id_ALUOp_o = 0U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    vlSelf->top__DOT__id_Ebreak_o = 0U;
                    vlSelf->top__DOT__id_Ecall = 0U;
                    vlSelf->top__DOT__id_Mret = 0U;
                    vlSelf->top__DOT__id_CsrOp = 0U;
                    vlSelf->top__DOT__id_CsrToReg_o = 0U;
                    vlSelf->top__DOT__id_Csrwen = 0U;
                    vlSelf->top__DOT__id_MulOp_o = 0U;
                    vlSelf->top__DOT__id_MemWen_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 0U;
                    vlSelf->top__DOT__id_MemToReg_o = 0U;
                    if ((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                        if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 3U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                                vlSelf->top__DOT__my_idu__DOT__Branch = 7U;
                                vlSelf->top__DOT__id_wen_o = 0U;
                            } else {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 3U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                                vlSelf->top__DOT__my_idu__DOT__Branch = 6U;
                                vlSelf->top__DOT__id_wen_o = 0U;
                            }
                        } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                            vlSelf->top__DOT__id_ALUOp_o = 2U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                            vlSelf->top__DOT__my_idu__DOT__Branch = 7U;
                            vlSelf->top__DOT__id_wen_o = 0U;
                        } else {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                            vlSelf->top__DOT__id_ALUOp_o = 2U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                            vlSelf->top__DOT__my_idu__DOT__Branch = 6U;
                            vlSelf->top__DOT__id_wen_o = 0U;
                        }
                    } else if (VL_UNLIKELY((0x2000U 
                                            & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                        VL_WRITEF("no\n");
                    } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                        vlSelf->top__DOT__id_ALUOp_o = 2U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                        vlSelf->top__DOT__my_idu__DOT__Branch = 5U;
                        vlSelf->top__DOT__id_wen_o = 0U;
                    } else {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                        vlSelf->top__DOT__id_ALUOp_o = 2U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 3U;
                        vlSelf->top__DOT__my_idu__DOT__Branch = 4U;
                        vlSelf->top__DOT__id_wen_o = 0U;
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
        }
    } else if ((0x20U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
        if ((0x10U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
            if ((8U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                if (VL_UNLIKELY((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                        vlSelf->top__DOT__id_Ebreak_o = 0U;
                        vlSelf->top__DOT__id_Ecall = 0U;
                        vlSelf->top__DOT__id_Mret = 0U;
                        vlSelf->top__DOT__id_CsrOp = 0U;
                        vlSelf->top__DOT__id_CsrToReg_o = 0U;
                        vlSelf->top__DOT__id_Csrwen = 0U;
                        vlSelf->top__DOT__id_MemWen_o = 0U;
                        vlSelf->top__DOT__id_MemOp_o = 0U;
                        vlSelf->top__DOT__id_MemToReg_o = 0U;
                        vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                        if ((1U == (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                    >> 0x19U))) {
                            if ((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                    if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                        vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                        vlSelf->top__DOT__id_MulOp_o = 0U;
                                        vlSelf->top__DOT__id_ALUOp_o = 0x1eU;
                                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                        vlSelf->top__DOT__id_wen_o = 1U;
                                    } else {
                                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                        vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                        vlSelf->top__DOT__id_MulOp_o = 0U;
                                        vlSelf->top__DOT__id_ALUOp_o = 0x1cU;
                                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                        vlSelf->top__DOT__id_wen_o = 1U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                    vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                    vlSelf->top__DOT__id_MulOp_o = 0U;
                                    vlSelf->top__DOT__id_ALUOp_o = 0x1bU;
                                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                    vlSelf->top__DOT__id_wen_o = 1U;
                                } else {
                                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                    vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                    vlSelf->top__DOT__id_MulOp_o = 0U;
                                    vlSelf->top__DOT__id_ALUOp_o = 0x1aU;
                                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                    vlSelf->top__DOT__id_wen_o = 1U;
                                }
                            } else {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_MulOp_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 0x19U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            }
                        } else {
                            vlSelf->top__DOT__id_MulOp_o = 0U;
                            if ((0U == (7U & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                              >> 0xcU)))) {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                                vlSelf->top__DOT__id_ALUOp_o 
                                    = ((0x20U == (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x19U))
                                        ? 0x18U : 0x10U);
                            } else if ((1U == (7U & 
                                               (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 0x11U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            } else {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o 
                                    = ((0x40000000U 
                                        & vlSelf->top__DOT__ID_Reg__DOT__instr_r)
                                        ? 0x1dU : 0x15U);
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            }
                        }
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else if ((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                        vlSelf->top__DOT__id_Ebreak_o = 0U;
                        vlSelf->top__DOT__id_Ecall = 0U;
                        vlSelf->top__DOT__id_Mret = 0U;
                        vlSelf->top__DOT__id_CsrOp = 0U;
                        vlSelf->top__DOT__id_CsrToReg_o = 0U;
                        vlSelf->top__DOT__id_Csrwen = 0U;
                        vlSelf->top__DOT__id_MulOp_o = 0U;
                        vlSelf->top__DOT__id_MemWen_o = 0U;
                        vlSelf->top__DOT__id_MemOp_o = 0U;
                        vlSelf->top__DOT__id_MemToReg_o = 0U;
                        vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 0xfU;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 1U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    } else {
                        VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                                   & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    vlSelf->top__DOT__id_Ebreak_o = 0U;
                    vlSelf->top__DOT__id_Ecall = 0U;
                    vlSelf->top__DOT__id_Mret = 0U;
                    vlSelf->top__DOT__id_CsrOp = 0U;
                    vlSelf->top__DOT__id_CsrToReg_o = 0U;
                    vlSelf->top__DOT__id_Csrwen = 0U;
                    vlSelf->top__DOT__id_MemWen_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 0U;
                    vlSelf->top__DOT__id_MemToReg_o = 0U;
                    vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                    if ((1U == (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                >> 0x19U))) {
                        if ((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                    vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                    vlSelf->top__DOT__id_MulOp_o = 0U;
                                    vlSelf->top__DOT__id_ALUOp_o = 0xeU;
                                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                    vlSelf->top__DOT__id_wen_o = 1U;
                                } else {
                                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                    vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                    vlSelf->top__DOT__id_MulOp_o = 0U;
                                    vlSelf->top__DOT__id_ALUOp_o = 0xcU;
                                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                    vlSelf->top__DOT__id_wen_o = 1U;
                                }
                            } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_MulOp_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 0xbU;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            } else {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_MulOp_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 0xaU;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            }
                        } else if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_MulOp_o = 3U;
                                vlSelf->top__DOT__id_ALUOp_o = 9U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            } else {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_MulOp_o = 2U;
                                vlSelf->top__DOT__id_ALUOp_o = 9U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            }
                        } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                            vlSelf->top__DOT__id_MulOp_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o = 9U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                        } else {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                            vlSelf->top__DOT__id_MulOp_o = 0U;
                            vlSelf->top__DOT__id_ALUOp_o = 9U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                        }
                    } else {
                        vlSelf->top__DOT__id_MulOp_o = 0U;
                        if ((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                    vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                    vlSelf->top__DOT__id_ALUOp_o = 7U;
                                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                    vlSelf->top__DOT__id_wen_o = 1U;
                                } else {
                                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                    vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                    vlSelf->top__DOT__id_ALUOp_o = 6U;
                                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                    vlSelf->top__DOT__id_wen_o = 1U;
                                }
                            } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o 
                                    = ((0x40000000U 
                                        & vlSelf->top__DOT__ID_Reg__DOT__instr_r)
                                        ? 0xdU : 5U);
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            } else {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 4U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            }
                        } else if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 3U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            } else {
                                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                                vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                                vlSelf->top__DOT__id_ALUOp_o = 2U;
                                vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                                vlSelf->top__DOT__id_wen_o = 1U;
                            }
                        } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                            vlSelf->top__DOT__id_ALUOp_o = 1U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                        } else {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 0U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 5U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o 
                                = ((0x20U == (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                              >> 0x19U))
                                    ? 8U : 0U);
                        }
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
            }
        } else if (VL_UNLIKELY((8U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
        } else if (VL_UNLIKELY((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
        } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
            if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                vlSelf->top__DOT__id_Ebreak_o = 0U;
                vlSelf->top__DOT__id_Ecall = 0U;
                vlSelf->top__DOT__id_Mret = 0U;
                vlSelf->top__DOT__id_CsrOp = 0U;
                vlSelf->top__DOT__id_CsrToReg_o = 0U;
                vlSelf->top__DOT__id_Csrwen = 0U;
                vlSelf->top__DOT__id_MulOp_o = 0U;
                vlSelf->top__DOT__id_MemWen_o = 1U;
                vlSelf->top__DOT__id_MemToReg_o = 0U;
                vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                if (VL_UNLIKELY((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    VL_WRITEF("no\n");
                } else if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 0U;
                        vlSelf->top__DOT__id_MemOp_o = 3U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 2U;
                        vlSelf->top__DOT__id_wen_o = 0U;
                    } else {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 0U;
                        vlSelf->top__DOT__id_MemOp_o = 0U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 2U;
                        vlSelf->top__DOT__id_wen_o = 0U;
                    }
                } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 2U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 2U;
                    vlSelf->top__DOT__id_wen_o = 0U;
                } else {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 1U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 2U;
                    vlSelf->top__DOT__id_wen_o = 0U;
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
        }
    } else if ((0x10U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
        if ((8U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
            if (VL_UNLIKELY((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
            } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    vlSelf->top__DOT__id_Ebreak_o = 0U;
                    vlSelf->top__DOT__id_Ecall = 0U;
                    vlSelf->top__DOT__id_Mret = 0U;
                    vlSelf->top__DOT__id_CsrOp = 0U;
                    vlSelf->top__DOT__id_CsrToReg_o = 0U;
                    vlSelf->top__DOT__id_Csrwen = 0U;
                    vlSelf->top__DOT__id_MemWen_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 0U;
                    vlSelf->top__DOT__id_MemToReg_o = 0U;
                    vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                    if ((0U == (7U & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 0x10U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    } else if ((1U == (7U & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                             >> 0xcU)))) {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 0x11U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    } else {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o 
                            = ((0x40000000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)
                                ? 0x1dU : 0x15U);
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    }
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
            }
        } else if ((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
            if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                    vlSelf->top__DOT__id_Ebreak_o = 0U;
                    vlSelf->top__DOT__id_Ecall = 0U;
                    vlSelf->top__DOT__id_Mret = 0U;
                    vlSelf->top__DOT__id_CsrOp = 0U;
                    vlSelf->top__DOT__id_CsrToReg_o = 0U;
                    vlSelf->top__DOT__id_Csrwen = 0U;
                    vlSelf->top__DOT__id_MulOp_o = 0U;
                    vlSelf->top__DOT__id_MemWen_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 0U;
                    vlSelf->top__DOT__id_MemToReg_o = 0U;
                    vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                    vlSelf->top__DOT__id_ALUSrcA_o = 0U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 1U;
                    vlSelf->top__DOT__id_wen_o = 1U;
                } else {
                    VL_WRITEF("no, op=%x\n",7,(0x7fU 
                                               & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
            }
        } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
            if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                vlSelf->top__DOT__id_Ebreak_o = 0U;
                vlSelf->top__DOT__id_Ecall = 0U;
                vlSelf->top__DOT__id_Mret = 0U;
                vlSelf->top__DOT__id_CsrOp = 0U;
                vlSelf->top__DOT__id_CsrToReg_o = 0U;
                vlSelf->top__DOT__id_Csrwen = 0U;
                vlSelf->top__DOT__id_MulOp_o = 0U;
                vlSelf->top__DOT__id_MemWen_o = 0U;
                vlSelf->top__DOT__id_MemOp_o = 0U;
                vlSelf->top__DOT__id_MemToReg_o = 0U;
                vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
                if ((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                        if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o = 7U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                        } else {
                            vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                            vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                            vlSelf->top__DOT__id_ALUOp_o = 6U;
                            vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                            vlSelf->top__DOT__id_wen_o = 1U;
                        }
                    } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o 
                            = ((0x40000000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)
                                ? 0xdU : 5U);
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    } else {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 4U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    }
                } else if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 3U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    } else {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 2U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    }
                } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 1U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__id_wen_o = 1U;
                } else {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__id_wen_o = 1U;
                }
            } else {
                VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
        }
    } else if (VL_UNLIKELY((8U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
        VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
    } else if (VL_UNLIKELY((4U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
        VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
    } else if (VL_LIKELY((2U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
        if (VL_LIKELY((1U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
            vlSelf->top__DOT__id_Ebreak_o = 0U;
            vlSelf->top__DOT__id_Ecall = 0U;
            vlSelf->top__DOT__id_Mret = 0U;
            vlSelf->top__DOT__id_CsrOp = 0U;
            vlSelf->top__DOT__id_CsrToReg_o = 0U;
            vlSelf->top__DOT__id_Csrwen = 0U;
            vlSelf->top__DOT__id_MulOp_o = 0U;
            vlSelf->top__DOT__id_MemWen_o = 0U;
            vlSelf->top__DOT__id_MemToReg_o = 1U;
            vlSelf->top__DOT__my_idu__DOT__Branch = 0U;
            if ((0x4000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    if (VL_UNLIKELY((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r))) {
                        VL_WRITEF("no\n");
                    } else {
                        vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                        vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                        vlSelf->top__DOT__id_ALUOp_o = 0U;
                        vlSelf->top__DOT__id_MemOp_o = 4U;
                        vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                        vlSelf->top__DOT__id_wen_o = 1U;
                    }
                } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 6U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__id_wen_o = 1U;
                } else {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 5U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__id_wen_o = 1U;
                }
            } else if ((0x2000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 3U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__id_wen_o = 1U;
                } else {
                    vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                    vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                    vlSelf->top__DOT__id_ALUOp_o = 0U;
                    vlSelf->top__DOT__id_MemOp_o = 0U;
                    vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                    vlSelf->top__DOT__id_wen_o = 1U;
                }
            } else if ((0x1000U & vlSelf->top__DOT__ID_Reg__DOT__instr_r)) {
                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                vlSelf->top__DOT__id_ALUOp_o = 0U;
                vlSelf->top__DOT__id_MemOp_o = 2U;
                vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                vlSelf->top__DOT__id_wen_o = 1U;
            } else {
                vlSelf->top__DOT__id_ALUSrcA_o = 1U;
                vlSelf->top__DOT__id_ALUSrcB_o = 1U;
                vlSelf->top__DOT__id_ALUOp_o = 0U;
                vlSelf->top__DOT__id_MemOp_o = 1U;
                vlSelf->top__DOT__my_idu__DOT__ExtOp = 0U;
                vlSelf->top__DOT__id_wen_o = 1U;
            }
        } else {
            VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
        }
    } else {
        VL_WRITEF("no, op=%x\n",7,(0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r));
    }
    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->top__DOT__M_Reg__DOT__raddr_r, vlSelf->__Vtask_pmem_read__3__rdata);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
        = vlSelf->__Vtask_pmem_read__3__rdata;
    if ((((IData)(vlSelf->top__DOT__M_Reg__DOT__MemWen_r) 
          & (~ (IData)(vlSelf->rst))) & (IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r))) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->top__DOT__M_Reg__DOT__raddr_r, vlSelf->top__DOT__M_Reg__DOT__wdata_r, (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask));
    }
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
        = (vlSelf->top__DOT__my_exu__DOT__alu_inB ^ 
           (- (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr))));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
           << (0x1fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulresW 
        = ((QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA)) 
           * (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)));
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres 
        = ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr)
            ? VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA), 
                             (0x1fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))
            : ((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
               >> (0x1fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))));
    VL_EXTEND_WQ(128,64, __Vtemp20, vlSelf->top__DOT__my_exu__DOT__alu_inA);
    VL_EXTEND_WQ(128,64, __Vtemp21, vlSelf->top__DOT__my_exu__DOT__alu_inB);
    VL_MUL_W(4, __Vtemp22, __Vtemp20, __Vtemp21);
    VL_EXTEND_WQ(128,64, __Vtemp23, vlSelf->top__DOT__my_exu__DOT__alu_inA);
    VL_EXTEND_WQ(128,64, __Vtemp24, vlSelf->top__DOT__my_exu__DOT__alu_inB);
    VL_MUL_W(4, __Vtemp25, __Vtemp23, __Vtemp24);
    __Vtemp26[0U] = (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA);
    __Vtemp26[1U] = (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                             >> 0x20U));
    __Vtemp26[2U] = (IData)((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                           >> 0x3fU)))))));
    __Vtemp26[3U] = (IData)(((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                            >> 0x3fU)))))) 
                             >> 0x20U));
    VL_EXTEND_WQ(128,64, __Vtemp27, vlSelf->top__DOT__my_exu__DOT__alu_inB);
    VL_MUL_W(4, __Vtemp28, __Vtemp26, __Vtemp27);
    __Vtemp29[0U] = (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA);
    __Vtemp29[1U] = (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                             >> 0x20U));
    __Vtemp29[2U] = (IData)((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                           >> 0x3fU)))))));
    __Vtemp29[3U] = (IData)(((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                            >> 0x3fU)))))) 
                             >> 0x20U));
    __Vtemp30[0U] = (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB);
    __Vtemp30[1U] = (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inB 
                             >> 0x20U));
    __Vtemp30[2U] = (IData)((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                           >> 0x3fU)))))));
    __Vtemp30[3U] = (IData)(((- (QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                            >> 0x3fU)))))) 
                             >> 0x20U));
    VL_MULS_WWW(128,128,128, __Vtemp31, __Vtemp29, __Vtemp30);
    if ((0U == (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r))) {
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulres[0U] 
            = __Vtemp22[0U];
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulres[1U] 
            = __Vtemp22[1U];
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulres[2U] 
            = __Vtemp22[2U];
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulres[3U] 
            = __Vtemp22[3U];
    } else {
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulres[0U] 
            = ((1U == (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r))
                ? __Vtemp25[0U] : ((2U == (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r))
                                    ? __Vtemp28[0U]
                                    : __Vtemp31[0U]));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulres[1U] 
            = ((1U == (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r))
                ? __Vtemp25[1U] : ((2U == (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r))
                                    ? __Vtemp28[1U]
                                    : __Vtemp31[1U]));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulres[2U] 
            = ((1U == (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r))
                ? __Vtemp25[2U] : ((2U == (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r))
                                    ? __Vtemp28[2U]
                                    : __Vtemp31[2U]));
        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulres[3U] 
            = ((1U == (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r))
                ? __Vtemp25[3U] : ((2U == (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r))
                                    ? __Vtemp28[3U]
                                    : __Vtemp31[3U]));
    }
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divresW 
        = ((8U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
            ? ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr)
                ? VL_DIVS_III(32, (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA), (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))
                : VL_DIV_III(32, (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA), (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))
            : 0U);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remresW 
        = ((9U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
            ? ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr)
                ? VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA), (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))
                : VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA), (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))
            : 0U);
    vlSelf->top__DOT__if_instr_o = ((1U & (IData)((vlSelf->top__DOT__my_ifu__DOT__now_pc 
                                                   >> 2U)))
                                     ? (IData)((vlSelf->top__DOT__my_ifu__DOT__rdata 
                                                >> 0x20U))
                                     : (IData)(vlSelf->top__DOT__my_ifu__DOT__rdata));
    vlSelf->top__DOT__if_block = (1U & ((IData)(vlSelf->top__DOT__id_Ebreak_o) 
                                        | (~ (IData)(vlSelf->rst))));
    vlSelf->top__DOT__is_Csrwen = (((~ (IData)(vlSelf->rst)) 
                                    & (IData)(vlSelf->top__DOT__id_Csrwen)) 
                                   & (IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r));
    vlSelf->top__DOT__id_imm_o = ((0U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                   ? (((- (QData)((IData)(
                                                          (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                           >> 0x1fU)))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                   >> 0x14U))))
                                   : ((1U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                       ? (((QData)((IData)(
                                                           (- (IData)(
                                                                      (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                       >> 0x1fU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->top__DOT__ID_Reg__DOT__instr_r))))
                                       : ((2U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                           ? (((- (QData)((IData)(
                                                                  (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                   >> 0x1fU)))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                       >> 7U))))))
                                           : ((3U == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                              >> 7U)))))))
                                               : ((4U 
                                                   == (IData)(vlSelf->top__DOT__my_idu__DOT__ExtOp))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                        >> 0x1fU)))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     ((0xff000U 
                                                                       & vlSelf->top__DOT__ID_Reg__DOT__instr_r) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                                               >> 0x14U)))))))
                                                   : 0ULL)))));
    __Vtableidx1 = vlSelf->top__DOT__id_ALUOp_o;
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr 
        = Vtop__ConstPool__TABLE_8db4e481_0[__Vtableidx1];
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SIGctr 
        = Vtop__ConstPool__TABLE_6ee9ed8c_0[__Vtableidx1];
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__ALctr 
        = Vtop__ConstPool__TABLE_a9c47812_0[__Vtableidx1];
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SFTctr 
        = Vtop__ConstPool__TABLE_aa2192ff_0[__Vtableidx1];
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__Wctr 
        = Vtop__ConstPool__TABLE_f4558aae_0[__Vtableidx1];
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__OPctr 
        = Vtop__ConstPool__TABLE_6fbd8736_0[__Vtableidx1];
    vlSelf->top__DOT__id_rs1 = ((IData)(vlSelf->top__DOT__id_Ecall)
                                 ? 0x11U : (0x1fU & 
                                            (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                             >> 0xfU)));
    if ((0U != (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        if ((1U != (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
            if ((2U != (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
                vlSelf->top__DOT__my_mu__DOT__mem__DOT__datad 
                    = vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout;
            }
        }
    }
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp = (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                      << 3U));
    if ((0U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffffeU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (1U & (IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                >> (0x3fU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffffdU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (2U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(1U) 
                                              + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                        << 1U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffffbU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (4U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(2U) 
                                              + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                        << 2U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffff7U & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (8U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(3U) 
                                              + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                        << 3U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffffefU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x10U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(4U) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                           << 4U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffffdfU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x20U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(5U) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                           << 5U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffffbfU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x40U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(6U) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                           << 6U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffff7fU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x80U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(7U) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                           << 7U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffeffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x100U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(8U) 
                                                  + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                            << 8U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffdffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x200U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(9U) 
                                                  + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                            << 9U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffffbffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x400U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(0xaU) 
                                                  + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                            << 0xaU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffff7ffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x800U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(0xbU) 
                                                  + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                            << 0xbU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffefffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x1000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xcU) 
                                                   + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                             << 0xcU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffdfffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x2000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                             << 0xdU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffffbfffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x4000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xeU) 
                                                   + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                             << 0xeU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffff7fffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x8000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xfU) 
                                                   + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                             << 0xfU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffeffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x10000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                       >> (0x3fU & 
                                           ((IData)(0x10U) 
                                            + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                              << 0x10U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffdffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x20000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                       >> (0x3fU & 
                                           ((IData)(0x11U) 
                                            + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                              << 0x11U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfffbffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x40000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                       >> (0x3fU & 
                                           ((IData)(0x12U) 
                                            + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                              << 0x12U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfff7ffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x80000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                       >> (0x3fU & 
                                           ((IData)(0x13U) 
                                            + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                              << 0x13U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffefffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x100000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(0x14U) 
                                             + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                               << 0x14U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffdfffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x200000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(0x15U) 
                                             + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                               << 0x15U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xffbfffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x400000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(0x16U) 
                                             + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                               << 0x16U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xff7fffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x800000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                        >> (0x3fU & 
                                            ((IData)(0x17U) 
                                             + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                               << 0x17U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfeffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x1000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(0x18U) 
                                                + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                                << 0x18U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfdffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x2000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(0x19U) 
                                                + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                                << 0x19U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xfbffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x4000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(0x1aU) 
                                                + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                                << 0x1aU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xf7ffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x8000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                         >> (0x3fU 
                                             & ((IData)(0x1bU) 
                                                + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                                << 0x1bU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xefffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x10000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                          >> (0x3fU 
                                              & ((IData)(0x1cU) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                                 << 0x1cU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xdfffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x20000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                          >> (0x3fU 
                                              & ((IData)(0x1dU) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                                 << 0x1dU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0xbfffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | (0x40000000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                          >> (0x3fU 
                                              & ((IData)(0x1eU) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                                 << 0x1eU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
            = ((0x7fffffffU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw) 
               | ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                           >> (0x3fU & ((IData)(0x1fU) 
                                        + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                  << 0x1fU));
    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
            = ((0xfeU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
               | (1U & (IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                >> (0x3fU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
            = ((0xfdU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
               | (2U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(1U) 
                                              + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                        << 1U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
            = ((0xfbU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
               | (4U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(2U) 
                                              + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                        << 2U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
            = ((0xf7U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
               | (8U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(3U) 
                                              + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                        << 3U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
            = ((0xefU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
               | (0x10U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(4U) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                           << 4U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
            = ((0xdfU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
               | (0x20U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(5U) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                           << 5U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
            = ((0xbfU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
               | (0x40U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(6U) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                           << 6U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab 
            = ((0x7fU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)) 
               | (0x80U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(7U) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                           << 7U)));
    } else if ((2U == (3U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (1U & (IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                >> (0x3fU & vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (2U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(1U) 
                                              + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                        << 1U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (4U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(2U) 
                                              + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                        << 2U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (8U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                 >> (0x3fU & ((IData)(3U) 
                                              + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                        << 3U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xffefU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (0x10U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(4U) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                           << 4U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (0x20U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(5U) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                           << 5U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (0x40U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(6U) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                           << 6U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (0x80U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x3fU & ((IData)(7U) 
                                                 + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                           << 7U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (0x100U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(8U) 
                                                  + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                            << 8U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (0x200U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(9U) 
                                                  + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                            << 9U)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (0x400U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(0xaU) 
                                                  + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                            << 0xaU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (0x800U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                     >> (0x3fU & ((IData)(0xbU) 
                                                  + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                            << 0xbU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xefffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (0x1000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xcU) 
                                                   + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                             << 0xcU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (0x2000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xdU) 
                                                   + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                             << 0xdU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (0x4000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xeU) 
                                                   + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                             << 0xeU)));
        vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)) 
               | (0x8000U & ((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout 
                                      >> (0x3fU & ((IData)(0xfU) 
                                                   + vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp)))) 
                             << 0xfU)));
    }
    Vtop___024unit____Vdpiimwrap_get_instr_TOP____024unit(vlSelf->top__DOT__if_instr_o);
    vlSelf->instr = vlSelf->top__DOT__if_instr_o;
    vlSelf->top__DOT__id_CsrId = ((IData)(vlSelf->top__DOT__id_Ecall)
                                   ? 0x342U : (0xfffU 
                                               & (IData)(vlSelf->top__DOT__id_imm_o)));
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
        = (((1U == (IData)(vlSelf->top__DOT__id_ALUSrcB_o))
             ? vlSelf->top__DOT__id_imm_o : ((0U == (IData)(vlSelf->top__DOT__id_ALUSrcB_o))
                                              ? vlSelf->top__DOT__id_busb
                                              : 4ULL)) 
           ^ (- (QData)((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr))));
    vlSelf->top__DOT__id_m_hazard = (((((IData)(vlSelf->top__DOT__id_use_rd) 
                                        & ((IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r) 
                                           & (((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__M_Reg__DOT__instr_r)) 
                                               | (0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__M_Reg__DOT__instr_r))) 
                                              | (0x73U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__M_Reg__DOT__instr_r))))) 
                                       & (0U != (IData)(vlSelf->top__DOT__id_rs1))) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0x14U)))) 
                                     & (((IData)(vlSelf->top__DOT__id_rs1) 
                                         == (IData)(vlSelf->top__DOT__M_Reg__DOT__rd_r)) 
                                        | ((0x1fU & 
                                            (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                             >> 0x14U)) 
                                           == (IData)(vlSelf->top__DOT__M_Reg__DOT__rd_r))));
    vlSelf->top__DOT__id_wb_hazard = (((((IData)(vlSelf->top__DOT__id_use_rd) 
                                         & ((IData)(vlSelf->top__DOT__WB_Reg__DOT__valid_r) 
                                            & (((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__WB_Reg__DOT__instr_r)) 
                                                | (0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__WB_Reg__DOT__instr_r))) 
                                               | (0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__WB_Reg__DOT__instr_r))))) 
                                        & (0U != (IData)(vlSelf->top__DOT__id_rs1))) 
                                       & (0U != (0x1fU 
                                                 & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                    >> 0x14U)))) 
                                      & (((IData)(vlSelf->top__DOT__id_rs1) 
                                          == (IData)(vlSelf->top__DOT__WB_Reg__DOT__waddr_r)) 
                                         | ((0x1fU 
                                             & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->top__DOT__WB_Reg__DOT__waddr_r))));
    vlSelf->top__DOT__id_ex_hazard = (((((IData)(vlSelf->top__DOT__id_use_rd) 
                                         & ((IData)(vlSelf->top__DOT__EX_Reg__DOT__valid_r) 
                                            & (((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__EX_Reg__DOT__instr_r)) 
                                                | (0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__EX_Reg__DOT__instr_r))) 
                                               | (0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__EX_Reg__DOT__instr_r))))) 
                                        & (0U != (IData)(vlSelf->top__DOT__id_rs1))) 
                                       & (0U != (0x1fU 
                                                 & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                    >> 0x14U)))) 
                                      & (((IData)(vlSelf->top__DOT__id_rs1) 
                                          == (IData)(vlSelf->top__DOT__EX_Reg__DOT__rd_r)) 
                                         | ((0x1fU 
                                             & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->top__DOT__EX_Reg__DOT__rd_r))));
    vlSelf->top__DOT__id_busa = ((0U == (IData)(vlSelf->top__DOT__id_rs1))
                                  ? 0ULL : vlSelf->top__DOT__regfile__DOT__rf
                                 [vlSelf->top__DOT__id_rs1]);
    vlSelf->top__DOT__m_rfdata_o = ((IData)(vlSelf->top__DOT__M_Reg__DOT__CsrToReg_r)
                                     ? vlSelf->top__DOT__M_Reg__DOT__Csrres_r
                                     : ((IData)(vlSelf->top__DOT__M_Reg__DOT__MemToReg_r)
                                         ? ((4U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                             ? ((2U 
                                                 & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                  ? 0ULL
                                                  : (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                  ? (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab))
                                                  : (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw))))
                                             : ((2U 
                                                 & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                  ? vlSelf->top__DOT__my_mu__DOT__mem__DOT__datad
                                                  : 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah) 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab) 
                                                                          >> 7U))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw))))))
                                         : vlSelf->top__DOT__M_Reg__DOT__raddr_r));
    vlSelf->top__DOT__id_csrres_o = ((0x305U == (IData)(vlSelf->top__DOT__id_CsrId))
                                      ? vlSelf->top__DOT__csrfile__DOT__mtvec
                                      : ((0x340U == (IData)(vlSelf->top__DOT__id_CsrId))
                                          ? vlSelf->top__DOT__csrfile__DOT__mscratch
                                          : ((0x341U 
                                              == (IData)(vlSelf->top__DOT__id_CsrId))
                                              ? vlSelf->top__DOT__csrfile__DOT__mepc
                                              : ((0x342U 
                                                  == (IData)(vlSelf->top__DOT__id_CsrId))
                                                  ? vlSelf->top__DOT__csrfile__DOT__mcause
                                                  : 0ULL))));
    vlSelf->top__DOT__load_use = ((IData)(vlSelf->top__DOT__id_ex_hazard) 
                                  & (3U == (0x7fU & vlSelf->top__DOT__EX_Reg__DOT__instr_r)));
    vlSelf->top__DOT__my_idu__DOT__alu_inA = ((IData)(vlSelf->top__DOT__id_ALUSrcA_o)
                                               ? vlSelf->top__DOT__id_busa
                                               : vlSelf->top__DOT__ID_Reg__DOT__pc_r);
    vlSelf->top__DOT__csrfile__DOT__csrin = ((0U == (IData)(vlSelf->top__DOT__id_CsrOp))
                                              ? vlSelf->top__DOT__id_busa
                                              : ((1U 
                                                  == (IData)(vlSelf->top__DOT__id_CsrOp))
                                                  ? 
                                                 (vlSelf->top__DOT__id_csrres_o 
                                                  | vlSelf->top__DOT__id_busa)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__id_CsrOp))
                                                   ? 
                                                  (vlSelf->top__DOT__id_csrres_o 
                                                   & (~ vlSelf->top__DOT__id_busa))
                                                   : 0ULL)));
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_4f660885_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_1d882cf2_0;

void Vtop___024root___settle__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__6\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx2;
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
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
        = (((QData)((IData)(((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                              [3U] << 0x18U) | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                                   [0U]))))) 
            << 0x20U) | (QData)((IData)(((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                               [0U]))))));
    vlSelf->top__DOT__my_exu__DOT__res = (((((((((0U 
                                                  == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr)) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                                                | (2U 
                                                   == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                                               | (3U 
                                                  == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                                              | (4U 
                                                 == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                                             | (5U 
                                                == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                                            | (6U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                                           | (7U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr)))
                                           ? ((0U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                               ? ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)))
                                                   : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)
                                               : ((1U 
                                                   == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                                   ? 
                                                  (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                   & vlSelf->top__DOT__my_exu__DOT__alu_inB)
                                                   : 
                                                  ((2U 
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
                                                        VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__my_exu__DOT__alu_inA, 
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
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r))
                                                         ? 
                                                        ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulresW 
                                                                                >> 0x1fU))))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulresW)))
                                                          : 
                                                         (((QData)((IData)(
                                                                           vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulres[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulres[0U]))))
                                                         : 
                                                        (((QData)((IData)(
                                                                          vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulres[3U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulres[2U])))))))))))
                                           : ((8U == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                               ? ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divresW 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divresW)))
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr)
                                                     ? 
                                                    VL_DIVS_QQQ(64, vlSelf->top__DOT__my_exu__DOT__alu_inA, vlSelf->top__DOT__my_exu__DOT__alu_inB)
                                                     : 
                                                    VL_DIV_QQQ(64, vlSelf->top__DOT__my_exu__DOT__alu_inA, vlSelf->top__DOT__my_exu__DOT__alu_inB))
                                                    : 0ULL))
                                               : ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remresW 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remresW)))
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr)
                                                     ? 
                                                    VL_MODDIVS_QQQ(64, vlSelf->top__DOT__my_exu__DOT__alu_inA, vlSelf->top__DOT__my_exu__DOT__alu_inB)
                                                     : 
                                                    VL_MODDIV_QQQ(64, vlSelf->top__DOT__my_exu__DOT__alu_inA, vlSelf->top__DOT__my_exu__DOT__alu_inB))
                                                    : 0ULL))));
    __Vtableidx2 = ((0x10U & ((IData)(((0U == (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__OPctr))
                                        ? ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                            : vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                        : (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SIGctr)
                                                               ? 
                                                              (((((~ (IData)(
                                                                             (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                                              >> 0x3fU))) 
                                                                  & (~ (IData)(
                                                                               (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU)))) 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                            >> 0x3fU))) 
                                                                | (((IData)(
                                                                            (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                                             >> 0x3fU)) 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                               >> 0x3fU))) 
                                                                   & (~ (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU))))) 
                                                               ^ (IData)(
                                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                          >> 0x3fU)))
                                                               : 
                                                              (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                                >> 3U) 
                                                               ^ (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))))))) 
                              << 4U)) | ((((0ULL == vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                            ? 1U : 0U) 
                                          << 3U) | (IData)(vlSelf->top__DOT__my_idu__DOT__Branch)));
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexA 
        = Vtop__ConstPool__TABLE_4f660885_0[__Vtableidx2];
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexB 
        = Vtop__ConstPool__TABLE_1d882cf2_0[__Vtableidx2];
    vlSelf->top__DOT__forward_data = ((IData)(vlSelf->top__DOT__id_ex_hazard)
                                       ? ((IData)(vlSelf->top__DOT__EX_Reg__DOT__CsrToReg_r)
                                           ? vlSelf->top__DOT__EX_Reg__DOT__Csrres_r
                                           : vlSelf->top__DOT__my_exu__DOT__res)
                                       : ((IData)(vlSelf->top__DOT__id_m_hazard)
                                           ? vlSelf->top__DOT__m_rfdata_o
                                           : ((IData)(vlSelf->top__DOT__id_wb_hazard)
                                               ? vlSelf->top__DOT__WB_Reg__DOT__wdata_r
                                               : 0ULL)));
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
        = ((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexB)
            ? vlSelf->top__DOT__id_imm_o : 4ULL);
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
        = ((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexA)
            ? vlSelf->top__DOT__id_busa : vlSelf->top__DOT__ID_Reg__DOT__pc_r);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__1(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low__5(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high__6(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__7(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__8(Vtop_ysyx_220053_Adder32* vlSelf);
void Vtop___024root___settle__TOP__7(Vtop___024root* vlSelf);

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__1((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___sequent__TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2((&vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low__5((&vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high__6((&vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high));
    Vtop___024root___settle__TOP__6(vlSelf);
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__7((&vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low));
    Vtop_ysyx_220053_Adder32___settle__TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__8((&vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high));
    Vtop___024root___settle__TOP__7(vlSelf);
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
    vlSelf->wb_commit = VL_RAND_RESET_I(1);
    vlSelf->wb_pc = VL_RAND_RESET_Q(64);
    vlSelf->wb_instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__if_instr_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__if_block = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_csrres_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__id_imm_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_ALUSrcA_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_MemToReg_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_MemWen_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_wen_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_CsrToReg_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_Ebreak_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_ALUSrcB_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__id_MemOp_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__id_ALUOp_o = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__id_MulOp_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__id_CsrOp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__id_Ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_Mret = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_Csrwen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_busa = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_busb = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_CsrId = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__m_ALURes_i = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__m_rfdata_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__running_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_use_rd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_ex_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_m_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__id_wb_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__load_use = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__forward_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__is_Csrwen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb_commit_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb_pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wb_instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_ifu__DOT__now_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_ifu__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_ifu__DOT__valid_dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ID_Reg__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ID_Reg__DOT__instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ID_Reg__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__ExtOp = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_idu__DOT__Branch = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__my_idu__DOT__alu_inA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SIGctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__ALctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SFTctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__Wctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__OPctr = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_Reg__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_Reg__DOT__instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__EX_Reg__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_Reg__DOT__rd_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EX_Reg__DOT__busa_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_Reg__DOT__busb_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_Reg__DOT__imm_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_Reg__DOT__ALUSrcA_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_Reg__DOT__MemToReg_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_Reg__DOT__MemWen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_Reg__DOT__wen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_Reg__DOT__CsrToReg_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EX_Reg__DOT__ALUSrcB_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__EX_Reg__DOT__MemOp_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__EX_Reg__DOT__ALUOp_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__EX_Reg__DOT__MulOp_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__EX_Reg__DOT__Csrres_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EX_Reg__DOT__Ebreak_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__res = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu_inA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu_inB = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulres);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulresW = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divresW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remresW = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__M_Reg__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__M_Reg__DOT__instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__M_Reg__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__M_Reg__DOT__MemOp_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__M_Reg__DOT__raddr_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__M_Reg__DOT__MemWen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__M_Reg__DOT__wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__M_Reg__DOT__Csrres_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__M_Reg__DOT__rd_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__M_Reg__DOT__wen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__M_Reg__DOT__MemToReg_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__M_Reg__DOT__CsrToReg_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__M_Reg__DOT__Ebreak_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_mu__DOT__is_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__datad = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_mu__DOT__mem__DOT__tmp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WB_Reg__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WB_Reg__DOT__instr_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__WB_Reg__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__WB_Reg__DOT__wen_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__WB_Reg__DOT__wdata_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__WB_Reg__DOT__waddr_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__WB_Reg__DOT__Ebreak_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__regfile__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__csrfile__DOT__csrin = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csrfile__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csrfile__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csrfile__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csrfile__DOT__mscratch = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_pmem_read__1__rdata = 0;
    vlSelf->__Vtask_pmem_read__3__rdata = 0;
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
