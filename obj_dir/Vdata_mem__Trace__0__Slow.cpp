// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdata_mem__Syms.h"


VL_ATTR_COLD void Vdata_mem___024root__trace_init_sub__TOP__0(Vdata_mem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"a", false,-1, 31,0);
    tracep->declBus(c+2,"rd", false,-1, 31,0);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBus(c+3,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4,"RAMZ", false,-1, 31,0);
    tracep->declQuad(c+5,"intFile", false,-1, 63,0);
    tracep->declBus(c+1,"a", false,-1, 31,0);
    tracep->declBus(c+2,"rd", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vdata_mem___024root__trace_init_top(Vdata_mem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_init_top\n"); );
    // Body
    Vdata_mem___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdata_mem___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdata_mem___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdata_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdata_mem___024root__trace_register(Vdata_mem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdata_mem___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdata_mem___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdata_mem___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdata_mem___024root__trace_full_sub_0(Vdata_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdata_mem___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_full_top_0\n"); );
    // Init
    Vdata_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_mem___024root*>(voidSelf);
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdata_mem___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdata_mem___024root__trace_full_sub_0(Vdata_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_mem___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->a),32);
    bufp->fullIData(oldp+2,(vlSelf->rd),32);
    bufp->fullIData(oldp+3,(0x20U),32);
    bufp->fullIData(oldp+4,(0x100U),32);
    bufp->fullQData(oldp+5,(0x646174612e6d656dULL),64);
}
