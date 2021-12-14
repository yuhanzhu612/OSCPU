// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

VL_INLINE_OPT void VSimTop___024root___combo__TOP__12(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___combo__TOP__12\n"); );
    // Body
    vlSelf->SimTop__DOT__top__DOT__aw_hs = ((IData)(vlSelf->io_memAXI_0_aw_ready) 
                                            & (1U == (IData)(vlSelf->SimTop__DOT__top__DOT__w_state)));
    vlSelf->SimTop__DOT__top__DOT___GEN_16 = (((IData)(vlSelf->io_memAXI_0_w_ready) 
                                               & (2U 
                                                  == (IData)(vlSelf->SimTop__DOT__top__DOT__w_state)))
                                               ? 3U
                                               : (IData)(vlSelf->SimTop__DOT__top__DOT__w_state));
    vlSelf->SimTop__DOT__top__DOT___GEN_19 = ((3U == (IData)(vlSelf->SimTop__DOT__top__DOT__w_state))
                                               ? ((IData)(vlSelf->io_memAXI_0_b_valid)
                                                   ? 4U
                                                   : (IData)(vlSelf->SimTop__DOT__top__DOT__w_state))
                                               : ((4U 
                                                   == (IData)(vlSelf->SimTop__DOT__top__DOT__w_state))
                                                   ? 0U
                                                   : (IData)(vlSelf->SimTop__DOT__top__DOT__w_state)));
    vlSelf->SimTop__DOT__top__DOT___GEN_3 = ((IData)(vlSelf->SimTop__DOT__top__DOT__r_done)
                                              ? 3U : (IData)(vlSelf->SimTop__DOT__top__DOT__r_state));
    vlSelf->SimTop__DOT__top__DOT__ar_hs = ((IData)(vlSelf->io_memAXI_0_ar_ready) 
                                            & (IData)(vlSelf->SimTop__DOT__top_io_out_ar_valid));
    vlSelf->SimTop__DOT__top__DOT___GEN_10 = ((3U == (IData)(vlSelf->SimTop__DOT__top__DOT__r_state))
                                               ? ((IData)(vlSelf->SimTop__DOT__top__DOT__data_ren)
                                                   ? 4U
                                                   : 0U)
                                               : ((4U 
                                                   == (IData)(vlSelf->SimTop__DOT__top__DOT__r_state))
                                                   ? 
                                                  ((IData)(vlSelf->SimTop__DOT__top__DOT__ar_hs)
                                                    ? 5U
                                                    : (IData)(vlSelf->SimTop__DOT__top__DOT__r_state))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->SimTop__DOT__top__DOT__r_state))
                                                    ? 
                                                   ((IData)(vlSelf->SimTop__DOT__top__DOT__r_done)
                                                     ? 6U
                                                     : (IData)(vlSelf->SimTop__DOT__top__DOT__r_state))
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->SimTop__DOT__top__DOT__r_state))
                                                     ? 0U
                                                     : (IData)(vlSelf->SimTop__DOT__top__DOT__r_state)))));
}

void VSimTop___024root___combo__TOP__2(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__7(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__8(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__9(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__10(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__11(VSimTop___024root* vlSelf);

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    VSimTop___024root___combo__TOP__2(vlSelf);
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VSimTop___024root___sequent__TOP__7(vlSelf);
        VSimTop___024root___sequent__TOP__8(vlSelf);
        VSimTop___024root___sequent__TOP__9(vlSelf);
        VSimTop___024root___sequent__TOP__10(vlSelf);
        VSimTop___024root___sequent__TOP__11(vlSelf);
    }
    VSimTop___024root___combo__TOP__12(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_clean & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_clean");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_dump & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_dump");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_aw_ready & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_aw_ready");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_w_ready & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_w_ready");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_b_valid & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_b_valid");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_b_bits_resp 
                     & 0xfcU))) {
        Verilated::overWidthError("io_memAXI_0_b_bits_resp");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_b_bits_id 
                     & 0xf0U))) {
        Verilated::overWidthError("io_memAXI_0_b_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_b_bits_user 
                     & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_b_bits_user");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_ar_ready & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_ar_ready");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_valid & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_r_valid");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_resp 
                     & 0xfcU))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_resp");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_id 
                     & 0xf0U))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_user 
                     & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_user");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_last 
                     & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_last");}
}
#endif  // VL_DEBUG
