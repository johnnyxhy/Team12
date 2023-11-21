// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsext.h for the primary calling header

#include "verilated.h"

#include "Vsext__Syms.h"
#include "Vsext___024root.h"

void Vsext___024root___ctor_var_reset(Vsext___024root* vlSelf);

Vsext___024root::Vsext___024root(Vsext__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsext___024root___ctor_var_reset(this);
}

void Vsext___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsext___024root::~Vsext___024root() {
}
