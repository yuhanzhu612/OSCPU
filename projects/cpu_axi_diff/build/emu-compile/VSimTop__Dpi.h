// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VSIMTOP__DPI_H_
#define VERILATED_VSIMTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at src/test/vsrc/common/ref.v:40:33
    extern long long amo_helper(char cmd, long long addr, long long wdata, char mask);
    // DPI import at src/test/vsrc/common/SimJTAG.v:3:29
    extern int jtag_tick(svBit* jtag_TCK, svBit* jtag_TMS, svBit* jtag_TDI, svBit* jtag_TRSTn, svBit jtag_TDO);
    // DPI import at src/test/vsrc/common/ref.v:17:30
    extern char pte_helper(long long satp, long long vpn, long long* pte, char* level);
    // DPI import at src/test/vsrc/common/ram.v:25:33
    extern long long ram_read_helper(svBit en, long long rIdx);
    // DPI import at src/test/vsrc/common/ram.v:17:30
    extern void ram_write_helper(long long wIdx, long long wdata, long long wmask, svBit wen);
    // DPI import at src/test/vsrc/common/difftest.v:50:3
    extern void v_difftest_ArchEvent(char coreid, int intrNo, int cause, long long exceptionPC, long long exceptionInst);
    // DPI import at src/test/vsrc/common/difftest.v:262:3
    extern void v_difftest_ArchFpRegState(char coreid, long long fpr_0, long long fpr_1, long long fpr_2, long long fpr_3, long long fpr_4, long long fpr_5, long long fpr_6, long long fpr_7, long long fpr_8, long long fpr_9, long long fpr_10, long long fpr_11, long long fpr_12, long long fpr_13, long long fpr_14, long long fpr_15, long long fpr_16, long long fpr_17, long long fpr_18, long long fpr_19, long long fpr_20, long long fpr_21, long long fpr_22, long long fpr_23, long long fpr_24, long long fpr_25, long long fpr_26, long long fpr_27, long long fpr_28, long long fpr_29, long long fpr_30, long long fpr_31);
    // DPI import at src/test/vsrc/common/difftest.v:181:3
    extern void v_difftest_ArchIntRegState(char coreid, long long gpr_0, long long gpr_1, long long gpr_2, long long gpr_3, long long gpr_4, long long gpr_5, long long gpr_6, long long gpr_7, long long gpr_8, long long gpr_9, long long gpr_10, long long gpr_11, long long gpr_12, long long gpr_13, long long gpr_14, long long gpr_15, long long gpr_16, long long gpr_17, long long gpr_18, long long gpr_19, long long gpr_20, long long gpr_21, long long gpr_22, long long gpr_23, long long gpr_24, long long gpr_25, long long gpr_26, long long gpr_27, long long gpr_28, long long gpr_29, long long gpr_30, long long gpr_31);
    // DPI import at src/test/vsrc/common/difftest.v:547:3
    extern void v_difftest_AtomicEvent(char coreid, svBit atomicResp, long long atomicAddr, long long atomicData, char atomicMask, char atomicFuop, long long atomicOut);
    // DPI import at src/test/vsrc/common/difftest.v:130:3
    extern void v_difftest_CSRState(char coreid, char priviledgeMode, long long mstatus, long long sstatus, long long mepc, long long sepc, long long mtval, long long stval, long long mtvec, long long stvec, long long mcause, long long scause, long long satp, long long mip, long long mie, long long mscratch, long long sscratch, long long mideleg, long long medeleg);
    // DPI import at src/test/vsrc/common/difftest.v:71:3
    extern void v_difftest_InstrCommit(char coreid, char index, svBit valid, long long pc, int instr, char special, svBit skip, svBit isRVC, svBit scFailed, svBit wen, char wdest, long long wdata);
    // DPI import at src/test/vsrc/common/difftest.v:524:3
    extern void v_difftest_LoadEvent(char coreid, char index, svBit valid, long long paddr, char opType, char fuType);
    // DPI import at src/test/vsrc/common/difftest.v:572:3
    extern void v_difftest_PtwEvent(char coreid, svBit ptwResp, long long ptwAddr, long long ptwData_0, long long ptwData_1, long long ptwData_2, long long ptwData_3);
    // DPI import at src/test/vsrc/common/difftest.v:597:3
    extern void v_difftest_RefillEvent(char coreid, svBit valid, long long addr, long long data_0, long long data_1, long long data_2, long long data_3, long long data_4, long long data_5, long long data_6, long long data_7);
    // DPI import at src/test/vsrc/common/difftest.v:343:3
    extern void v_difftest_SbufferEvent(char coreid, svBit sbufferResp, long long sbufferAddr, char sbufferData_0, char sbufferData_1, char sbufferData_2, char sbufferData_3, char sbufferData_4, char sbufferData_5, char sbufferData_6, char sbufferData_7, char sbufferData_8, char sbufferData_9, char sbufferData_10, char sbufferData_11, char sbufferData_12, char sbufferData_13, char sbufferData_14, char sbufferData_15, char sbufferData_16, char sbufferData_17, char sbufferData_18, char sbufferData_19, char sbufferData_20, char sbufferData_21, char sbufferData_22, char sbufferData_23, char sbufferData_24, char sbufferData_25, char sbufferData_26, char sbufferData_27, char sbufferData_28, char sbufferData_29, char sbufferData_30, char sbufferData_31, char sbufferData_32, char sbufferData_33, char sbufferData_34, char sbufferData_35, char sbufferData_36, char sbufferData_37, char sbufferData_38, char sbufferData_39, char sbufferData_40, char sbufferData_41, char sbufferData_42, char sbufferData_43, char sbufferData_44, char sbufferData_45, char sbufferData_46, char sbufferData_47, char sbufferData_48, char sbufferData_49, char sbufferData_50, char sbufferData_51, char sbufferData_52, char sbufferData_53, char sbufferData_54, char sbufferData_55, char sbufferData_56, char sbufferData_57, char sbufferData_58, char sbufferData_59, char sbufferData_60, char sbufferData_61, char sbufferData_62, char sbufferData_63, long long sbufferMask);
    // DPI import at src/test/vsrc/common/difftest.v:501:3
    extern void v_difftest_StoreEvent(char coreid, char index, svBit valid, long long storeAddr, long long storeData, char storeMask);
    // DPI import at src/test/vsrc/common/difftest.v:107:3
    extern void v_difftest_TrapEvent(char coreid, svBit valid, char code, long long pc, long long cycleCnt, long long instrCnt);
    // DPI import at src/test/vsrc/common/assert.v:17:30
    extern void xs_assert(long long line);

#ifdef __cplusplus
}
#endif

#endif  // guard
