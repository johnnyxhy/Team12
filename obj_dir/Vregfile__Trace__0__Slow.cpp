// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregfile__Syms.h"


VL_ATTR_COLD void Vregfile___024root__trace_init_sub__TOP__0(Vregfile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBus(c+34,"ad1", false,-1, 4,0);
    tracep->declBus(c+35,"ad2", false,-1, 4,0);
    tracep->declBus(c+36,"ad3", false,-1, 4,0);
    tracep->declBit(c+37,"we3", false,-1);
    tracep->declBus(c+38,"wd3", false,-1, 31,0);
    tracep->declBus(c+39,"rd1", false,-1, 31,0);
    tracep->declBus(c+40,"rd2", false,-1, 31,0);
    tracep->declBus(c+41,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+42,"Data_width", false,-1, 31,0);
    tracep->declBus(c+43,"Addr_width", false,-1, 31,0);
    tracep->declBit(c+33,"clk", false,-1);
    tracep->declBus(c+34,"ad1", false,-1, 4,0);
    tracep->declBus(c+35,"ad2", false,-1, 4,0);
    tracep->declBus(c+36,"ad3", false,-1, 4,0);
    tracep->declBit(c+37,"we3", false,-1);
    tracep->declBus(c+38,"wd3", false,-1, 31,0);
    tracep->declBus(c+39,"rd1", false,-1, 31,0);
    tracep->declBus(c+40,"rd2", false,-1, 31,0);
    tracep->declBus(c+41,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"register_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vregfile___024root__trace_init_top(Vregfile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_init_top\n"); );
    // Body
    Vregfile___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vregfile___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregfile___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregfile___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vregfile___024root__trace_register(Vregfile___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vregfile___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vregfile___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vregfile___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vregfile___024root__trace_full_sub_0(Vregfile___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vregfile___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_full_top_0\n"); );
    // Init
    Vregfile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vregfile___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vregfile___024root__trace_full_sub_0(Vregfile___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->regfile__DOT__register_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->regfile__DOT__register_array[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->regfile__DOT__register_array[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->regfile__DOT__register_array[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->regfile__DOT__register_array[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->regfile__DOT__register_array[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->regfile__DOT__register_array[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->regfile__DOT__register_array[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->regfile__DOT__register_array[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->regfile__DOT__register_array[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->regfile__DOT__register_array[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->regfile__DOT__register_array[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->regfile__DOT__register_array[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->regfile__DOT__register_array[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->regfile__DOT__register_array[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->regfile__DOT__register_array[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->regfile__DOT__register_array[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->regfile__DOT__register_array[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->regfile__DOT__register_array[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->regfile__DOT__register_array[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->regfile__DOT__register_array[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->regfile__DOT__register_array[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->regfile__DOT__register_array[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->regfile__DOT__register_array[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->regfile__DOT__register_array[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->regfile__DOT__register_array[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->regfile__DOT__register_array[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->regfile__DOT__register_array[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->regfile__DOT__register_array[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->regfile__DOT__register_array[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->regfile__DOT__register_array[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->regfile__DOT__register_array[31]),32);
    bufp->fullBit(oldp+33,(vlSelf->clk));
    bufp->fullCData(oldp+34,(vlSelf->ad1),5);
    bufp->fullCData(oldp+35,(vlSelf->ad2),5);
    bufp->fullCData(oldp+36,(vlSelf->ad3),5);
    bufp->fullBit(oldp+37,(vlSelf->we3));
    bufp->fullIData(oldp+38,(vlSelf->wd3),32);
    bufp->fullIData(oldp+39,(vlSelf->rd1),32);
    bufp->fullIData(oldp+40,(vlSelf->rd2),32);
    bufp->fullIData(oldp+41,(vlSelf->a0),32);
    bufp->fullIData(oldp+42,(0x20U),32);
    bufp->fullIData(oldp+43,(5U),32);
}
