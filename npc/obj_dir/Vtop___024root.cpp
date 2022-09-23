// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__mycpu__DOT__core__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__mycpu__DOT__core__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

void Vtop___024unit____Vdpiimwrap_get_instr_TOP____024unit(IData/*31:0*/ instr);
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_13cca9cb_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_847b487e_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_376f51ec_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_60aa1eb0_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx7;
    CData/*7:0*/ __Vtableidx8;
    CData/*0:0*/ __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V__v256;
    CData/*0:0*/ __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V__v256;
    CData/*0:0*/ __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag__v256;
    CData/*0:0*/ __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag__v256;
    CData/*6:0*/ __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt;
    CData/*6:0*/ __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt;
    CData/*3:0*/ __Vdly__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__cnt;
    CData/*7:0*/ __Vdly__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt;
    CData/*0:0*/ __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v256;
    CData/*0:0*/ __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v256;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v257;
    CData/*0:0*/ __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v257;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v258;
    CData/*0:0*/ __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v258;
    CData/*0:0*/ __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V__v256;
    CData/*0:0*/ __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V__v256;
    CData/*0:0*/ __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v256;
    CData/*0:0*/ __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v256;
    CData/*0:0*/ __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf__v0;
    CData/*2:0*/ __Vdly__top__DOT__mycpu__DOT__axi__DOT__w_status;
    CData/*7:0*/ __Vdly__top__DOT__mycpu__DOT__axi__DOT__wcnt;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__sram0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__sram0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__sram1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__sram1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__sram2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__sram2__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__sram3__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__sram3__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__sram4__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__sram4__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__sram5__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__sram5__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__sram6__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__sram6__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__sram7__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__sram7__DOT__ram__v0;
    VlWide<5>/*131:0*/ __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r;
    VlWide<3>/*66:0*/ __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram2__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram3__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram4__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram5__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram6__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__sram7__DOT__ram__v0;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<4>/*127:0*/ __Vtemp53;
    VlWide<4>/*127:0*/ __Vtemp62;
    VlWide<4>/*127:0*/ __Vtemp63;
    IData/*31:0*/ __Vilp;
    QData/*51:0*/ __Vdlyvval__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag__v256;
    QData/*63:0*/ __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r;
    QData/*63:0*/ __Vdly__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime;
    QData/*51:0*/ __Vdlyvval__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v256;
    QData/*63:0*/ __Vtemp50;
    // Body
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__cnt 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__cnt;
    __Vdlyvset__top__DOT__sram7__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__sram6__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__sram5__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__sram4__DOT__ram__v0 = 0U;
    __Vdly__top__DOT__mycpu__DOT__axi__DOT__w_status 
        = vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status;
    vlSelf->__Vdly__top__DOT__mycpu__DOT__axi__DOT__rcnt 
        = vlSelf->top__DOT__mycpu__DOT__axi__DOT__rcnt;
    __Vdly__top__DOT__mycpu__DOT__axi__DOT__wcnt = vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt;
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt;
    vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid;
    __Vdlyvset__top__DOT__sram3__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__sram2__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__sram1__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__sram0__DOT__ram__v0 = 0U;
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt;
    __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V__v0 = 0U;
    __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V__v256 = 0U;
    __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag__v0 = 0U;
    __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag__v256 = 0U;
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime;
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U];
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U];
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U];
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U];
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U];
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U];
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[1U] 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[1U];
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[2U] 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[2U];
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r;
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt;
    __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v0 = 0U;
    __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v256 = 0U;
    __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V__v0 = 0U;
    __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V__v256 = 0U;
    __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v0 = 0U;
    __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v256 = 0U;
    __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v257 = 0U;
    __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v258 = 0U;
    __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf__v32 = 0U;
    vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[0U] 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[0U];
    vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U];
    vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U];
    vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U];
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__i = 0x100U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__i = 0x20U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__i = 0x100U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__i = 0x100U;
    }
    if ((1U & (~ ((((IData)(vlSelf->rst) | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o) 
                                            | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_busy))) 
                   | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__cpu_halt)) 
                  | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i))))) {
        Vtop___024unit____Vdpiimwrap_get_instr_TOP____024unit(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_instr_o);
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((3U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
             & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg)))) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__i = 0x10U;
        }
    }
    __Vdly__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__cnt 
        = ((IData)(vlSelf->rst) ? 0U : (0xfU & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__cnt))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__axi__DOT__aw_valid_r = 0U;
    } else if (((IData)(vlSelf->axi_aw_ready_i) & (IData)(vlSelf->axi_aw_valid_o))) {
        vlSelf->top__DOT__mycpu__DOT__axi__DOT__aw_valid_r = 0U;
    } else if ((((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status)) 
                 & (IData)(vlSelf->top__DOT__mycpu__DOT__rw_valid_o)) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__rw_req_o))) {
        vlSelf->top__DOT__mycpu__DOT__axi__DOT__aw_valid_r = 1U;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
        [3U]) {
        vlSelf->top__DOT__io_sram7_rdata[0U] = vlSelf->top__DOT__sram7__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][0U];
        vlSelf->top__DOT__io_sram7_rdata[1U] = vlSelf->top__DOT__sram7__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][1U];
        vlSelf->top__DOT__io_sram7_rdata[2U] = vlSelf->top__DOT__sram7__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][2U];
        vlSelf->top__DOT__io_sram7_rdata[3U] = vlSelf->top__DOT__sram7__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][3U];
    } else {
        vlSelf->top__DOT__io_sram7_rdata[0U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram7_rdata[1U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram7_rdata[2U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram7_rdata[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
               [3U]))) {
        __Vdlyvval__top__DOT__sram7__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[0U];
        __Vdlyvval__top__DOT__sram7__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[1U];
        __Vdlyvval__top__DOT__sram7__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[2U];
        __Vdlyvval__top__DOT__sram7__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[3U];
        __Vdlyvset__top__DOT__sram7__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram7__DOT__ram__v0 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
        [2U]) {
        vlSelf->top__DOT__io_sram6_rdata[0U] = vlSelf->top__DOT__sram6__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][0U];
        vlSelf->top__DOT__io_sram6_rdata[1U] = vlSelf->top__DOT__sram6__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][1U];
        vlSelf->top__DOT__io_sram6_rdata[2U] = vlSelf->top__DOT__sram6__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][2U];
        vlSelf->top__DOT__io_sram6_rdata[3U] = vlSelf->top__DOT__sram6__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][3U];
    } else {
        vlSelf->top__DOT__io_sram6_rdata[0U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram6_rdata[1U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram6_rdata[2U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram6_rdata[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
               [2U]))) {
        __Vdlyvval__top__DOT__sram6__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[0U];
        __Vdlyvval__top__DOT__sram6__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[1U];
        __Vdlyvval__top__DOT__sram6__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[2U];
        __Vdlyvval__top__DOT__sram6__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[3U];
        __Vdlyvset__top__DOT__sram6__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram6__DOT__ram__v0 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
        [1U]) {
        vlSelf->top__DOT__io_sram5_rdata[0U] = vlSelf->top__DOT__sram5__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][0U];
        vlSelf->top__DOT__io_sram5_rdata[1U] = vlSelf->top__DOT__sram5__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][1U];
        vlSelf->top__DOT__io_sram5_rdata[2U] = vlSelf->top__DOT__sram5__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][2U];
        vlSelf->top__DOT__io_sram5_rdata[3U] = vlSelf->top__DOT__sram5__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][3U];
    } else {
        vlSelf->top__DOT__io_sram5_rdata[0U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram5_rdata[1U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram5_rdata[2U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram5_rdata[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
               [1U]))) {
        __Vdlyvval__top__DOT__sram5__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[0U];
        __Vdlyvval__top__DOT__sram5__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[1U];
        __Vdlyvval__top__DOT__sram5__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[2U];
        __Vdlyvval__top__DOT__sram5__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[3U];
        __Vdlyvset__top__DOT__sram5__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram5__DOT__ram__v0 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
        [0U]) {
        vlSelf->top__DOT__io_sram4_rdata[0U] = vlSelf->top__DOT__sram4__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][0U];
        vlSelf->top__DOT__io_sram4_rdata[1U] = vlSelf->top__DOT__sram4__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][1U];
        vlSelf->top__DOT__io_sram4_rdata[2U] = vlSelf->top__DOT__sram4__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][2U];
        vlSelf->top__DOT__io_sram4_rdata[3U] = vlSelf->top__DOT__sram4__DOT__ram
            [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr][3U];
    } else {
        vlSelf->top__DOT__io_sram4_rdata[0U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram4_rdata[1U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram4_rdata[2U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram4_rdata[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
               [0U]))) {
        __Vdlyvval__top__DOT__sram4__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[0U];
        __Vdlyvval__top__DOT__sram4__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[1U];
        __Vdlyvval__top__DOT__sram4__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[2U];
        __Vdlyvval__top__DOT__sram4__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[3U];
        __Vdlyvset__top__DOT__sram4__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram4__DOT__ram__v0 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr;
    }
    __Vtableidx7 = (((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_last) 
                     << 7U) | (((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__b_fire) 
                                << 6U) | (((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT__mycpu__DOT__rw_req_o) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__mycpu__DOT__rw_valid_o) 
                                               << 1U) 
                                              | (IData)(vlSelf->rst))))));
    if (Vtop__ConstPool__TABLE_13cca9cb_0[__Vtableidx7]) {
        __Vdly__top__DOT__mycpu__DOT__axi__DOT__w_status 
            = Vtop__ConstPool__TABLE_847b487e_0[__Vtableidx7];
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_valid_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_last) {
        vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_valid_r = 0U;
    } else if ((((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status)) 
                 & (IData)(vlSelf->top__DOT__mycpu__DOT__rw_valid_o)) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__rw_req_o))) {
        vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_valid_r = 1U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mscratch = 0ULL;
    } else if (((0x340U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId)) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Csrwen))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mscratch 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__csrin;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mcause = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Time_interrupt) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mcause = 0x8000000000000007ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Ecall) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mcause = 0xbULL;
    } else if (((0x342U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId)) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Csrwen))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mcause 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__csrin;
    }
    if (((IData)(vlSelf->rst) | ((~ (IData)(vlSelf->top__DOT__mycpu__DOT__rw_req_o)) 
                                 & (0U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status))))) {
        vlSelf->__Vdly__top__DOT__mycpu__DOT__axi__DOT__rcnt = 0U;
    } else if ((((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__rcnt) 
                 != ((IData)(vlSelf->top__DOT__mycpu__DOT__rw_dev_o)
                      ? 0U : 1U)) & (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_fire))) {
        vlSelf->__Vdly__top__DOT__mycpu__DOT__axi__DOT__rcnt 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__rcnt)));
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mip 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Time_interrupt)
                                           ? ((0xffffffffffffff00ULL 
                                               & vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mip) 
                                              | (QData)((IData)(
                                                                (0x80U 
                                                                 | (0x7fU 
                                                                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mip))))))
                                           : (((0x344U 
                                                == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId)) 
                                               & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Csrwen))
                                               ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__csrin
                                               : ((0xffffffffffffff00ULL 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mip) 
                                                  | (QData)((IData)(
                                                                    (0x7fU 
                                                                     & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mip))))))));
    __Vtableidx8 = ((((IData)(vlSelf->axi_ar_ready_i) 
                      & (IData)(vlSelf->axi_ar_valid_o)) 
                     << 7U) | (((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_last) 
                                << 6U) | (((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status) 
                                           << 3U) | 
                                          (((IData)(vlSelf->top__DOT__mycpu__DOT__rw_req_o) 
                                            << 2U) 
                                           | (((IData)(vlSelf->top__DOT__mycpu__DOT__rw_valid_o) 
                                               << 1U) 
                                              | (IData)(vlSelf->rst))))));
    if (Vtop__ConstPool__TABLE_376f51ec_0[__Vtableidx8]) {
        vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status 
            = Vtop__ConstPool__TABLE_60aa1eb0_0[__Vtableidx8];
    }
    if (((IData)(vlSelf->rst) | ((IData)(vlSelf->top__DOT__mycpu__DOT__rw_req_o) 
                                 & (0U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status))))) {
        __Vdly__top__DOT__mycpu__DOT__axi__DOT__wcnt = 0U;
    } else if ((((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                 != ((IData)(vlSelf->top__DOT__mycpu__DOT__rw_dev_o)
                      ? 0U : 1U)) & (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_fire))) {
        __Vdly__top__DOT__mycpu__DOT__axi__DOT__wcnt 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt)));
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid))) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt)));
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_valid_o 
        = (1U & ((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__flush)) 
                 & ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))
                     ? (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i))
                     : ((4U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status)) 
                        & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i))))));
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_req_o = 0U;
    } else if ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i)))) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_req_o = 0U;
        }
    } else if ((4U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i)))) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_req_o = 0U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_doing = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_doing = 0U;
    } else if (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_valid) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_ready))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_doing = 1U;
    }
    if (vlSelf->rst) {
        vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid) {
        vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__calculate_done) {
        vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid = 1U;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
        [3U]) {
        vlSelf->top__DOT__io_sram3_rdata[0U] = vlSelf->top__DOT__sram3__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][0U];
        vlSelf->top__DOT__io_sram3_rdata[1U] = vlSelf->top__DOT__sram3__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][1U];
        vlSelf->top__DOT__io_sram3_rdata[2U] = vlSelf->top__DOT__sram3__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][2U];
        vlSelf->top__DOT__io_sram3_rdata[3U] = vlSelf->top__DOT__sram3__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][3U];
    } else {
        vlSelf->top__DOT__io_sram3_rdata[0U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram3_rdata[1U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram3_rdata[2U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram3_rdata[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
               [3U]))) {
        __Vdlyvval__top__DOT__sram3__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[0U];
        __Vdlyvval__top__DOT__sram3__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[1U];
        __Vdlyvval__top__DOT__sram3__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[2U];
        __Vdlyvval__top__DOT__sram3__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[3U];
        __Vdlyvset__top__DOT__sram3__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram3__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                >> 4U)));
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
        [2U]) {
        vlSelf->top__DOT__io_sram2_rdata[0U] = vlSelf->top__DOT__sram2__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][0U];
        vlSelf->top__DOT__io_sram2_rdata[1U] = vlSelf->top__DOT__sram2__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][1U];
        vlSelf->top__DOT__io_sram2_rdata[2U] = vlSelf->top__DOT__sram2__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][2U];
        vlSelf->top__DOT__io_sram2_rdata[3U] = vlSelf->top__DOT__sram2__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][3U];
    } else {
        vlSelf->top__DOT__io_sram2_rdata[0U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram2_rdata[1U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram2_rdata[2U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram2_rdata[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
               [2U]))) {
        __Vdlyvval__top__DOT__sram2__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[0U];
        __Vdlyvval__top__DOT__sram2__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[1U];
        __Vdlyvval__top__DOT__sram2__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[2U];
        __Vdlyvval__top__DOT__sram2__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[3U];
        __Vdlyvset__top__DOT__sram2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram2__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                >> 4U)));
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
        [1U]) {
        vlSelf->top__DOT__io_sram1_rdata[0U] = vlSelf->top__DOT__sram1__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][0U];
        vlSelf->top__DOT__io_sram1_rdata[1U] = vlSelf->top__DOT__sram1__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][1U];
        vlSelf->top__DOT__io_sram1_rdata[2U] = vlSelf->top__DOT__sram1__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][2U];
        vlSelf->top__DOT__io_sram1_rdata[3U] = vlSelf->top__DOT__sram1__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][3U];
    } else {
        vlSelf->top__DOT__io_sram1_rdata[0U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram1_rdata[1U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram1_rdata[2U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram1_rdata[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
               [1U]))) {
        __Vdlyvval__top__DOT__sram1__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[0U];
        __Vdlyvval__top__DOT__sram1__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[1U];
        __Vdlyvval__top__DOT__sram1__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[2U];
        __Vdlyvval__top__DOT__sram1__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[3U];
        __Vdlyvset__top__DOT__sram1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram1__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                >> 4U)));
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
        [0U]) {
        vlSelf->top__DOT__io_sram0_rdata[0U] = vlSelf->top__DOT__sram0__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][0U];
        vlSelf->top__DOT__io_sram0_rdata[1U] = vlSelf->top__DOT__sram0__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][1U];
        vlSelf->top__DOT__io_sram0_rdata[2U] = vlSelf->top__DOT__sram0__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][2U];
        vlSelf->top__DOT__io_sram0_rdata[3U] = vlSelf->top__DOT__sram0__DOT__ram
            [(0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 4U)))][3U];
    } else {
        vlSelf->top__DOT__io_sram0_rdata[0U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram0_rdata[1U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram0_rdata[2U] = VL_RANDOM_I(32);
        vlSelf->top__DOT__io_sram0_rdata[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
               [0U]))) {
        __Vdlyvval__top__DOT__sram0__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[0U];
        __Vdlyvval__top__DOT__sram0__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[1U];
        __Vdlyvval__top__DOT__sram0__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[2U];
        __Vdlyvval__top__DOT__sram0__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[3U];
        __Vdlyvset__top__DOT__sram0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__sram0__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                >> 4U)));
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r))) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt)));
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_addr_o = 0ULL;
    } else if ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i)))) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_addr_o 
                = (0xfffffffffffffff0ULL & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc);
        }
    } else if ((4U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i)))) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_addr_o 
                = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc;
        }
    }
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__rw_ready_r 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->top__DOT__mycpu__DOT__rw_req_o) 
                                        & (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__b_fire)) 
                                       | ((~ (IData)(vlSelf->top__DOT__mycpu__DOT__rw_req_o)) 
                                          & (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_last))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_doing = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_doing = 0U;
    } else if (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_valid) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_doing = 1U;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__next_status));
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__flush) {
        __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V__v0 = 1U;
    } else if ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))) {
        if (vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i) {
            __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V__v256 = 1U;
            __Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V__v256 
                = (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                    >> 4U)));
        }
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__flush) {
        __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag__v0 = 1U;
    } else if ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))) {
        if (vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i) {
            __Vdlyvval__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag__v256 
                = (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                   >> 0xcU);
            __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag__v256 = 1U;
            __Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag__v256 
                = (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                    >> 4U)));
        }
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__start 
        = vlSelf->rst;
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mtvec = 0ULL;
    } else if (((0x305U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId)) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Csrwen))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mtvec 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__csrin;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mie = 0ULL;
    } else if (((0x304U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId)) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Csrwen))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mie 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__csrin;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_en))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__old_instr = 0U;
    } else if (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__i_cpu_ready) 
                & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_en)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__old_instr = 1U;
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime = 0ULL;
    } else if ((7U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__cnt))) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime 
            = (1ULL + vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime);
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_doing = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__i_cpu_ready) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_doing = 0U;
    } else if (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_req_valid) 
                & (0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_doing = 1U;
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] = 0U;
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] = 0U;
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] = 0U;
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] = 0U;
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[0U];
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[1U];
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
            = (((- (IData)((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[2U]))) 
                << 2U) | ((2U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[2U] 
                                 << 1U)) | vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[2U]));
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
            = (((- (IData)((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[2U]))) 
                >> 0x1eU) | ((- (IData)((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[2U]))) 
                             << 2U));
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
            = (((- (IData)((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[2U]))) 
                >> 0x1eU) | (0xcU & ((- (IData)((1U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[2U]))) 
                                     << 2U)));
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
            = (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
               << 2U);
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
            = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                >> 0x1eU) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                             << 2U));
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
            = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                >> 0x1eU) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                             << 2U));
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
            = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                >> 0x1eU) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                             << 2U));
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
            = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                >> 0x1eU) | (0xcU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                     << 2U)));
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] = 0U;
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[1U] = 0U;
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[2U] = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
            = (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[0U] 
               << 1U);
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[1U] 
            = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[0U] 
                >> 0x1fU) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[1U] 
                             << 1U));
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[2U] 
            = ((4U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[2U] 
                      << 2U)) | ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[1U] 
                                  >> 0x1fU) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[2U] 
                                               << 1U)));
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r) {
        __Vtemp48[0U] = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[1U] 
                          << 0x1eU) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                       >> 2U));
        __Vtemp48[1U] = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[2U] 
                          << 0x1eU) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[1U] 
                                       >> 2U));
        __Vtemp48[2U] = (1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[2U] 
                               >> 2U));
        VL_EXTEND_WW(67,65, __Vtemp49, __Vtemp48);
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
            = __Vtemp49[0U];
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[1U] 
            = __Vtemp49[1U];
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[2U] 
            = __Vtemp49[2U];
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder_r = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient_r = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r 
            = (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U])));
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing))) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r 
            = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r 
                << 1U) | (QData)((IData)((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s))))));
    }
    if ((1U & ((IData)(vlSelf->rst) | (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy))))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div = 0U;
    } else if (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div = 1U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_hi_r = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_hi_r 
            = (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[2U])));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_lo_r = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_lo_r 
            = (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[0U])));
    }
    if ((1U & ((IData)(vlSelf->rst) | (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy))))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul = 0U;
    } else if (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul = 1U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cache_doing = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__d_cpu_ready) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cache_doing = 0U;
    } else if (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_req_valid) 
                & (0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cache_doing = 1U;
    }
    if (((IData)(vlSelf->rst) | ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                                 & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Fence_i)))) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt = 0U;
    } else if ((5U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status))) {
        __Vdly__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt)));
    }
    __Vtemp50 = ((IData)(vlSelf->rst) ? 0xa00001800ULL
                  : (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Ecall) 
                      | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Time_interrupt))
                      ? ((0xffffffffffffe000ULL & vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus) 
                         | (QData)((IData)(((0x700U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus 
                                                         >> 8U)) 
                                                << 8U)) 
                                            | (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__mstatus_MIE) 
                                                << 7U) 
                                               | ((0x70U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus 
                                                               >> 4U)) 
                                                      << 4U)) 
                                                  | (7U 
                                                     & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus))))))))
                      : (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Mret) 
                          & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r))
                          ? ((0xffffffffffffe000ULL 
                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus) 
                             | (QData)((IData)((0x1880U 
                                                | ((0x700U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus 
                                                                >> 8U)) 
                                                       << 8U)) 
                                                   | ((0x70U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus 
                                                                   >> 4U)) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus 
                                                                      >> 7U)) 
                                                             << 3U)) 
                                                         | (7U 
                                                            & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus)))))))))
                          : (((0x300U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId)) 
                              & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Csrwen))
                              ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__csrin
                              : ((0xffffffffffffe000ULL 
                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus) 
                                 | (QData)((IData)(
                                                   (0x1800U 
                                                    | (0x7ffU 
                                                       & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus))))))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus 
        = __Vtemp50;
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Csrres_r = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Csrres_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Csrres_r;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Ebreak_r 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Ebreak_r));
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_req_o = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_addr_o = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[0U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[1U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[2U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[3U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o = 0U;
    } else if ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))) {
        if (vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o = 0U;
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o = 0U;
        } else {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_addr_o 
                = (0xfffffffffffffff0ULL & vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r);
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_req_o = 0U;
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o = 1U;
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o = 0xffU;
        }
    } else if ((4U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))) {
        if (vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o = 0U;
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o = 0U;
        } else {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_addr_o 
                = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag
                    [(0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                       >> 4U)))] << 0xcU) 
                   | (QData)((IData)((0xff0U & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                         >> 4U)) 
                                                << 4U)))));
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_req_o = 1U;
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[0U] 
                = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                >> 0xaU)))][0U];
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[1U] 
                = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                >> 0xaU)))][1U];
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[2U] 
                = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                >> 0xaU)))][2U];
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[3U] 
                = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                >> 0xaU)))][3U];
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o = 1U;
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o = 0xffU;
        }
    } else if ((7U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))) {
        if (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)) 
             & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V
             [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt])) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_addr_o 
                = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag
                    [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt] 
                    << 0xcU) | (QData)((IData)(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt) 
                                                << 4U))));
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_req_o = 1U;
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[0U] 
                = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                [(3U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt) 
                        >> 6U))][0U];
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[1U] 
                = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                [(3U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt) 
                        >> 6U))][1U];
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[2U] 
                = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                [(3U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt) 
                        >> 6U))][2U];
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[3U] 
                = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                [(3U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt) 
                        >> 6U))][3U];
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o = 1U;
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o = 0xffU;
        } else {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o = 0U;
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o = 0U;
        }
    } else if ((8U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))) {
        if (vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o = 0U;
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o = 0U;
        } else {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_addr_o 
                = vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r;
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_req_o 
                = (1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg)));
            VL_EXTEND_WQ(128,64, __Vtemp53, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain);
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[0U] 
                = __Vtemp53[0U];
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[1U] 
                = __Vtemp53[1U];
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[2U] 
                = __Vtemp53[2U];
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[3U] 
                = __Vtemp53[3U];
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o = 1U;
            vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o 
                = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask;
        }
    } else {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U] = 0U;
    } else if (((3U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U] 
            = ((0xffffff00U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U]) 
               | (0xffU & (- (IData)((1U & ((~ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                        >> 3U))) 
                                            & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask)))))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U] 
            = ((0xffff00ffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U]) 
               | (0xff00U & ((- (IData)((1U & ((~ (IData)(
                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                           >> 3U))) 
                                               & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask) 
                                                  >> 1U))))) 
                             << 8U)));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U] 
            = ((0xff00ffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U]) 
               | (0xff0000U & ((- (IData)((1U & ((~ (IData)(
                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                             >> 3U))) 
                                                 & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask) 
                                                    >> 2U))))) 
                               << 0x10U)));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U] 
            = ((0xffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U]) 
               | ((- (IData)((1U & ((~ (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                >> 3U))) 
                                    & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask) 
                                       >> 3U))))) << 0x18U));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U] 
            = ((0xffffff00U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U]) 
               | (0xffU & (- (IData)((1U & ((~ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                        >> 3U))) 
                                            & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask) 
                                               >> 4U)))))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U] 
            = ((0xffff00ffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U]) 
               | (0xff00U & ((- (IData)((1U & ((~ (IData)(
                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                           >> 3U))) 
                                               & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask) 
                                                  >> 5U))))) 
                             << 8U)));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U] 
            = ((0xff00ffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U]) 
               | (0xff0000U & ((- (IData)((1U & ((~ (IData)(
                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                             >> 3U))) 
                                                 & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask) 
                                                    >> 6U))))) 
                               << 0x10U)));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U] 
            = ((0xffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U]) 
               | ((- (IData)((1U & ((~ (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                >> 3U))) 
                                    & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask) 
                                       >> 7U))))) << 0x18U));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U] 
            = ((0xffffff00U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U]) 
               | (0xffU & (- (IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                     >> 3U)) 
                                            & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask)))))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U] 
            = ((0xffff00ffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U]) 
               | (0xff00U & ((- (IData)((1U & ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                        >> 3U)) 
                                               & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask) 
                                                  >> 1U))))) 
                             << 8U)));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U] 
            = ((0xff00ffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U]) 
               | (0xff0000U & ((- (IData)((1U & ((IData)(
                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                          >> 3U)) 
                                                 & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask) 
                                                    >> 2U))))) 
                               << 0x10U)));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U] 
            = ((0xffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U]) 
               | ((- (IData)((1U & ((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                             >> 3U)) 
                                    & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask) 
                                       >> 3U))))) << 0x18U));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U] 
            = ((0xffffff00U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U]) 
               | (0xffU & (- (IData)((1U & ((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                     >> 3U)) 
                                            & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask) 
                                               >> 4U)))))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U] 
            = ((0xffff00ffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U]) 
               | (0xff00U & ((- (IData)((1U & ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                        >> 3U)) 
                                               & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask) 
                                                  >> 5U))))) 
                             << 8U)));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U] 
            = ((0xff00ffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U]) 
               | (0xff0000U & ((- (IData)((1U & ((IData)(
                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                          >> 3U)) 
                                                 & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask) 
                                                    >> 6U))))) 
                               << 0x10U)));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U] 
            = ((0xffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U]) 
               | ((- (IData)((1U & ((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                             >> 3U)) 
                                    & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask) 
                                       >> 7U))))) << 0x18U));
    } else {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U] = 0U;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemOp_r;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_data_read = 0ULL;
    } else if ((3U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))) {
        if (vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_data_read 
                = ((0U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                         >> 0xaU))))
                    ? ((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                      >> 3U))) ? (((QData)((IData)(
                                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                                                   [0U][3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                                                    [0U][2U])))
                        : (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                            [0U][1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                                        [0U][0U]))))
                    : ((1U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                             >> 0xaU))))
                        ? ((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                          >> 3U))) ? 
                           (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                             [1U][3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                                         [1U][2U])))
                            : (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                                [1U][1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                                            [1U][0U]))))
                        : ((2U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU))))
                            ? ((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                                    [2U][3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                                                [2U][2U])))
                                : (((QData)((IData)(
                                                    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                                    [2U][1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                                                [2U][0U]))))
                            : ((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                                    [3U][3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                                                [3U][2U])))
                                : (((QData)((IData)(
                                                    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                                    [3U][1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                                                [3U][0U])))))));
        }
    } else if ((1U & (~ (((7U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                          | (5U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))) 
                         & (0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status)))))) {
        if (((8U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
             & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i))) {
            if (vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg) {
                vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_data_read 
                    = (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__data_read_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top__DOT__mycpu__DOT__data_read_i[0U])));
            }
        }
    }
    if (vlSelf->rst) {
        __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v0 = 1U;
    } else if ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))) {
        if (vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i) {
            __Vdlyvval__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v256 
                = (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                   >> 0xcU);
            __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v256 = 1U;
            __Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v256 
                = (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                    >> 4U)));
        }
    }
    if (vlSelf->rst) {
        __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V__v0 = 1U;
    } else if ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))) {
        if (vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i) {
            __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V__v256 = 1U;
            __Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V__v256 
                = (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                    >> 4U)));
        }
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__CsrToReg_r = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__CsrToReg_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemWen_r = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemWen_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemWen_r;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemToReg_r = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemToReg_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemToReg_r;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_commit_r 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__next_pc_r 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r)
                                           ? vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_dnpc
                                           : 0ULL));
    if (vlSelf->rst) {
        __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v0 = 1U;
    } else if (((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i))) {
        __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v256 = 1U;
        __Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v256 
            = (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                >> 4U)));
    } else if (((3U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg)))) {
        __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v257 = 1U;
        __Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v257 
            = (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                >> 4U)));
    } else if (((7U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i))) {
        __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v258 = 1U;
        __Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v258 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__instr_read_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__i_cpu_ready) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__instr_read_r 
            = ((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o 
                              >> 2U))) ? (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_data_read 
                                                  >> 0x20U))
                : (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_data_read));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mepc = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Ecall) 
                | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Time_interrupt))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mepc 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__pc_r;
    } else if (((0x341U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId)) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Csrwen))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mepc 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__csrin;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_instr_r 
        = ((IData)(vlSelf->rst) ? 0U : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r)
                                         ? vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__instr_r
                                         : 0U));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__fence_i_commit 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r) 
                                       & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Fence_i_r)));
    vlSelf->wb_dev_o = ((~ (IData)(vlSelf->rst)) & 
                        ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r) 
                         & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__dev_o)));
    if (vlSelf->rst) {
        __Vdlyvset__top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf__v0 = 1U;
    } else if ((((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wen_r)) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r))) {
        vlSelf->__Vdlyvval__top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf__v32 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wdata_r;
        vlSelf->__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf__v32 = 1U;
        vlSelf->__Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf__v32 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r 
            = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr) 
                & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor 
                           >> 0x3fU))) ? (1ULL + (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor))
                : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor);
    }
    if (vlSelf->rst) {
        vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[0U] = 0U;
        vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] = 0U;
        vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] = 0U;
        vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing) {
        VL_EXTEND_WQ(128,64, __Vtemp62, (1ULL + (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend)));
        VL_EXTEND_WQ(128,64, __Vtemp63, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend);
        if (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr) 
             & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend 
                        >> 0x3fU)))) {
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[0U] 
                = __Vtemp62[0U];
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                = __Vtemp62[1U];
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                = __Vtemp62[2U];
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                = __Vtemp62[3U];
        } else {
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[0U] 
                = __Vtemp63[0U];
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                = __Vtemp63[1U];
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                = __Vtemp63[2U];
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                = __Vtemp63[3U];
        }
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r) {
        if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s) {
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[0U] 
                = (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[0U] 
                   << 1U);
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[0U] 
                    >> 0x1fU) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                                 << 1U));
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                    >> 0x1fU) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                                 << 1U));
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                    >> 0x1fU) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                                 << 1U));
        } else {
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[0U] 
                = (IData)((0xfffffffffffffffeULL & 
                           (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U])) 
                             << 0x21U) | ((QData)((IData)(
                                                          vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[0U])) 
                                          << 1U))));
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                = (IData)(((0xfffffffffffffffeULL & 
                            (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U])) 
                              << 0x21U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[0U])) 
                                           << 1U))) 
                           >> 0x20U));
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                = (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub);
            vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                = (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub 
                           >> 0x20U));
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s 
            = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr) 
               & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor 
                          >> 0x3fU)));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s 
            = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr) 
               & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend 
                          >> 0x3fU)));
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busa_r = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busa_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busa_o;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcA_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcA_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcA_o;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_pc_r 
        = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r)
                                           ? vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__pc_r
                                           : 0ULL));
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__imm_r = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__imm_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__id_imm_o;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcB_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcB_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp = 0ULL;
    } else if (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_men) 
                & (2U == (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                           >> 0x18U)))))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUOp_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUOp_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUOp_o;
    }
    if (__Vdlyvset__top__DOT__sram7__DOT__ram__v0) {
        vlSelf->top__DOT__sram7__DOT__ram[__Vdlyvdim0__top__DOT__sram7__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram7__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram7__DOT__ram[__Vdlyvdim0__top__DOT__sram7__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram7__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram7__DOT__ram[__Vdlyvdim0__top__DOT__sram7__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram7__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram7__DOT__ram[__Vdlyvdim0__top__DOT__sram7__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram7__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__sram6__DOT__ram__v0) {
        vlSelf->top__DOT__sram6__DOT__ram[__Vdlyvdim0__top__DOT__sram6__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram6__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram6__DOT__ram[__Vdlyvdim0__top__DOT__sram6__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram6__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram6__DOT__ram[__Vdlyvdim0__top__DOT__sram6__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram6__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram6__DOT__ram[__Vdlyvdim0__top__DOT__sram6__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram6__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__sram5__DOT__ram__v0) {
        vlSelf->top__DOT__sram5__DOT__ram[__Vdlyvdim0__top__DOT__sram5__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram5__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram5__DOT__ram[__Vdlyvdim0__top__DOT__sram5__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram5__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram5__DOT__ram[__Vdlyvdim0__top__DOT__sram5__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram5__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram5__DOT__ram[__Vdlyvdim0__top__DOT__sram5__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram5__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__sram4__DOT__ram__v0) {
        vlSelf->top__DOT__sram4__DOT__ram[__Vdlyvdim0__top__DOT__sram4__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram4__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram4__DOT__ram[__Vdlyvdim0__top__DOT__sram4__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram4__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram4__DOT__ram[__Vdlyvdim0__top__DOT__sram4__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram4__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram4__DOT__ram[__Vdlyvdim0__top__DOT__sram4__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram4__DOT__ram__v0[3U];
    }
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status 
        = __Vdly__top__DOT__mycpu__DOT__axi__DOT__w_status;
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt = __Vdly__top__DOT__mycpu__DOT__axi__DOT__wcnt;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt 
        = __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt;
    if (__Vdlyvset__top__DOT__sram3__DOT__ram__v0) {
        vlSelf->top__DOT__sram3__DOT__ram[__Vdlyvdim0__top__DOT__sram3__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram3__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram3__DOT__ram[__Vdlyvdim0__top__DOT__sram3__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram3__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram3__DOT__ram[__Vdlyvdim0__top__DOT__sram3__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram3__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram3__DOT__ram[__Vdlyvdim0__top__DOT__sram3__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram3__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__sram2__DOT__ram__v0) {
        vlSelf->top__DOT__sram2__DOT__ram[__Vdlyvdim0__top__DOT__sram2__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram2__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram2__DOT__ram[__Vdlyvdim0__top__DOT__sram2__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram2__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram2__DOT__ram[__Vdlyvdim0__top__DOT__sram2__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram2__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram2__DOT__ram[__Vdlyvdim0__top__DOT__sram2__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__sram1__DOT__ram__v0) {
        vlSelf->top__DOT__sram1__DOT__ram[__Vdlyvdim0__top__DOT__sram1__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram1__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram1__DOT__ram[__Vdlyvdim0__top__DOT__sram1__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram1__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram1__DOT__ram[__Vdlyvdim0__top__DOT__sram1__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram1__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram1__DOT__ram[__Vdlyvdim0__top__DOT__sram1__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__sram0__DOT__ram__v0) {
        vlSelf->top__DOT__sram0__DOT__ram[__Vdlyvdim0__top__DOT__sram0__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__sram0__DOT__ram__v0[0U];
        vlSelf->top__DOT__sram0__DOT__ram[__Vdlyvdim0__top__DOT__sram0__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__sram0__DOT__ram__v0[1U];
        vlSelf->top__DOT__sram0__DOT__ram[__Vdlyvdim0__top__DOT__sram0__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__sram0__DOT__ram__v0[2U];
        vlSelf->top__DOT__sram0__DOT__ram[__Vdlyvdim0__top__DOT__sram0__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__sram0__DOT__ram__v0[3U];
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt 
        = __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt;
    if (__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0xffU)) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V__v256) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V[__Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V__v256] = 1U;
    }
    if (__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0xffU)) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag__v256) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag[__Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag__v256] 
            = __Vdlyvval__top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag__v256;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__cnt 
        = __Vdly__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__cnt;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime 
        = __Vdly__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
        = __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
        = __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
        = __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
        = __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
        = __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
        = __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[1U] 
        = __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[2U] 
        = __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r 
        = __Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r;
    if (__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0xffU)) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v256) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag[__Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v256] 
            = __Vdlyvval__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag__v256;
    }
    if (__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0xffU)) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V__v256) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V[__Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V__v256] = 1U;
    }
    if (__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0xffU)) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v256) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D[__Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v256] = 0U;
    }
    if (__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v257) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D[__Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v257] = 1U;
    }
    if (__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v258) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D[__Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D__v258] = 0U;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt 
        = __Vdly__top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt;
    if (__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf__v0) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[1U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[2U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[3U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[4U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[5U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[6U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[7U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[8U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[9U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0xaU] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0xbU] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0xcU] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0xdU] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0xeU] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0xfU] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x10U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x11U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x12U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x13U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x14U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x15U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x16U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x17U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x18U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x19U] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x1aU] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x1bU] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x1cU] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x1dU] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x1eU] = 0ULL;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0x1fU] = 0ULL;
    }
}

void Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(CData/*0:0*/ done);
extern const VlUnpacked<CData/*3:0*/, 8> Vtop__ConstPool__TABLE_42befd74_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_8db4e481_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_6ee9ed8c_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_a9c47812_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_aa2192ff_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_f4558aae_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtop__ConstPool__TABLE_6fbd8736_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx2;
    CData/*4:0*/ __Vtableidx4;
    CData/*2:0*/ __Vtableidx5;
    VlWide<3>/*95:0*/ __Vtemp81;
    VlWide<3>/*95:0*/ __Vtemp82;
    VlWide<3>/*95:0*/ __Vtemp83;
    VlWide<3>/*95:0*/ __Vtemp84;
    VlWide<3>/*95:0*/ __Vtemp85;
    VlWide<5>/*159:0*/ __Vtemp88;
    VlWide<5>/*159:0*/ __Vtemp89;
    VlWide<5>/*159:0*/ __Vtemp90;
    VlWide<5>/*159:0*/ __Vtemp91;
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf__v32) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[vlSelf->__Vdlyvdim0__top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf__v32] 
            = vlSelf->__Vdlyvval__top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf__v32;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[0U] 
        = vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
        = vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
        = vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
        = vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U];
    vlSelf->axi_aw_valid_o = vlSelf->top__DOT__mycpu__DOT__axi__DOT__aw_valid_r;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3U][0U] 
        = vlSelf->top__DOT__io_sram7_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3U][1U] 
        = vlSelf->top__DOT__io_sram7_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3U][2U] 
        = vlSelf->top__DOT__io_sram7_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3U][3U] 
        = vlSelf->top__DOT__io_sram7_rdata[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2U][0U] 
        = vlSelf->top__DOT__io_sram6_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2U][1U] 
        = vlSelf->top__DOT__io_sram6_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2U][2U] 
        = vlSelf->top__DOT__io_sram6_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2U][3U] 
        = vlSelf->top__DOT__io_sram6_rdata[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1U][0U] 
        = vlSelf->top__DOT__io_sram5_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1U][1U] 
        = vlSelf->top__DOT__io_sram5_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1U][2U] 
        = vlSelf->top__DOT__io_sram5_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1U][3U] 
        = vlSelf->top__DOT__io_sram5_rdata[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0U][0U] 
        = vlSelf->top__DOT__io_sram4_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0U][1U] 
        = vlSelf->top__DOT__io_sram4_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0U][2U] 
        = vlSelf->top__DOT__io_sram4_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0U][3U] 
        = vlSelf->top__DOT__io_sram4_rdata[3U];
    vlSelf->axi_w_valid_o = vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_valid_r;
    vlSelf->axi_ar_valid_o = (1U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status));
    vlSelf->axi_r_ready_o = (2U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status));
    vlSelf->axi_b_ready_o = (3U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status));
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_ready = 1U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_ready = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_ready = 1U;
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r = 1U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r = 0U;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel 
        = ((8U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                   << 1U) & ((0xfffffff8U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                              << 2U) 
                                             & ((~ 
                                                 vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                                << 3U))) 
                             | (((~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                     >> 1U)) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                << 3U)))) | ((4U & 
                                              (((~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                  >> 2U)) 
                                                << 2U) 
                                               & ((0xfffffffcU 
                                                   & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                       << 1U) 
                                                      & ((~ 
                                                          vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                                         << 2U))) 
                                                  | (((~ 
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                        >> 1U)) 
                                                      & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                                     << 2U)))) 
                                             | ((2U 
                                                 & (((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                      >> 1U) 
                                                     & ((~ 
                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                          >> 1U)) 
                                                        << 1U)) 
                                                    & ((~ 
                                                        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]) 
                                                       << 1U))) 
                                                | (1U 
                                                   & (((~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                         >> 2U)) 
                                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                          >> 1U)) 
                                                      & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])))));
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[0U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[1U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[2U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[3U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[4U] = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[0U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[0U];
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[1U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[1U];
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[2U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[2U];
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[3U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[3U];
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[4U] 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[4U];
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__d_cpu_ready 
        = ((~ (IData)(vlSelf->rst)) & ((3U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                                       | ((((7U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                                            | (5U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))) 
                                           & (0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status))) 
                                          | ((8U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                                             & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__mstatus_MIE 
        = (1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus 
                         >> 3U)));
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Csrres_r = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Csrres_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__id_csrres_o;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Ebreak_r) {
        Vtop___024unit____Vdpiimwrap_c_trap_TOP____024unit(1U);
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Ebreak_r = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Ebreak_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Ebreak_r;
    }
    vlSelf->axi_w_data_o = (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[
                                             (((IData)(0x3fU) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                                     << 6U))) 
                                              >> 5U)])) 
                             << ((0U == (0x1fU & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                                  << 6U)))
                                  ? 0x20U : ((IData)(0x40U) 
                                             - (0x1fU 
                                                & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                                   << 6U))))) 
                            | (((0U == (0x1fU & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                                 << 6U)))
                                 ? 0ULL : ((QData)((IData)(
                                                           vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                                                 << 6U))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                                     << 6U))))) 
                               | ((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o[
                                                  (2U 
                                                   & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                                      << 1U))])) 
                                  >> (0x1fU & ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                                               << 6U)))));
    if ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))) {
        vlSelf->top__DOT__mycpu__DOT__rw_req_o = vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_req_o;
        vlSelf->top__DOT__mycpu__DOT__rw_valid_o = vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o;
        vlSelf->top__DOT__mycpu__DOT__rw_addr_o = vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_addr_o;
    } else {
        vlSelf->top__DOT__mycpu__DOT__rw_req_o = ((1U 
                                                   == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status)) 
                                                  & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_req_o));
        vlSelf->top__DOT__mycpu__DOT__rw_valid_o = 
            ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status)) 
             & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_valid_o));
        vlSelf->top__DOT__mycpu__DOT__rw_addr_o = (
                                                   (1U 
                                                    == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                                                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_addr_o
                                                    : 0ULL);
    }
    __Vtableidx5 = vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_bytes_o 
        = Vtop__ConstPool__TABLE_42befd74_0[__Vtableidx5];
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemOp_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemOp_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MemOp_o;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r 
            = (1U & (IData)(((0x73U == (0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                             & ((0x4000U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? (IData)((0U != (0x3000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                                 : (IData)((0U != (0x3000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))))));
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemWen_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemWen_r 
            = (IData)((0x23U == (0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)));
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemToReg_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemToReg_r 
            = (IData)((3U == (0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)));
    }
    vlSelf->wb_commit = vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_commit_r;
    vlSelf->next_pc = vlSelf->top__DOT__mycpu__DOT__core__DOT__next_pc_r;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_dnpc 
        = ((IData)(vlSelf->rst) ? 0ULL : vlSelf->top__DOT__mycpu__DOT__core__DOT__m_dnpc);
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_data_read = 0ULL;
    } else if ((3U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_data_read 
            = ((0U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                     >> 0xaU)))) ? 
               ((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                               >> 3U))) ? (((QData)((IData)(
                                                            vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                                            [0U][3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                                             [0U][2U])))
                 : (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                     [0U][1U])) << 0x20U) 
                    | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                      [0U][0U])))) : 
               ((1U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                      >> 0xaU)))) ? 
                ((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                >> 3U))) ? (((QData)((IData)(
                                                             vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                                             [1U][3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                                              [1U][2U])))
                  : (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                      [1U][1U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                       [1U][0U]))))
                 : ((2U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                          >> 0xaU))))
                     ? ((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                       >> 3U))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                                                    [2U][3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                                                     [2U][2U])))
                         : (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                             [2U][1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                                         [2U][0U]))))
                     : ((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                       >> 3U))) ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                                                    [3U][3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                                                     [3U][2U])))
                         : (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                             [3U][1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o
                                                         [3U][0U])))))));
    } else if (((4U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status)) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_data_read 
            = (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__data_read_i[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__data_read_i[0U])));
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__i_cpu_ready 
        = ((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__flush)) 
           & ((3U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status)) 
              | ((4U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status)) 
                 & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i))));
    vlSelf->wb_instr = vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_instr_r;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__instr_r 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__instr_r);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__dev_o 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r) 
                                        & (0xaU == 
                                           (0xfU & (IData)(
                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                            >> 0x1cU))))) 
                                       & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_men))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wdata_r 
        = ((IData)(vlSelf->rst) ? 0ULL : vlSelf->top__DOT__mycpu__DOT__core__DOT__m_rfdata_o);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wen_r 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wen_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r));
    __Vtemp81[0U] = 1U;
    __Vtemp81[1U] = 0U;
    __Vtemp81[2U] = 0U;
    __Vtemp82[0U] = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                      << 1U) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                                >> 0x1fU));
    __Vtemp82[1U] = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                      << 1U) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                                >> 0x1fU));
    __Vtemp82[2U] = (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                     >> 0x1fU);
    __Vtemp83[0U] = (IData)((~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r));
    __Vtemp83[1U] = (IData)(((~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r) 
                             >> 0x20U));
    __Vtemp83[2U] = 1U;
    VL_ADD_W(3, __Vtemp84, __Vtemp82, __Vtemp83);
    VL_ADD_W(3, __Vtemp85, __Vtemp81, __Vtemp84);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s 
        = (1U & __Vtemp85[2U]);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub 
        = (1ULL + ((((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U])) 
                     << 0x21U) | (((QData)((IData)(
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U])) 
                                   << 1U) | ((QData)((IData)(
                                                             vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U])) 
                                             >> 0x1fU))) 
                   + (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r)));
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r = 1U;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s) 
            ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s))
            ? (1ULL + (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r))
            : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s)
            ? (1ULL + (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r))
            : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r);
    vlSelf->wb_pc = vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_pc_r;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__pc_r 
        = ((IData)(vlSelf->rst) ? 0ULL : vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__pc_r);
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busb_r;
    }
    __Vtableidx4 = vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUOp_r;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr 
        = Vtop__ConstPool__TABLE_8db4e481_0[__Vtableidx4];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr 
        = Vtop__ConstPool__TABLE_6ee9ed8c_0[__Vtableidx4];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr 
        = Vtop__ConstPool__TABLE_a9c47812_0[__Vtableidx4];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SFTctr 
        = Vtop__ConstPool__TABLE_aa2192ff_0[__Vtableidx4];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr 
        = Vtop__ConstPool__TABLE_f4558aae_0[__Vtableidx4];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr 
        = Vtop__ConstPool__TABLE_6fbd8736_0[__Vtableidx4];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid 
        = vlSelf->__Vdly__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout 
        = (IData)((0U != (0xaU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (1U & (~ (((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                             >> 3U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              >> 1U))) & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                              >> 2U) 
                                             & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))) 
                    << 1U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[0U]) 
           | ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                          >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 2U) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]))) 
                       & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                >> 0x1fU)))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])))) 
                    << 1U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[1U]) 
           | ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                          >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffffeU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 2U) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]))) 
                       & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                >> 0x1fU)))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffffdU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])))) 
                    << 1U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffffbU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffff7U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffffefU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffffdfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffffbfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffff7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffeffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffdffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffffbffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffefffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffdfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffffbfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffff7fffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffeffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffdffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfffbffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffefffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffdfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xffbfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xff7fffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfeffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfdffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xfbffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xefffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xdfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0xbfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U] 
        = ((0x7fffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[2U]) 
           | ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                          >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffffeU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 2U) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]))) 
                       & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                >> 0x1fU)))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffffdU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])))) 
                    << 1U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffffbU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffff7U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffffefU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffffdfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffffbfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffff7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffeffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffdffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffffbffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffefffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffdfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffffbfffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffff7fffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffeffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffdffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfffbffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffefffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffdfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xffbfffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xff7fffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfeffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfdffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xfbffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xefffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xdfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                       & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U] 
        = ((0x7fffffffU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[3U]) 
           | ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                          >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U] 
        = ((0xeU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 2U) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]))) 
                       & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                >> 0x1fU)))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U] 
        = ((0xdU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])))) 
                    << 1U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U] 
        = ((0xbU & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U] 
        = ((7U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result[4U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i 
        = ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status)) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__rw_ready_r));
    vlSelf->axi_aw_addr_o = (IData)(vlSelf->top__DOT__mycpu__DOT__rw_addr_o);
    vlSelf->axi_ar_addr_o = (IData)(vlSelf->top__DOT__mycpu__DOT__rw_addr_o);
    vlSelf->top__DOT__mycpu__DOT__rw_bytes_o = ((2U 
                                                 == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                                                 ? (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_bytes_o)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                                                  ? 4U
                                                  : 0U));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[0U][0U] 
        = vlSelf->top__DOT__io_sram0_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[0U][1U] 
        = vlSelf->top__DOT__io_sram0_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[0U][2U] 
        = vlSelf->top__DOT__io_sram0_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[0U][3U] 
        = vlSelf->top__DOT__io_sram0_rdata[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[1U][0U] 
        = vlSelf->top__DOT__io_sram1_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[1U][1U] 
        = vlSelf->top__DOT__io_sram1_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[1U][2U] 
        = vlSelf->top__DOT__io_sram1_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[1U][3U] 
        = vlSelf->top__DOT__io_sram1_rdata[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[2U][0U] 
        = vlSelf->top__DOT__io_sram2_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[2U][1U] 
        = vlSelf->top__DOT__io_sram2_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[2U][2U] 
        = vlSelf->top__DOT__io_sram2_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[2U][3U] 
        = vlSelf->top__DOT__io_sram2_rdata[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[3U][0U] 
        = vlSelf->top__DOT__io_sram3_rdata[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[3U][1U] 
        = vlSelf->top__DOT__io_sram3_rdata[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[3U][2U] 
        = vlSelf->top__DOT__io_sram3_rdata[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[3U][3U] 
        = vlSelf->top__DOT__io_sram3_rdata[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i 
        = ((2U != (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status)) 
           & ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status)) 
              & (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__rw_ready_r)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__op_mul 
        = (IData)((7U == (0xfU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))));
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__done_to_ready))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r = 1U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r = 1U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__calculate_done) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r = 0U;
    }
    VL_ADD_W(5, __Vtemp88, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result);
    VL_EXTEND_WI(133,1, __Vtemp89, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
    __Vtemp90[0U] = __Vtemp89[0U];
    __Vtemp90[1U] = __Vtemp89[1U];
    __Vtemp90[2U] = __Vtemp89[2U];
    __Vtemp90[3U] = __Vtemp89[3U];
    __Vtemp90[4U] = __Vtemp89[4U];
    VL_ADD_W(5, __Vtemp91, __Vtemp88, __Vtemp90);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[0U] 
        = __Vtemp91[0U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[1U] 
        = __Vtemp91[1U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[2U] 
        = __Vtemp91[2U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[3U] 
        = __Vtemp91[3U];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__adder_result[4U] 
        = (0xfU & __Vtemp91[4U]);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status));
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Ebreak_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Ebreak_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__m_dnpc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__m_dnpc 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_dnpc;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__data_read_i[0U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__data_read_i[1U] = 0U;
    } else if (((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_fire) 
                & (0U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__rcnt)))) {
        vlSelf->top__DOT__mycpu__DOT__data_read_i[0U] 
            = (IData)(vlSelf->axi_r_data_i);
        vlSelf->top__DOT__mycpu__DOT__data_read_i[1U] 
            = (IData)((vlSelf->axi_r_data_i >> 0x20U));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__data_read_i[2U] = 0U;
        vlSelf->top__DOT__mycpu__DOT__data_read_i[3U] = 0U;
    } else if (((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_fire) 
                & (1U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__rcnt)))) {
        vlSelf->top__DOT__mycpu__DOT__data_read_i[2U] 
            = (IData)(vlSelf->axi_r_data_i);
        vlSelf->top__DOT__mycpu__DOT__data_read_i[3U] 
            = (IData)((vlSelf->axi_r_data_i >> 0x20U));
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__flush)
            ? 0U : (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__next_status));
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__instr_r = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__instr_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__instr_r;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__res;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wen_r = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wen_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__wen_r;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__pc_r = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__pc_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__pc_r;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain 
        = ((0U == (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))
            ? (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))
            : ((1U == (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))
                ? (((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                    << 0x38U) | (((QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                  << 0x30U) | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                                      << 0x18U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                                         << 0x10U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))))))))))
                : ((2U == (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))
                    ? (((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                        << 0x30U) | (((QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                      << 0x20U) | (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)))))))
                    : vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)));
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busb_r = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busb_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busb_o;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_valid 
        = ((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__op_mul) 
             & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_doing))) 
            & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid))) 
           & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r) 
           & (0x40U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt)));
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__rcnt = vlSelf->__Vdly__top__DOT__mycpu__DOT__axi__DOT__rcnt;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_valid) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_ready));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__done_to_ready 
        = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_valid 
        = (1U & (((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr) 
                    >> 3U) & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_doing))) 
                  & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r))) 
                 & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__calculate_done 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r) 
           & ((0x10U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt)) 
              | (0U == ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                         | vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[1U]) 
                        | vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[2U]))));
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_dnpc = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_dnpc 
            = (0xfffffffffffffffeULL & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__addr_res);
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__instr_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__instr_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask 
        = ((0U == (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))
            ? ((0U == (7U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r)))
                ? 0xfU : ((4U == (7U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r)))
                           ? 0xf0U : 0U)) : ((1U == 
                                              (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                             >> 2U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                    ? 0x80U
                                                    : 0x40U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                    ? 0x20U
                                                    : 0x10U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                    ? 8U
                                                    : 4U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                    ? 2U
                                                    : 1U)))
                                              : ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                              >> 2U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                     ? 0U
                                                     : 0xc0U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                     ? 0U
                                                     : 0x30U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                     ? 0U
                                                     : 0xcU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))
                                                     ? 0U
                                                     : 3U)))
                                                  : 0xffU)));
    if ((6U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[0U] 
            = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain) 
                & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U]) 
               | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                  [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                  >> 0xaU)))][0U] & 
                  (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U])));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[1U] 
            = (((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain 
                         >> 0x20U)) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U]) 
               | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                  [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                  >> 0xaU)))][1U] & 
                  (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U])));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[2U] 
            = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain) 
                & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U]) 
               | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                  [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                  >> 0xaU)))][2U] & 
                  (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U])));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[3U] 
            = (((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain 
                         >> 0x20U)) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U]) 
               | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                  [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                  >> 0xaU)))][3U] & 
                  (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U])));
    } else {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[0U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[0U];
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[1U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[1U];
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[2U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[2U];
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram[3U] 
            = vlSelf->top__DOT__mycpu__DOT__data_read_i[3U];
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[0U] 
        = (1U & (~ ((0U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[1U] 
        = (1U & (~ ((1U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[2U] 
        = (1U & (~ ((2U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[3U] 
        = (1U & (~ ((3U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                          >> 0xaU)))) 
                    & (((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                        & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)) 
                       | (6U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout 
        = ((2U == (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                    >> 0x18U)))) ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp
            : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_data_read);
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__wen_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__wen_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wen_o;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r 
            = (0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                        >> 7U));
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__pc_r = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__pc_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__pc_r;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB 
        = ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcB_r))
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__imm_r
            : ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcB_r))
                ? vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busb_r
                : 4ULL));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_valid));
    if ((0U == (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw 
            = (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout 
                       >> (0x38U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r) 
                                    << 3U))));
    }
    if ((0U != (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
        if ((1U == (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab 
                = (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout 
                                    >> (0x38U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U)))));
        }
    }
    if ((0U != (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
        if ((1U != (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
            if ((2U == (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
                vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah 
                    = (0xffffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout 
                                          >> (0x38U 
                                              & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U)))));
            }
        }
    }
    if ((0U != (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
        if ((1U != (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
            if ((2U != (3U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r)))) {
                vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datad 
                    = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout;
            }
        }
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[0U] 
            = (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[1U] 
            = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB 
                                                                       >> 0x1fU))))))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[2U] 
            = (IData)(((0x1ffffffffULL & (- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB 
                                                                        >> 0x1fU))))))) 
                       >> 0x20U));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor 
            = (((QData)((IData)((- (IData)(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB 
                                                       >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)));
    } else {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[0U] 
            = (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[1U] 
            = (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB 
                       >> 0x20U));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier[2U] 
            = (1U & ((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r) 
                       >> 1U) & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r)) 
                     & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB 
                                >> 0x3fU))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
        = (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB 
           ^ (- (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__id_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__if_instr_o;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__pc_r = 0ULL;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__id_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__pc_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcA_r)
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busa_r
            : vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__pc_r);
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[0U] 
            = (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[1U] 
            = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                                       >> 0x1fU))))))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[2U] 
            = (IData)(((0x1ffffffffULL & (- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                                        >> 0x1fU))))))) 
                       >> 0x20U));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend 
            = (((QData)((IData)((- (IData)(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA)));
    } else {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[0U] 
            = (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[1U] 
            = (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                       >> 0x20U));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand[2U] 
            = (1U & (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r) 
                      >> 1U) & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                        >> 0x3fU))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA) 
           << (0x1fU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr)
            ? VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA), 
                             (0x1fU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))
            : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA) 
               >> (0x1fU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MemOp_o 
        = ((0x40U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
            ? 0U : ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                     ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                         ? 0U : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                  ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                      ? 0U
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                        ? 3U
                                                        : 0U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                        ? 2U
                                                        : 1U)))
                                                     : 0U)
                                                    : 0U))))
                     : ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                         ? 0U : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                  ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                        ? 0U
                                                        : 4U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                        ? 6U
                                                        : 5U))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                        ? 3U
                                                        : 0U)
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                        ? 2U
                                                        : 1U)))
                                                     : 0U)
                                                    : 0U))))));
    if ((0x40U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o = 0U;
    } else if ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o 
            = ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                             ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                      ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                          ? ((1U == 
                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                               >> 0x19U))
                                              ? ((0x4000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 0U
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 1U
                                                    : 2U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 3U
                                                    : 0U)))
                                              : 0U)
                                          : 0U) : 0U)))
                : 0U);
    } else if ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) {
        if ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) {
            if ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) {
                vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o = 0U;
            } else if ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) {
                if ((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))) {
                    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o = 0U;
                }
            } else {
                vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o = 0U;
            }
        } else {
            vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o = 0U;
        }
    } else {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MulOp_o = 0U;
    }
    if ((0x40U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wen_o 
            = (1U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                      >> 5U) & ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? (IData)(((3U == 
                                             (0xfU 
                                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                                            & ((0x4000U 
                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                ? (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                                                : (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))))))
                                 : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                                     : (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrOp 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                          ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                              ? ((0x4000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 2U
                                                    : 1U)
                                                   : 0U)
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 2U
                                                    : 1U)
                                                   : 0U))
                                              : 0U)
                                          : 0U))) : 0U)
                : 0U);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__Branch 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? 0U : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                             ? ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? 1U : 0U)
                                     : 0U) : 0U) : 
                            ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                              ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                  ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                      ? 2U : 0U) : 0U)
                              : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                  ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                      ? ((0x4000U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                          ? ((0x2000U 
                                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                              ? ((0x1000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 7U
                                                  : 6U)
                                              : ((0x1000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 7U
                                                  : 6U))
                                          : ((0x2000U 
                                              & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                              ? 0U : 
                                             ((0x1000U 
                                               & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                               ? 5U
                                               : 4U)))
                                      : 0U) : 0U))))
                : 0U);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcA_o 
            = (1U & (IData)(((0x20U != (0x30U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                             | ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? (IData)((7U != (7U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                                 : (IData)((7U != (7U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                          ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                              ? ((0x4000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 1U
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 1U
                                                    : 0U))
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 1U
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 1U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                      >> 0x14U))
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                       >> 0x14U))
                                                      ? 1U
                                                      : 
                                                     ((0x302U 
                                                       == 
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                        >> 0x14U))
                                                       ? 1U
                                                       : 0U))))))
                                              : 0U)
                                          : 0U))) : 
                   ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                     ? ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                         ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                             ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? 2U : 0U) : 0U) : 0U)
                     : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                         ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                             ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? 2U : 0U) : 0U) : 0U)))
                : 0U);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? 0U : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                             ? ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? 4U : 0U)
                                     : 0U) : 0U) : 
                            ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                              ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                       ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                           ? 3U : 0U)
                                       : 0U)))) : 0U);
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUOp_o 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? 0U : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                             ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                      ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                               ? ((1U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 0U
                                                     : 2U))
                                                   : 0U)
                                               : 0U))))
                : 0U);
    } else {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wen_o 
            = (1U & ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                      ? ((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                          >> 4U) & ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? (IData)((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                                     : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? ((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                             >> 1U) 
                                            & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         : ((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                             >> 1U) 
                                            & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))))
                      : ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                          ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                              ? (IData)((3U == (7U 
                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                              : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                  ? ((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                      >> 1U) & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                  : ((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                      >> 1U) & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                          : (IData)(((3U == (0xfU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                                     & (IData)((0x7000U 
                                                != 
                                                (0x7000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))))))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrOp = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__Branch = 0U;
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcA_o 
            = (1U & (IData)((0x17U != (0x3fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? 1U : 0U)
                                     : 0U) : 0U)) : 
                   ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                     ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                              ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                       ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                           ? ((0x4000U 
                                               & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                               ? 0U
                                               : 1U)
                                           : 0U) : 0U))))
                : ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                            ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? 1U : 0U)
                                     : 0U)) : ((4U 
                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                ? (
                                                   (2U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)))
                    : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                          ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                              ? ((0x4000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 0U
                                                    : 1U)
                                                   : 1U)
                                                  : 1U)
                                              : 0U)
                                          : 0U)))));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                            ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? 5U : 0U)
                                     : 0U)) : ((4U 
                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                ? (
                                                   (2U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 5U
                                                     : 0U)
                                                    : 0U)))
                    : ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                 ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                          ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                              ? 2U : 0U)
                                          : 0U)))) : 
               ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                 ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                     ? 0U : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                              ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                  ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                      ? 1U : 0U) : 0U)
                              : 0U)) : 0U));
        vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUOp_o 
            = ((0x20U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                ? ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                            ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? ((1U == 
                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                              >> 0x19U))
                                             ? ((0x4000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                 ? 
                                                ((0x2000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 0x1cU
                                                   : 0x1eU)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 0x1aU
                                                   : 0x1bU))
                                                 : 0x19U)
                                             : ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                     >> 0xcU)))
                                                 ? 
                                                ((0x20U 
                                                  == 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0x19U))
                                                  ? 0x18U
                                                  : 0x10U)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                      >> 0xcU)))
                                                  ? 0x11U
                                                  : 
                                                 ((0x40000000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 0x1dU
                                                   : 0x15U))))
                                         : 0U) : 0U))
                        : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                            ? ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                    ? 0xfU : 0U) : 0U)
                            : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                    ? ((1U == (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                               >> 0x19U))
                                        ? ((0x4000U 
                                            & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                            ? ((0x2000U 
                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 0xcU
                                                    : 0xeU)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 0xaU
                                                    : 0xbU))
                                            : 9U) : 
                                       ((0x4000U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? ((0x2000U 
                                             & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                             ? ((0x1000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                 ? 7U
                                                 : 6U)
                                             : ((0x1000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                 ? 
                                                ((0x40000000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 0xdU
                                                  : 5U)
                                                 : 4U))
                                         : ((0x2000U 
                                             & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                             ? ((0x1000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                 ? 3U
                                                 : 2U)
                                             : ((0x1000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                 ? 1U
                                                 : 
                                                ((0x20U 
                                                  == 
                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0x19U))
                                                  ? 8U
                                                  : 0U)))))
                                    : 0U) : 0U))) : 0U)
                : ((0x10U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                    ? ((8U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                        ? ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                            ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? ((0U == 
                                             (7U & 
                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                               >> 0xcU)))
                                             ? 0x10U
                                             : ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                     >> 0xcU)))
                                                 ? 0x11U
                                                 : 
                                                ((0x40000000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 0x1dU
                                                  : 0x15U)))
                                         : 0U) : 0U))
                        : ((4U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                            ? 0U : ((2U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                     ? ((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? ((0x4000U 
                                             & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                             ? ((0x2000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 7U
                                                  : 6U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 
                                                 ((0x40000000U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 0xdU
                                                   : 5U)
                                                  : 4U))
                                             : ((0x2000U 
                                                 & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 3U
                                                  : 2U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 1U
                                                  : 0U)))
                                         : 0U) : 0U)))
                    : 0U));
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Csri_o 
        = (1U & (IData)(((0x4073U == (0x407fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                         & (IData)((0U != (0x3000U 
                                           & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ecall 
        = (IData)(((0x73U == (0x707fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                   & (0U == (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                             >> 0x14U))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Mret 
        = (IData)(((0x73U == (0x707fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                   & (((0U != (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                               >> 0x14U)) & (1U != 
                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                              >> 0x14U))) 
                      & (0x302U == (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                    >> 0x14U)))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o = 0x80000000ULL;
    } else if (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__cpu_halt)) 
                & (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r) 
                    & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i))) 
                   | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Fence_i_r) 
                      & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r))))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o 
            = (0xfffffffffffffffeULL & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__addr_res);
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_imm_o 
        = ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp))
            ? (((- (QData)((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                  >> 0x14U)))) : ((1U 
                                                   == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                           >> 0x14U)) 
                                                                       | (0x1fU 
                                                                          & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                             >> 7U))))))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       ((0x800U 
                                                                         & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                                >> 7U)))))))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                           >> 0x1fU)))) 
                                                       << 0x14U) 
                                                      | (QData)((IData)(
                                                                        ((0xff000U 
                                                                          & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                                                >> 0x14U)))))))
                                                      : 0ULL)))));
    __Vtableidx2 = vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUOp_o;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr 
        = Vtop__ConstPool__TABLE_8db4e481_0[__Vtableidx2];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SIGctr 
        = Vtop__ConstPool__TABLE_6ee9ed8c_0[__Vtableidx2];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__ALctr 
        = Vtop__ConstPool__TABLE_a9c47812_0[__Vtableidx2];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SFTctr 
        = Vtop__ConstPool__TABLE_aa2192ff_0[__Vtableidx2];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr 
        = Vtop__ConstPool__TABLE_f4558aae_0[__Vtableidx2];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__OPctr 
        = Vtop__ConstPool__TABLE_6fbd8736_0[__Vtableidx2];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ecall)
            ? 0x342U : (0xfffU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_imm_o)));
    vlSelf->pc = vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o;
    vlSelf->axi_w_strb_o = ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                             ? (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o)
                             : ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                                 ? ((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o 
                                                   >> 2U)))
                                     ? 0xf0U : 0xfU)
                                 : 0U));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Fence_i_r 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Fence_i_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r) 
                                       & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_csrres_o 
        = ((0x300U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId))
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus
            : ((0x304U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId))
                ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mie
                : ((0x305U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId))
                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mtvec
                    : ((0x340U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId))
                        ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mscratch
                        : ((0x341U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId))
                            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mepc
                            : ((0x342U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId))
                                ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mcause
                                : ((0x344U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId))
                                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mip
                                    : 0ULL)))))));
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Fence_i_r = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Fence_i_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Fence_i_r;
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r 
            = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__valid_r) 
               & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__alu_busy)));
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__alu_busy 
        = (1U & (((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr) 
                    >> 3U) & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r))) 
                  & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))) 
                 | (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__op_mul) 
                     & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid))) 
                    & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul)))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Fence_i 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Fence_i_r) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r));
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__valid_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__valid_r 
            = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r) 
                & ((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_block)) 
                   | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Fence_i_o) 
                      & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Fence_i_r))))) 
               & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__Time_interrupt)));
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr 
        = (0x3fU & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Fence_i)
                     ? (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt)
                     : (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                >> 4U))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__Time_interrupt 
        = (((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mie 
                     >> 7U)) & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus 
                                        >> 3U))) & 
           (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime 
            >= vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp));
    if (vlSelf->rst) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__id_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r 
            = (1U & (~ ((((IData)(vlSelf->rst) | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o) 
                                                  | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_busy))) 
                         | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__cpu_halt)) 
                        | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i))));
    }
    if (vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Fence_i_r = 0U;
    } else if (vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en) {
        vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Fence_i_r 
            = vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Fence_i_o;
    }
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o 
        = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
            >> 6U) & (IData)(((0x33U == (0x703fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                              & ((0U != (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                         >> 0x14U)) 
                                 & (1U == (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                           >> 0x14U))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Fence_i_o 
        = (IData)((0xfU == (0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Time_interrupt 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__Time_interrupt) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Ecall 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ecall) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_use_rd 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r) 
           & (~ (((((((0x37U == (0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                      | (0x17U == (0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))) 
                     | (0x6fU == (0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))) 
                    | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o)) 
                   | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Mret)) 
                  | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ecall)) 
                 | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Csri_o))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i 
        = (((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Fence_i_o) 
              & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r)) 
             | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Fence_i_r) 
                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__valid_r))) 
            | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Fence_i_r) 
               & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r))) 
           & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__fence_i_commit)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_use_rd) 
            & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__valid_r) 
               & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__wen_r))) 
           & ((((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                          >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r)) 
               & (0U != (0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                  >> 0xfU)))) | (((0x1fU 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r)) 
                                                 & (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                        >> 0x14U))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_use_rd) 
            & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r) 
               & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wen_r))) 
           & ((((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                          >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)) 
               & (0U != (0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                  >> 0xfU)))) | (((0x1fU 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)) 
                                                 & (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                        >> 0x14U))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_use_rd) 
            & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r) 
               & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wen_r))) 
           & ((((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                          >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r)) 
               & (0U != (0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                  >> 0xfU)))) | (((0x1fU 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r)) 
                                                 & (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                        >> 0x14U))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__if_busy 
        = (1U & (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__i_cpu_ready)) 
                  & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__old_instr))) 
                 & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_req_valid 
        = (1U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__start) 
                 | ((((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_doing)) 
                      & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__i_cpu_ready))) 
                     & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__old_instr))) 
                    & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i)))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_block 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
            & (3U == (0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__instr_r))) 
           | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Body
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
        = (((QData)((IData)(((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                              [3U] << 0x18U) | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                   [0U]))))) 
            << 0x20U) | (QData)((IData)(((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                               [0U]))))));
}

extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_4f660885_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_1d882cf2_0;

VL_INLINE_OPT void Vtop___024root___settle__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__7\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx3;
    // Body
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
        = (((QData)((IData)(((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                              [3U] << 0x18U) | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                                   [0U]))))) 
            << 0x20U) | (QData)((IData)(((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                               [0U]))))));
    __Vtableidx3 = ((0x10U & ((IData)(((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__OPctr))
                                        ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                            : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                        : (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SIGctr)
                                                               ? 
                                                              (((((~ (IData)(
                                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                                              >> 0x3fU))) 
                                                                  & (~ (IData)(
                                                                               (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU)))) 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                            >> 0x3fU))) 
                                                                | (((IData)(
                                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                                             >> 0x3fU)) 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                               >> 0x3fU))) 
                                                                   & (~ (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU))))) 
                                                               ^ (IData)(
                                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                          >> 0x3fU)))
                                                               : 
                                                              (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                                >> 3U) 
                                                               ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))))))) 
                              << 4U)) | ((((0ULL == vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                            ? 1U : 0U) 
                                          << 3U) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__Branch)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__NexA 
        = Vtop__ConstPool__TABLE_4f660885_0[__Vtableidx3];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__NexB 
        = Vtop__ConstPool__TABLE_1d882cf2_0[__Vtableidx3];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__NexB)
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__id_imm_o
            : 4ULL);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__NexA)
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busa_o
            : vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__pc_r);
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_b6f66a3a_0;

VL_INLINE_OPT void Vtop___024root___settle__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__8\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc 
        = (((QData)((IData)(((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                              [3U] << 0x18U) | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                                 [2U] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                                    [1U] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                                   [0U]))))) 
            << 0x20U) | (QData)((IData)(((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                               [0U]))))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__addr_res 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__Time_interrupt) 
            | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ecall))
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mtvec
            : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Mret)
                ? vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mepc
                : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_req_valid)
            ? (0xfffffffffffffffeULL & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__addr_res)
            : vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[0U] 
        = (1U & (~ (((0U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                           >> 0xaU)))) 
                     & (2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))) 
                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[1U] 
        = (1U & (~ (((1U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                           >> 0xaU)))) 
                     & (2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))) 
                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[2U] 
        = (1U & (~ (((2U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                           >> 0xaU)))) 
                     & (2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))) 
                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[3U] 
        = (1U & (~ (((3U == (3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                           >> 0xaU)))) 
                     & (2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))) 
                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i))));
    __Vtableidx1 = (((3U == (0xfU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                             >> 0x1cU)))) 
                     << 6U) | (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_req_valid) 
                                << 5U) | (((((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status)) 
                                             & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V
                                             [(0xffU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                                          >> 4U)))]) 
                                            & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag
                                               [(0xffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                                            >> 4U)))] 
                                               == (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                                   >> 0xcU))) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i) 
                                            << 3U) 
                                           | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status)))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__next_status 
        = Vtop__ConstPool__TABLE_b6f66a3a_0[__Vtableidx1];
    vlSelf->top__DOT__mycpu__DOT__rw_dev_o = ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                                               ? (0xaU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                              >> 0x1cU))))
                                               : ((1U 
                                                   == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status)) 
                                                  & (3U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                                                 >> 0x1cU))))));
    if (vlSelf->top__DOT__mycpu__DOT__rw_dev_o) {
        vlSelf->axi_aw_len_o = 0U;
        vlSelf->axi_ar_len_o = 0U;
    } else {
        vlSelf->axi_aw_len_o = 1U;
        vlSelf->axi_ar_len_o = 1U;
    }
    vlSelf->axi_w_last_o = ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt) 
                            == ((IData)(vlSelf->top__DOT__mycpu__DOT__rw_dev_o)
                                 ? 0U : 1U));
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__axi_size 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__rw_dev_o)
            ? ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__rw_bytes_o))
                ? 0U : ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__rw_bytes_o))
                         ? 1U : 2U)) : 3U);
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_last 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_fire) 
           & (IData)(vlSelf->axi_w_last_o));
    vlSelf->axi_aw_size_o = vlSelf->top__DOT__mycpu__DOT__axi__DOT__axi_size;
    vlSelf->axi_ar_size_o = vlSelf->top__DOT__mycpu__DOT__axi__DOT__axi_size;
}

extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_9a38e7b0_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__9\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx6;
    // Body
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_fire 
        = ((IData)(vlSelf->axi_w_ready_i) & (IData)(vlSelf->axi_w_valid_o));
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__b_fire 
        = ((IData)(vlSelf->axi_b_ready_o) & (IData)(vlSelf->axi_b_valid_i));
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_fire 
        = ((IData)(vlSelf->axi_r_ready_o) & (IData)(vlSelf->axi_r_valid_i));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush 
        = ((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__fence_i_commit));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Csrwen 
        = (((~ (IData)(vlSelf->rst)) & (IData)(((0x73U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                                                & ((0x4000U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                                                    : (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r))))))) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__cpu_halt 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o) 
           | (IData)(vlSelf->rst));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__flush 
        = ((IData)(vlSelf->rst) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i));
    vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_last 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_fire) 
           & (IData)(vlSelf->axi_r_last_i));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__is_men 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemWen_r) 
            & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush))) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemToReg_r) 
            & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush))) 
           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__m_rfdata_o 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__CsrToReg_r)
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Csrres_r
            : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg)
                ? ((4U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                    ? ((2U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                        ? ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                            ? 0ULL : (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah)))
                        : ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                            ? (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab))
                            : (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))
                    : ((2U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                        ? ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datad
                            : (((- (QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah) 
                                                       >> 0xfU))))) 
                                << 0x10U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah))))
                        : ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                            ? (((- (QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab) 
                                                       >> 7U))))) 
                                << 8U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab)))
                            : (((QData)((IData)((- (IData)(
                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))))
                : vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__vis_mem 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg) 
            | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_men)) 
           | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Fence_i));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_req_valid 
        = ((((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cache_doing)) 
             & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__d_cpu_ready))) 
            & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__vis_mem)) 
           & (2U != (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                      >> 0x18U)))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy 
        = (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__d_cpu_ready)) 
            & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__vis_mem)) 
           & (2U != (0xffU & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                      >> 0x18U)))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status 
        = ((8U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
            ? ((4U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                ? 0U : ((2U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                         ? 0U : ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                  ? 0U : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)
                                           ? 0U : 8U))))
            : ((4U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                ? ((2U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                    ? ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                        ? ((1U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i) 
                                  | (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V
                                     [vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt])))
                            ? ((0xffU == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt))
                                ? 0U : 5U) : 7U) : 0U)
                    : ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                        ? 7U : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)
                                 ? 2U : 4U))) : ((2U 
                                                  & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg)
                                                    ? 0U
                                                    : 6U)
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i)
                                                    ? 1U
                                                    : 2U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                                   ? 
                                                  ((((1U 
                                                      == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V
                                                     [
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                                 >> 4U)))]) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag
                                                       [
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                                   >> 4U)))] 
                                                       == 
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                        >> 0xcU)))
                                                    ? 3U
                                                    : 
                                                   ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V
                                                     [
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                                 >> 4U)))] 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D
                                                     [
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                                 >> 4U)))])
                                                     ? 4U
                                                     : 2U))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_req_valid)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Fence_i)
                                                     ? 7U
                                                     : 
                                                    ((0xaU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                                  >> 0x1cU))))
                                                      ? 8U
                                                      : 1U))
                                                    : 0U)))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en 
        = (1U & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__alu_busy) 
                    | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy))));
    __Vtableidx6 = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_busy) 
                     << 3U) | (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy) 
                                << 2U) | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__next_status 
        = Vtop__ConstPool__TABLE_9a38e7b0_0[__Vtableidx6];
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_en 
        = (1U & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_block) 
                     | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__alu_busy)) 
                    | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo 
        = (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
            & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul))
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_lo_r
            : (((QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[0U]))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__if_instr_o 
        = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_en) 
            & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__old_instr))
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__instr_read_r
            : ((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o 
                              >> 2U))) ? (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_data_read 
                                                  >> 0x20U))
                : (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_data_read)));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__res 
        = (((((((((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr)) 
                  | (1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                 | (2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
                | (3U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
               | (4U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
              | (5U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
             | (6U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))) 
            | (7U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr)))
            ? ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                    ? (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres)))
                    : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres)
                : ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                    ? (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                       & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)
                    : ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                        ? (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                           | vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)
                        : ((3U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                            ? (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                               ^ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)
                            : ((4U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SFTctr)
                                    ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres)))
                                        : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                            ? VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA, 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))
                                            : (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                               >> (0x3fU 
                                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))))
                                    : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres)))
                                        : (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                           << (0x3fU 
                                               & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))))
                                : ((5U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB
                                    : ((6U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                                        ? (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr)
                                                               ? 
                                                              (((((~ (IData)(
                                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                                              >> 0x3fU))) 
                                                                  & (~ (IData)(
                                                                               (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                                >> 0x3fU)))) 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                            >> 0x3fU))) 
                                                                | (((IData)(
                                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                                             >> 0x3fU)) 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                               >> 0x3fU))) 
                                                                   & (~ (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x3fU))))) 
                                                               ^ (IData)(
                                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                          >> 0x3fU)))
                                                               : 
                                                              (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                                >> 3U) 
                                                               ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr))))))
                                        : ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r))
                                            ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo)))
                                                : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo)
                                            : (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
                                                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul))
                                                ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_hi_r
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[2U]))))))))))))
            : ((8U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr))
                ? (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))
                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient_r
                    : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient)
                : (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))
                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder_r
                    : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder)));
    vlSelf->instr = vlSelf->top__DOT__mycpu__DOT__core__DOT__if_instr_o;
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busb_o 
        = (((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
              & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                           >> 0x14U)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r))) 
             | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard) 
                & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                             >> 0x14U)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)))) 
            | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard) 
               & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                            >> 0x14U)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r))))
            ? (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
                & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                             >> 0x14U)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r)))
                ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r)
                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Csrres_r
                    : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__res)
                : (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard) 
                    & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                 >> 0x14U)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)))
                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__m_rfdata_o
                    : (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard) 
                        & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                     >> 0x14U)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r)))
                        ? vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wdata_r
                        : 0ULL))) : ((0U == (0x1fU 
                                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf
                                     [(0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U))]));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busa_o 
        = (((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
              & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                           >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r))) 
             | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard) 
                & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                             >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)))) 
            | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard) 
               & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                            >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r))))
            ? (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
                & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                             >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r)))
                ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r)
                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Csrres_r
                    : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__res)
                : (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard) 
                    & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                 >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)))
                    ? vlSelf->top__DOT__mycpu__DOT__core__DOT__m_rfdata_o
                    : (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard) 
                        & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                     >> 0xfU)) == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r)))
                        ? vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wdata_r
                        : 0ULL))) : ((0U == (0x1fU 
                                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU)))
                                      ? 0ULL : vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf
                                     [(0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU))]));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
        = (((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o))
             ? vlSelf->top__DOT__mycpu__DOT__core__DOT__id_imm_o
             : ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o))
                 ? vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busb_o
                 : 4ULL)) ^ (- (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr))));
    vlSelf->top__DOT__mycpu__DOT__core__DOT__Csr_datain 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Csri_o)
            ? (QData)((IData)((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                        >> 0xfU))))
            : vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busa_o);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA 
        = ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcA_o)
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busa_o
            : vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__pc_r);
    vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__csrin 
        = ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrOp))
            ? vlSelf->top__DOT__mycpu__DOT__core__DOT__Csr_datain
            : ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrOp))
                ? (vlSelf->top__DOT__mycpu__DOT__core__DOT__id_csrres_o 
                   | vlSelf->top__DOT__mycpu__DOT__core__DOT__Csr_datain)
                : ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrOp))
                    ? (vlSelf->top__DOT__mycpu__DOT__core__DOT__id_csrres_o 
                       & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__Csr_datain))
                    : 0ULL)));
}

void Vtop_ysyx_040053_Adder32___sequent__TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__1(Vtop_ysyx_040053_Adder32* vlSelf);
void Vtop_ysyx_040053_Adder32___sequent__TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2(Vtop_ysyx_040053_Adder32* vlSelf);
void Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low__5(Vtop_ysyx_040053_Adder32* vlSelf);
void Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high__6(Vtop_ysyx_040053_Adder32* vlSelf);
void Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__7(Vtop_ysyx_040053_Adder32* vlSelf);
void Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__8(Vtop_ysyx_040053_Adder32* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__3(vlSelf);
        Vtop_ysyx_040053_Adder32___sequent__TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low__1((&vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low));
        Vtop_ysyx_040053_Adder32___sequent__TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high__2((&vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high));
        Vtop___024root___sequent__TOP__4(vlSelf);
    }
    Vtop___024root___combo__TOP__9(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low__5((&vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low));
    Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high__6((&vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high));
    Vtop___024root___settle__TOP__7(vlSelf);
    Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low__7((&vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low));
    Vtop_ysyx_040053_Adder32___settle__TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high__8((&vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high));
    Vtop___024root___settle__TOP__8(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->axi_aw_ready_i & 0xfeU))) {
        Verilated::overWidthError("axi_aw_ready_i");}
    if (VL_UNLIKELY((vlSelf->axi_w_ready_i & 0xfeU))) {
        Verilated::overWidthError("axi_w_ready_i");}
    if (VL_UNLIKELY((vlSelf->axi_b_valid_i & 0xfeU))) {
        Verilated::overWidthError("axi_b_valid_i");}
    if (VL_UNLIKELY((vlSelf->axi_b_resp_i & 0xfcU))) {
        Verilated::overWidthError("axi_b_resp_i");}
    if (VL_UNLIKELY((vlSelf->axi_b_id_i & 0xf0U))) {
        Verilated::overWidthError("axi_b_id_i");}
    if (VL_UNLIKELY((vlSelf->axi_b_user_i & 0xfeU))) {
        Verilated::overWidthError("axi_b_user_i");}
    if (VL_UNLIKELY((vlSelf->axi_ar_ready_i & 0xfeU))) {
        Verilated::overWidthError("axi_ar_ready_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_valid_i & 0xfeU))) {
        Verilated::overWidthError("axi_r_valid_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_resp_i & 0xfcU))) {
        Verilated::overWidthError("axi_r_resp_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_last_i & 0xfeU))) {
        Verilated::overWidthError("axi_r_last_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_id_i & 0xf0U))) {
        Verilated::overWidthError("axi_r_id_i");}
    if (VL_UNLIKELY((vlSelf->axi_r_user_i & 0xfeU))) {
        Verilated::overWidthError("axi_r_user_i");}
}
#endif  // VL_DEBUG
