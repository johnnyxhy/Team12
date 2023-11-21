// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vctr_unit__Syms.h"


VL_ATTR_COLD void Vctr_unit___024root__trace_init_sub__TOP__0(Vctr_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"eq", false,-1);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBus(c+4,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBus(c+6,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+7,"PCsrc", false,-1);
    tracep->declBit(c+8,"data_src", false,-1);
    tracep->pushNamePrefix("ctr_unit ");
    tracep->declBus(c+9,"IN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"eq", false,-1);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBus(c+4,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+5,"ALUsrc", false,-1);
    tracep->declBus(c+6,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+7,"PCsrc", false,-1);
    tracep->declBit(c+8,"data_src", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vctr_unit___024root__trace_init_top(Vctr_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root__trace_init_top\n"); );
    // Body
    Vctr_unit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vctr_unit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vctr_unit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vctr_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vctr_unit___024root__trace_register(Vctr_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vctr_unit___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vctr_unit___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vctr_unit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vctr_unit___024root__trace_full_sub_0(Vctr_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vctr_unit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root__trace_full_top_0\n"); );
    // Init
    Vctr_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vctr_unit___024root*>(voidSelf);
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vctr_unit___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vctr_unit___024root__trace_full_sub_0(Vctr_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vctr_unit___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->eq));
    bufp->fullIData(oldp+2,(vlSelf->instr),32);
    bufp->fullBit(oldp+3,(vlSelf->RegWrite));
    bufp->fullCData(oldp+4,(vlSelf->ALUctrl),3);
    bufp->fullBit(oldp+5,(vlSelf->ALUsrc));
    bufp->fullCData(oldp+6,(vlSelf->ImmSrc),2);
    bufp->fullBit(oldp+7,(vlSelf->PCsrc));
    bufp->fullBit(oldp+8,(vlSelf->data_src));
    bufp->fullIData(oldp+9,(0x20U),32);
}
