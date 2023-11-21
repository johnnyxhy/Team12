// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPCsrc.h for the primary calling header

#include "verilated.h"

#include "VPCsrc___024root.h"

VL_ATTR_COLD void VPCsrc___024root___eval_initial(VPCsrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCsrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCsrc___024root___eval_initial\n"); );
}

void VPCsrc___024root___combo__TOP__0(VPCsrc___024root* vlSelf);

VL_ATTR_COLD void VPCsrc___024root___eval_settle(VPCsrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCsrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCsrc___024root___eval_settle\n"); );
    // Body
    VPCsrc___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VPCsrc___024root___final(VPCsrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCsrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCsrc___024root___final\n"); );
}

VL_ATTR_COLD void VPCsrc___024root___ctor_var_reset(VPCsrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCsrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCsrc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->branch_PC = VL_RAND_RESET_I(32);
    vlSelf->inc_PC = VL_RAND_RESET_I(32);
    vlSelf->sel = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(32);
}
