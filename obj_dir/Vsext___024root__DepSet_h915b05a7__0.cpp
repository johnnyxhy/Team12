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
    vlSelf->imm_out = ((0U == (IData)(vlSelf->immsrc))
                        ? (((- (IData)((vlSelf->instr 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->instr 
                                        >> 0x14U)) : 
                       ((2U == (IData)(vlSelf->immsrc))
                         ? (((- (IData)((vlSelf->instr 
                                         >> 0x1fU))) 
                             << 0xcU) | ((0x800U & 
                                          (vlSelf->instr 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlSelf->instr 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelf->instr 
                                                  >> 7U)))))
                         : (((- (IData)((vlSelf->instr 
                                         >> 0x1fU))) 
                             << 0xcU) | (vlSelf->instr 
                                         >> 0x14U))));
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
    if (VL_UNLIKELY((vlSelf->immsrc & 0xfcU))) {
        Verilated::overWidthError("immsrc");}
}
#endif  // VL_DEBUG
