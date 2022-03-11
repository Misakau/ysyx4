// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_YSYX_220053_ADDER32_H_
#define VERILATED_VTOP_YSYX_220053_ADDER32_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop_ysyx_220053_Adder32) {
  public:

    // PORTS
    VL_OUT8(cout,0,0);
    VL_IN8(sub,0,0);
    VL_OUT(result,31,0);
    VL_IN(x,31,0);
    VL_IN(y,31,0);

    // LOCAL SIGNALS
    CData/*3:0*/ __PVT__Gg;
    CData/*3:0*/ __PVT__Pg;
    CData/*4:0*/ __PVT__c;
    CData/*3:0*/ __PVT__cout_temp;
    CData/*0:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*0:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*0:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*0:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c;
    VlUnpacked<CData/*7:0*/, 4> __PVT__p;
    VlUnpacked<CData/*7:0*/, 4> __PVT__g;
    VlUnpacked<CData/*7:0*/, 4> __PVT__ff;

    // LOCAL VARIABLES
    CData/*3:0*/ __Vcellout__gen__c;
    CData/*7:0*/ __Vcellout__genblk2__BRA__0__KET____DOT__adder8__f;
    CData/*7:0*/ __Vcellout__genblk2__BRA__1__KET____DOT__adder8__f;
    CData/*7:0*/ __Vcellout__genblk2__BRA__2__KET____DOT__adder8__f;
    CData/*7:0*/ __Vcellout__genblk2__BRA__3__KET____DOT__adder8__f;
    CData/*3:0*/ genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f;
    CData/*3:0*/ genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f;
    CData/*3:0*/ genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f;
    CData/*3:0*/ genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f;
    CData/*3:0*/ genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f;
    CData/*3:0*/ genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f;
    CData/*3:0*/ genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f;
    CData/*3:0*/ genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_ysyx_220053_Adder32);  ///< Copying not allowed
  public:
    Vtop_ysyx_220053_Adder32(const char* name);
    ~Vtop_ysyx_220053_Adder32();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
