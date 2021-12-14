// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSimTop.h"
#include "VSimTop__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VSimTop::VSimTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSimTop__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_perfInfo_clean{vlSymsp->TOP.io_perfInfo_clean}
    , io_perfInfo_dump{vlSymsp->TOP.io_perfInfo_dump}
    , io_uart_out_valid{vlSymsp->TOP.io_uart_out_valid}
    , io_uart_out_ch{vlSymsp->TOP.io_uart_out_ch}
    , io_uart_in_valid{vlSymsp->TOP.io_uart_in_valid}
    , io_uart_in_ch{vlSymsp->TOP.io_uart_in_ch}
    , io_memAXI_0_aw_ready{vlSymsp->TOP.io_memAXI_0_aw_ready}
    , io_memAXI_0_aw_valid{vlSymsp->TOP.io_memAXI_0_aw_valid}
    , io_memAXI_0_aw_bits_prot{vlSymsp->TOP.io_memAXI_0_aw_bits_prot}
    , io_memAXI_0_aw_bits_id{vlSymsp->TOP.io_memAXI_0_aw_bits_id}
    , io_memAXI_0_aw_bits_user{vlSymsp->TOP.io_memAXI_0_aw_bits_user}
    , io_memAXI_0_aw_bits_len{vlSymsp->TOP.io_memAXI_0_aw_bits_len}
    , io_memAXI_0_aw_bits_size{vlSymsp->TOP.io_memAXI_0_aw_bits_size}
    , io_memAXI_0_aw_bits_burst{vlSymsp->TOP.io_memAXI_0_aw_bits_burst}
    , io_memAXI_0_aw_bits_lock{vlSymsp->TOP.io_memAXI_0_aw_bits_lock}
    , io_memAXI_0_aw_bits_cache{vlSymsp->TOP.io_memAXI_0_aw_bits_cache}
    , io_memAXI_0_aw_bits_qos{vlSymsp->TOP.io_memAXI_0_aw_bits_qos}
    , io_memAXI_0_w_ready{vlSymsp->TOP.io_memAXI_0_w_ready}
    , io_memAXI_0_w_valid{vlSymsp->TOP.io_memAXI_0_w_valid}
    , io_memAXI_0_w_bits_strb{vlSymsp->TOP.io_memAXI_0_w_bits_strb}
    , io_memAXI_0_w_bits_last{vlSymsp->TOP.io_memAXI_0_w_bits_last}
    , io_memAXI_0_b_ready{vlSymsp->TOP.io_memAXI_0_b_ready}
    , io_memAXI_0_b_valid{vlSymsp->TOP.io_memAXI_0_b_valid}
    , io_memAXI_0_b_bits_resp{vlSymsp->TOP.io_memAXI_0_b_bits_resp}
    , io_memAXI_0_b_bits_id{vlSymsp->TOP.io_memAXI_0_b_bits_id}
    , io_memAXI_0_b_bits_user{vlSymsp->TOP.io_memAXI_0_b_bits_user}
    , io_memAXI_0_ar_ready{vlSymsp->TOP.io_memAXI_0_ar_ready}
    , io_memAXI_0_ar_valid{vlSymsp->TOP.io_memAXI_0_ar_valid}
    , io_memAXI_0_ar_bits_prot{vlSymsp->TOP.io_memAXI_0_ar_bits_prot}
    , io_memAXI_0_ar_bits_id{vlSymsp->TOP.io_memAXI_0_ar_bits_id}
    , io_memAXI_0_ar_bits_user{vlSymsp->TOP.io_memAXI_0_ar_bits_user}
    , io_memAXI_0_ar_bits_len{vlSymsp->TOP.io_memAXI_0_ar_bits_len}
    , io_memAXI_0_ar_bits_size{vlSymsp->TOP.io_memAXI_0_ar_bits_size}
    , io_memAXI_0_ar_bits_burst{vlSymsp->TOP.io_memAXI_0_ar_bits_burst}
    , io_memAXI_0_ar_bits_lock{vlSymsp->TOP.io_memAXI_0_ar_bits_lock}
    , io_memAXI_0_ar_bits_cache{vlSymsp->TOP.io_memAXI_0_ar_bits_cache}
    , io_memAXI_0_ar_bits_qos{vlSymsp->TOP.io_memAXI_0_ar_bits_qos}
    , io_memAXI_0_r_ready{vlSymsp->TOP.io_memAXI_0_r_ready}
    , io_memAXI_0_r_valid{vlSymsp->TOP.io_memAXI_0_r_valid}
    , io_memAXI_0_r_bits_resp{vlSymsp->TOP.io_memAXI_0_r_bits_resp}
    , io_memAXI_0_r_bits_id{vlSymsp->TOP.io_memAXI_0_r_bits_id}
    , io_memAXI_0_r_bits_user{vlSymsp->TOP.io_memAXI_0_r_bits_user}
    , io_memAXI_0_r_bits_last{vlSymsp->TOP.io_memAXI_0_r_bits_last}
    , io_memAXI_0_aw_bits_addr{vlSymsp->TOP.io_memAXI_0_aw_bits_addr}
    , io_memAXI_0_ar_bits_addr{vlSymsp->TOP.io_memAXI_0_ar_bits_addr}
    , io_logCtrl_log_begin{vlSymsp->TOP.io_logCtrl_log_begin}
    , io_logCtrl_log_end{vlSymsp->TOP.io_logCtrl_log_end}
    , io_logCtrl_log_level{vlSymsp->TOP.io_logCtrl_log_level}
    , io_memAXI_0_w_bits_data{vlSymsp->TOP.io_memAXI_0_w_bits_data}
    , io_memAXI_0_r_bits_data{vlSymsp->TOP.io_memAXI_0_r_bits_data}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
}

VSimTop::VSimTop(const char* _vcname__)
    : VSimTop(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSimTop::~VSimTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf);
void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf);
void VSimTop___024root___eval(VSimTop___024root* vlSelf);
#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG
void VSimTop___024root___final(VSimTop___024root* vlSelf);

static void _eval_initial_loop(VSimTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSimTop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSimTop___024root___eval_settle(&(vlSymsp->TOP));
        VSimTop___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSimTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSimTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSimTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSimTop___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSimTop::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSimTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSimTop::final() {
    VSimTop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSimTop___024root__trace_init_top(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSimTop___024root__trace_init_top(vlSelf, tracep);
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSimTop___024root__trace_register(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSimTop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSimTop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
