// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinstr_mem.h for the primary calling header

#include "verilated.h"

#include "Vinstr_mem___024root.h"

VL_ATTR_COLD void Vinstr_mem___024root___initial__TOP__0(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h5d3392b8__0;
    // Body
    __Vtemp_h5d3392b8__0[0U] = 0x2e6d656dU;
    __Vtemp_h5d3392b8__0[1U] = 0x6e737472U;
    __Vtemp_h5d3392b8__0[2U] = 0x69U;
    VL_READMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h5d3392b8__0)
                 ,  &(vlSelf->instr_mem__DOT__ram), 0U
                 , 0x1fU);
}

VL_ATTR_COLD void Vinstr_mem___024root___eval_initial(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___eval_initial\n"); );
    // Body
    Vinstr_mem___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vinstr_mem___024root___combo__TOP__0(Vinstr_mem___024root* vlSelf);

VL_ATTR_COLD void Vinstr_mem___024root___eval_settle(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___eval_settle\n"); );
    // Body
    Vinstr_mem___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vinstr_mem___024root___final(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___final\n"); );
}

VL_ATTR_COLD void Vinstr_mem___024root___ctor_var_reset(Vinstr_mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(32);
    vlSelf->rd = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->instr_mem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
