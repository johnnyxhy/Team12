// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_mem.h for the primary calling header

#include "verilated.h"

#include "Vdata_mem___024root.h"

VL_INLINE_OPT void Vdata_mem___024root___combo__TOP__0(Vdata_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->rd = vlSelf->data_mem__DOT__ram[(0xffU 
                                             & vlSelf->a)];
}

void Vdata_mem___024root___eval(Vdata_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval\n"); );
    // Body
    Vdata_mem___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vdata_mem___024root___eval_debug_assertions(Vdata_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
