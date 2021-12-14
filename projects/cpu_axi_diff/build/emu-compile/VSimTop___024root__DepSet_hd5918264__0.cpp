// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__2(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill 
        = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill;
    vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__mem_ready 
        = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__mem_ready;
    vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state 
        = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__state;
    vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__valid__v1 = 0U;
    vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v1 = 0U;
    vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v0 = 0U;
    vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill 
        = vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill;
    vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state 
        = vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state;
    vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__valid__v1 = 0U;
    vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v1 = 0U;
    vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v0 = 0U;
}

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__4(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__4\n"); );
    // Init
    CData/*0:0*/ __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__trap;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__cycleCnt;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__instrCnt;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v0;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v1;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v1;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v2;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v3;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v4;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v5;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v6;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v7;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v8;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v9;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v10;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v11;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v12;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v13;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v14;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v15;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v16;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v17;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v18;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v19;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v20;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v21;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v22;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v23;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v24;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v25;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v26;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v27;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v28;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v29;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v30;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v31;
    // Body
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__instrCnt 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__instrCnt;
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__cycleCnt 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cycleCnt;
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__trap 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap;
    __Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v1 = 0U;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wen = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wdest = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wdata = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_pc = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_inst = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_valid = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__trap = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap_code = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__cycleCnt = 0ULL;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__instrCnt = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap)))) {
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__cycleCnt 
            = (1ULL + vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cycleCnt);
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__instrCnt 
            = (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__instrCnt 
               + (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_valid)));
        if (VL_UNLIKELY((IData)(((0x1ec0U == (0x3fc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                 & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_valid))))) {
            VL_WRITEF("%c",64,(((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                << 0x28U) | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                              << 8U) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                >> 0x18U))));
        }
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wen 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wdest 
            = (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U]);
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wdata 
            = (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_pc 
            = (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[4U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[3U])) 
                                           >> 6U)));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_inst 
            = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[3U] 
                << 0x1aU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
                             >> 6U));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_valid 
            = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_valid) 
               & (~ (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU] 
                     >> 0x12U)));
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v0 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0U];
        __Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v0 = 1U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_diff 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_o;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mcause_diff 
            = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex)
                ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                    << 0x2dU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                                  << 0xdU) | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                              >> 0x13U)))
                : ((IData)((0x4d080U == (0x7ffc0U & 
                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))
                    ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                        << 0x3aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                                      << 0x1aU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                                   >> 6U)))
                    : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcause));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_diff 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_o;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_diff 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_o;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_diff 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_o;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mip_diff 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mip_o;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mscratch_diff 
            = ((IData)((0x4d000U == (0x7ffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))
                ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                    << 0x3aU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                               >> 6U)))
                : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mscratch);
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__sstatus_diff 
            = (0x80000003000de122ULL & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_o);
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__intrNO_diff 
            = (IData)(((0x40000U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])
                        ? 7ULL : 0ULL));
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__trap 
            = (0x6bU == (0x7fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
                                  >> 6U)));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap_code 
            = (0xffU & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
                               [0xaU]));
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v1 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [1U];
        __Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v1 = 1U;
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v2 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [2U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v3 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [3U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v4 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [4U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v5 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [5U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v6 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [6U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v7 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [7U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v8 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [8U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v9 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [9U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v10 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0xaU];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v11 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0xbU];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v12 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0xcU];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v13 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0xdU];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v14 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0xeU];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v15 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0xfU];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v16 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x10U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v17 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x11U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v18 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x12U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v19 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x13U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v20 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x14U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v21 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x15U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v22 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x16U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v23 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x17U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v24 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x18U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v25 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x19U];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v26 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x1aU];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v27 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x1bU];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v28 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x1cU];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v29 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x1dU];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v30 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x1eU];
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v31 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs
            [0x1fU];
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__trap;
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cycleCnt 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__cycleCnt;
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__instrCnt 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__instrCnt;
    if (__Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v1) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[1U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v1;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[2U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v2;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[3U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v3;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[4U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v4;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[5U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v5;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[6U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v6;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[7U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v7;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[8U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v8;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[9U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v9;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0xaU] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v10;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0xbU] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v11;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0xcU] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v12;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0xdU] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v13;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0xeU] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v14;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0xfU] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v15;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x10U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v16;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x11U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v17;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x12U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v18;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x13U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v19;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x14U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v20;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x15U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v21;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x16U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v22;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x17U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v23;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x18U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v24;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x19U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v25;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x1aU] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v26;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x1bU] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v27;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x1cU] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v28;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x1dU] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v29;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x1eU] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v30;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0x1fU] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff__v31;
    }
}

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__5(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__5\n"); );
    // Init
    VlUnpacked<CData/*7:0*/, 256> SimTop__DOT__u_ysyx_210247_dcache__DOT__strb;
    VlUnpacked<CData/*1:0*/, 256> SimTop__DOT__u_ysyx_210247_dcache__DOT__size;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v0;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__valid__v0;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__tag__v0;
    IData/*19:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__tag__v0;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__offset__v0;
    CData/*3:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__offset__v0;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v1;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__valid__v1;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__tag__v1;
    IData/*19:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__tag__v1;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__offset__v1;
    CData/*3:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__offset__v1;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v0;
    CData/*0:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v0;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__valid__v0;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__tag__v0;
    IData/*19:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__tag__v0;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__strb__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__strb__v0;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__size__v0;
    CData/*1:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__size__v0;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__offset__v0;
    CData/*3:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__offset__v0;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v1;
    CData/*0:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v1;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__valid__v1;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__tag__v1;
    IData/*19:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__tag__v1;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__offset__v1;
    CData/*3:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__offset__v1;
    VlWide<5>/*159:0*/ __Vtemp_h012cf8eb__0;
    VlWide<5>/*159:0*/ __Vtemp_hd5096001__0;
    VlWide<4>/*127:0*/ __Vtemp_h89370e35__0;
    VlWide<4>/*127:0*/ __Vtemp_ha75dd88d__0;
    VlWide<4>/*127:0*/ __Vtemp_hb757ad06__0;
    // Body
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__i = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__i)) {
            vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__tag[(0xffU 
                                                                 & vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__i)] = 0U;
            vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__valid[(0xffU 
                                                                   & vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__i)] = 0U;
            vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__dirty[(0xffU 
                                                                   & vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__i)] = 0U;
            vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__offset[(0xffU 
                                                                    & vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__i)] = 0U;
            vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__i 
                = ((IData)(1U) + vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__i);
        }
    }
    if ((1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->SimTop__DOT__inst_valid))))) {
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state = 6U;
        vlSelf->SimTop__DOT__inst_ready = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wen = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[0U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[1U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[2U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[3U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[4U] = 0U;
        vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr = 0U;
        vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_data = 0U;
        vlSelf->SimTop__DOT__inst_req_valid = 0U;
        vlSelf->SimTop__DOT__inst_req_wen = 0U;
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__mem_ready = 0U;
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill = 0U;
    } else if ((4U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__state))) {
        if ((2U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__state))) {
            if ((1U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__state))) {
                vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state = 0U;
            } else {
                vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state = 7U;
                vlSelf->SimTop__DOT__inst_ready = 0U;
                vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wen = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__state)))) {
            vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill = 0U;
            vlSelf->SimTop__DOT__inst_ready = 1U;
            vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state = 6U;
            vlSelf->SimTop__DOT__inst_req_valid = 0U;
            vlSelf->SimTop__DOT__inst_req_wen = 0U;
            vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v0 = 1U;
            __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v0 
                = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                    >> 4U)));
            __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__valid__v0 
                = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                    >> 4U)));
            __Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__tag__v0 
                = (0xfffffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                       >> 0xcU)));
            __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__tag__v0 
                = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                    >> 4U)));
            __Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__offset__v0 
                = (0xfU & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc));
            __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__offset__v0 
                = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                    >> 4U)));
        }
    } else if ((2U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__state))) {
        if ((1U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__state))) {
            if (vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill) {
                vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state = 4U;
            } else {
                vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state = 3U;
                vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr 
                    = (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc);
                vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_data = 0U;
                vlSelf->SimTop__DOT__inst_req_valid = 1U;
                vlSelf->SimTop__DOT__inst_req_wen = 0U;
                vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__mem_ready 
                    = vlSelf->SimTop__DOT__inst_resp_valid;
            }
            if (vlSelf->SimTop__DOT__inst_resp_valid) {
                vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wen = 1U;
                VL_EXTEND_WW(129,128, __Vtemp_h012cf8eb__0, vlSelf->SimTop__DOT__inst_resp_data);
                vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[0U] 
                    = __Vtemp_h012cf8eb__0[0U];
                vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[1U] 
                    = __Vtemp_h012cf8eb__0[1U];
                vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[2U] 
                    = __Vtemp_h012cf8eb__0[2U];
                vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[3U] 
                    = __Vtemp_h012cf8eb__0[3U];
                vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[4U] 
                    = __Vtemp_h012cf8eb__0[4U];
                vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill = 1U;
                vlSelf->SimTop__DOT__inst_req_valid = 0U;
            }
        } else {
            vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state = 3U;
            vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill = 0U;
            vlSelf->SimTop__DOT__inst_req_valid = 0U;
            vlSelf->SimTop__DOT__inst_req_wen = 0U;
        }
    } else if ((1U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__state))) {
        vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr 
            = ((vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__tag
                [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                   >> 4U)))] << 0xcU) 
               | ((0xff0U & ((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                      >> 4U)) << 4U)) 
                  | vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__offset
                  [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                     >> 4U)))]));
        VL_EXTEND_WW(129,128, __Vtemp_hd5096001__0, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_data 
            = __Vtemp_hd5096001__0[0U];
        vlSelf->SimTop__DOT__inst_req_valid = 1U;
        vlSelf->SimTop__DOT__inst_req_wen = 1U;
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state 
            = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__mem_ready)
                ? 2U : 1U);
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__mem_ready 
            = vlSelf->SimTop__DOT__inst_resp_valid;
    } else if (vlSelf->SimTop__DOT__br_stall) {
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_hit) 
                & (IData)(vlSelf->SimTop__DOT__addr_valid))) {
        if ((1U & (~ vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__dirty
                   [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                      >> 4U)))]))) {
            vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v1 = 1U;
            __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v1 
                = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                    >> 4U)));
        }
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wen = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[0U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[1U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[2U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[3U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[4U] = 0U;
        vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__valid__v1 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__valid__v1 
            = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                >> 4U)));
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__tag__v1 
            = (0xfffffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                   >> 0xcU)));
        __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__tag__v1 
            = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                >> 4U)));
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__offset__v1 
            = (0xfU & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc));
        __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__offset__v1 
            = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                >> 4U)));
        vlSelf->SimTop__DOT__inst_ready = 1U;
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state = 6U;
    } else if (vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_dirty) {
        vlSelf->SimTop__DOT__inst_ready = 0U;
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state = 1U;
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__mem_ready = 0U;
    } else {
        vlSelf->SimTop__DOT__inst_ready = 0U;
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state = 3U;
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__i = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__i)) {
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__tag[(0xffU 
                                                                 & vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__i)] = 0U;
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid[(0xffU 
                                                                   & vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__i)] = 0U;
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty[(0xffU 
                                                                   & vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__i)] = 0U;
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__offset[(0xffU 
                                                                    & vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__i)] = 0U;
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__i 
                = ((IData)(1U) + vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__i);
        }
    }
    if ((1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->SimTop__DOT__data_valid))))) {
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state = 6U;
        vlSelf->SimTop__DOT__data_ready = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wen = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[0U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[1U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[2U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[3U] = 0U;
        vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr = 0U;
        vlSelf->SimTop__DOT__mem_req_data[0U] = 0U;
        vlSelf->SimTop__DOT__mem_req_data[1U] = 0U;
        vlSelf->SimTop__DOT__mem_req_data[2U] = 0U;
        vlSelf->SimTop__DOT__mem_req_data[3U] = 0U;
        vlSelf->SimTop__DOT__mem_req_valid = 0U;
        vlSelf->SimTop__DOT__mem_req_wen = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__mem_ready = 0U;
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill = 0U;
    } else if ((4U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state))) {
        if ((2U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state))) {
            if ((1U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state))) {
                vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state = 0U;
            } else {
                vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state = 7U;
                vlSelf->SimTop__DOT__data_ready = 0U;
                vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wen = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state)))) {
            vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill = 0U;
            vlSelf->SimTop__DOT__data_ready = 1U;
            vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state = 6U;
            vlSelf->SimTop__DOT__mem_req_valid = 0U;
            vlSelf->SimTop__DOT__mem_req_wen = 0U;
            __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v0 
                = vlSelf->SimTop__DOT__data_wen;
            vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v0 = 1U;
            __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v0 
                = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                    >> 4U)));
            __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__valid__v0 
                = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                    >> 4U)));
            __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__tag__v0 
                = (0xfffffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                       >> 0xcU)));
            __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__tag__v0 
                = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                    >> 4U)));
            __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__strb__v0 
                = vlSelf->SimTop__DOT__data_strb;
            __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__strb__v0 
                = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                    >> 4U)));
            __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__size__v0 
                = vlSelf->SimTop__DOT__data_size;
            __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__size__v0 
                = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                    >> 4U)));
            __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__offset__v0 
                = (0xfU & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64));
            __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__offset__v0 
                = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                    >> 4U)));
        }
    } else if ((2U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state))) {
        if ((1U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state))) {
            if (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill) {
                vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state = 4U;
            } else {
                vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state = 3U;
                vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr 
                    = (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64);
                VL_EXTEND_WQ(128,64, __Vtemp_h89370e35__0, vlSelf->SimTop__DOT__data_write);
                vlSelf->SimTop__DOT__mem_req_data[0U] 
                    = __Vtemp_h89370e35__0[0U];
                vlSelf->SimTop__DOT__mem_req_data[1U] 
                    = __Vtemp_h89370e35__0[1U];
                vlSelf->SimTop__DOT__mem_req_data[2U] 
                    = __Vtemp_h89370e35__0[2U];
                vlSelf->SimTop__DOT__mem_req_data[3U] 
                    = __Vtemp_h89370e35__0[3U];
                vlSelf->SimTop__DOT__mem_req_valid = 1U;
                vlSelf->SimTop__DOT__mem_req_wen = 0U;
                vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__mem_ready 
                    = vlSelf->SimTop__DOT__mem_resp_valid;
            }
            if (vlSelf->SimTop__DOT__mem_resp_valid) {
                vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wen = 1U;
                if (vlSelf->SimTop__DOT__data_wen) {
                    if ((1U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                       >> 3U)))) {
                        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[0U] 
                            = (IData)((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mem_resp_data[0U]))));
                        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[1U] 
                            = (IData)(((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__mem_resp_data[0U]))) 
                                       >> 0x20U));
                        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[2U] 
                            = (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_write_data);
                        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[3U] 
                            = (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_write_data 
                                       >> 0x20U));
                    } else {
                        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[0U] 
                            = (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_write_data);
                        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[1U] 
                            = (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_write_data 
                                       >> 0x20U));
                        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[2U] 
                            = (IData)((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__mem_resp_data[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mem_resp_data[2U]))));
                        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[3U] 
                            = (IData)(((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mem_resp_data[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__mem_resp_data[2U]))) 
                                       >> 0x20U));
                    }
                } else {
                    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[0U] 
                        = vlSelf->SimTop__DOT__mem_resp_data[0U];
                    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[1U] 
                        = vlSelf->SimTop__DOT__mem_resp_data[1U];
                    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[2U] 
                        = vlSelf->SimTop__DOT__mem_resp_data[2U];
                    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[3U] 
                        = vlSelf->SimTop__DOT__mem_resp_data[3U];
                }
                vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[0U] = 0xffffffffU;
                vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[1U] = 0xffffffffU;
                vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[2U] = 0xffffffffU;
                vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[3U] = 0xffffffffU;
                vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill = 1U;
                vlSelf->SimTop__DOT__mem_req_valid = 0U;
            }
        } else {
            vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state = 3U;
            vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill = 0U;
            vlSelf->SimTop__DOT__mem_req_valid = 0U;
            vlSelf->SimTop__DOT__mem_req_wen = 0U;
        }
    } else if ((1U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state))) {
        vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr 
            = ((vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__tag
                [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                   >> 4U)))] << 0xcU) 
               | ((0xff0U & ((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                      >> 4U)) << 4U)) 
                  | vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__offset
                  [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                     >> 4U)))]));
        vlSelf->SimTop__DOT__mem_req_data[0U] = vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[0U];
        vlSelf->SimTop__DOT__mem_req_data[1U] = vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[1U];
        vlSelf->SimTop__DOT__mem_req_data[2U] = vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[2U];
        vlSelf->SimTop__DOT__mem_req_data[3U] = vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[3U];
        vlSelf->SimTop__DOT__mem_req_strb = 0xffU;
        vlSelf->SimTop__DOT__mem_req_size = 3U;
        vlSelf->SimTop__DOT__mem_req_valid = 1U;
        if (vlSelf->SimTop__DOT__mem_resp_valid) {
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__mem_ready = 1U;
            vlSelf->SimTop__DOT__mem_req_wen = 1U;
            vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state = 2U;
            vlSelf->SimTop__DOT__mem_req_valid = 0U;
            vlSelf->SimTop__DOT__mem_req_wen = 0U;
        } else {
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__mem_ready = 0U;
            vlSelf->SimTop__DOT__mem_req_wen = 1U;
            vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state = 1U;
        }
    } else if (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_hit) {
        if ((1U & (~ vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty
                   [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                      >> 4U)))]))) {
            __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v1 
                = vlSelf->SimTop__DOT__data_wen;
            vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v1 = 1U;
            __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v1 
                = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                    >> 4U)));
        }
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wen 
            = vlSelf->SimTop__DOT__data_wen;
        VL_EXTEND_WQ(128,64, __Vtemp_ha75dd88d__0, vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_write_data);
        if ((1U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                           >> 3U)))) {
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[0U] = 0U;
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[1U] = 0U;
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[2U] 
                = (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_write_data);
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[3U] 
                = (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_write_data 
                           >> 0x20U));
        } else {
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[0U] 
                = __Vtemp_ha75dd88d__0[0U];
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[1U] 
                = __Vtemp_ha75dd88d__0[1U];
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[2U] 
                = __Vtemp_ha75dd88d__0[2U];
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[3U] 
                = __Vtemp_ha75dd88d__0[3U];
        }
        VL_EXTEND_WQ(128,64, __Vtemp_hb757ad06__0, vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_strb);
        if ((1U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                           >> 3U)))) {
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[0U] = 0U;
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[1U] = 0U;
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[2U] 
                = (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_strb);
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[3U] 
                = (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_strb 
                           >> 0x20U));
        } else {
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[0U] 
                = __Vtemp_hb757ad06__0[0U];
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[1U] 
                = __Vtemp_hb757ad06__0[1U];
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[2U] 
                = __Vtemp_hb757ad06__0[2U];
            vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[3U] 
                = __Vtemp_hb757ad06__0[3U];
        }
        vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__valid__v1 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__valid__v1 
            = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                >> 4U)));
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__tag__v1 
            = (0xfffffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                   >> 0xcU)));
        __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__tag__v1 
            = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                >> 4U)));
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__offset__v1 
            = (0xfU & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64));
        __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__offset__v1 
            = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                >> 4U)));
        vlSelf->SimTop__DOT__data_ready = 1U;
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state = 6U;
    } else if (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_dirty) {
        vlSelf->SimTop__DOT__data_ready = 0U;
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state = 1U;
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__mem_ready = 0U;
    } else {
        vlSelf->SimTop__DOT__data_ready = 0U;
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state = 3U;
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill = 0U;
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__state 
        = vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state;
    vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__mem_ready 
        = vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__mem_ready;
    vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill 
        = vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill;
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__offset[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__offset__v0] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__offset__v0;
    }
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__valid__v1) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__offset[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__offset__v1] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__offset__v1;
    }
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__dirty[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v0] = 0U;
    }
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v1) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__dirty[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v1] = 0U;
    }
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__valid[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__valid__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__valid__v1) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__valid[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__valid__v1] = 1U;
    }
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__tag[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__tag__v0] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__tag__v0;
    }
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__valid__v1) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__tag[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__tag__v1] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__tag__v1;
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill 
        = vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill;
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state 
        = vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state;
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v0) {
        SimTop__DOT__u_ysyx_210247_dcache__DOT__size[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__size__v0] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__size__v0;
        SimTop__DOT__u_ysyx_210247_dcache__DOT__strb[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__strb__v0] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__strb__v0;
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__offset[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__offset__v0] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__offset__v0;
    }
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__valid__v1) {
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__offset[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__offset__v1] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__offset__v1;
    }
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__valid__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__valid__v1) {
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__valid__v1] = 1U;
    }
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v0] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v0;
    }
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v1) {
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v1] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v1;
    }
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__tag[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__tag__v0] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__tag__v0;
    }
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__valid__v1) {
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__tag[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__tag__v1] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__tag__v1;
    }
    vlSelf->io_memAXI_0_w_bits_strb = vlSelf->SimTop__DOT__mem_req_strb;
    vlSelf->io_memAXI_0_aw_bits_addr = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok)
                                         ? (8ULL | 
                                            (0xfffffffffffffff0ULL 
                                             & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))
                                         : (0xfffffffffffffff0ULL 
                                            & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))));
    vlSelf->io_memAXI_0_ar_bits_addr = (0xfffffffffffffff0ULL 
                                        & ((1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                            ? (0xfffffffffffffff8ULL 
                                               & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr)))
                                            : ((3U 
                                                == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                ? (0xfffffffffffffff8ULL 
                                                   & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr)))
                                                : 0ULL)));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_valid 
        = ((IData)(vlSelf->SimTop__DOT__mem_req_valid) 
           & (IData)(vlSelf->SimTop__DOT__mem_req_wen));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_h 
        = ((1U == (IData)(vlSelf->SimTop__DOT__mem_req_size)) 
           & (~ (IData)(vlSelf->SimTop__DOT__mem_req_wen)));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d 
        = ((3U == (IData)(vlSelf->SimTop__DOT__mem_req_size)) 
           & (~ (IData)(vlSelf->SimTop__DOT__mem_req_wen)));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ren 
        = ((IData)(vlSelf->SimTop__DOT__mem_req_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__mem_req_wen)));
    vlSelf->SimTop__DOT__w_data[0U] = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok)
                                        ? (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mem_req_data[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__mem_req_data[2U])))
                                        : (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mem_req_data[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__mem_req_data[0U]))));
    vlSelf->SimTop__DOT__mem_resp_valid = (((6U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)) 
                                            & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ren))
                                            ? (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready)
                                            : (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready));
    vlSelf->io_memAXI_0_w_bits_data[3U] = vlSelf->SimTop__DOT__w_data
        [3U];
    vlSelf->io_memAXI_0_w_bits_data[2U] = vlSelf->SimTop__DOT__w_data
        [2U];
    vlSelf->io_memAXI_0_w_bits_data[1U] = vlSelf->SimTop__DOT__w_data
        [1U];
    vlSelf->io_memAXI_0_w_bits_data[0U] = vlSelf->SimTop__DOT__w_data
        [0U];
}

VL_INLINE_OPT void VSimTop___024root___combo__TOP__6(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___combo__TOP__6\n"); );
    // Body
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done 
        = ((IData)(vlSelf->io_memAXI_0_r_valid) & (IData)(vlSelf->io_memAXI_0_r_bits_last));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready_en 
        = ((IData)(vlSelf->io_memAXI_0_b_valid) | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__aw_hs 
        = ((IData)(vlSelf->io_memAXI_0_aw_ready) & 
           (1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state)));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_hs 
        = ((IData)(vlSelf->io_memAXI_0_w_ready) & (2U 
                                                   == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state)));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__new_pc = 0ULL;
    } else {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata 
            = ((0xb00U == (0xfffU & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                      << 8U) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                >> 0x18U))))
                ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle
                : ((0x300U == (0xfffU & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                          << 8U) | 
                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                          >> 0x18U))))
                    ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus
                    : ((0x342U == (0xfffU & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                              << 8U) 
                                             | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                >> 0x18U))))
                        ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcause
                        : ((0x341U == (0xfffU & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                  << 8U) 
                                                 | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                    >> 0x18U))))
                            ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mepc
                            : 0ULL))));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type 
            = (0x3fU & ((((((0x20U & (- (IData)((1U 
                                                 & ((IData)(
                                                            (0x17U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                    | (IData)(
                                                              (0x37U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))))))) 
                            | (0x10U & (- (IData)((
                                                   (((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lw) 
                                                                           | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jalr)) 
                                                                          | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ld)) 
                                                                         | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lbu)) 
                                                                        | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lh)) 
                                                                       | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lhu)) 
                                                                      | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lb)) 
                                                                     | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lwu)) 
                                                                    | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs)) 
                                                                   | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)) 
                                                                  | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci)) 
                                                                 | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi)) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc)) 
                                                               | (0x13U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                              | (0x3013U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                             | (0x1bU 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                            | (0x40005013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                           | (0x7013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                          | (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                         | (0x1013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                        | (0x5013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                       | (0x501bU 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                      | (0x101bU 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                     | (0x4000501bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                    | (0x6013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                   | (0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))))))) 
                           | (8U & (- (IData)((1U & 
                                               (((((((((((((((IData)(
                                                                     (0x3bU 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                             | (IData)(
                                                                       (0x40000033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                            | (IData)(
                                                                      (0x33U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                           | (IData)(
                                                                     (0x103bU 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                          | (IData)(
                                                                    (0x7033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                         | (IData)(
                                                                   (0x3033U 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                        | (IData)(
                                                                  (0x6033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                       | (IData)(
                                                                 (0x4000003bU 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                      | (IData)(
                                                                (0x4000503bU 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                     | (IData)(
                                                               (0x503bU 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                    | (IData)(
                                                              (0x2033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                   | (IData)(
                                                             (0x4033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                  | (IData)(
                                                            (0x5033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                 | (IData)(
                                                           (0x40005033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                | (IData)(
                                                          (0x1033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))))))))) 
                          | (4U & (- (IData)(((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd) 
                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sh)) 
                                               | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sb)) 
                                              | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sw)))))) 
                         | (2U & (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jal))))) 
                        | (1U & (- (IData)(((((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_beq) 
                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bne)) 
                                               | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bge)) 
                                              | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_blt)) 
                                             | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bgeu)) 
                                            | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bltu)))))));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__new_pc 
            = ((1U == ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                        << 0xdU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                    >> 0x13U))) ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_o
                : ((2U == ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                            << 0xdU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                        >> 0x13U)))
                    ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_o
                    : ((3U == ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                << 0xdU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                            >> 0x13U)))
                        ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_o
                        : 0ULL)));
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready_en 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done) 
           | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__len_incr_en 
        = ((1U != (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__len)) 
           & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_hs) 
              | (IData)(vlSelf->io_memAXI_0_r_valid)));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs2_r_ena = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs1_r_ena = 0U;
    } else {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs2_r_ena 
            = (1U & (((8U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                      | (1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                     | (4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs1_r_ena 
            = (((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my) 
                  | (0x10U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                 | (1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                | (8U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
               | (4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)));
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_forward 
        = (((0U != (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                             >> 0x14U))) & ((((0x1fU 
                                               & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                  >> 0x14U)) 
                                              == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest)) 
                                             | ((0x1fU 
                                                 & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                    >> 0x14U)) 
                                                == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__MEM_wdest))) 
                                            | ((0x1fU 
                                                & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                   >> 0x14U)) 
                                               == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__WB_wdest)))) 
           & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs2_r_ena));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data2 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs2_r_ena)
                                             ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
                                            [((IData)(vlSelf->reset)
                                               ? 0U
                                               : ((
                                                   ((8U 
                                                     == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                                    | (1U 
                                                       == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                   | (4U 
                                                      == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                      >> 0x14U))
                                                   : 0U))]
                                             : 0ULL));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_forward 
        = (((0U != (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)) 
            & ((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1) 
                 == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest)) 
                | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1) 
                   == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__MEM_wdest))) 
               | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1) 
                  == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__WB_wdest)))) 
           & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs1_r_ena));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data1 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs1_r_ena)
                                             ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
                                            [((IData)(vlSelf->reset)
                                               ? 0U
                                               : ((
                                                   ((((0x10U 
                                                       == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                                      | (1U 
                                                         == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                     | (8U 
                                                        == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                    | (4U 
                                                       == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                   | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my))
                                                   ? 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1))
                                                   : 0U))]
                                             : 0ULL));
}

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__7(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__7\n"); );
    // Body
    vlSelf->SimTop__DOT__inst_resp_valid = ((5U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)) 
                                            & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready));
    vlSelf->SimTop__DOT__data_wen = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                      >> 0x1bU) & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid));
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[0U] 
        = vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[0U];
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[1U] 
        = vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[1U];
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[2U] 
        = vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[2U];
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[3U] 
        = vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[3U];
    vlSelf->SimTop__DOT__data_size = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lw) 
                                       | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sw))
                                       ? 2U : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lwu)
                                                ? 2U
                                                : (
                                                   ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb) 
                                                    | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sb))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lbu)
                                                     ? 0U
                                                     : 
                                                    (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lh) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sh))
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lhu)
                                                       ? 1U
                                                       : 
                                                      (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_ld) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sd))
                                                        ? 3U
                                                        : 0U)))))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
        = ((((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
             << 0x28U) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                           << 8U) | ((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                     >> 0x18U))) + 
           (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
             << 0x28U) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                           << 8U) | ((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                     >> 0x18U))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__inst_resp_data[0U] = 0U;
        vlSelf->SimTop__DOT__inst_resp_data[1U] = 0U;
        vlSelf->SimTop__DOT__inst_resp_data[2U] = 0U;
        vlSelf->SimTop__DOT__inst_resp_data[3U] = 0U;
        vlSelf->SimTop__DOT__addr_valid = 1U;
    } else if (vlSelf->io_memAXI_0_r_valid) {
        if (vlSelf->io_memAXI_0_r_bits_last) {
            vlSelf->SimTop__DOT__inst_resp_data[2U] 
                = (IData)(vlSelf->io_memAXI_0_r_bits_data
                          [0U]);
            vlSelf->SimTop__DOT__inst_resp_data[3U] 
                = (IData)((vlSelf->io_memAXI_0_r_bits_data
                           [0U] >> 0x20U));
        } else {
            vlSelf->SimTop__DOT__inst_resp_data[0U] 
                = (IData)(vlSelf->io_memAXI_0_r_bits_data
                          [0U]);
            vlSelf->SimTop__DOT__inst_resp_data[1U] 
                = (IData)((vlSelf->io_memAXI_0_r_bits_data
                           [0U] >> 0x20U));
        }
    }
    vlSelf->SimTop__DOT__addr_valid = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_valid_in;
    if (vlSelf->SimTop__DOT__inst_valid) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q[0U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram
            [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                               >> 4U)))][0U];
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q[1U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram
            [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                               >> 4U)))][1U];
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q[2U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram
            [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                               >> 4U)))][2U];
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q[3U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram
            [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                               >> 4U)))][3U];
    } else {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q[0U] 
            = VL_RANDOM_I();
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q[1U] 
            = VL_RANDOM_I();
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q[2U] 
            = VL_RANDOM_I();
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q[3U] 
            = VL_RANDOM_I();
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__mem_resp_data[0U] = 0U;
        vlSelf->SimTop__DOT__mem_resp_data[1U] = 0U;
        vlSelf->SimTop__DOT__mem_resp_data[2U] = 0U;
        vlSelf->SimTop__DOT__mem_resp_data[3U] = 0U;
    } else if (vlSelf->io_memAXI_0_r_valid) {
        if (vlSelf->io_memAXI_0_r_bits_last) {
            vlSelf->SimTop__DOT__mem_resp_data[2U] 
                = (IData)(vlSelf->io_memAXI_0_r_bits_data
                          [0U]);
            vlSelf->SimTop__DOT__mem_resp_data[3U] 
                = (IData)((vlSelf->io_memAXI_0_r_bits_data
                           [0U] >> 0x20U));
        } else {
            vlSelf->SimTop__DOT__mem_resp_data[0U] 
                = (IData)(vlSelf->io_memAXI_0_r_bits_data
                          [0U]);
            vlSelf->SimTop__DOT__mem_resp_data[1U] 
                = (IData)((vlSelf->io_memAXI_0_r_bits_data
                           [0U] >> 0x20U));
        }
    }
    vlSelf->SimTop__DOT__data_strb = ((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sw) 
                                        | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lw)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lwu))
                                       ? ((1U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                         >> 2U)))
                                           ? 0xf0U : 0xfU)
                                       : ((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sh) 
                                            | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lh)) 
                                           | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lhu))
                                           ? ((0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                           >> 1U))))
                                               ? 3U
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                               >> 1U))))
                                                   ? 0xcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                                >> 1U))))
                                                    ? 0x30U
                                                    : 0xc0U)))
                                           : ((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sb) 
                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb)) 
                                               | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lbu))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                     ? 4U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                      ? 8U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                       ? 0x10U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                        ? 0x20U
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                         ? 0x40U
                                                         : 0x80U)))))))
                                               : (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sd) 
                                                   | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_ld))
                                                   ? 0xffU
                                                   : 0U))));
    vlSelf->SimTop__DOT__data_write = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sw)
                                        ? ((1U & (IData)(
                                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                          >> 2U)))
                                            ? ((QData)((IData)(
                                                               ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U] 
                                                                 << 8U) 
                                                                | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                   >> 0x18U)))) 
                                               << 0x20U)
                                            : (QData)((IData)(
                                                              ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U] 
                                                                << 8U) 
                                                               | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                  >> 0x18U)))))
                                        : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sh)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                            >> 1U))))
                                                ? (QData)((IData)(
                                                                  (0xffffU 
                                                                   & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U] 
                                                                       << 8U) 
                                                                      | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                         >> 0x18U)))))
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U] 
                                                                         << 8U) 
                                                                        | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                           >> 0x18U))))) 
                                                    << 0x10U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                                 >> 1U))))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U] 
                                                                          << 8U) 
                                                                         | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                            >> 0x18U))))) 
                                                     << 0x20U)
                                                     : 
                                                    ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U] 
                                                                          << 8U) 
                                                                         | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                            >> 0x18U))))) 
                                                     << 0x30U))))
                                            : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sb)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                       >> 0x18U)))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                      >> 0x18U))) 
                                                     << 8U)
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                      ? 
                                                     ((QData)((IData)(
                                                                      (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                       >> 0x18U))) 
                                                      << 0x10U)
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                        >> 0x18U))) 
                                                       << 0x18U)
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                         >> 0x18U))) 
                                                        << 0x20U)
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                         ? 
                                                        ((QData)((IData)(
                                                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                          >> 0x18U))) 
                                                         << 0x28U)
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                          ? 
                                                         ((QData)((IData)(
                                                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                           >> 0x18U))) 
                                                          << 0x30U)
                                                          : 
                                                         ((QData)((IData)(
                                                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                           >> 0x18U))) 
                                                          << 0x38U))))))))
                                                : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sd)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U])) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                          >> 0x18U)))
                                                    : 0ULL))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen 
        = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
            >> 0x1bU) & ((0x2004000ULL == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64) 
                         | (0x200bff8ULL == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op32 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren 
        = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
            >> 0x1aU) & ((0x2004000ULL == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64) 
                         | (0x200bff8ULL == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)));
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
        = ((1U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                          >> 3U))) ? (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[2U])))
            : (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[0U]))));
    if (vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram[vlSelf->__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0][0U] 
            = vlSelf->__Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0[0U];
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram[vlSelf->__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0][1U] 
            = vlSelf->__Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0[1U];
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram[vlSelf->__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0][2U] 
            = vlSelf->__Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0[2U];
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram[vlSelf->__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0][3U] 
            = vlSelf->__Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0[3U];
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_strb 
        = ((1U == (IData)(vlSelf->SimTop__DOT__data_strb))
            ? 0xffULL : ((2U == (IData)(vlSelf->SimTop__DOT__data_strb))
                          ? 0xff00ULL : ((4U == (IData)(vlSelf->SimTop__DOT__data_strb))
                                          ? 0xff0000ULL
                                          : ((8U == (IData)(vlSelf->SimTop__DOT__data_strb))
                                              ? 0xff000000ULL
                                              : ((0x10U 
                                                  == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                  ? 0xff00000000ULL
                                                  : 
                                                 ((0x20U 
                                                   == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                   ? 0xff0000000000ULL
                                                   : 
                                                  ((0x40U 
                                                    == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                    ? 0xff000000000000ULL
                                                    : 
                                                   ((0x80U 
                                                     == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                     ? 0xff00000000000000ULL
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                      ? 0xffffULL
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                       ? 0xffff0000ULL
                                                       : 
                                                      ((0x30U 
                                                        == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                        ? 0xffff00000000ULL
                                                        : 
                                                       ((0xc0U 
                                                         == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                         ? 0xffff000000000000ULL
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                          ? 0xffffffffULL
                                                          : 
                                                         ((0xf0U 
                                                           == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                           ? 0xffffffff00000000ULL
                                                           : 
                                                          ((0xffU 
                                                            == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                            ? 0xffffffffffffffffULL
                                                            : 0ULL)))))))))))))));
    vlSelf->SimTop__DOT__data_valid = (((IData)((0U 
                                                 != 
                                                 (0xc000000U 
                                                  & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U]))) 
                                        & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid) 
                                           & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mem_allow_in))) 
                                       & ((~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)) 
                                          & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen))));
    vlSelf->SimTop__DOT__data_read = ((2U == (IData)(vlSelf->SimTop__DOT__data_size))
                                       ? ((1U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                         >> 2U)))
                                           ? (QData)((IData)(
                                                             (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                              >> 0x20U)))
                                           : (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data)))
                                       : ((1U == (IData)(vlSelf->SimTop__DOT__data_size))
                                           ? ((0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                           >> 1U))))
                                               ? (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data))))
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                               >> 1U))))
                                                   ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x10U)))))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                                >> 1U))))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x20U)))))
                                                    : (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x30U))))))))
                                           : ((0U == (IData)(vlSelf->SimTop__DOT__data_size))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data))))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 8U)))))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                     ? (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x10U)))))
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x18U)))))
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                       ? (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x20U)))))
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                        ? (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x28U)))))
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                         ? (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x30U)))))
                                                         : (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x38U))))))))))))
                                               : ((3U 
                                                   == (IData)(vlSelf->SimTop__DOT__data_size))
                                                   ? vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data
                                                   : 0ULL))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_valid_in = 1U;
    } else if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_allow_in) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_valid_in 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__preif_ready_go;
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_write_data 
        = ((2U == (IData)(vlSelf->SimTop__DOT__data_size))
            ? ((1U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                              >> 2U))) ? (((QData)((IData)(
                                                           (vlSelf->SimTop__DOT__data_write 
                                                            >> 0x20U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__mem_resp_data[0U])))
                : (((QData)((IData)(vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__data_write))))
            : ((1U == (IData)(vlSelf->SimTop__DOT__data_size))
                ? ((0U == (3U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                         >> 1U)))) ? 
                   ((0xffffffffffff0000ULL & (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                               << 0x20U) 
                                              | (0xffffffffffff0000ULL 
                                                 & (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__mem_resp_data[0U]))))) 
                    | (QData)((IData)((0xffffU & (IData)(vlSelf->SimTop__DOT__data_write)))))
                    : ((1U == (3U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                             >> 1U))))
                        ? (((QData)((IData)(vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        (((IData)(
                                                                  (vlSelf->SimTop__DOT__data_write 
                                                                   >> 0x10U)) 
                                                          << 0x10U) 
                                                         | (0xffffU 
                                                            & vlSelf->SimTop__DOT__mem_resp_data[0U])))))
                        : ((2U == (3U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                 >> 1U))))
                            ? (((QData)((IData)(((0xffff0000U 
                                                  & vlSelf->SimTop__DOT__mem_resp_data[1U]) 
                                                 | (0xffffU 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__data_write 
                                                               >> 0x20U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__mem_resp_data[0U])))
                            : (((QData)((IData)((0xffffU 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__data_write 
                                                            >> 0x30U))))) 
                                << 0x30U) | (0xffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__mem_resp_data[0U]))))))))
                : ((0U == (IData)(vlSelf->SimTop__DOT__data_size))
                    ? ((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                        ? ((0xffffffffffffff00ULL & 
                            (((QData)((IData)(vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                              << 0x20U) | (0xffffffffffffff00ULL 
                                           & (QData)((IData)(
                                                             vlSelf->SimTop__DOT__mem_resp_data[0U]))))) 
                           | (QData)((IData)((0xffU 
                                              & (IData)(vlSelf->SimTop__DOT__data_write)))))
                        : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                            ? ((0xffffffffffff0000ULL 
                                & (((QData)((IData)(
                                                    vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                    << 0x20U) | (0xffffffffffff0000ULL 
                                                 & (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__mem_resp_data[0U]))))) 
                               | (QData)((IData)(((0xff00U 
                                                   & ((IData)(
                                                              (vlSelf->SimTop__DOT__data_write 
                                                               >> 8U)) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & vlSelf->SimTop__DOT__mem_resp_data[0U])))))
                            : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                ? ((0xffffffffff000000ULL 
                                    & (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                        << 0x20U) | 
                                       (0xffffffffff000000ULL 
                                        & (QData)((IData)(
                                                          vlSelf->SimTop__DOT__mem_resp_data[0U]))))) 
                                   | (QData)((IData)(
                                                     ((0xff0000U 
                                                       & ((IData)(
                                                                  (vlSelf->SimTop__DOT__data_write 
                                                                   >> 0x10U)) 
                                                          << 0x10U)) 
                                                      | (0xffffU 
                                                         & vlSelf->SimTop__DOT__mem_resp_data[0U])))))
                                : ((3U == (7U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->SimTop__DOT__data_write 
                                                                               >> 0x18U)) 
                                                                      << 0x18U) 
                                                                     | (0xffffffU 
                                                                        & vlSelf->SimTop__DOT__mem_resp_data[0U])))))
                                    : ((4U == (7U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                        ? (((QData)((IData)(
                                                            ((0xffffff00U 
                                                              & vlSelf->SimTop__DOT__mem_resp_data[1U]) 
                                                             | (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__data_write 
                                                                           >> 0x20U)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__mem_resp_data[0U])))
                                        : ((5U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                            ? (((QData)((IData)(
                                                                (vlSelf->SimTop__DOT__mem_resp_data[1U] 
                                                                 >> 0x10U))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSelf->SimTop__DOT__data_write 
                                                                               >> 0x28U))))) 
                                                   << 0x28U) 
                                                  | (0xffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->SimTop__DOT__mem_resp_data[0U]))))))
                                            : ((6U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (vlSelf->SimTop__DOT__mem_resp_data[1U] 
                                                                     >> 0x18U))) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__data_write 
                                                                                >> 0x30U))))) 
                                                       << 0x30U) 
                                                      | (0xffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->SimTop__DOT__mem_resp_data[0U]))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__data_write 
                                                                                >> 0x38U))))) 
                                                    << 0x38U) 
                                                   | (0xffffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->SimTop__DOT__mem_resp_data[0U]))))))))))))
                    : ((3U == (IData)(vlSelf->SimTop__DOT__data_size))
                        ? vlSelf->SimTop__DOT__data_write
                        : 0ULL))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)
            ? ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)
                ? ((0x2004000ULL == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)
                    ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtimecmp
                    : ((0x200bff8ULL == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)
                        ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime
                        : 0ULL)) : 0ULL) : vlSelf->SimTop__DOT__data_read);
}

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__8(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__8\n"); );
    // Body
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_dirty 
        = ((vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty
            [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                               >> 4U)))] & (IData)(vlSelf->SimTop__DOT__data_valid)) 
           & (0U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state)));
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_hit 
        = ((((vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__tag
              [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                 >> 4U)))] == (0xfffffU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                          >> 0xcU)))) 
             & vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid
             [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                >> 4U)))]) & (IData)(vlSelf->SimTop__DOT__data_valid)) 
           & (0U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__hs_done 
        = ((IData)(vlSelf->SimTop__DOT__data_valid) 
           & (IData)(vlSelf->SimTop__DOT__data_ready));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_ready_go 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid) 
           & ((((IData)((0U == (0xc000000U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U]))) 
                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__hs_done)) 
               | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)) 
              | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__exe_allow_in 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid)) 
                 | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_ready_go) 
                    & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mem_allow_in))));
}

VL_INLINE_OPT void VSimTop___024root___combo__TOP__9(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___combo__TOP__9\n"); );
    // Body
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(
                                                    (0x4c0U 
                                                     == 
                                                     (0xe03fc0U 
                                                      & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                             ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64
                                             : ((0x17U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))
                                                 ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64
                                                 : 
                                                ((0x37U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                      << 8U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                        >> 0x18U)))
                                                  : 
                                                 ((0x6fU 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 6U)))
                                                   ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64
                                                   : 
                                                  ((IData)(
                                                           (0xec0U 
                                                            == 
                                                            (0xffffc0U 
                                                             & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                    ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op32
                                                    : 
                                                   ((IData)(
                                                            (0x19c0U 
                                                             == 
                                                             (0xe03fc0U 
                                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                     ? 
                                                    (4ULL 
                                                     + 
                                                     (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                       << 0x3aU) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                          << 0x1aU) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                            >> 6U))))
                                                     : 
                                                    ((IData)(
                                                             (0x80cc0U 
                                                              == 
                                                              (0xffffc0U 
                                                               & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                      ? 
                                                     (1ULL 
                                                      + 
                                                      ((((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                            << 8U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                              >> 0x18U))) 
                                                       + 
                                                       (~ 
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                             << 8U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                               >> 0x18U))))))
                                                      : 
                                                     ((IData)(
                                                              (0xcc0U 
                                                               == 
                                                               (0xffffc0U 
                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                       ? 
                                                      ((((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                            << 8U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                              >> 0x18U))) 
                                                       + 
                                                       (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                            << 8U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                              >> 0x18U))))
                                                       : 
                                                      ((IData)(
                                                               (0xe00cc0U 
                                                                == 
                                                                (0xffffc0U 
                                                                 & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                        ? 
                                                       ((((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                             << 8U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                               >> 0x18U))) 
                                                        & (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                                 >> 0x18U))))
                                                        : 
                                                       ((IData)(
                                                                (0xc00cc0U 
                                                                 == 
                                                                 (0xffffc0U 
                                                                  & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                         ? 
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                           << 0x28U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                              << 8U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                >> 0x18U))) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                             << 0x28U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                                << 8U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                                  >> 0x18U))))
                                                         : 
                                                        ((IData)(
                                                                 (0x800cc0U 
                                                                  == 
                                                                  (0xffffc0U 
                                                                   & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                          ? 
                                                         ((((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                 >> 0x18U))) 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                                 >> 0x18U))))
                                                          : 
                                                         ((IData)(
                                                                  (0xe004c0U 
                                                                   == 
                                                                   (0xe03fc0U 
                                                                    & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                           ? 
                                                          ((((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                             << 0x28U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                                << 8U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                  >> 0x18U))) 
                                                           & (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                               << 0x28U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                                  << 8U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                                    >> 0x18U))))
                                                           : 
                                                          ((IData)(
                                                                   (0x8004c0U 
                                                                    == 
                                                                    (0xe03fc0U 
                                                                     & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                            ? 
                                                           ((((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                              << 0x28U) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                                 << 8U) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                   >> 0x18U))) 
                                                            ^ 
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                              << 0x28U) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                                 << 8U) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                                   >> 0x18U))))
                                                            : 
                                                           ((IData)(
                                                                    (0xc004c0U 
                                                                     == 
                                                                     (0xe03fc0U 
                                                                      & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                             ? 
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                               << 0x28U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                                  << 8U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                    >> 0x18U))) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                                    << 8U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                                      >> 0x18U))))
                                                             : 
                                                            ((IData)(
                                                                     (0xa804c0U 
                                                                      == 
                                                                      (0xffbfc0U 
                                                                       & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[0U])))
                                                              : 
                                                             ((IData)(
                                                                      (0x2004c0U 
                                                                       == 
                                                                       (0xffbfc0U 
                                                                        & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                               ? 
                                                              ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                                    << 8U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                      >> 0x18U))) 
                                                               << 
                                                               (0x3fU 
                                                                & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                                   >> 0x18U)))
                                                               : 
                                                              ((IData)(
                                                                       (0xa004c0U 
                                                                        == 
                                                                        (0xffbfc0U 
                                                                         & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                ? 
                                                               ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                                  << 0x28U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                                     << 8U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                       >> 0x18U))) 
                                                                >> 
                                                                (0x3fU 
                                                                 & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                                    >> 0x18U)))
                                                                : 
                                                               ((IData)(
                                                                        (0xa00cc0U 
                                                                         == 
                                                                         (0xffffc0U 
                                                                          & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                 ? 
                                                                ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                                   << 0x28U) 
                                                                  | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                                      << 8U) 
                                                                     | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                        >> 0x18U))) 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                                     >> 0x18U)))
                                                                 : 
                                                                ((IData)(
                                                                         (0x200cc0U 
                                                                          == 
                                                                          (0xffffc0U 
                                                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                  ? 
                                                                 ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                                    << 0x28U) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                                       << 8U) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                         >> 0x18U))) 
                                                                  << 
                                                                  (0x3fU 
                                                                   & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                                      >> 0x18U)))
                                                                  : 
                                                                 ((IData)(
                                                                          (0xa80cc0U 
                                                                           == 
                                                                           (0xffffc0U 
                                                                            & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[0U])))
                                                                   : 
                                                                  ((IData)(
                                                                           (0xa006c0U 
                                                                            == 
                                                                            (0xffbfc0U 
                                                                             & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srliw_res 
                                                                                >> 0x1fU))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srliw_res)))
                                                                    : 
                                                                   ((IData)(
                                                                            (0xa806c0U 
                                                                             == 
                                                                             (0xffbfc0U 
                                                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraiw_res 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraiw_res)))
                                                                     : 
                                                                    ((IData)(
                                                                             (0x2006c0U 
                                                                              == 
                                                                              (0xffbfc0U 
                                                                               & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__slliw_res 
                                                                                >> 0x1fU))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__slliw_res)))
                                                                      : 
                                                                     ((IData)(
                                                                              (0x80ec0U 
                                                                               == 
                                                                               (0xffffc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                       ? 
                                                                      (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__subw_res 
                                                                                >> 0x1fU))))))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__subw_res)))
                                                                       : 
                                                                      ((IData)(
                                                                               (0x200ec0U 
                                                                                == 
                                                                                (0xffffc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                        ? 
                                                                       (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sllw_res 
                                                                                >> 0x1fU))))))) 
                                                                         << 0x20U) 
                                                                        | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sllw_res)))
                                                                        : 
                                                                       ((IData)(
                                                                                (0xa80ec0U 
                                                                                == 
                                                                                (0xffffc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                         ? 
                                                                        (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraw_res 
                                                                                >> 0x1fU))))))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraw_res)))
                                                                         : 
                                                                        ((IData)(
                                                                                (0xa00ec0U 
                                                                                == 
                                                                                (0xffffc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                          ? 
                                                                         (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srlw_res 
                                                                                >> 0x1fU))))))) 
                                                                           << 0x20U) 
                                                                          | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srlw_res)))
                                                                          : 
                                                                         ((IData)(
                                                                                (0x4004c0U 
                                                                                == 
                                                                                (0xe03fc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                           ? (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltop2))
                                                                           : 
                                                                          ((IData)(
                                                                                (0x6004c0U 
                                                                                == 
                                                                                (0xe03fc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                            ? (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltuop2))
                                                                            : 
                                                                           ((IData)(
                                                                                (0x600cc0U 
                                                                                == 
                                                                                (0xffffc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                             ? (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltuop2))
                                                                             : 
                                                                            ((IData)(
                                                                                (0x400cc0U 
                                                                                == 
                                                                                (0xffffc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                              ? (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltop2))
                                                                              : 
                                                                             ((IData)(
                                                                                (0x6c0U 
                                                                                == 
                                                                                (0xe03fc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                               ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op32
                                                                               : 
                                                                              ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs)
                                                                                ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata
                                                                                : 
                                                                               ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw)
                                                                                 ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata
                                                                                 : 
                                                                                ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc)
                                                                                 ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata
                                                                                 : 
                                                                                ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi)
                                                                                 ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata
                                                                                 : 
                                                                                ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci)
                                                                                 ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata
                                                                                 : 
                                                                                ((0x4000000U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U])
                                                                                 ? 
                                                                                ((((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb))) 
                                                                                & (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata 
                                                                                >> 7U)))))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata)))))) 
                                                                                | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lbu))) 
                                                                                & (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata)))))) 
                                                                                | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lh))) 
                                                                                & (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata 
                                                                                >> 0xfU)))))) 
                                                                                << 0x10U) 
                                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata))))))) 
                                                                                | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lhu))) 
                                                                                & (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata)))))) 
                                                                                | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lw))) 
                                                                                & (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata 
                                                                                >> 0x1fU))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata))))) 
                                                                                | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lwu))) 
                                                                                & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata)))) 
                                                                                | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_ld))) 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata))
                                                                                 : 0ULL)))))))))))))))))))))))))))))))))))))));
    vlSelf->SimTop__DOT__br_stall = (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                       >> 0x1aU) & 
                                      (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__hs_done))) 
                                     & ((((0U != (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)) 
                                          & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1) 
                                             == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest))) 
                                         & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs1_r_ena)) 
                                        | (((0U != 
                                             (0x1fU 
                                              & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                 >> 0x14U))) 
                                            & ((0x1fU 
                                                & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                   >> 0x14U)) 
                                               == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest))) 
                                           & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs2_r_ena))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_forward)
            ? (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1) 
                == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest))
                ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata
                : (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1) 
                    == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__MEM_wdest))
                    ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0U])))
                    : (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1) 
                        == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__WB_wdest))
                        ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
                        : 0ULL))) : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_forward)
            ? (((0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                          >> 0x14U)) == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest))
                ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata
                : (((0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                              >> 0x14U)) == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__MEM_wdest))
                    ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0U])))
                    : (((0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                  >> 0x14U)) == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__WB_wdest))
                        ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
                        : 0ULL))) : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data2);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__id_ready_go 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__br_stall)));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 = 0ULL;
    } else if ((0x10U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
            = (((- (QData)((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                  >> 0x14U))));
    } else if ((8U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value;
    } else if ((1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value;
    } else {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
            = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my)
                ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value
                : ((4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))
                    ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value
                    : ((0x20U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))
                        ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                        : ((2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))
                            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                            : 0ULL))));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
            = ((4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))
                ? (((- (QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__S_imm) 
                                              >> 0xbU))))) 
                    << 0xcU) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__S_imm)))
                : ((0x20U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))
                    ? (((QData)((IData)((- (IData)(
                                                   (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (0xfffff000U 
                                                     & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))))
                    : ((2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))
                        ? 4ULL : 0ULL)));
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__id_allow_in 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_valid)) 
                 | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__id_ready_go) 
                    & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__exe_allow_in))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_target 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jal)
            ? ((((- (QData)((IData)((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__J_imm 
                                           >> 0x14U))))) 
                 << 0x15U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__J_imm))) 
               + (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U]))))
            : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bne)
                ? ((((- (QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm) 
                                               >> 0xcU))))) 
                     << 0xdU) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm))) 
                   + (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U]))))
                : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bge)
                    ? ((((- (QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm) 
                                                   >> 0xcU))))) 
                         << 0xdU) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm))) 
                       + (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U]))))
                    : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bgeu)
                        ? ((((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm) 
                                                    >> 0xcU))))) 
                             << 0xdU) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm))) 
                           + (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U]))))
                        : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_blt)
                            ? ((((- (QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm) 
                                                        >> 0xcU))))) 
                                 << 0xdU) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm))) 
                               + (((QData)((IData)(
                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U]))))
                            : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bltu)
                                ? ((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm) 
                                                            >> 0xcU))))) 
                                     << 0xdU) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm))) 
                                   + (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U]))))
                                : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_beq)
                                    ? ((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm) 
                                                                >> 0xcU))))) 
                                         << 0xdU) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm))) 
                                       + (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U]))))
                                    : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jalr)
                                        ? (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                           + vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2)
                                        : 0ULL))))))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2 
        = (1ULL + (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                   + (~ vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_allow_in 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_valid_in)) 
                 | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_valid_in) 
                    & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__id_allow_in))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1ltuop2 
        = (1U & (((~ (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                              >> 0x3fU))) & (IData)(
                                                    (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                     >> 0x3fU))) 
                 | ((~ ((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                       >> 0x3fU)))) 
                    & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2 
                               >> 0x3fU)))));
    vlSelf->SimTop__DOT__inst_valid = ((~ (IData)(vlSelf->reset)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_allow_in));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_taken 
        = ((IData)(vlSelf->reset) ? 0U : (1U & ((((
                                                   ((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jal) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jalr)) 
                                                     | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bne) 
                                                        & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                           != vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2))) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bge) 
                                                          & (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                               == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2) 
                                                              | ((~ (IData)(
                                                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                                             >> 0x3fU))) 
                                                                 & (IData)(
                                                                           (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                                            >> 0x3fU)))) 
                                                             | ((~ 
                                                                 ((IData)(
                                                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                                           >> 0x3fU)) 
                                                                  ^ (IData)(
                                                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                                             >> 0x3fU)))) 
                                                                & (~ (IData)(
                                                                             (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2 
                                                                              >> 0x3fU)))))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bgeu) 
                                                         & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1ltuop2))))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_blt) 
                                                        & (((IData)(
                                                                    (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                                     >> 0x3fU)) 
                                                            & (~ (IData)(
                                                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                                          >> 0x3fU)))) 
                                                           | ((~ 
                                                               ((IData)(
                                                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                                         >> 0x3fU)) 
                                                                ^ (IData)(
                                                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                                           >> 0x3fU)))) 
                                                              & (IData)(
                                                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2 
                                                                         >> 0x3fU))))))) 
                                                 | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bltu) 
                                                    & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1ltuop2))) 
                                                | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_beq) 
                                                   & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                      == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__handshake_done 
        = ((IData)(vlSelf->SimTop__DOT__inst_valid) 
           & (IData)(vlSelf->SimTop__DOT__inst_ready));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[0U] 
        = (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_target);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[1U] 
        = (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_target 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[2U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__id_ready_go) 
            << 1U) | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_taken));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__preif_ready_go 
        = ((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__handshake_done)) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_valid))) 
           & (~ (IData)(vlSelf->SimTop__DOT__br_stall)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__branch_valid 
        = (IData)((3U == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[2U]));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_valid)
            ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_pc
            : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_wait)
                ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_pc
                : ((0U != ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                            << 0xdU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                        >> 0x13U)))
                    ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__new_pc
                    : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_valid)
                        ? (4ULL + vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc)
                        : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_ready)
                            ? (4ULL + vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc)
                            : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid)
                                ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_pc
                                : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__branch_valid)
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[0U])))
                                    : (4ULL + vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc))))))));
    vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_dirty 
        = (vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__dirty
           [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                              >> 4U)))] & (IData)(vlSelf->SimTop__DOT__inst_valid));
    vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_hit 
        = (((vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__tag
             [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                >> 4U)))] == (0xfffffU 
                                              & (IData)(
                                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                         >> 0xcU)))) 
            & vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__valid
            [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                               >> 4U)))]) & (IData)(vlSelf->SimTop__DOT__inst_valid));
}

void VSimTop___024root___sequent__TOP__3(VSimTop___024root* vlSelf);

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VSimTop___024root___sequent__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlSelf->clock)) & (IData)(vlSelf->__Vclklast__TOP__clock))) {
        VSimTop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VSimTop___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    VSimTop___024root___combo__TOP__6(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VSimTop___024root___sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    VSimTop___024root___combo__TOP__9(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
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
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_last 
                     & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_last");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_id 
                     & 0xf0U))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_user 
                     & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_user");}
}
#endif  // VL_DEBUG
