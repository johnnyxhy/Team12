// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux2to1__Syms.h"


VL_ATTR_COLD void Vmux2to1___024root__trace_init_sub__TOP__0(Vmux2to1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"d0", false,-1, 31,0);
    tracep->declBus(c+2,"d1", false,-1, 31,0);
    tracep->declBit(c+3,"sel", false,-1);
    tracep->declBus(c+4,"out", false,-1, 31,0);
    tracep->pushNamePrefix("mux2to1 ");
    tracep->declBus(c+5,"Data_width", false,-1, 31,0);
    tracep->declBus(c+1,"d0", false,-1, 31,0);
    tracep->declBus(c+2,"d1", false,-1, 31,0);
    tracep->declBit(c+3,"sel", false,-1);
    tracep->declBus(c+4,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vmux2to1___024root__trace_init_top(Vmux2to1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root__trace_init_top\n"); );
    // Body
    Vmux2to1___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux2to1___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux2to1___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux2to1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux2to1___024root__trace_register(Vmux2to1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmux2to1___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmux2to1___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmux2to1___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux2to1___024root__trace_full_sub_0(Vmux2to1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux2to1___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root__trace_full_top_0\n"); );
    // Init
    Vmux2to1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2to1___024root*>(voidSelf);
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux2to1___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmux2to1___024root__trace_full_sub_0(Vmux2to1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->d0),32);
    bufp->fullIData(oldp+2,(vlSelf->d1),32);
    bufp->fullBit(oldp+3,(vlSelf->sel));
    bufp->fullIData(oldp+4,(vlSelf->out),32);
    bufp->fullIData(oldp+5,(0x20U),32);
}
