// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop__Syms.h"
#include "VSimTop___024unit.h"

void VSimTop___024unit___ctor_var_reset(VSimTop___024unit* vlSelf);

VSimTop___024unit::VSimTop___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSimTop___024unit___ctor_var_reset(this);
}

void VSimTop___024unit::__Vconfigure(VSimTop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSimTop___024unit::~VSimTop___024unit() {
}
