// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vctr_unit.h for the primary calling header

#include "verilated.h"

#include "Vctr_unit___024root.h"

VL_INLINE_OPT void Vctr_unit___024root___combo__TOP__0(Vctr_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root___combo__TOP__0\n"); );
    // Body
    if ((4U == (0x1fU & (vlSelf->instr >> 2U)))) {
        vlSelf->RegWrite = 1U;
        vlSelf->ALUctrl = 0U;
        vlSelf->ALUsrc = 1U;
        vlSelf->ImmSrc = (vlSelf->instr >> 0x14U);
        vlSelf->PCsrc = 0U;
    } else if ((0x18U == (0x1fU & (vlSelf->instr >> 2U)))) {
        vlSelf->RegWrite = 0U;
        vlSelf->ALUctrl = 1U;
        vlSelf->ALUsrc = 0U;
        vlSelf->ImmSrc = ((0x800U & (vlSelf->instr 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->instr 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->instr 
                                                      >> 7U))));
        vlSelf->PCsrc = (1U & (~ (IData)(vlSelf->eq)));
    }
}

void Vctr_unit___024root___eval(Vctr_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root___eval\n"); );
    // Body
    Vctr_unit___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vctr_unit___024root___eval_debug_assertions(Vctr_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->eq & 0xfeU))) {
        Verilated::overWidthError("eq");}
}
#endif  // VL_DEBUG
