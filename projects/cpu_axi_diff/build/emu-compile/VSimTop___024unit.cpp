// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024unit.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_ram_write_helper_TOP____024unit(QData/*63:0*/ wIdx, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_ram_write_helper_TOP____024unit\n"); );
    // Body
    long long wIdx__Vcvt;
    for (size_t wIdx__Vidx = 0; wIdx__Vidx < 1; ++wIdx__Vidx) wIdx__Vcvt = wIdx;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    long long wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    svBit wen__Vcvt;
    for (size_t wen__Vidx = 0; wen__Vidx < 1; ++wen__Vidx) wen__Vcvt = wen;
    ram_write_helper(wIdx__Vcvt, wdata__Vcvt, wmask__Vcvt, wen__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ (&ram_read_helper__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_ram_read_helper_TOP____024unit\n"); );
    // Body
    svBit en__Vcvt;
    for (size_t en__Vidx = 0; en__Vidx < 1; ++en__Vidx) en__Vcvt = en;
    long long rIdx__Vcvt;
    for (size_t rIdx__Vidx = 0; rIdx__Vidx < 1; ++rIdx__Vidx) rIdx__Vcvt = rIdx;
    long long ram_read_helper__Vfuncrtn__Vcvt;
    ram_read_helper__Vfuncrtn__Vcvt = ram_read_helper(en__Vcvt, rIdx__Vcvt);
    ram_read_helper__Vfuncrtn = ram_read_helper__Vfuncrtn__Vcvt;
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_xs_assert_TOP____024unit(QData/*63:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_xs_assert_TOP____024unit\n"); );
    // Body
    long long line__Vcvt;
    for (size_t line__Vidx = 0; line__Vidx < 1; ++line__Vidx) line__Vcvt = line;
    xs_assert(line__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_v_difftest_ArchEvent_TOP____024unit(CData/*7:0*/ coreid, IData/*31:0*/ intrNo, IData/*31:0*/ cause, QData/*63:0*/ exceptionPC, QData/*63:0*/ exceptionInst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_v_difftest_ArchEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    int intrNo__Vcvt;
    for (size_t intrNo__Vidx = 0; intrNo__Vidx < 1; ++intrNo__Vidx) intrNo__Vcvt = intrNo;
    int cause__Vcvt;
    for (size_t cause__Vidx = 0; cause__Vidx < 1; ++cause__Vidx) cause__Vcvt = cause;
    long long exceptionPC__Vcvt;
    for (size_t exceptionPC__Vidx = 0; exceptionPC__Vidx < 1; ++exceptionPC__Vidx) exceptionPC__Vcvt = exceptionPC;
    long long exceptionInst__Vcvt;
    for (size_t exceptionInst__Vidx = 0; exceptionInst__Vidx < 1; ++exceptionInst__Vidx) exceptionInst__Vcvt = exceptionInst;
    v_difftest_ArchEvent(coreid__Vcvt, intrNo__Vcvt, cause__Vcvt, exceptionPC__Vcvt, exceptionInst__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*7:0*/ special, CData/*0:0*/ skip, CData/*0:0*/ isRVC, CData/*0:0*/ scFailed, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    char index__Vcvt;
    for (size_t index__Vidx = 0; index__Vidx < 1; ++index__Vidx) index__Vcvt = index;
    svBit valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int instr__Vcvt;
    for (size_t instr__Vidx = 0; instr__Vidx < 1; ++instr__Vidx) instr__Vcvt = instr;
    char special__Vcvt;
    for (size_t special__Vidx = 0; special__Vidx < 1; ++special__Vidx) special__Vcvt = special;
    svBit skip__Vcvt;
    for (size_t skip__Vidx = 0; skip__Vidx < 1; ++skip__Vidx) skip__Vcvt = skip;
    svBit isRVC__Vcvt;
    for (size_t isRVC__Vidx = 0; isRVC__Vidx < 1; ++isRVC__Vidx) isRVC__Vcvt = isRVC;
    svBit scFailed__Vcvt;
    for (size_t scFailed__Vidx = 0; scFailed__Vidx < 1; ++scFailed__Vidx) scFailed__Vcvt = scFailed;
    svBit wen__Vcvt;
    for (size_t wen__Vidx = 0; wen__Vidx < 1; ++wen__Vidx) wen__Vcvt = wen;
    char wdest__Vcvt;
    for (size_t wdest__Vidx = 0; wdest__Vidx < 1; ++wdest__Vidx) wdest__Vcvt = wdest;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    v_difftest_InstrCommit(coreid__Vcvt, index__Vcvt, valid__Vcvt, pc__Vcvt, instr__Vcvt, special__Vcvt, skip__Vcvt, isRVC__Vcvt, scFailed__Vcvt, wen__Vcvt, wdest__Vcvt, wdata__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    svBit valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    char code__Vcvt;
    for (size_t code__Vidx = 0; code__Vidx < 1; ++code__Vidx) code__Vcvt = code;
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    long long cycleCnt__Vcvt;
    for (size_t cycleCnt__Vidx = 0; cycleCnt__Vidx < 1; ++cycleCnt__Vidx) cycleCnt__Vcvt = cycleCnt;
    long long instrCnt__Vcvt;
    for (size_t instrCnt__Vidx = 0; instrCnt__Vidx < 1; ++instrCnt__Vidx) instrCnt__Vcvt = instrCnt;
    v_difftest_TrapEvent(coreid__Vcvt, valid__Vcvt, code__Vcvt, pc__Vcvt, cycleCnt__Vcvt, instrCnt__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_v_difftest_CSRState_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ priviledgeMode, QData/*63:0*/ mstatus, QData/*63:0*/ sstatus, QData/*63:0*/ mepc, QData/*63:0*/ sepc, QData/*63:0*/ mtval, QData/*63:0*/ stval, QData/*63:0*/ mtvec, QData/*63:0*/ stvec, QData/*63:0*/ mcause, QData/*63:0*/ scause, QData/*63:0*/ satp, QData/*63:0*/ mip, QData/*63:0*/ mie, QData/*63:0*/ mscratch, QData/*63:0*/ sscratch, QData/*63:0*/ mideleg, QData/*63:0*/ medeleg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_v_difftest_CSRState_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    char priviledgeMode__Vcvt;
    for (size_t priviledgeMode__Vidx = 0; priviledgeMode__Vidx < 1; ++priviledgeMode__Vidx) priviledgeMode__Vcvt = priviledgeMode;
    long long mstatus__Vcvt;
    for (size_t mstatus__Vidx = 0; mstatus__Vidx < 1; ++mstatus__Vidx) mstatus__Vcvt = mstatus;
    long long sstatus__Vcvt;
    for (size_t sstatus__Vidx = 0; sstatus__Vidx < 1; ++sstatus__Vidx) sstatus__Vcvt = sstatus;
    long long mepc__Vcvt;
    for (size_t mepc__Vidx = 0; mepc__Vidx < 1; ++mepc__Vidx) mepc__Vcvt = mepc;
    long long sepc__Vcvt;
    for (size_t sepc__Vidx = 0; sepc__Vidx < 1; ++sepc__Vidx) sepc__Vcvt = sepc;
    long long mtval__Vcvt;
    for (size_t mtval__Vidx = 0; mtval__Vidx < 1; ++mtval__Vidx) mtval__Vcvt = mtval;
    long long stval__Vcvt;
    for (size_t stval__Vidx = 0; stval__Vidx < 1; ++stval__Vidx) stval__Vcvt = stval;
    long long mtvec__Vcvt;
    for (size_t mtvec__Vidx = 0; mtvec__Vidx < 1; ++mtvec__Vidx) mtvec__Vcvt = mtvec;
    long long stvec__Vcvt;
    for (size_t stvec__Vidx = 0; stvec__Vidx < 1; ++stvec__Vidx) stvec__Vcvt = stvec;
    long long mcause__Vcvt;
    for (size_t mcause__Vidx = 0; mcause__Vidx < 1; ++mcause__Vidx) mcause__Vcvt = mcause;
    long long scause__Vcvt;
    for (size_t scause__Vidx = 0; scause__Vidx < 1; ++scause__Vidx) scause__Vcvt = scause;
    long long satp__Vcvt;
    for (size_t satp__Vidx = 0; satp__Vidx < 1; ++satp__Vidx) satp__Vcvt = satp;
    long long mip__Vcvt;
    for (size_t mip__Vidx = 0; mip__Vidx < 1; ++mip__Vidx) mip__Vcvt = mip;
    long long mie__Vcvt;
    for (size_t mie__Vidx = 0; mie__Vidx < 1; ++mie__Vidx) mie__Vcvt = mie;
    long long mscratch__Vcvt;
    for (size_t mscratch__Vidx = 0; mscratch__Vidx < 1; ++mscratch__Vidx) mscratch__Vcvt = mscratch;
    long long sscratch__Vcvt;
    for (size_t sscratch__Vidx = 0; sscratch__Vidx < 1; ++sscratch__Vidx) sscratch__Vcvt = sscratch;
    long long mideleg__Vcvt;
    for (size_t mideleg__Vidx = 0; mideleg__Vidx < 1; ++mideleg__Vidx) mideleg__Vcvt = mideleg;
    long long medeleg__Vcvt;
    for (size_t medeleg__Vidx = 0; medeleg__Vidx < 1; ++medeleg__Vidx) medeleg__Vcvt = medeleg;
    v_difftest_CSRState(coreid__Vcvt, priviledgeMode__Vcvt, mstatus__Vcvt, sstatus__Vcvt, mepc__Vcvt, sepc__Vcvt, mtval__Vcvt, stval__Vcvt, mtvec__Vcvt, stvec__Vcvt, mcause__Vcvt, scause__Vcvt, satp__Vcvt, mip__Vcvt, mie__Vcvt, mscratch__Vcvt, sscratch__Vcvt, mideleg__Vcvt, medeleg__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    long long gpr_0__Vcvt;
    for (size_t gpr_0__Vidx = 0; gpr_0__Vidx < 1; ++gpr_0__Vidx) gpr_0__Vcvt = gpr_0;
    long long gpr_1__Vcvt;
    for (size_t gpr_1__Vidx = 0; gpr_1__Vidx < 1; ++gpr_1__Vidx) gpr_1__Vcvt = gpr_1;
    long long gpr_2__Vcvt;
    for (size_t gpr_2__Vidx = 0; gpr_2__Vidx < 1; ++gpr_2__Vidx) gpr_2__Vcvt = gpr_2;
    long long gpr_3__Vcvt;
    for (size_t gpr_3__Vidx = 0; gpr_3__Vidx < 1; ++gpr_3__Vidx) gpr_3__Vcvt = gpr_3;
    long long gpr_4__Vcvt;
    for (size_t gpr_4__Vidx = 0; gpr_4__Vidx < 1; ++gpr_4__Vidx) gpr_4__Vcvt = gpr_4;
    long long gpr_5__Vcvt;
    for (size_t gpr_5__Vidx = 0; gpr_5__Vidx < 1; ++gpr_5__Vidx) gpr_5__Vcvt = gpr_5;
    long long gpr_6__Vcvt;
    for (size_t gpr_6__Vidx = 0; gpr_6__Vidx < 1; ++gpr_6__Vidx) gpr_6__Vcvt = gpr_6;
    long long gpr_7__Vcvt;
    for (size_t gpr_7__Vidx = 0; gpr_7__Vidx < 1; ++gpr_7__Vidx) gpr_7__Vcvt = gpr_7;
    long long gpr_8__Vcvt;
    for (size_t gpr_8__Vidx = 0; gpr_8__Vidx < 1; ++gpr_8__Vidx) gpr_8__Vcvt = gpr_8;
    long long gpr_9__Vcvt;
    for (size_t gpr_9__Vidx = 0; gpr_9__Vidx < 1; ++gpr_9__Vidx) gpr_9__Vcvt = gpr_9;
    long long gpr_10__Vcvt;
    for (size_t gpr_10__Vidx = 0; gpr_10__Vidx < 1; ++gpr_10__Vidx) gpr_10__Vcvt = gpr_10;
    long long gpr_11__Vcvt;
    for (size_t gpr_11__Vidx = 0; gpr_11__Vidx < 1; ++gpr_11__Vidx) gpr_11__Vcvt = gpr_11;
    long long gpr_12__Vcvt;
    for (size_t gpr_12__Vidx = 0; gpr_12__Vidx < 1; ++gpr_12__Vidx) gpr_12__Vcvt = gpr_12;
    long long gpr_13__Vcvt;
    for (size_t gpr_13__Vidx = 0; gpr_13__Vidx < 1; ++gpr_13__Vidx) gpr_13__Vcvt = gpr_13;
    long long gpr_14__Vcvt;
    for (size_t gpr_14__Vidx = 0; gpr_14__Vidx < 1; ++gpr_14__Vidx) gpr_14__Vcvt = gpr_14;
    long long gpr_15__Vcvt;
    for (size_t gpr_15__Vidx = 0; gpr_15__Vidx < 1; ++gpr_15__Vidx) gpr_15__Vcvt = gpr_15;
    long long gpr_16__Vcvt;
    for (size_t gpr_16__Vidx = 0; gpr_16__Vidx < 1; ++gpr_16__Vidx) gpr_16__Vcvt = gpr_16;
    long long gpr_17__Vcvt;
    for (size_t gpr_17__Vidx = 0; gpr_17__Vidx < 1; ++gpr_17__Vidx) gpr_17__Vcvt = gpr_17;
    long long gpr_18__Vcvt;
    for (size_t gpr_18__Vidx = 0; gpr_18__Vidx < 1; ++gpr_18__Vidx) gpr_18__Vcvt = gpr_18;
    long long gpr_19__Vcvt;
    for (size_t gpr_19__Vidx = 0; gpr_19__Vidx < 1; ++gpr_19__Vidx) gpr_19__Vcvt = gpr_19;
    long long gpr_20__Vcvt;
    for (size_t gpr_20__Vidx = 0; gpr_20__Vidx < 1; ++gpr_20__Vidx) gpr_20__Vcvt = gpr_20;
    long long gpr_21__Vcvt;
    for (size_t gpr_21__Vidx = 0; gpr_21__Vidx < 1; ++gpr_21__Vidx) gpr_21__Vcvt = gpr_21;
    long long gpr_22__Vcvt;
    for (size_t gpr_22__Vidx = 0; gpr_22__Vidx < 1; ++gpr_22__Vidx) gpr_22__Vcvt = gpr_22;
    long long gpr_23__Vcvt;
    for (size_t gpr_23__Vidx = 0; gpr_23__Vidx < 1; ++gpr_23__Vidx) gpr_23__Vcvt = gpr_23;
    long long gpr_24__Vcvt;
    for (size_t gpr_24__Vidx = 0; gpr_24__Vidx < 1; ++gpr_24__Vidx) gpr_24__Vcvt = gpr_24;
    long long gpr_25__Vcvt;
    for (size_t gpr_25__Vidx = 0; gpr_25__Vidx < 1; ++gpr_25__Vidx) gpr_25__Vcvt = gpr_25;
    long long gpr_26__Vcvt;
    for (size_t gpr_26__Vidx = 0; gpr_26__Vidx < 1; ++gpr_26__Vidx) gpr_26__Vcvt = gpr_26;
    long long gpr_27__Vcvt;
    for (size_t gpr_27__Vidx = 0; gpr_27__Vidx < 1; ++gpr_27__Vidx) gpr_27__Vcvt = gpr_27;
    long long gpr_28__Vcvt;
    for (size_t gpr_28__Vidx = 0; gpr_28__Vidx < 1; ++gpr_28__Vidx) gpr_28__Vcvt = gpr_28;
    long long gpr_29__Vcvt;
    for (size_t gpr_29__Vidx = 0; gpr_29__Vidx < 1; ++gpr_29__Vidx) gpr_29__Vcvt = gpr_29;
    long long gpr_30__Vcvt;
    for (size_t gpr_30__Vidx = 0; gpr_30__Vidx < 1; ++gpr_30__Vidx) gpr_30__Vcvt = gpr_30;
    long long gpr_31__Vcvt;
    for (size_t gpr_31__Vidx = 0; gpr_31__Vidx < 1; ++gpr_31__Vidx) gpr_31__Vcvt = gpr_31;
    v_difftest_ArchIntRegState(coreid__Vcvt, gpr_0__Vcvt, gpr_1__Vcvt, gpr_2__Vcvt, gpr_3__Vcvt, gpr_4__Vcvt, gpr_5__Vcvt, gpr_6__Vcvt, gpr_7__Vcvt, gpr_8__Vcvt, gpr_9__Vcvt, gpr_10__Vcvt, gpr_11__Vcvt, gpr_12__Vcvt, gpr_13__Vcvt, gpr_14__Vcvt, gpr_15__Vcvt, gpr_16__Vcvt, gpr_17__Vcvt, gpr_18__Vcvt, gpr_19__Vcvt, gpr_20__Vcvt, gpr_21__Vcvt, gpr_22__Vcvt, gpr_23__Vcvt, gpr_24__Vcvt, gpr_25__Vcvt, gpr_26__Vcvt, gpr_27__Vcvt, gpr_28__Vcvt, gpr_29__Vcvt, gpr_30__Vcvt, gpr_31__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ fpr_0, QData/*63:0*/ fpr_1, QData/*63:0*/ fpr_2, QData/*63:0*/ fpr_3, QData/*63:0*/ fpr_4, QData/*63:0*/ fpr_5, QData/*63:0*/ fpr_6, QData/*63:0*/ fpr_7, QData/*63:0*/ fpr_8, QData/*63:0*/ fpr_9, QData/*63:0*/ fpr_10, QData/*63:0*/ fpr_11, QData/*63:0*/ fpr_12, QData/*63:0*/ fpr_13, QData/*63:0*/ fpr_14, QData/*63:0*/ fpr_15, QData/*63:0*/ fpr_16, QData/*63:0*/ fpr_17, QData/*63:0*/ fpr_18, QData/*63:0*/ fpr_19, QData/*63:0*/ fpr_20, QData/*63:0*/ fpr_21, QData/*63:0*/ fpr_22, QData/*63:0*/ fpr_23, QData/*63:0*/ fpr_24, QData/*63:0*/ fpr_25, QData/*63:0*/ fpr_26, QData/*63:0*/ fpr_27, QData/*63:0*/ fpr_28, QData/*63:0*/ fpr_29, QData/*63:0*/ fpr_30, QData/*63:0*/ fpr_31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    long long fpr_0__Vcvt;
    for (size_t fpr_0__Vidx = 0; fpr_0__Vidx < 1; ++fpr_0__Vidx) fpr_0__Vcvt = fpr_0;
    long long fpr_1__Vcvt;
    for (size_t fpr_1__Vidx = 0; fpr_1__Vidx < 1; ++fpr_1__Vidx) fpr_1__Vcvt = fpr_1;
    long long fpr_2__Vcvt;
    for (size_t fpr_2__Vidx = 0; fpr_2__Vidx < 1; ++fpr_2__Vidx) fpr_2__Vcvt = fpr_2;
    long long fpr_3__Vcvt;
    for (size_t fpr_3__Vidx = 0; fpr_3__Vidx < 1; ++fpr_3__Vidx) fpr_3__Vcvt = fpr_3;
    long long fpr_4__Vcvt;
    for (size_t fpr_4__Vidx = 0; fpr_4__Vidx < 1; ++fpr_4__Vidx) fpr_4__Vcvt = fpr_4;
    long long fpr_5__Vcvt;
    for (size_t fpr_5__Vidx = 0; fpr_5__Vidx < 1; ++fpr_5__Vidx) fpr_5__Vcvt = fpr_5;
    long long fpr_6__Vcvt;
    for (size_t fpr_6__Vidx = 0; fpr_6__Vidx < 1; ++fpr_6__Vidx) fpr_6__Vcvt = fpr_6;
    long long fpr_7__Vcvt;
    for (size_t fpr_7__Vidx = 0; fpr_7__Vidx < 1; ++fpr_7__Vidx) fpr_7__Vcvt = fpr_7;
    long long fpr_8__Vcvt;
    for (size_t fpr_8__Vidx = 0; fpr_8__Vidx < 1; ++fpr_8__Vidx) fpr_8__Vcvt = fpr_8;
    long long fpr_9__Vcvt;
    for (size_t fpr_9__Vidx = 0; fpr_9__Vidx < 1; ++fpr_9__Vidx) fpr_9__Vcvt = fpr_9;
    long long fpr_10__Vcvt;
    for (size_t fpr_10__Vidx = 0; fpr_10__Vidx < 1; ++fpr_10__Vidx) fpr_10__Vcvt = fpr_10;
    long long fpr_11__Vcvt;
    for (size_t fpr_11__Vidx = 0; fpr_11__Vidx < 1; ++fpr_11__Vidx) fpr_11__Vcvt = fpr_11;
    long long fpr_12__Vcvt;
    for (size_t fpr_12__Vidx = 0; fpr_12__Vidx < 1; ++fpr_12__Vidx) fpr_12__Vcvt = fpr_12;
    long long fpr_13__Vcvt;
    for (size_t fpr_13__Vidx = 0; fpr_13__Vidx < 1; ++fpr_13__Vidx) fpr_13__Vcvt = fpr_13;
    long long fpr_14__Vcvt;
    for (size_t fpr_14__Vidx = 0; fpr_14__Vidx < 1; ++fpr_14__Vidx) fpr_14__Vcvt = fpr_14;
    long long fpr_15__Vcvt;
    for (size_t fpr_15__Vidx = 0; fpr_15__Vidx < 1; ++fpr_15__Vidx) fpr_15__Vcvt = fpr_15;
    long long fpr_16__Vcvt;
    for (size_t fpr_16__Vidx = 0; fpr_16__Vidx < 1; ++fpr_16__Vidx) fpr_16__Vcvt = fpr_16;
    long long fpr_17__Vcvt;
    for (size_t fpr_17__Vidx = 0; fpr_17__Vidx < 1; ++fpr_17__Vidx) fpr_17__Vcvt = fpr_17;
    long long fpr_18__Vcvt;
    for (size_t fpr_18__Vidx = 0; fpr_18__Vidx < 1; ++fpr_18__Vidx) fpr_18__Vcvt = fpr_18;
    long long fpr_19__Vcvt;
    for (size_t fpr_19__Vidx = 0; fpr_19__Vidx < 1; ++fpr_19__Vidx) fpr_19__Vcvt = fpr_19;
    long long fpr_20__Vcvt;
    for (size_t fpr_20__Vidx = 0; fpr_20__Vidx < 1; ++fpr_20__Vidx) fpr_20__Vcvt = fpr_20;
    long long fpr_21__Vcvt;
    for (size_t fpr_21__Vidx = 0; fpr_21__Vidx < 1; ++fpr_21__Vidx) fpr_21__Vcvt = fpr_21;
    long long fpr_22__Vcvt;
    for (size_t fpr_22__Vidx = 0; fpr_22__Vidx < 1; ++fpr_22__Vidx) fpr_22__Vcvt = fpr_22;
    long long fpr_23__Vcvt;
    for (size_t fpr_23__Vidx = 0; fpr_23__Vidx < 1; ++fpr_23__Vidx) fpr_23__Vcvt = fpr_23;
    long long fpr_24__Vcvt;
    for (size_t fpr_24__Vidx = 0; fpr_24__Vidx < 1; ++fpr_24__Vidx) fpr_24__Vcvt = fpr_24;
    long long fpr_25__Vcvt;
    for (size_t fpr_25__Vidx = 0; fpr_25__Vidx < 1; ++fpr_25__Vidx) fpr_25__Vcvt = fpr_25;
    long long fpr_26__Vcvt;
    for (size_t fpr_26__Vidx = 0; fpr_26__Vidx < 1; ++fpr_26__Vidx) fpr_26__Vcvt = fpr_26;
    long long fpr_27__Vcvt;
    for (size_t fpr_27__Vidx = 0; fpr_27__Vidx < 1; ++fpr_27__Vidx) fpr_27__Vcvt = fpr_27;
    long long fpr_28__Vcvt;
    for (size_t fpr_28__Vidx = 0; fpr_28__Vidx < 1; ++fpr_28__Vidx) fpr_28__Vcvt = fpr_28;
    long long fpr_29__Vcvt;
    for (size_t fpr_29__Vidx = 0; fpr_29__Vidx < 1; ++fpr_29__Vidx) fpr_29__Vcvt = fpr_29;
    long long fpr_30__Vcvt;
    for (size_t fpr_30__Vidx = 0; fpr_30__Vidx < 1; ++fpr_30__Vidx) fpr_30__Vcvt = fpr_30;
    long long fpr_31__Vcvt;
    for (size_t fpr_31__Vidx = 0; fpr_31__Vidx < 1; ++fpr_31__Vidx) fpr_31__Vcvt = fpr_31;
    v_difftest_ArchFpRegState(coreid__Vcvt, fpr_0__Vcvt, fpr_1__Vcvt, fpr_2__Vcvt, fpr_3__Vcvt, fpr_4__Vcvt, fpr_5__Vcvt, fpr_6__Vcvt, fpr_7__Vcvt, fpr_8__Vcvt, fpr_9__Vcvt, fpr_10__Vcvt, fpr_11__Vcvt, fpr_12__Vcvt, fpr_13__Vcvt, fpr_14__Vcvt, fpr_15__Vcvt, fpr_16__Vcvt, fpr_17__Vcvt, fpr_18__Vcvt, fpr_19__Vcvt, fpr_20__Vcvt, fpr_21__Vcvt, fpr_22__Vcvt, fpr_23__Vcvt, fpr_24__Vcvt, fpr_25__Vcvt, fpr_26__Vcvt, fpr_27__Vcvt, fpr_28__Vcvt, fpr_29__Vcvt, fpr_30__Vcvt, fpr_31__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_v_difftest_SbufferEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ sbufferResp, QData/*63:0*/ sbufferAddr, CData/*7:0*/ sbufferData_0, CData/*7:0*/ sbufferData_1, CData/*7:0*/ sbufferData_2, CData/*7:0*/ sbufferData_3, CData/*7:0*/ sbufferData_4, CData/*7:0*/ sbufferData_5, CData/*7:0*/ sbufferData_6, CData/*7:0*/ sbufferData_7, CData/*7:0*/ sbufferData_8, CData/*7:0*/ sbufferData_9, CData/*7:0*/ sbufferData_10, CData/*7:0*/ sbufferData_11, CData/*7:0*/ sbufferData_12, CData/*7:0*/ sbufferData_13, CData/*7:0*/ sbufferData_14, CData/*7:0*/ sbufferData_15, CData/*7:0*/ sbufferData_16, CData/*7:0*/ sbufferData_17, CData/*7:0*/ sbufferData_18, CData/*7:0*/ sbufferData_19, CData/*7:0*/ sbufferData_20, CData/*7:0*/ sbufferData_21, CData/*7:0*/ sbufferData_22, CData/*7:0*/ sbufferData_23, CData/*7:0*/ sbufferData_24, CData/*7:0*/ sbufferData_25, CData/*7:0*/ sbufferData_26, CData/*7:0*/ sbufferData_27, CData/*7:0*/ sbufferData_28, CData/*7:0*/ sbufferData_29, CData/*7:0*/ sbufferData_30, CData/*7:0*/ sbufferData_31, CData/*7:0*/ sbufferData_32, CData/*7:0*/ sbufferData_33, CData/*7:0*/ sbufferData_34, CData/*7:0*/ sbufferData_35, CData/*7:0*/ sbufferData_36, CData/*7:0*/ sbufferData_37, CData/*7:0*/ sbufferData_38, CData/*7:0*/ sbufferData_39, CData/*7:0*/ sbufferData_40, CData/*7:0*/ sbufferData_41, CData/*7:0*/ sbufferData_42, CData/*7:0*/ sbufferData_43, CData/*7:0*/ sbufferData_44, CData/*7:0*/ sbufferData_45, CData/*7:0*/ sbufferData_46, CData/*7:0*/ sbufferData_47, CData/*7:0*/ sbufferData_48, CData/*7:0*/ sbufferData_49, CData/*7:0*/ sbufferData_50, CData/*7:0*/ sbufferData_51, CData/*7:0*/ sbufferData_52, CData/*7:0*/ sbufferData_53, CData/*7:0*/ sbufferData_54, CData/*7:0*/ sbufferData_55, CData/*7:0*/ sbufferData_56, CData/*7:0*/ sbufferData_57, CData/*7:0*/ sbufferData_58, CData/*7:0*/ sbufferData_59, CData/*7:0*/ sbufferData_60, CData/*7:0*/ sbufferData_61, CData/*7:0*/ sbufferData_62, CData/*7:0*/ sbufferData_63, QData/*63:0*/ sbufferMask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_v_difftest_SbufferEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    svBit sbufferResp__Vcvt;
    for (size_t sbufferResp__Vidx = 0; sbufferResp__Vidx < 1; ++sbufferResp__Vidx) sbufferResp__Vcvt = sbufferResp;
    long long sbufferAddr__Vcvt;
    for (size_t sbufferAddr__Vidx = 0; sbufferAddr__Vidx < 1; ++sbufferAddr__Vidx) sbufferAddr__Vcvt = sbufferAddr;
    char sbufferData_0__Vcvt;
    for (size_t sbufferData_0__Vidx = 0; sbufferData_0__Vidx < 1; ++sbufferData_0__Vidx) sbufferData_0__Vcvt = sbufferData_0;
    char sbufferData_1__Vcvt;
    for (size_t sbufferData_1__Vidx = 0; sbufferData_1__Vidx < 1; ++sbufferData_1__Vidx) sbufferData_1__Vcvt = sbufferData_1;
    char sbufferData_2__Vcvt;
    for (size_t sbufferData_2__Vidx = 0; sbufferData_2__Vidx < 1; ++sbufferData_2__Vidx) sbufferData_2__Vcvt = sbufferData_2;
    char sbufferData_3__Vcvt;
    for (size_t sbufferData_3__Vidx = 0; sbufferData_3__Vidx < 1; ++sbufferData_3__Vidx) sbufferData_3__Vcvt = sbufferData_3;
    char sbufferData_4__Vcvt;
    for (size_t sbufferData_4__Vidx = 0; sbufferData_4__Vidx < 1; ++sbufferData_4__Vidx) sbufferData_4__Vcvt = sbufferData_4;
    char sbufferData_5__Vcvt;
    for (size_t sbufferData_5__Vidx = 0; sbufferData_5__Vidx < 1; ++sbufferData_5__Vidx) sbufferData_5__Vcvt = sbufferData_5;
    char sbufferData_6__Vcvt;
    for (size_t sbufferData_6__Vidx = 0; sbufferData_6__Vidx < 1; ++sbufferData_6__Vidx) sbufferData_6__Vcvt = sbufferData_6;
    char sbufferData_7__Vcvt;
    for (size_t sbufferData_7__Vidx = 0; sbufferData_7__Vidx < 1; ++sbufferData_7__Vidx) sbufferData_7__Vcvt = sbufferData_7;
    char sbufferData_8__Vcvt;
    for (size_t sbufferData_8__Vidx = 0; sbufferData_8__Vidx < 1; ++sbufferData_8__Vidx) sbufferData_8__Vcvt = sbufferData_8;
    char sbufferData_9__Vcvt;
    for (size_t sbufferData_9__Vidx = 0; sbufferData_9__Vidx < 1; ++sbufferData_9__Vidx) sbufferData_9__Vcvt = sbufferData_9;
    char sbufferData_10__Vcvt;
    for (size_t sbufferData_10__Vidx = 0; sbufferData_10__Vidx < 1; ++sbufferData_10__Vidx) sbufferData_10__Vcvt = sbufferData_10;
    char sbufferData_11__Vcvt;
    for (size_t sbufferData_11__Vidx = 0; sbufferData_11__Vidx < 1; ++sbufferData_11__Vidx) sbufferData_11__Vcvt = sbufferData_11;
    char sbufferData_12__Vcvt;
    for (size_t sbufferData_12__Vidx = 0; sbufferData_12__Vidx < 1; ++sbufferData_12__Vidx) sbufferData_12__Vcvt = sbufferData_12;
    char sbufferData_13__Vcvt;
    for (size_t sbufferData_13__Vidx = 0; sbufferData_13__Vidx < 1; ++sbufferData_13__Vidx) sbufferData_13__Vcvt = sbufferData_13;
    char sbufferData_14__Vcvt;
    for (size_t sbufferData_14__Vidx = 0; sbufferData_14__Vidx < 1; ++sbufferData_14__Vidx) sbufferData_14__Vcvt = sbufferData_14;
    char sbufferData_15__Vcvt;
    for (size_t sbufferData_15__Vidx = 0; sbufferData_15__Vidx < 1; ++sbufferData_15__Vidx) sbufferData_15__Vcvt = sbufferData_15;
    char sbufferData_16__Vcvt;
    for (size_t sbufferData_16__Vidx = 0; sbufferData_16__Vidx < 1; ++sbufferData_16__Vidx) sbufferData_16__Vcvt = sbufferData_16;
    char sbufferData_17__Vcvt;
    for (size_t sbufferData_17__Vidx = 0; sbufferData_17__Vidx < 1; ++sbufferData_17__Vidx) sbufferData_17__Vcvt = sbufferData_17;
    char sbufferData_18__Vcvt;
    for (size_t sbufferData_18__Vidx = 0; sbufferData_18__Vidx < 1; ++sbufferData_18__Vidx) sbufferData_18__Vcvt = sbufferData_18;
    char sbufferData_19__Vcvt;
    for (size_t sbufferData_19__Vidx = 0; sbufferData_19__Vidx < 1; ++sbufferData_19__Vidx) sbufferData_19__Vcvt = sbufferData_19;
    char sbufferData_20__Vcvt;
    for (size_t sbufferData_20__Vidx = 0; sbufferData_20__Vidx < 1; ++sbufferData_20__Vidx) sbufferData_20__Vcvt = sbufferData_20;
    char sbufferData_21__Vcvt;
    for (size_t sbufferData_21__Vidx = 0; sbufferData_21__Vidx < 1; ++sbufferData_21__Vidx) sbufferData_21__Vcvt = sbufferData_21;
    char sbufferData_22__Vcvt;
    for (size_t sbufferData_22__Vidx = 0; sbufferData_22__Vidx < 1; ++sbufferData_22__Vidx) sbufferData_22__Vcvt = sbufferData_22;
    char sbufferData_23__Vcvt;
    for (size_t sbufferData_23__Vidx = 0; sbufferData_23__Vidx < 1; ++sbufferData_23__Vidx) sbufferData_23__Vcvt = sbufferData_23;
    char sbufferData_24__Vcvt;
    for (size_t sbufferData_24__Vidx = 0; sbufferData_24__Vidx < 1; ++sbufferData_24__Vidx) sbufferData_24__Vcvt = sbufferData_24;
    char sbufferData_25__Vcvt;
    for (size_t sbufferData_25__Vidx = 0; sbufferData_25__Vidx < 1; ++sbufferData_25__Vidx) sbufferData_25__Vcvt = sbufferData_25;
    char sbufferData_26__Vcvt;
    for (size_t sbufferData_26__Vidx = 0; sbufferData_26__Vidx < 1; ++sbufferData_26__Vidx) sbufferData_26__Vcvt = sbufferData_26;
    char sbufferData_27__Vcvt;
    for (size_t sbufferData_27__Vidx = 0; sbufferData_27__Vidx < 1; ++sbufferData_27__Vidx) sbufferData_27__Vcvt = sbufferData_27;
    char sbufferData_28__Vcvt;
    for (size_t sbufferData_28__Vidx = 0; sbufferData_28__Vidx < 1; ++sbufferData_28__Vidx) sbufferData_28__Vcvt = sbufferData_28;
    char sbufferData_29__Vcvt;
    for (size_t sbufferData_29__Vidx = 0; sbufferData_29__Vidx < 1; ++sbufferData_29__Vidx) sbufferData_29__Vcvt = sbufferData_29;
    char sbufferData_30__Vcvt;
    for (size_t sbufferData_30__Vidx = 0; sbufferData_30__Vidx < 1; ++sbufferData_30__Vidx) sbufferData_30__Vcvt = sbufferData_30;
    char sbufferData_31__Vcvt;
    for (size_t sbufferData_31__Vidx = 0; sbufferData_31__Vidx < 1; ++sbufferData_31__Vidx) sbufferData_31__Vcvt = sbufferData_31;
    char sbufferData_32__Vcvt;
    for (size_t sbufferData_32__Vidx = 0; sbufferData_32__Vidx < 1; ++sbufferData_32__Vidx) sbufferData_32__Vcvt = sbufferData_32;
    char sbufferData_33__Vcvt;
    for (size_t sbufferData_33__Vidx = 0; sbufferData_33__Vidx < 1; ++sbufferData_33__Vidx) sbufferData_33__Vcvt = sbufferData_33;
    char sbufferData_34__Vcvt;
    for (size_t sbufferData_34__Vidx = 0; sbufferData_34__Vidx < 1; ++sbufferData_34__Vidx) sbufferData_34__Vcvt = sbufferData_34;
    char sbufferData_35__Vcvt;
    for (size_t sbufferData_35__Vidx = 0; sbufferData_35__Vidx < 1; ++sbufferData_35__Vidx) sbufferData_35__Vcvt = sbufferData_35;
    char sbufferData_36__Vcvt;
    for (size_t sbufferData_36__Vidx = 0; sbufferData_36__Vidx < 1; ++sbufferData_36__Vidx) sbufferData_36__Vcvt = sbufferData_36;
    char sbufferData_37__Vcvt;
    for (size_t sbufferData_37__Vidx = 0; sbufferData_37__Vidx < 1; ++sbufferData_37__Vidx) sbufferData_37__Vcvt = sbufferData_37;
    char sbufferData_38__Vcvt;
    for (size_t sbufferData_38__Vidx = 0; sbufferData_38__Vidx < 1; ++sbufferData_38__Vidx) sbufferData_38__Vcvt = sbufferData_38;
    char sbufferData_39__Vcvt;
    for (size_t sbufferData_39__Vidx = 0; sbufferData_39__Vidx < 1; ++sbufferData_39__Vidx) sbufferData_39__Vcvt = sbufferData_39;
    char sbufferData_40__Vcvt;
    for (size_t sbufferData_40__Vidx = 0; sbufferData_40__Vidx < 1; ++sbufferData_40__Vidx) sbufferData_40__Vcvt = sbufferData_40;
    char sbufferData_41__Vcvt;
    for (size_t sbufferData_41__Vidx = 0; sbufferData_41__Vidx < 1; ++sbufferData_41__Vidx) sbufferData_41__Vcvt = sbufferData_41;
    char sbufferData_42__Vcvt;
    for (size_t sbufferData_42__Vidx = 0; sbufferData_42__Vidx < 1; ++sbufferData_42__Vidx) sbufferData_42__Vcvt = sbufferData_42;
    char sbufferData_43__Vcvt;
    for (size_t sbufferData_43__Vidx = 0; sbufferData_43__Vidx < 1; ++sbufferData_43__Vidx) sbufferData_43__Vcvt = sbufferData_43;
    char sbufferData_44__Vcvt;
    for (size_t sbufferData_44__Vidx = 0; sbufferData_44__Vidx < 1; ++sbufferData_44__Vidx) sbufferData_44__Vcvt = sbufferData_44;
    char sbufferData_45__Vcvt;
    for (size_t sbufferData_45__Vidx = 0; sbufferData_45__Vidx < 1; ++sbufferData_45__Vidx) sbufferData_45__Vcvt = sbufferData_45;
    char sbufferData_46__Vcvt;
    for (size_t sbufferData_46__Vidx = 0; sbufferData_46__Vidx < 1; ++sbufferData_46__Vidx) sbufferData_46__Vcvt = sbufferData_46;
    char sbufferData_47__Vcvt;
    for (size_t sbufferData_47__Vidx = 0; sbufferData_47__Vidx < 1; ++sbufferData_47__Vidx) sbufferData_47__Vcvt = sbufferData_47;
    char sbufferData_48__Vcvt;
    for (size_t sbufferData_48__Vidx = 0; sbufferData_48__Vidx < 1; ++sbufferData_48__Vidx) sbufferData_48__Vcvt = sbufferData_48;
    char sbufferData_49__Vcvt;
    for (size_t sbufferData_49__Vidx = 0; sbufferData_49__Vidx < 1; ++sbufferData_49__Vidx) sbufferData_49__Vcvt = sbufferData_49;
    char sbufferData_50__Vcvt;
    for (size_t sbufferData_50__Vidx = 0; sbufferData_50__Vidx < 1; ++sbufferData_50__Vidx) sbufferData_50__Vcvt = sbufferData_50;
    char sbufferData_51__Vcvt;
    for (size_t sbufferData_51__Vidx = 0; sbufferData_51__Vidx < 1; ++sbufferData_51__Vidx) sbufferData_51__Vcvt = sbufferData_51;
    char sbufferData_52__Vcvt;
    for (size_t sbufferData_52__Vidx = 0; sbufferData_52__Vidx < 1; ++sbufferData_52__Vidx) sbufferData_52__Vcvt = sbufferData_52;
    char sbufferData_53__Vcvt;
    for (size_t sbufferData_53__Vidx = 0; sbufferData_53__Vidx < 1; ++sbufferData_53__Vidx) sbufferData_53__Vcvt = sbufferData_53;
    char sbufferData_54__Vcvt;
    for (size_t sbufferData_54__Vidx = 0; sbufferData_54__Vidx < 1; ++sbufferData_54__Vidx) sbufferData_54__Vcvt = sbufferData_54;
    char sbufferData_55__Vcvt;
    for (size_t sbufferData_55__Vidx = 0; sbufferData_55__Vidx < 1; ++sbufferData_55__Vidx) sbufferData_55__Vcvt = sbufferData_55;
    char sbufferData_56__Vcvt;
    for (size_t sbufferData_56__Vidx = 0; sbufferData_56__Vidx < 1; ++sbufferData_56__Vidx) sbufferData_56__Vcvt = sbufferData_56;
    char sbufferData_57__Vcvt;
    for (size_t sbufferData_57__Vidx = 0; sbufferData_57__Vidx < 1; ++sbufferData_57__Vidx) sbufferData_57__Vcvt = sbufferData_57;
    char sbufferData_58__Vcvt;
    for (size_t sbufferData_58__Vidx = 0; sbufferData_58__Vidx < 1; ++sbufferData_58__Vidx) sbufferData_58__Vcvt = sbufferData_58;
    char sbufferData_59__Vcvt;
    for (size_t sbufferData_59__Vidx = 0; sbufferData_59__Vidx < 1; ++sbufferData_59__Vidx) sbufferData_59__Vcvt = sbufferData_59;
    char sbufferData_60__Vcvt;
    for (size_t sbufferData_60__Vidx = 0; sbufferData_60__Vidx < 1; ++sbufferData_60__Vidx) sbufferData_60__Vcvt = sbufferData_60;
    char sbufferData_61__Vcvt;
    for (size_t sbufferData_61__Vidx = 0; sbufferData_61__Vidx < 1; ++sbufferData_61__Vidx) sbufferData_61__Vcvt = sbufferData_61;
    char sbufferData_62__Vcvt;
    for (size_t sbufferData_62__Vidx = 0; sbufferData_62__Vidx < 1; ++sbufferData_62__Vidx) sbufferData_62__Vcvt = sbufferData_62;
    char sbufferData_63__Vcvt;
    for (size_t sbufferData_63__Vidx = 0; sbufferData_63__Vidx < 1; ++sbufferData_63__Vidx) sbufferData_63__Vcvt = sbufferData_63;
    long long sbufferMask__Vcvt;
    for (size_t sbufferMask__Vidx = 0; sbufferMask__Vidx < 1; ++sbufferMask__Vidx) sbufferMask__Vcvt = sbufferMask;
    v_difftest_SbufferEvent(coreid__Vcvt, sbufferResp__Vcvt, sbufferAddr__Vcvt, sbufferData_0__Vcvt, sbufferData_1__Vcvt, sbufferData_2__Vcvt, sbufferData_3__Vcvt, sbufferData_4__Vcvt, sbufferData_5__Vcvt, sbufferData_6__Vcvt, sbufferData_7__Vcvt, sbufferData_8__Vcvt, sbufferData_9__Vcvt, sbufferData_10__Vcvt, sbufferData_11__Vcvt, sbufferData_12__Vcvt, sbufferData_13__Vcvt, sbufferData_14__Vcvt, sbufferData_15__Vcvt, sbufferData_16__Vcvt, sbufferData_17__Vcvt, sbufferData_18__Vcvt, sbufferData_19__Vcvt, sbufferData_20__Vcvt, sbufferData_21__Vcvt, sbufferData_22__Vcvt, sbufferData_23__Vcvt, sbufferData_24__Vcvt, sbufferData_25__Vcvt, sbufferData_26__Vcvt, sbufferData_27__Vcvt, sbufferData_28__Vcvt, sbufferData_29__Vcvt, sbufferData_30__Vcvt, sbufferData_31__Vcvt, sbufferData_32__Vcvt, sbufferData_33__Vcvt, sbufferData_34__Vcvt, sbufferData_35__Vcvt, sbufferData_36__Vcvt, sbufferData_37__Vcvt, sbufferData_38__Vcvt, sbufferData_39__Vcvt, sbufferData_40__Vcvt, sbufferData_41__Vcvt, sbufferData_42__Vcvt, sbufferData_43__Vcvt, sbufferData_44__Vcvt, sbufferData_45__Vcvt, sbufferData_46__Vcvt, sbufferData_47__Vcvt, sbufferData_48__Vcvt, sbufferData_49__Vcvt, sbufferData_50__Vcvt, sbufferData_51__Vcvt, sbufferData_52__Vcvt, sbufferData_53__Vcvt, sbufferData_54__Vcvt, sbufferData_55__Vcvt, sbufferData_56__Vcvt, sbufferData_57__Vcvt, sbufferData_58__Vcvt, sbufferData_59__Vcvt, sbufferData_60__Vcvt, sbufferData_61__Vcvt, sbufferData_62__Vcvt, sbufferData_63__Vcvt, sbufferMask__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ storeAddr, QData/*63:0*/ storeData, CData/*7:0*/ storeMask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    char index__Vcvt;
    for (size_t index__Vidx = 0; index__Vidx < 1; ++index__Vidx) index__Vcvt = index;
    svBit valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    long long storeAddr__Vcvt;
    for (size_t storeAddr__Vidx = 0; storeAddr__Vidx < 1; ++storeAddr__Vidx) storeAddr__Vcvt = storeAddr;
    long long storeData__Vcvt;
    for (size_t storeData__Vidx = 0; storeData__Vidx < 1; ++storeData__Vidx) storeData__Vcvt = storeData;
    char storeMask__Vcvt;
    for (size_t storeMask__Vidx = 0; storeMask__Vidx < 1; ++storeMask__Vidx) storeMask__Vcvt = storeMask;
    v_difftest_StoreEvent(coreid__Vcvt, index__Vcvt, valid__Vcvt, storeAddr__Vcvt, storeData__Vcvt, storeMask__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ paddr, CData/*7:0*/ opType, CData/*7:0*/ fuType) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    char index__Vcvt;
    for (size_t index__Vidx = 0; index__Vidx < 1; ++index__Vidx) index__Vcvt = index;
    svBit valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    long long paddr__Vcvt;
    for (size_t paddr__Vidx = 0; paddr__Vidx < 1; ++paddr__Vidx) paddr__Vcvt = paddr;
    char opType__Vcvt;
    for (size_t opType__Vidx = 0; opType__Vidx < 1; ++opType__Vidx) opType__Vcvt = opType;
    char fuType__Vcvt;
    for (size_t fuType__Vidx = 0; fuType__Vidx < 1; ++fuType__Vidx) fuType__Vcvt = fuType;
    v_difftest_LoadEvent(coreid__Vcvt, index__Vcvt, valid__Vcvt, paddr__Vcvt, opType__Vcvt, fuType__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_v_difftest_AtomicEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ atomicResp, QData/*63:0*/ atomicAddr, QData/*63:0*/ atomicData, CData/*7:0*/ atomicMask, CData/*7:0*/ atomicFuop, QData/*63:0*/ atomicOut) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_v_difftest_AtomicEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    svBit atomicResp__Vcvt;
    for (size_t atomicResp__Vidx = 0; atomicResp__Vidx < 1; ++atomicResp__Vidx) atomicResp__Vcvt = atomicResp;
    long long atomicAddr__Vcvt;
    for (size_t atomicAddr__Vidx = 0; atomicAddr__Vidx < 1; ++atomicAddr__Vidx) atomicAddr__Vcvt = atomicAddr;
    long long atomicData__Vcvt;
    for (size_t atomicData__Vidx = 0; atomicData__Vidx < 1; ++atomicData__Vidx) atomicData__Vcvt = atomicData;
    char atomicMask__Vcvt;
    for (size_t atomicMask__Vidx = 0; atomicMask__Vidx < 1; ++atomicMask__Vidx) atomicMask__Vcvt = atomicMask;
    char atomicFuop__Vcvt;
    for (size_t atomicFuop__Vidx = 0; atomicFuop__Vidx < 1; ++atomicFuop__Vidx) atomicFuop__Vcvt = atomicFuop;
    long long atomicOut__Vcvt;
    for (size_t atomicOut__Vidx = 0; atomicOut__Vidx < 1; ++atomicOut__Vidx) atomicOut__Vcvt = atomicOut;
    v_difftest_AtomicEvent(coreid__Vcvt, atomicResp__Vcvt, atomicAddr__Vcvt, atomicData__Vcvt, atomicMask__Vcvt, atomicFuop__Vcvt, atomicOut__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_v_difftest_PtwEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ ptwResp, QData/*63:0*/ ptwAddr, QData/*63:0*/ ptwData_0, QData/*63:0*/ ptwData_1, QData/*63:0*/ ptwData_2, QData/*63:0*/ ptwData_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_v_difftest_PtwEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    svBit ptwResp__Vcvt;
    for (size_t ptwResp__Vidx = 0; ptwResp__Vidx < 1; ++ptwResp__Vidx) ptwResp__Vcvt = ptwResp;
    long long ptwAddr__Vcvt;
    for (size_t ptwAddr__Vidx = 0; ptwAddr__Vidx < 1; ++ptwAddr__Vidx) ptwAddr__Vcvt = ptwAddr;
    long long ptwData_0__Vcvt;
    for (size_t ptwData_0__Vidx = 0; ptwData_0__Vidx < 1; ++ptwData_0__Vidx) ptwData_0__Vcvt = ptwData_0;
    long long ptwData_1__Vcvt;
    for (size_t ptwData_1__Vidx = 0; ptwData_1__Vidx < 1; ++ptwData_1__Vidx) ptwData_1__Vcvt = ptwData_1;
    long long ptwData_2__Vcvt;
    for (size_t ptwData_2__Vidx = 0; ptwData_2__Vidx < 1; ++ptwData_2__Vidx) ptwData_2__Vcvt = ptwData_2;
    long long ptwData_3__Vcvt;
    for (size_t ptwData_3__Vidx = 0; ptwData_3__Vidx < 1; ++ptwData_3__Vidx) ptwData_3__Vcvt = ptwData_3;
    v_difftest_PtwEvent(coreid__Vcvt, ptwResp__Vcvt, ptwAddr__Vcvt, ptwData_0__Vcvt, ptwData_1__Vcvt, ptwData_2__Vcvt, ptwData_3__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_v_difftest_RefillEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, QData/*63:0*/ addr, QData/*63:0*/ data_0, QData/*63:0*/ data_1, QData/*63:0*/ data_2, QData/*63:0*/ data_3, QData/*63:0*/ data_4, QData/*63:0*/ data_5, QData/*63:0*/ data_6, QData/*63:0*/ data_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_v_difftest_RefillEvent_TOP____024unit\n"); );
    // Body
    char coreid__Vcvt;
    for (size_t coreid__Vidx = 0; coreid__Vidx < 1; ++coreid__Vidx) coreid__Vcvt = coreid;
    svBit valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    long long addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    long long data_0__Vcvt;
    for (size_t data_0__Vidx = 0; data_0__Vidx < 1; ++data_0__Vidx) data_0__Vcvt = data_0;
    long long data_1__Vcvt;
    for (size_t data_1__Vidx = 0; data_1__Vidx < 1; ++data_1__Vidx) data_1__Vcvt = data_1;
    long long data_2__Vcvt;
    for (size_t data_2__Vidx = 0; data_2__Vidx < 1; ++data_2__Vidx) data_2__Vcvt = data_2;
    long long data_3__Vcvt;
    for (size_t data_3__Vidx = 0; data_3__Vidx < 1; ++data_3__Vidx) data_3__Vcvt = data_3;
    long long data_4__Vcvt;
    for (size_t data_4__Vidx = 0; data_4__Vidx < 1; ++data_4__Vidx) data_4__Vcvt = data_4;
    long long data_5__Vcvt;
    for (size_t data_5__Vidx = 0; data_5__Vidx < 1; ++data_5__Vidx) data_5__Vcvt = data_5;
    long long data_6__Vcvt;
    for (size_t data_6__Vidx = 0; data_6__Vidx < 1; ++data_6__Vidx) data_6__Vcvt = data_6;
    long long data_7__Vcvt;
    for (size_t data_7__Vidx = 0; data_7__Vidx < 1; ++data_7__Vidx) data_7__Vcvt = data_7;
    v_difftest_RefillEvent(coreid__Vcvt, valid__Vcvt, addr__Vcvt, data_0__Vcvt, data_1__Vcvt, data_2__Vcvt, data_3__Vcvt, data_4__Vcvt, data_5__Vcvt, data_6__Vcvt, data_7__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_jtag_tick_TOP____024unit(CData/*0:0*/ (&jtag_TCK), CData/*0:0*/ (&jtag_TMS), CData/*0:0*/ (&jtag_TDI), CData/*0:0*/ (&jtag_TRSTn), CData/*0:0*/ jtag_TDO, IData/*31:0*/ (&jtag_tick__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_jtag_tick_TOP____024unit\n"); );
    // Body
    svBit jtag_TCK__Vcvt;
    svBit jtag_TMS__Vcvt;
    svBit jtag_TDI__Vcvt;
    svBit jtag_TRSTn__Vcvt;
    svBit jtag_TDO__Vcvt;
    for (size_t jtag_TDO__Vidx = 0; jtag_TDO__Vidx < 1; ++jtag_TDO__Vidx) jtag_TDO__Vcvt = jtag_TDO;
    int jtag_tick__Vfuncrtn__Vcvt;
    jtag_tick__Vfuncrtn__Vcvt = jtag_tick(&jtag_TCK__Vcvt, &jtag_TMS__Vcvt, &jtag_TDI__Vcvt, &jtag_TRSTn__Vcvt, jtag_TDO__Vcvt);
    jtag_TCK = (1U & jtag_TCK__Vcvt);
    jtag_TMS = (1U & jtag_TMS__Vcvt);
    jtag_TDI = (1U & jtag_TDI__Vcvt);
    jtag_TRSTn = (1U & jtag_TRSTn__Vcvt);
    jtag_tick__Vfuncrtn = jtag_tick__Vfuncrtn__Vcvt;
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_pte_helper_TOP____024unit(QData/*63:0*/ satp, QData/*63:0*/ vpn, QData/*63:0*/ (&pte), CData/*7:0*/ (&level), CData/*7:0*/ (&pte_helper__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_pte_helper_TOP____024unit\n"); );
    // Body
    long long satp__Vcvt;
    for (size_t satp__Vidx = 0; satp__Vidx < 1; ++satp__Vidx) satp__Vcvt = satp;
    long long vpn__Vcvt;
    for (size_t vpn__Vidx = 0; vpn__Vidx < 1; ++vpn__Vidx) vpn__Vcvt = vpn;
    long long pte__Vcvt;
    char level__Vcvt;
    char pte_helper__Vfuncrtn__Vcvt;
    pte_helper__Vfuncrtn__Vcvt = pte_helper(satp__Vcvt, vpn__Vcvt, &pte__Vcvt, &level__Vcvt);
    pte = pte__Vcvt;
    level = (0xffU & level__Vcvt);
    pte_helper__Vfuncrtn = (0xffU & pte_helper__Vfuncrtn__Vcvt);
}

VL_INLINE_OPT void VSimTop___024unit::__Vdpiimwrap_amo_helper_TOP____024unit(CData/*7:0*/ cmd, QData/*63:0*/ addr, QData/*63:0*/ wdata, CData/*7:0*/ mask, QData/*63:0*/ (&amo_helper__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimTop___024unit::__Vdpiimwrap_amo_helper_TOP____024unit\n"); );
    // Body
    char cmd__Vcvt;
    for (size_t cmd__Vidx = 0; cmd__Vidx < 1; ++cmd__Vidx) cmd__Vcvt = cmd;
    long long addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char mask__Vcvt;
    for (size_t mask__Vidx = 0; mask__Vidx < 1; ++mask__Vidx) mask__Vcvt = mask;
    long long amo_helper__Vfuncrtn__Vcvt;
    amo_helper__Vfuncrtn__Vcvt = amo_helper(cmd__Vcvt, addr__Vcvt, wdata__Vcvt, mask__Vcvt);
    amo_helper__Vfuncrtn = amo_helper__Vfuncrtn__Vcvt;
}
