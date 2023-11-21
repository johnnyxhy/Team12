// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinstr_mem__Syms.h"


VL_ATTR_COLD void Vinstr_mem___024root__trace_init_sub__TOP__0(Vinstr_mem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+33,"a", false,-1, 31,0);
    tracep->declBus(c+34,"rd", false,-1, 31,0);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+35,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"RAMZ", false,-1, 31,0);
    tracep->declArray(c+36,"intFile", false,-1, 71,0);
    tracep->declBus(c+33,"a", false,-1, 31,0);
    tracep->declBus(c+34,"rd", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vinstr_mem___024root__trace_init_top(Vinstr_mem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_init_top\n"); );
    // Body
    Vinstr_mem___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vinstr_mem___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vinstr_mem___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vinstr_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vinstr_mem___024root__trace_register(Vinstr_mem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vinstr_mem___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vinstr_mem___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vinstr_mem___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vinstr_mem___024root__trace_full_sub_0(Vinstr_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vinstr_mem___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_full_top_0\n"); );
    // Init
    Vinstr_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinstr_mem___024root*>(voidSelf);
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vinstr_mem___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vinstr_mem___024root__trace_full_sub_0(Vinstr_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstr_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstr_mem___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h5d3392b8__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->instr_mem__DOT__ram[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->instr_mem__DOT__ram[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->instr_mem__DOT__ram[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->instr_mem__DOT__ram[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->instr_mem__DOT__ram[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->instr_mem__DOT__ram[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->instr_mem__DOT__ram[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->instr_mem__DOT__ram[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->instr_mem__DOT__ram[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->instr_mem__DOT__ram[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->instr_mem__DOT__ram[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->instr_mem__DOT__ram[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->instr_mem__DOT__ram[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->instr_mem__DOT__ram[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->instr_mem__DOT__ram[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->instr_mem__DOT__ram[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->instr_mem__DOT__ram[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->instr_mem__DOT__ram[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->instr_mem__DOT__ram[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->instr_mem__DOT__ram[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->instr_mem__DOT__ram[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->instr_mem__DOT__ram[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->instr_mem__DOT__ram[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->instr_mem__DOT__ram[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->instr_mem__DOT__ram[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->instr_mem__DOT__ram[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->instr_mem__DOT__ram[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->instr_mem__DOT__ram[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->instr_mem__DOT__ram[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->instr_mem__DOT__ram[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->instr_mem__DOT__ram[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->instr_mem__DOT__ram[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->a),32);
    bufp->fullIData(oldp+34,(vlSelf->rd),32);
    bufp->fullIData(oldp+35,(0x20U),32);
    __Vtemp_h5d3392b8__0[0U] = 0x2e6d656dU;
    __Vtemp_h5d3392b8__0[1U] = 0x6e737472U;
    __Vtemp_h5d3392b8__0[2U] = 0x69U;
    bufp->fullWData(oldp+36,(__Vtemp_h5d3392b8__0),72);
}
