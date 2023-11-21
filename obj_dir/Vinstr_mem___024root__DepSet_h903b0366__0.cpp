// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstr_mem.h for the primary calling header

#include "verilated.h"

#include "Vinstr_mem___024root.h"

VL_INLINE_OPT void Vinstr_mem___024root___combo__TOP__0(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->rd = vlSelf->instr_mem__DOT__ram[(0x1fU 
                                              & vlSelf->a)];
}

void Vinstr_mem___024root___eval(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___eval\n"); );
    // Body
    Vinstr_mem___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vinstr_mem___024root___eval_debug_assertions(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
