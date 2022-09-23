// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_ysyx_040053_Adder32.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop_ysyx_040053_Adder32___ctor_var_reset(Vtop_ysyx_040053_Adder32* vlSelf);

Vtop_ysyx_040053_Adder32::Vtop_ysyx_040053_Adder32(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop_ysyx_040053_Adder32___ctor_var_reset(this);
}

void Vtop_ysyx_040053_Adder32::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop_ysyx_040053_Adder32::~Vtop_ysyx_040053_Adder32() {
}

void Vtop_ysyx_040053_Adder32___ctor_var_reset(Vtop_ysyx_040053_Adder32* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtop_ysyx_040053_Adder32___ctor_var_reset\n"); );
    // Body
    vlSelf->result = VL_RAND_RESET_I(32);
    vlSelf->cout = VL_RAND_RESET_I(1);
    vlSelf->x = VL_RAND_RESET_I(32);
    vlSelf->y = VL_RAND_RESET_I(32);
    vlSelf->sub = VL_RAND_RESET_I(1);
    vlSelf->__PVT__Gg = VL_RAND_RESET_I(4);
    vlSelf->__PVT__Pg = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__p[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__g[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__cout_temp = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__ff[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f = VL_RAND_RESET_I(4);
    vlSelf->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f = VL_RAND_RESET_I(4);
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f = VL_RAND_RESET_I(4);
    vlSelf->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f = VL_RAND_RESET_I(4);
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f = VL_RAND_RESET_I(4);
    vlSelf->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f = VL_RAND_RESET_I(4);
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f = VL_RAND_RESET_I(4);
    vlSelf->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f = VL_RAND_RESET_I(4);
}
