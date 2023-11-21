// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsext.h for the primary calling header

#include "verilated.h"

#include "Vsext___024root.h"

VL_INLINE_OPT void Vsext___024root___combo__TOP__0(Vsext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsext___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->imm_out = (((- (IData)((1U & ((IData)(vlSelf->immsrc) 
                                          >> 0xbU)))) 
                        << 0xcU) | (IData)(vlSelf->immsrc));
}

void Vsext___024root___eval(Vsext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsext___024root___eval\n"); );
    // Body
    Vsext___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vsext___024root___eval_debug_assertions(Vsext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsext___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->immsrc & 0xf000U))) {
        Verilated::overWidthError("immsrc");}
}
#endif  // VL_DEBUG
