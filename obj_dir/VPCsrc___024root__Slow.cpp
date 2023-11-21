// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPCsrc.h for the primary calling header

#include "verilated.h"

#include "VPCsrc__Syms.h"
#include "VPCsrc___024root.h"

void VPCsrc___024root___ctor_var_reset(VPCsrc___024root* vlSelf);

VPCsrc___024root::VPCsrc___024root(VPCsrc__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPCsrc___024root___ctor_var_reset(this);
}

void VPCsrc___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPCsrc___024root::~VPCsrc___024root() {
}
