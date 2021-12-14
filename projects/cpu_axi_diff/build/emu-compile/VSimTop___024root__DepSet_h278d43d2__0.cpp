// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop__Syms.h"
#include "VSimTop___024root.h"

void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ fpr_0, QData/*63:0*/ fpr_1, QData/*63:0*/ fpr_2, QData/*63:0*/ fpr_3, QData/*63:0*/ fpr_4, QData/*63:0*/ fpr_5, QData/*63:0*/ fpr_6, QData/*63:0*/ fpr_7, QData/*63:0*/ fpr_8, QData/*63:0*/ fpr_9, QData/*63:0*/ fpr_10, QData/*63:0*/ fpr_11, QData/*63:0*/ fpr_12, QData/*63:0*/ fpr_13, QData/*63:0*/ fpr_14, QData/*63:0*/ fpr_15, QData/*63:0*/ fpr_16, QData/*63:0*/ fpr_17, QData/*63:0*/ fpr_18, QData/*63:0*/ fpr_19, QData/*63:0*/ fpr_20, QData/*63:0*/ fpr_21, QData/*63:0*/ fpr_22, QData/*63:0*/ fpr_23, QData/*63:0*/ fpr_24, QData/*63:0*/ fpr_25, QData/*63:0*/ fpr_26, QData/*63:0*/ fpr_27, QData/*63:0*/ fpr_28, QData/*63:0*/ fpr_29, QData/*63:0*/ fpr_30, QData/*63:0*/ fpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchEvent_TOP____024unit(CData/*7:0*/ coreid, IData/*31:0*/ intrNo, IData/*31:0*/ cause, QData/*63:0*/ exceptionPC, QData/*63:0*/ exceptionInst);
void VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*7:0*/ special, CData/*0:0*/ skip, CData/*0:0*/ isRVC, CData/*0:0*/ scFailed, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata);
void VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ priviledgeMode, QData/*63:0*/ mstatus, QData/*63:0*/ sstatus, QData/*63:0*/ mepc, QData/*63:0*/ sepc, QData/*63:0*/ mtval, QData/*63:0*/ stval, QData/*63:0*/ mtvec, QData/*63:0*/ stvec, QData/*63:0*/ mcause, QData/*63:0*/ scause, QData/*63:0*/ satp, QData/*63:0*/ mip, QData/*63:0*/ mie, QData/*63:0*/ mscratch, QData/*63:0*/ sscratch, QData/*63:0*/ mideleg, QData/*63:0*/ medeleg);
extern const VlUnpacked<CData/*0:0*/, 256> VSimTop__ConstPool__TABLE_ha131d2a1_0;
extern const VlUnpacked<CData/*2:0*/, 256> VSimTop__ConstPool__TABLE_hc0c61d7b_0;
extern const VlUnpacked<CData/*0:0*/, 512> VSimTop__ConstPool__TABLE_h2b24d71d_0;
extern const VlUnpacked<CData/*2:0*/, 512> VSimTop__ConstPool__TABLE_hac5676e9_0;

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__3(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__3\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    SData/*8:0*/ __Vtableidx2;
    CData/*2:0*/ __Vdly__SimTop__DOT__u_ysyx_210247_axi__DOT__w_state;
    CData/*7:0*/ __Vdly__SimTop__DOT__u_ysyx_210247_axi__DOT__len;
    CData/*0:0*/ __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid;
    VlWide<13>/*402:0*/ __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs__v32;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs__v32;
    CData/*0:0*/ __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__tick;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus;
    CData/*0:0*/ __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__tick;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime;
    CData/*7:0*/ __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vtemp_h16448bb4__0;
    VlWide<17>/*543:0*/ __Vtemp_h4ce52b73__0;
    VlWide<4>/*127:0*/ __Vtemp_hf0e9266c__0;
    VlWide<4>/*127:0*/ __Vtemp_hf3183491__0;
    VlWide<5>/*159:0*/ __Vtemp_hd5096001__0;
    VlWide<5>/*159:0*/ __Vtemp_hd5096001__1;
    VlWide<5>/*159:0*/ __Vtemp_hd5096001__2;
    VlWide<5>/*159:0*/ __Vtemp_hd5096001__3;
    // Body
    __Vdly__SimTop__DOT__u_ysyx_210247_axi__DOT__w_state 
        = vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state;
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid;
    vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0 = 0U;
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__tick 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__tick;
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime;
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__tick 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__tick;
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle;
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus;
    __Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs__v32 = 0U;
    __Vdly__SimTop__DOT__u_ysyx_210247_axi__DOT__len 
        = vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__len;
    __Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[0U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[0U];
    vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[1U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[1U];
    vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[2U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[2U];
    vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[3U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[3U];
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U];
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U];
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U];
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[3U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[3U];
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[4U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[4U];
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U];
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U];
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U];
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U];
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[9U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[9U];
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU];
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU];
    __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU];
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(0U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(0U, 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [1U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [2U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [3U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [4U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [5U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [6U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [7U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [8U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [9U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0xaU], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0xbU], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0xcU], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0xdU], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0xeU], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0xfU], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x10U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x11U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x12U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x13U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x14U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x15U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x16U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x17U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x18U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x19U], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x1aU], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x1bU], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x1cU], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x1dU], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x1eU], 
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                                                              [0x1fU]);
    VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(0U, (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap), 
                                                                        (7U 
                                                                         & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap_code)), vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_pc, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cycleCnt, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__instrCnt);
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchEvent_TOP____024unit(0U, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__intrNO_diff, 0U, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_pc, (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_inst)));
    if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_valid) {
        VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_valid), vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_pc, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_inst, (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__DifftestInstrCommit__DOT__special), 
                                                                              ((((0x7bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                                                >> 6U))) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen)) 
                                                                               | (IData)(
                                                                                ((0x3000000U 
                                                                                == 
                                                                                (0x3000000U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U])) 
                                                                                & (0xb00U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                                                << 8U) 
                                                                                | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                                                >> 0x18U))))))), 0U, 0U, (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wen), vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wdest, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wdata);
    }
    VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(0U, 3U, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_diff, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__sstatus_diff, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_diff, 0ULL, 0ULL, 0ULL, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_diff, 0ULL, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mcause_diff, 0ULL, 0ULL, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mip_diff, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_diff, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mscratch_diff, 0ULL, 0ULL, 0ULL);
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready = 0U;
    } else if (vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready_en) {
        vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready 
            = vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done;
    }
    __Vtableidx1 = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__aw_hs) 
                     << 7U) | (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_hs) 
                                << 6U) | (((IData)(vlSelf->io_memAXI_0_b_valid) 
                                           << 5U) | 
                                          (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state) 
                                            << 2U) 
                                           | (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_valid) 
                                               << 1U) 
                                              | (IData)(vlSelf->reset))))));
    if (VSimTop__ConstPool__TABLE_ha131d2a1_0[__Vtableidx1]) {
        __Vdly__SimTop__DOT__u_ysyx_210247_axi__DOT__w_state 
            = VSimTop__ConstPool__TABLE_hc0c61d7b_0
            [__Vtableidx1];
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_pc = 0x7ffffffcULL;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid = 0U;
    } else {
        if (vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready_en) {
            vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready 
                = ((IData)(vlSelf->io_memAXI_0_b_valid) 
                   & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok));
        }
        if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__branch_valid) {
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_pc 
                = (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[0U])));
        }
    }
    if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__branch_valid) {
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid = 1U;
    }
    if (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__handshake_done) 
         | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_ready))) {
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid = 0U;
    }
    if (vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wen) {
        vlSelf->__Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0[0U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[0U];
        vlSelf->__Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0[1U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[1U];
        vlSelf->__Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0[2U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[2U];
        vlSelf->__Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0[3U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[3U];
        vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                >> 4U)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtimecmp = 0xaae60ULL;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__tick = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime = 0ULL;
    } else {
        if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen) {
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtimecmp 
                = vlSelf->SimTop__DOT__data_write;
        }
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__tick 
            = (1U & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__tick)));
    }
    if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__tick) {
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime 
            = (1ULL + vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime);
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mscratch = 0ULL;
    }
    if ((IData)((0x4d000U == (0x7ffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mscratch 
            = (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                           >> 6U)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mie = 0ULL;
    }
    if ((IData)((0x4c100U == (0x7ffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mie 
            = (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                           >> 6U)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_pc = 0x7ffffffcULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_wait = 0U;
    } else if ((0U != ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                        << 0xdU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                    >> 0x13U)))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_pc 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__new_pc;
    }
    if (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_valid) 
         & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__handshake_done))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_wait = 1U;
    } else if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__handshake_done) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_wait = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mtvec = 0ULL;
    }
    if ((IData)((0x4c140U == (0x7ffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mtvec 
            = (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                           >> 6U)));
    }
    if (((IData)(vlSelf->reset) | (0U != ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                           << 0xdU) 
                                          | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                             >> 0x13U))))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_valid = 0U;
    } else if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__id_allow_in) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_valid 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_valid_in;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcause = 0ULL;
    }
    if ((IData)((0x4d080U == (0x7ffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcause 
            = (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                           >> 6U)));
    }
    if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcause 
            = (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                << 0x2dU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                              << 0xdU) | ((QData)((IData)(
                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                          >> 0x13U)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mepc = 0ULL;
    }
    if ((IData)((0x4d040U == (0x7ffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mepc 
            = (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                           >> 6U)));
    }
    if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mepc 
            = (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                << 0x2dU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[9U])) 
                              << 0xdU) | ((QData)((IData)(
                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U])) 
                                          >> 0x13U)));
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__tick = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle = 0ULL;
    } else {
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__tick 
            = (1U & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__tick)));
    }
    if ((IData)((0x6c000U == (0x7ffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))) {
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle 
            = (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                           >> 6U)));
    } else if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__tick) {
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle 
            = (1ULL + vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle);
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus = 0ULL;
    }
    if ((IData)((0x4c000U == (0x7ffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))) {
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
            = ((0x8000000000000000ULL & __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus) 
               | (0x7fffffffffffffffULL & (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                                            << 0x3aU) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                                               << 0x1aU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                                 >> 6U)))));
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
            = ((0x7fffffffffffffffULL & __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus) 
               | ((QData)((IData)((1U & ((IData)((0x600000U 
                                                  == 
                                                  (0x600000U 
                                                   & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U]))) 
                                         | (IData)(
                                                   (0x180000U 
                                                    == 
                                                    (0x180000U 
                                                     & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U]))))))) 
                  << 0x3fU));
    }
    if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex) {
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
            = ((0xffffffffffffff7fULL & __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus) 
               | ((QData)((IData)((1U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
                                                 >> 3U))))) 
                  << 7U));
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
            = (0x1800ULL | __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus);
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
            = (0xfffffffffffffff7ULL & __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus);
    }
    if ((0x29aULL == (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                       << 0x2dU) | (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                                     << 0xdU) | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                                 >> 0x13U))))) {
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
            = (0x80ULL | __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus);
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
            = (0xffffffffffffe7ffULL & __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus);
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
            = ((0xfffffffffffffff7ULL & __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus) 
               | ((QData)((IData)((1U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
                                                 >> 7U))))) 
                  << 3U));
    }
    if (((IData)(vlSelf->reset) | (0U != ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                           << 0xdU) 
                                          | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                             >> 0x13U))))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_valid = 0U;
    } else {
        if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__exe_allow_in) {
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid 
                = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__id_ready_go;
        }
        if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_allow_in) {
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_valid 
                = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_valid;
        }
    }
    if (vlSelf->reset) {
        __Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs__v0 = 1U;
        vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__rw_resp = 0U;
    } else {
        if (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
             & (0U != (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))) {
            __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs__v32 
                = (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])));
            __Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs__v32 = 1U;
            __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs__v32 
                = (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U]);
        }
        if (((IData)(vlSelf->SimTop__DOT__mem_req_wen)
              ? (IData)(vlSelf->io_memAXI_0_b_valid)
              : (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done))) {
            vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__rw_resp 
                = ((IData)(vlSelf->SimTop__DOT__mem_req_wen)
                    ? (IData)(vlSelf->io_memAXI_0_b_bits_resp)
                    : (IData)(vlSelf->io_memAXI_0_r_bits_resp));
        }
    }
    if ((((IData)(vlSelf->reset) | ((IData)(vlSelf->SimTop__DOT__mem_req_wen) 
                                    & (0U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state)))) 
         | (0U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)))) {
        __Vdly__SimTop__DOT__u_ysyx_210247_axi__DOT__len = 0U;
    } else if (vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__len_incr_en) {
        __Vdly__SimTop__DOT__u_ysyx_210247_axi__DOT__len 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__len)));
    }
    __Vtableidx2 = (((IData)(vlSelf->SimTop__DOT__inst_req_valid) 
                     << 8U) | ((((IData)(vlSelf->io_memAXI_0_ar_ready) 
                                 & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state_addr)) 
                                << 7U) | (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done) 
                                           << 6U) | 
                                          (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ren) 
                                            << 5U) 
                                           | (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->SimTop__DOT__inst_req_valid) 
                                                   | (IData)(vlSelf->SimTop__DOT__mem_req_valid)) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->reset)))))));
    if (VSimTop__ConstPool__TABLE_h2b24d71d_0[__Vtableidx2]) {
        vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state 
            = VSimTop__ConstPool__TABLE_hac5676e9_0
            [__Vtableidx2];
    }
    if (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wen) {
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[0U] 
            = ((vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[0U] 
                & vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[0U]) 
               | (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
                  [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                     >> 4U)))][0U] 
                  & (~ vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[0U])));
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[1U] 
            = ((vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[1U] 
                & vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[1U]) 
               | (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
                  [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                     >> 4U)))][1U] 
                  & (~ vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[1U])));
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[2U] 
            = ((vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[2U] 
                & vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[2U]) 
               | (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
                  [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                     >> 4U)))][2U] 
                  & (~ vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[2U])));
        __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[3U] 
            = ((vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata[3U] 
                & vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[3U]) 
               | (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
                  [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                     >> 4U)))][3U] 
                  & (~ vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb[3U])));
        __Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                >> 4U)));
    }
    if (vlSelf->SimTop__DOT__data_valid) {
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[0U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
            [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                               >> 4U)))][0U];
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[1U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
            [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                               >> 4U)))][1U];
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[2U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
            [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                               >> 4U)))][2U];
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[3U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram
            [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                               >> 4U)))][3U];
    } else {
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[0U] 
            = VL_RANDOM_I();
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[1U] 
            = VL_RANDOM_I();
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[2U] 
            = VL_RANDOM_I();
        vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[3U] 
            = VL_RANDOM_I();
    }
    if (((IData)(vlSelf->reset) | (0U != vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__exc_op))) {
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U] = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U] = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[3U] = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[4U] = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U] = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U] = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[9U] = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU] = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU] = 0U;
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU] = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_allow_in) 
                & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_valid))) {
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0U];
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[1U];
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[2U];
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[3U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[3U];
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[4U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[4U];
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[5U];
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[6U];
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U];
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[8U];
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[9U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[9U];
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xaU];
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xbU];
        __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xcU];
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__tick 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__tick;
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime;
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__tick 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__tick;
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle;
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus;
    if (__Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs__v0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[1U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[2U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[3U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[4U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[5U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[6U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[7U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[8U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[9U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0xaU] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0xbU] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0xcU] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0xdU] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0xeU] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0xfU] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x10U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x11U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x12U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x13U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x14U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x15U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x16U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x17U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x18U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x19U] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x1aU] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x1bU] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x1cU] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x1dU] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x1eU] = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs__v32) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs__v32] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs__v32;
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__len 
        = __Vdly__SimTop__DOT__u_ysyx_210247_axi__DOT__len;
    if (__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0][0U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[0U];
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0][1U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[1U];
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0][2U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[2U];
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram[__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0][3U] 
            = __Vdlyvval__SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram__v0[3U];
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok = 0U;
    }
    if (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_valid) 
         & (4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state)))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_valid)))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_ready = 0U;
    }
    if (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_valid) 
         & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[2U] 
            >> 1U))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_ready = 1U;
    } else if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__exe_allow_in) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_ready = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_valid = 0U;
    }
    if (((0U != ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                  << 0xdU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                              >> 0x13U))) & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__handshake_done)))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_valid = 1U;
    } else if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__handshake_done) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_valid = 0U;
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_allow_in = 1U;
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
        [0U];
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state_addr 
        = ((1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)) 
           | (3U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)));
    if (((IData)(vlSelf->reset) | (0U != ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                           << 0xdU) 
                                          | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                             >> 0x13U))))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[1U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[2U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[3U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[4U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[5U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[6U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[8U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[9U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xaU] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xbU] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xcU] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_valid = 0U;
    } else {
        if (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mem_allow_in) 
             & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_ready_go))) {
            __Vtemp_h16448bb4__0[2U] = (IData)(((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs)
                                                 ? 
                                                ((((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                        >> 0x1cU))) 
                                                 | vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata)
                                                 : 
                                                ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                        >> 0x1cU)))
                                                  : 
                                                 ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi)
                                                   ? 
                                                  ((0xffffffffffffffe0ULL 
                                                    & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                         | ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                             << 4U) 
                                                                            | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                               >> 0x1cU)))))))
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci)
                                                    ? 
                                                   ((0xffffffffffffffe0ULL 
                                                     & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                    | (QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                          & (~ 
                                                                             ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                               << 4U) 
                                                                              | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                                >> 0x1cU))))))))
                                                    : 
                                                   ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc)
                                                     ? 
                                                    (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata 
                                                     & (~ 
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                          << 0x24U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                             << 4U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                               >> 0x1cU)))))
                                                     : 0ULL))))));
            __Vtemp_h16448bb4__0[3U] = (IData)((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs)
                                                  ? 
                                                 ((((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                         >> 0x1cU))) 
                                                  | vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata)
                                                  : 
                                                 ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                    << 0x24U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                       << 4U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                         >> 0x1cU)))
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi)
                                                    ? 
                                                   ((0xffffffffffffffe0ULL 
                                                     & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                    | (QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                          | ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                              << 4U) 
                                                                             | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                                >> 0x1cU)))))))
                                                    : 
                                                   ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci)
                                                     ? 
                                                    ((0xffffffffffffffe0ULL 
                                                      & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                     | (QData)((IData)(
                                                                       (0x1fU 
                                                                        & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                           & (~ 
                                                                              ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                                << 4U) 
                                                                               | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                                >> 0x1cU))))))))
                                                     : 
                                                    ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc)
                                                      ? 
                                                     (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata 
                                                      & (~ 
                                                         (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                           << 0x24U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                              << 4U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                                >> 0x1cU)))))
                                                      : 0ULL))))) 
                                                >> 0x20U));
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0U] 
                = (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata);
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[1U] 
                = (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata 
                           >> 0x20U));
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[2U] 
                = ((0xffffffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U]) 
                   | ((0x20U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U]) 
                      | (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U])));
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[3U] 
                = ((0x3fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U]) 
                   | ((IData)((((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                << 0x3aU) | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                >> 6U)))) 
                      << 6U));
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[4U] 
                = (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                              << 0x3aU) | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                              >> 6U)))) 
                    >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                            << 0x3aU) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                               << 0x1aU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                 >> 6U))) 
                                          >> 0x20U)) 
                                 << 6U));
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[5U] 
                = (((IData)(((((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                               << 0x3aU) | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                             << 0x1aU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                               >> 6U))) 
                             >> 0x20U)) >> 0x1aU) | 
                   (__Vtemp_h16448bb4__0[2U] << 6U));
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[6U] 
                = ((__Vtemp_h16448bb4__0[2U] >> 0x1aU) 
                   | (__Vtemp_h16448bb4__0[3U] << 6U));
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U] 
                = (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                     << 0x17U) | (0x780000U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                               >> 9U))) 
                   | ((0x40000U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                   >> 6U)) | ((0x3ffc0U 
                                               & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0xeU) 
                                                  | (0x3fc0U 
                                                     & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 0x12U)))) 
                                              | (__Vtemp_h16448bb4__0[3U] 
                                                 >> 0x1aU))));
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[8U] 
                = ((0x7ffffU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                                >> 9U)) | ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU] 
                                            << 0x17U) 
                                           | (0x780000U 
                                              & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                                                 >> 9U))));
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[9U] 
                = ((0x7ffffU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU] 
                                >> 9U)) | ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU] 
                                            << 0x17U) 
                                           | (0x780000U 
                                              & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU] 
                                                 >> 9U))));
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xaU] 
                = ((0x7ffffU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU] 
                                >> 9U)) | ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU] 
                                            << 0x17U) 
                                           | (0x780000U 
                                              & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU] 
                                                 >> 9U))));
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xbU] 
                = ((0x7ffffU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU] 
                                >> 9U)) | ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                            << 0x17U) 
                                           | (0x780000U 
                                              & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU] 
                                                 >> 9U))));
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xcU] 
                = (0x7ffffU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                               >> 9U));
        }
        if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mem_allow_in) {
            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_valid 
                = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_ready_go;
        }
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state 
        = __Vdly__SimTop__DOT__u_ysyx_210247_axi__DOT__w_state;
    vlSelf->io_memAXI_0_ar_valid = vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state_addr;
    vlSelf->io_memAXI_0_aw_valid = (1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state));
    vlSelf->io_memAXI_0_w_valid = (2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_valid = 0U;
    }
    if (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__branch_valid) 
         & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__handshake_done))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_valid = 1U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid)))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_valid = 0U;
    }
    if (((IData)(vlSelf->reset) | (0U != ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                           << 0xdU) 
                                          | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                             >> 0x13U))))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U] = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__exe_allow_in) 
                & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__id_ready_go))) {
        __Vtemp_h4ce52b73__0[9U] = ((((IData)(vlSelf->reset)
                                       ? 0U : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                                ? 1U
                                                : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                     ? 3U
                                                     : 0U)))) 
                                     << 0x1cU) | ((
                                                   ((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sh)) 
                                                     | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sb)) 
                                                    | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sw)) 
                                                   << 0x1bU) 
                                                  | (((((((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lw) 
                                                            | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lwu)) 
                                                           | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ld)) 
                                                          | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lb)) 
                                                         | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lbu)) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lh)) 
                                                       | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lhu)) 
                                                      << 0x1aU) 
                                                     | (((((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs) 
                                                             | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)) 
                                                            | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci)) 
                                                           | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi)) 
                                                          | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc)) 
                                                         << 0x19U) 
                                                        | (((((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)) 
                                                               | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci)) 
                                                              | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi)) 
                                                             | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc)) 
                                                            << 0x18U) 
                                                           | ((IData)(
                                                                      (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value 
                                                                       >> 0x20U)) 
                                                              >> 8U))))));
        __Vtemp_h4ce52b73__0[0xfU] = (((IData)(((((
                                                   ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                                                    | (- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                                                   & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                                  | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                                                     & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                 | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                                                    & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                                                   & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1))) 
                                       >> 4U) | ((IData)(
                                                         (((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                                                               | (- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                                             | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                                                                & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                            | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                                                               & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                           | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1)) 
                                                          >> 0x20U)) 
                                                 << 0x1cU));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U] 
            = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                << 6U) | ((((IData)(vlSelf->reset) ? 0U
                             : (1U & ((((0x10U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                        | (0x20U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                       | (8U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                      | (2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))))) 
                           << 5U) | ((IData)(vlSelf->reset)
                                      ? 0U : (((((0x10U 
                                                  == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                                 | (0x20U 
                                                    == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                | (8U 
                                                   == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                               | (2U 
                                                  == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)))
                                               ? (0x1fU 
                                                  & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                     >> 7U))
                                               : 0U))));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U] 
            = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                >> 0x1aU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                             << 6U));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U] 
            = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                >> 0x1aU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U] 
                             << 6U));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
            = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2) 
                << 0x18U) | ((0xe00000U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                           << 9U)) 
                             | ((0x1fc000U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                              >> 0xbU)) 
                                | ((((IData)(vlSelf->reset)
                                      ? 0U : (0x7fU 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])) 
                                    << 6U) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U] 
                                              >> 0x1aU)))));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
            = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2) 
                >> 8U) | ((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                   >> 0x20U)) << 0x18U));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
            = (((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                         >> 0x20U)) >> 8U) | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                              << 0x18U));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
            = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                >> 8U) | ((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                   >> 0x20U)) << 0x18U));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
            = (((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                         >> 0x20U)) >> 8U) | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value) 
                                              << 0x18U));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U] 
            = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value) 
                >> 8U) | ((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value 
                                   >> 0x20U)) << 0x18U));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
            = __Vtemp_h4ce52b73__0[9U];
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
            = ((((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                   ? 3U
                                                   : 0U)))) 
                >> 4U) | ((IData)(((IData)(vlSelf->reset)
                                    ? 0ULL : (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                                               | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                                               ? (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                                               : 0ULL))) 
                          << 0x1cU));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU] 
            = (((IData)(((IData)(vlSelf->reset) ? 0ULL
                          : (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                              | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                              ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                              : 0ULL))) >> 4U) | ((IData)(
                                                          (((IData)(vlSelf->reset)
                                                             ? 0ULL
                                                             : 
                                                            (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                                                              | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                                                              : 0ULL)) 
                                                           >> 0x20U)) 
                                                  << 0x1cU));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU] 
            = (((IData)((((IData)(vlSelf->reset) ? 0ULL
                           : (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                               | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                               ? (((QData)((IData)(
                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                               : 0ULL)) >> 0x20U)) 
                >> 4U) | ((IData)(((IData)(vlSelf->reset)
                                    ? 0ULL : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                               ? 0xbULL
                                               : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                   ? 0x29aULL
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                    ? 0x8000000000000007ULL
                                                    : 0ULL))))) 
                          << 0x1cU));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU] 
            = (((IData)(((IData)(vlSelf->reset) ? 0ULL
                          : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                              ? 0xbULL : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                           ? 0x29aULL
                                           : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                               ? 0x8000000000000007ULL
                                               : 0ULL))))) 
                >> 4U) | ((IData)((((IData)(vlSelf->reset)
                                     ? 0ULL : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                                ? 0xbULL
                                                : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                    ? 0x29aULL
                                                    : 
                                                   ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                     ? 0x8000000000000007ULL
                                                     : 0ULL)))) 
                                   >> 0x20U)) << 0x1cU));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
            = (((IData)((((IData)(vlSelf->reset) ? 0ULL
                           : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                               ? 0xbULL : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                            ? 0x29aULL
                                            : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                ? 0x8000000000000007ULL
                                                : 0ULL)))) 
                         >> 0x20U)) >> 4U) | ((IData)(
                                                      ((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                                                           | (- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                                                          & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                                         | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                                                            & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                        | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                                                           & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                       | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                                                          & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1))) 
                                              << 0x1cU));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
            = __Vtemp_h4ce52b73__0[0xfU];
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U] 
            = ((IData)((((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                             | (- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                            & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                           | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                              & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                          | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                             & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                         | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                            & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1)) 
                        >> 0x20U)) >> 4U);
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mem_allow_in 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_valid)) 
                 | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_valid) 
                    & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_allow_in))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__MEM_wdest 
        = (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[2U] 
                    & (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_valid)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid;
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs 
        = (IData)((0x401cc0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw 
        = (IData)((0x201cc0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc 
        = (IData)((0x601cc0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi 
        = (IData)((0xc01cc0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci 
        = (IData)((0xe01cc0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    __Vtemp_hf0e9266c__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                              >> 0x18U))));
    __Vtemp_hf0e9266c__0[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                               >> 0x18U))) 
                                        >> 0x20U));
    __Vtemp_hf0e9266c__0[2U] = (IData)((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                              >> 0x17U))))));
    __Vtemp_hf0e9266c__0[3U] = (IData)(((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                               >> 0x17U))))) 
                                        >> 0x20U));
    VL_SHIFTR_WWI(128,128,6, __Vtemp_hf3183491__0, __Vtemp_hf0e9266c__0, 
                  (0x3fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                            >> 0x18U)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[0U] 
        = __Vtemp_hf3183491__0[0U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[1U] 
        = __Vtemp_hf3183491__0[1U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[2U] 
        = __Vtemp_hf3183491__0[2U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[3U] 
        = __Vtemp_hf3183491__0[3U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srliw_res 
        = ((0x1fU >= (0x3fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                               >> 0x18U))) ? (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
                                                << 8U) 
                                               | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
                                                  >> 0x18U)) 
                                              >> (0x3fU 
                                                  & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 0x18U)))
            : 0U);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraiw_res 
        = ((((QData)((IData)((- (IData)((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
                                               >> 0x17U)))))) 
             << 0x20U) | (QData)((IData)(((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
                                           << 8U) | 
                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
                                           >> 0x18U))))) 
           >> (0x3fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                        >> 0x18U)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__slliw_res 
        = ((0x1fU >= (0x3fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                               >> 0x18U))) ? (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
                                                << 8U) 
                                               | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
                                                  >> 0x18U)) 
                                              << (0x3fU 
                                                  & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 0x18U)))
            : 0U);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sllw_res 
        = ((((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
             << 0x28U) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                           << 8U) | ((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                     >> 0x18U))) << 
           (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                     >> 0x18U)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraw_res 
        = ((((QData)((IData)((- (IData)((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
                                               >> 0x17U)))))) 
             << 0x20U) | (QData)((IData)(((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
                                           << 8U) | 
                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
                                           >> 0x18U))))) 
           >> (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                        >> 0x18U)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srlw_res 
        = ((QData)((IData)(((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
                             << 8U) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
                                       >> 0x18U)))) 
           >> (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                        >> 0x18U)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest 
        = (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U] 
                    & (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__subw_res 
        = (1ULL + ((((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                     << 0x28U) | (((QData)((IData)(
                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                   << 8U) | ((QData)((IData)(
                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                             >> 0x18U))) 
                   + (~ (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                          << 0x28U) | (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                  >> 0x18U))))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sw 
        = (IData)((0x4008c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sd 
        = (IData)((0x6008c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sh 
        = (IData)((0x2008c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sb 
        = (IData)((0x8c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lh 
        = (IData)((0x2000c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lhu 
        = (IData)((0xa000c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lwu 
        = (IData)((0xc000c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lw 
        = (IData)((0x4000c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_ld 
        = (IData)((0x6000c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb 
        = (IData)((0xc0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lbu 
        = (IData)((0x8000c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    if (((IData)(vlSelf->reset) | (0U != ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                           << 0xdU) 
                                          | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                             >> 0x13U))))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U] = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__id_allow_in) 
                & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_valid_in))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_inst;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
            = (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc);
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U] 
            = (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltop2 
        = (1U & (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                   >> 0x17U) & (~ (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
                                   >> 0x17U))) | ((~ 
                                                   ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                     ^ 
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U]) 
                                                    >> 0x17U)) 
                                                  & (IData)(
                                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__subw_res 
                                                             >> 0x3fU)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltuop2 
        = (1U & (((~ (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                      >> 0x17U)) & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
                                    >> 0x17U)) | ((~ 
                                                   ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                     ^ 
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U]) 
                                                    >> 0x17U)) 
                                                  & (IData)(
                                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__subw_res 
                                                             >> 0x3fU)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U] 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U] 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[3U] 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[3U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[4U] 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[4U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U] 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U] 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[9U] 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[9U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU] 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU] 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU] 
        = __Vdly__SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU];
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc = 0x7ffffffcULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_inst = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_allow_in) 
                & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__preif_ready_go))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc;
        VL_EXTEND_WW(129,128, __Vtemp_hd5096001__0, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp_hd5096001__1, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp_hd5096001__2, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp_hd5096001__3, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_inst 
            = ((0U == (3U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                     >> 2U)))) ? __Vtemp_hd5096001__0[0U]
                : ((1U == (3U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                         >> 2U)))) ? 
                   __Vtemp_hd5096001__1[1U] : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                            >> 2U))))
                                                ? __Vtemp_hd5096001__2[2U]
                                                : __Vtemp_hd5096001__3[3U])));
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__exc_op 
        = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
            << 0xdU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                        >> 0x13U));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_o 
        = ((IData)((0x4c100U == (0x7ffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                           >> 6U)))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mie);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_o 
        = ((IData)((0x4c140U == (0x7ffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                           >> 6U)))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mtvec);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex 
        = ((0U != ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                    << 0xdU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                >> 0x13U))) & (0x29aULL 
                                               != (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                                                    << 0x2dU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                                                       << 0xdU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                                         >> 0x13U)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__WB_wdest 
        = (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
                    & (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_valid)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen 
        = (1U & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
                  >> 5U) & (~ (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU] 
                               >> 0x12U))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall 
        = (IData)((0x73U == (0xfe00707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret 
        = (IData)((0x30200073U == (0xfff0707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__J_imm 
        = ((0x100000U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                         >> 0xbU)) | ((0xff000U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]) 
                                      | ((0x800U & 
                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                               >> 0x14U)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm 
        = ((0x1000U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                       >> 0x13U)) | ((0x800U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                << 4U)) 
                                     | ((0x7e0U & (
                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                            >> 7U)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__S_imm 
        = ((0xfe0U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                      >> 0x14U)) | (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                             >> 7U)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my 
        = (IData)((0x7bU == (0x7fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lh 
        = (IData)((0x1003U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lwu 
        = (IData)((0x6003U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ld 
        = (IData)((0x3003U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lb 
        = (IData)((3U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci 
        = (IData)((0x7073U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd 
        = (IData)((0x3023U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sh 
        = (IData)((0x1023U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sb 
        = (IData)((0x23U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sw 
        = (IData)((0x2023U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jalr 
        = (IData)((0x67U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jal 
        = (IData)((0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_beq 
        = (IData)((0x63U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bne 
        = (IData)((0x1063U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bge 
        = (IData)((0x5063U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_blt 
        = (IData)((0x4063U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_o 
            = ((0xffffffffffffe000ULL & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus) 
               | (QData)((IData)((0x1800U | ((0x700U 
                                              & ((IData)(
                                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
                                                          >> 8U)) 
                                                 << 8U)) 
                                             | ((0x80U 
                                                 & ((IData)(
                                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
                                                             >> 3U)) 
                                                    << 7U)) 
                                                | ((0x70U 
                                                    & ((IData)(
                                                               (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
                                                                >> 4U)) 
                                                       << 4U)) 
                                                   | (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus)))))))));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_o 
            = (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                << 0x2dU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[9U])) 
                              << 0xdU) | ((QData)((IData)(
                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U])) 
                                          >> 0x13U)));
    } else {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_o 
            = ((0x29aULL == (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                              << 0x2dU) | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                                            << 0xdU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                              >> 0x13U))))
                ? ((0xffffffffffffe000ULL & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus) 
                   | (QData)((IData)((0x80U | ((0x700U 
                                                & ((IData)(
                                                           (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
                                                            >> 8U)) 
                                                   << 8U)) 
                                               | ((0x70U 
                                                   & ((IData)(
                                                              (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
                                                               >> 4U)) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(
                                                                 (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
                                                                  >> 7U)) 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus)))))))))
                : ((IData)((0x4c000U == (0x7ffc0U & 
                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))
                    ? (((QData)((IData)((1U & ((IData)(
                                                       (0x600000U 
                                                        == 
                                                        (0x600000U 
                                                         & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U]))) 
                                               | (IData)(
                                                         (0x180000U 
                                                          == 
                                                          (0x180000U 
                                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U]))))))) 
                        << 0x3fU) | (0x7fffffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                              >> 6U)))))
                    : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_o 
            = ((IData)((0x4d040U == (0x7ffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))
                ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                    << 0x3aU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                               >> 6U)))
                : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mepc);
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[1U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (1U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [1U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[2U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (2U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [2U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[3U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (3U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [3U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[4U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (4U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [4U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[5U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (5U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [5U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[6U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (6U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [6U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[7U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (7U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [7U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[8U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (8U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [8U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[9U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (9U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [9U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0xaU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0xaU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0xaU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0xbU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0xbU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0xbU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0xcU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0xcU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0xcU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0xdU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0xdU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0xdU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0xeU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0xeU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0xeU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0xfU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0xfU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0xfU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x10U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x10U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x10U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x11U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x11U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x11U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x12U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x12U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x12U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x13U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x13U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x13U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x14U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x14U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x14U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x15U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x15U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x15U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x16U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x16U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x16U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x17U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x17U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x17U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x18U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x18U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x18U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x19U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x19U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x19U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x1aU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x1aU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x1aU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x1bU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x1bU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x1bU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x1cU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x1cU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x1cU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x1dU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x1dU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x1dU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x1eU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x1eU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x1eU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x1fU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x1fU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x1fU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my)
            ? 0xaU : (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                               >> 0xfU)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int 
        = (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime 
             >= vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtimecmp) 
            & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_o 
                       >> 3U))) & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_o 
                                           >> 7U)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[1U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [1U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[2U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [2U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[3U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [3U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[4U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [4U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[5U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [5U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[6U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [6U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[7U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [7U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[8U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [8U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[9U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [9U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0xaU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0xaU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0xbU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0xbU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0xcU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0xcU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0xdU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0xdU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0xeU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0xeU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0xfU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0xfU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x10U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x10U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x11U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x11U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x12U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x12U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x13U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x13U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x14U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x14U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x15U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x15U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x16U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x16U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x17U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x17U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x18U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x18U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x19U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x19U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x1aU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x1aU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x1bU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x1bU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x1cU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x1cU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x1dU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x1dU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x1eU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x1eU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x1fU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x1fU];
}
