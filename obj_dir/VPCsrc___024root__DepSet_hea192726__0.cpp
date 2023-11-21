// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPCsrc.h for the primary calling header

#include "verilated.h"

#include "VPCsrc___024root.h"

VL_INLINE_OPT void VPCsrc___024root___combo__TOP__0(VPCsrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCsrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCsrc___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->out = ((IData)(vlSelf->sel) ? vlSelf->branch_PC
                    : vlSelf->inc_PC);
}

void VPCsrc___024root___eval(VPCsrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCsrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCsrc___024root___eval\n"); );
    // Body
    VPCsrc___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VPCsrc___024root___eval_debug_assertions(VPCsrc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPCsrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPCsrc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->sel & 0xfeU))) {
        Verilated::overWidthError("sel");}
}
#endif  // VL_DEBUG
