// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtop__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , instr{vlSymsp->TOP.instr}
    , pc{vlSymsp->TOP.pc}
    , wb_commit{vlSymsp->TOP.wb_commit}
    , wb_pc{vlSymsp->TOP.wb_pc}
    , wb_instr{vlSymsp->TOP.wb_instr}
    , next_pc{vlSymsp->TOP.next_pc}
    , wb_dev_o{vlSymsp->TOP.wb_dev_o}
    , axi_aw_ready_i{vlSymsp->TOP.axi_aw_ready_i}
    , axi_aw_valid_o{vlSymsp->TOP.axi_aw_valid_o}
    , axi_aw_addr_o{vlSymsp->TOP.axi_aw_addr_o}
    , axi_aw_prot_o{vlSymsp->TOP.axi_aw_prot_o}
    , axi_aw_id_o{vlSymsp->TOP.axi_aw_id_o}
    , axi_aw_user_o{vlSymsp->TOP.axi_aw_user_o}
    , axi_aw_len_o{vlSymsp->TOP.axi_aw_len_o}
    , axi_aw_size_o{vlSymsp->TOP.axi_aw_size_o}
    , axi_aw_burst_o{vlSymsp->TOP.axi_aw_burst_o}
    , axi_aw_lock_o{vlSymsp->TOP.axi_aw_lock_o}
    , axi_aw_cache_o{vlSymsp->TOP.axi_aw_cache_o}
    , axi_aw_qos_o{vlSymsp->TOP.axi_aw_qos_o}
    , axi_aw_region_o{vlSymsp->TOP.axi_aw_region_o}
    , axi_w_ready_i{vlSymsp->TOP.axi_w_ready_i}
    , axi_w_valid_o{vlSymsp->TOP.axi_w_valid_o}
    , axi_w_data_o{vlSymsp->TOP.axi_w_data_o}
    , axi_w_strb_o{vlSymsp->TOP.axi_w_strb_o}
    , axi_w_last_o{vlSymsp->TOP.axi_w_last_o}
    , axi_w_user_o{vlSymsp->TOP.axi_w_user_o}
    , axi_b_ready_o{vlSymsp->TOP.axi_b_ready_o}
    , axi_b_valid_i{vlSymsp->TOP.axi_b_valid_i}
    , axi_b_resp_i{vlSymsp->TOP.axi_b_resp_i}
    , axi_b_id_i{vlSymsp->TOP.axi_b_id_i}
    , axi_b_user_i{vlSymsp->TOP.axi_b_user_i}
    , axi_ar_ready_i{vlSymsp->TOP.axi_ar_ready_i}
    , axi_ar_valid_o{vlSymsp->TOP.axi_ar_valid_o}
    , axi_ar_addr_o{vlSymsp->TOP.axi_ar_addr_o}
    , axi_ar_prot_o{vlSymsp->TOP.axi_ar_prot_o}
    , axi_ar_id_o{vlSymsp->TOP.axi_ar_id_o}
    , axi_ar_user_o{vlSymsp->TOP.axi_ar_user_o}
    , axi_ar_len_o{vlSymsp->TOP.axi_ar_len_o}
    , axi_ar_size_o{vlSymsp->TOP.axi_ar_size_o}
    , axi_ar_burst_o{vlSymsp->TOP.axi_ar_burst_o}
    , axi_ar_lock_o{vlSymsp->TOP.axi_ar_lock_o}
    , axi_ar_cache_o{vlSymsp->TOP.axi_ar_cache_o}
    , axi_ar_qos_o{vlSymsp->TOP.axi_ar_qos_o}
    , axi_ar_region_o{vlSymsp->TOP.axi_ar_region_o}
    , axi_r_ready_o{vlSymsp->TOP.axi_r_ready_o}
    , axi_r_valid_i{vlSymsp->TOP.axi_r_valid_i}
    , axi_r_resp_i{vlSymsp->TOP.axi_r_resp_i}
    , axi_r_data_i{vlSymsp->TOP.axi_r_data_i}
    , axi_r_last_i{vlSymsp->TOP.axi_r_last_i}
    , axi_r_id_i{vlSymsp->TOP.axi_r_id_i}
    , axi_r_user_i{vlSymsp->TOP.axi_r_user_i}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low{vlSymsp->TOP.__PVT__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low}
    , __PVT__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high{vlSymsp->TOP.__PVT__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high}
    , __PVT__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low{vlSymsp->TOP.__PVT__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low}
    , __PVT__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high{vlSymsp->TOP.__PVT__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high}
    , __PVT__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low{vlSymsp->TOP.__PVT__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low}
    , __PVT__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high{vlSymsp->TOP.__PVT__top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);
QData Vtop___024root___change_request(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___final(Vtop___024root* vlSelf);

static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
        Vtop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/top.v", 15, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/top.v", 15, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtop::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Invoke final blocks

void Vtop::final() {
    Vtop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vtop::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vtop___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
