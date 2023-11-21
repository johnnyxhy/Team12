// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___combo__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___combo__TOP__0\n"); );
    // Body
    if ((0U == (IData)(vlSelf->aluctrl))) {
        vlSelf->aluout = (vlSelf->aluop1 + vlSelf->aluop2);
    } else if ((1U != (IData)(vlSelf->aluctrl))) {
        vlSelf->aluout = 0U;
    }
    if ((0U != (IData)(vlSelf->aluctrl))) {
        vlSelf->eq = ((1U == (IData)(vlSelf->aluctrl)) 
                      & (vlSelf->aluop1 == vlSelf->aluop2));
    }
}

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Body
    Valu___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->aluctrl & 0xf8U))) {
        Verilated::overWidthError("aluctrl");}
}
#endif  // VL_DEBUG
