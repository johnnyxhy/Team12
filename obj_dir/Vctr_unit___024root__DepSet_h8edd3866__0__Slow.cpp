// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vctr_unit.h for the primary calling header

#include "verilated.h"

#include "Vctr_unit___024root.h"

VL_ATTR_COLD void Vctr_unit___024root___eval_initial(Vctr_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root___eval_initial\n"); );
}

void Vctr_unit___024root___combo__TOP__0(Vctr_unit___024root* vlSelf);

VL_ATTR_COLD void Vctr_unit___024root___eval_settle(Vctr_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root___eval_settle\n"); );
    // Body
    Vctr_unit___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vctr_unit___024root___final(Vctr_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root___final\n"); );
}

VL_ATTR_COLD void Vctr_unit___024root___ctor_var_reset(Vctr_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->eq = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->RegWrite = VL_RAND_RESET_I(1);
    vlSelf->ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->ImmSrc = VL_RAND_RESET_I(12);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
}
