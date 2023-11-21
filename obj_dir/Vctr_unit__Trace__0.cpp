// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vctr_unit__Syms.h"


void Vctr_unit___024root__trace_chg_sub_0(Vctr_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vctr_unit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root__trace_chg_top_0\n"); );
    // Init
    Vctr_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vctr_unit___024root*>(voidSelf);
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vctr_unit___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vctr_unit___024root__trace_chg_sub_0(Vctr_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->eq));
    bufp->chgIData(oldp+1,(vlSelf->instr),32);
    bufp->chgBit(oldp+2,(vlSelf->RegWrite));
    bufp->chgCData(oldp+3,(vlSelf->ALUctrl),3);
    bufp->chgBit(oldp+4,(vlSelf->ALUsrc));
    bufp->chgCData(oldp+5,(vlSelf->ImmSrc),2);
    bufp->chgBit(oldp+6,(vlSelf->PCsrc));
    bufp->chgBit(oldp+7,(vlSelf->data_src));
}

void Vctr_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root__trace_cleanup\n"); );
    // Init
    Vctr_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vctr_unit___024root*>(voidSelf);
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
