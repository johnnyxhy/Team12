// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_mem.h for the primary calling header

#include "verilated.h"

#include "Vdata_mem___024root.h"

VL_ATTR_COLD void Vdata_mem___024root___initial__TOP__0(Vdata_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___initial__TOP__0\n"); );
    // Body
    VL_READMEM_N(true, 32, 256, 0, std::string{"data.mem"}
                 ,  &(vlSelf->data_mem__DOT__ram), 0U
                 , 0xffU);
}

VL_ATTR_COLD void Vdata_mem___024root___eval_initial(Vdata_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_initial\n"); );
    // Body
    Vdata_mem___024root___initial__TOP__0(vlSelf);
}

void Vdata_mem___024root___combo__TOP__0(Vdata_mem___024root* vlSelf);

VL_ATTR_COLD void Vdata_mem___024root___eval_settle(Vdata_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___eval_settle\n"); );
    // Body
    Vdata_mem___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vdata_mem___024root___final(Vdata_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___final\n"); );
}

VL_ATTR_COLD void Vdata_mem___024root___ctor_var_reset(Vdata_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(32);
    vlSelf->rd = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->data_mem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
}
