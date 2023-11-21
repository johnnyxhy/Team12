// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsext.h for the primary calling header

#include "verilated.h"

#include "Vsext___024root.h"

VL_ATTR_COLD void Vsext___024root___eval_initial(Vsext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsext___024root___eval_initial\n"); );
}

void Vsext___024root___combo__TOP__0(Vsext___024root* vlSelf);

VL_ATTR_COLD void Vsext___024root___eval_settle(Vsext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsext___024root___eval_settle\n"); );
    // Body
    Vsext___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vsext___024root___final(Vsext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsext___024root___final\n"); );
}

VL_ATTR_COLD void Vsext___024root___ctor_var_reset(Vsext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsext___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->immsrc = VL_RAND_RESET_I(2);
    vlSelf->imm_out = VL_RAND_RESET_I(32);
}
