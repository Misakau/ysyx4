// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop___024unit.h"
#include "Vtop_ysyx_040053_Adder32.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep,Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP____024unit(Verilated::catName(namep, "$unit"))
    , TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high(Verilated::catName(namep, "top.mycpu.core.my_exu.alu64.adder.adder_high"))
    , TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low(Verilated::catName(namep, "top.mycpu.core.my_exu.alu64.adder.adder_low"))
    , TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high(Verilated::catName(namep, "top.mycpu.core.my_idu.na_alu.adder.adder_high"))
    , TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low(Verilated::catName(namep, "top.mycpu.core.my_idu.na_alu.adder.adder_low"))
    , TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high(Verilated::catName(namep, "top.mycpu.core.my_idu.nextaddr.pcadder.adder_high"))
    , TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low(Verilated::catName(namep, "top.mycpu.core.my_idu.nextaddr.pcadder.adder_low"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high = &TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high;
    TOP.__PVT__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low = &TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low;
    TOP.__PVT__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high = &TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high;
    TOP.__PVT__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low = &TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low;
    TOP.__PVT__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high = &TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high;
    TOP.__PVT__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low = &TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP____024unit.__Vconfigure(this, true);
    TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vconfigure(this, true);
    TOP__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vconfigure(this, false);
    TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vconfigure(this, false);
    TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vconfigure(this, false);
    TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vconfigure(this, false);
    TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vconfigure(this, false);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
