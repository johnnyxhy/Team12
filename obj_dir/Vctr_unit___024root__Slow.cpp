// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vctr_unit.h for the primary calling header

#include "verilated.h"

#include "Vctr_unit__Syms.h"
#include "Vctr_unit___024root.h"

void Vctr_unit___024root___ctor_var_reset(Vctr_unit___024root* vlSelf);

Vctr_unit___024root::Vctr_unit___024root(Vctr_unit__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vctr_unit___024root___ctor_var_reset(this);
}

void Vctr_unit___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vctr_unit___024root::~Vctr_unit___024root() {
}
