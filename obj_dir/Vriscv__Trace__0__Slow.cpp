// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv__Syms.h"


VL_ATTR_COLD void Vriscv___024root__trace_init_sub__TOP__0(Vriscv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBit(c+88,"rst", false,-1);
    tracep->declBus(c+89,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("riscv ");
    tracep->declBus(c+90,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBit(c+88,"rst", false,-1);
    tracep->declBus(c+89,"a0", false,-1, 31,0);
    tracep->declBus(c+33,"pc", false,-1, 31,0);
    tracep->declBus(c+34,"next_pc", false,-1, 31,0);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->declBit(c+36,"RegWrite", false,-1);
    tracep->declBus(c+37,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+38,"ALUsrc", false,-1);
    tracep->declBus(c+39,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+40,"PCsrc", false,-1);
    tracep->declBit(c+41,"data_src", false,-1);
    tracep->declBus(c+42,"data_in", false,-1, 31,0);
    tracep->declBus(c+43,"data_out", false,-1, 31,0);
    tracep->declBus(c+44,"immop", false,-1, 31,0);
    tracep->declBus(c+45,"aluop1", false,-1, 31,0);
    tracep->declBus(c+46,"aluop2", false,-1, 31,0);
    tracep->declBus(c+47,"regop2", false,-1, 31,0);
    tracep->declBus(c+48,"aluout", false,-1, 31,0);
    tracep->declBus(c+49,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+50,"inc_pc", false,-1, 31,0);
    tracep->declBit(c+51,"eq", false,-1);
    tracep->declBus(c+52,"rs1", false,-1, 4,0);
    tracep->declBus(c+53,"rs2", false,-1, 4,0);
    tracep->declBus(c+54,"rd", false,-1, 4,0);
    tracep->pushNamePrefix("my_PCReg ");
    tracep->declBus(c+90,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBit(c+88,"rst", false,-1);
    tracep->declBus(c+34,"next_PC", false,-1, 31,0);
    tracep->declBus(c+33,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_alu ");
    tracep->declBus(c+90,"Data_width", false,-1, 31,0);
    tracep->declBus(c+45,"aluop1", false,-1, 31,0);
    tracep->declBus(c+46,"aluop2", false,-1, 31,0);
    tracep->declBus(c+37,"aluctrl", false,-1, 2,0);
    tracep->declBus(c+48,"aluout", false,-1, 31,0);
    tracep->declBit(c+51,"eq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_ctr_unit ");
    tracep->declBus(c+90,"IN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+51,"eq", false,-1);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->declBit(c+36,"RegWrite", false,-1);
    tracep->declBus(c+37,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+38,"ALUsrc", false,-1);
    tracep->declBus(c+39,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+40,"PCsrc", false,-1);
    tracep->declBit(c+41,"data_src", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_data_mem ");
    tracep->declBus(c+90,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+90,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+91,"RAMZ", false,-1, 31,0);
    tracep->declQuad(c+92,"intFile", false,-1, 63,0);
    tracep->declBus(c+48,"a", false,-1, 31,0);
    tracep->declBus(c+43,"rd", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_instr_mem ");
    tracep->declBus(c+90,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+90,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+90,"RAMZ", false,-1, 31,0);
    tracep->declArray(c+94,"intFile", false,-1, 71,0);
    tracep->declBus(c+33,"a", false,-1, 31,0);
    tracep->declBus(c+35,"rd", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"ram", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_mux2to1 ");
    tracep->declBus(c+90,"Data_width", false,-1, 31,0);
    tracep->declBus(c+47,"d0", false,-1, 31,0);
    tracep->declBus(c+44,"d1", false,-1, 31,0);
    tracep->declBit(c+38,"sel", false,-1);
    tracep->declBus(c+46,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_mux2to12 ");
    tracep->declBus(c+90,"Data_width", false,-1, 31,0);
    tracep->declBus(c+50,"d0", false,-1, 31,0);
    tracep->declBus(c+49,"d1", false,-1, 31,0);
    tracep->declBit(c+40,"sel", false,-1);
    tracep->declBus(c+34,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_regfile ");
    tracep->declBus(c+90,"Data_width", false,-1, 31,0);
    tracep->declBus(c+97,"Addr_width", false,-1, 31,0);
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBus(c+52,"ad1", false,-1, 4,0);
    tracep->declBus(c+53,"ad2", false,-1, 4,0);
    tracep->declBus(c+54,"ad3", false,-1, 4,0);
    tracep->declBit(c+36,"we3", false,-1);
    tracep->declBus(c+42,"wd3", false,-1, 31,0);
    tracep->declBus(c+45,"rd1", false,-1, 31,0);
    tracep->declBus(c+47,"rd2", false,-1, 31,0);
    tracep->declBus(c+89,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+55+i*1,"register_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_sext ");
    tracep->declBus(c+90,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->declBus(c+39,"immsrc", false,-1, 1,0);
    tracep->declBus(c+44,"imm_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vriscv___024root__trace_init_top(Vriscv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_init_top\n"); );
    // Body
    Vriscv___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vriscv___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vriscv___024root__trace_register(Vriscv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vriscv___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vriscv___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vriscv___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vriscv___024root__trace_full_sub_0(Vriscv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vriscv___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_full_top_0\n"); );
    // Init
    Vriscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv___024root*>(voidSelf);
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vriscv___024root__trace_full_sub_0(Vriscv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h5d3392b8__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->riscv__DOT__pc),32);
    bufp->fullIData(oldp+34,(((IData)(vlSelf->riscv__DOT__PCsrc)
                               ? (vlSelf->riscv__DOT__pc 
                                  + vlSelf->riscv__DOT__immop)
                               : ((IData)(4U) + vlSelf->riscv__DOT__pc))),32);
    bufp->fullIData(oldp+35,(vlSelf->riscv__DOT__instr),32);
    bufp->fullBit(oldp+36,(vlSelf->riscv__DOT__RegWrite));
    bufp->fullCData(oldp+37,(vlSelf->riscv__DOT__ALUctrl),3);
    bufp->fullBit(oldp+38,(vlSelf->riscv__DOT__ALUsrc));
    bufp->fullCData(oldp+39,(vlSelf->riscv__DOT__ImmSrc),2);
    bufp->fullBit(oldp+40,(vlSelf->riscv__DOT__PCsrc));
    bufp->fullBit(oldp+41,(vlSelf->riscv__DOT__data_src));
    bufp->fullIData(oldp+42,(((IData)(vlSelf->riscv__DOT__data_src)
                               ? vlSelf->riscv__DOT__my_data_mem__DOT__ram
                              [(0xffU & vlSelf->riscv__DOT__aluout)]
                               : vlSelf->riscv__DOT__aluout)),32);
    bufp->fullIData(oldp+43,(vlSelf->riscv__DOT__my_data_mem__DOT__ram
                             [(0xffU & vlSelf->riscv__DOT__aluout)]),32);
    bufp->fullIData(oldp+44,(vlSelf->riscv__DOT__immop),32);
    bufp->fullIData(oldp+45,(vlSelf->riscv__DOT__aluop1),32);
    bufp->fullIData(oldp+46,(vlSelf->riscv__DOT__aluop2),32);
    bufp->fullIData(oldp+47,(vlSelf->riscv__DOT__my_regfile__DOT__register_array
                             [(0x1fU & (vlSelf->riscv__DOT__instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+48,(vlSelf->riscv__DOT__aluout),32);
    bufp->fullIData(oldp+49,((vlSelf->riscv__DOT__pc 
                              + vlSelf->riscv__DOT__immop)),32);
    bufp->fullIData(oldp+50,(((IData)(4U) + vlSelf->riscv__DOT__pc)),32);
    bufp->fullBit(oldp+51,(vlSelf->riscv__DOT__eq));
    bufp->fullCData(oldp+52,((0x1fU & (vlSelf->riscv__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+53,((0x1fU & (vlSelf->riscv__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+54,((0x1fU & (vlSelf->riscv__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+55,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[0]),32);
    bufp->fullIData(oldp+56,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[1]),32);
    bufp->fullIData(oldp+57,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[2]),32);
    bufp->fullIData(oldp+58,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[3]),32);
    bufp->fullIData(oldp+59,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[4]),32);
    bufp->fullIData(oldp+60,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[5]),32);
    bufp->fullIData(oldp+61,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[6]),32);
    bufp->fullIData(oldp+62,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[7]),32);
    bufp->fullIData(oldp+63,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[8]),32);
    bufp->fullIData(oldp+64,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[9]),32);
    bufp->fullIData(oldp+65,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[10]),32);
    bufp->fullIData(oldp+66,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[11]),32);
    bufp->fullIData(oldp+67,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[12]),32);
    bufp->fullIData(oldp+68,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[13]),32);
    bufp->fullIData(oldp+69,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[14]),32);
    bufp->fullIData(oldp+70,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[15]),32);
    bufp->fullIData(oldp+71,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[16]),32);
    bufp->fullIData(oldp+72,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[17]),32);
    bufp->fullIData(oldp+73,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[18]),32);
    bufp->fullIData(oldp+74,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[19]),32);
    bufp->fullIData(oldp+75,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[20]),32);
    bufp->fullIData(oldp+76,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[21]),32);
    bufp->fullIData(oldp+77,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[22]),32);
    bufp->fullIData(oldp+78,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[23]),32);
    bufp->fullIData(oldp+79,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[24]),32);
    bufp->fullIData(oldp+80,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[25]),32);
    bufp->fullIData(oldp+81,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[26]),32);
    bufp->fullIData(oldp+82,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[27]),32);
    bufp->fullIData(oldp+83,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[28]),32);
    bufp->fullIData(oldp+84,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[29]),32);
    bufp->fullIData(oldp+85,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[30]),32);
    bufp->fullIData(oldp+86,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[31]),32);
    bufp->fullBit(oldp+87,(vlSelf->clk));
    bufp->fullBit(oldp+88,(vlSelf->rst));
    bufp->fullIData(oldp+89,(vlSelf->a0),32);
    bufp->fullIData(oldp+90,(0x20U),32);
    bufp->fullIData(oldp+91,(0x100U),32);
    bufp->fullQData(oldp+92,(0x646174612e6d656dULL),64);
    __Vtemp_h5d3392b8__0[0U] = 0x2e6d656dU;
    __Vtemp_h5d3392b8__0[1U] = 0x6e737472U;
    __Vtemp_h5d3392b8__0[2U] = 0x69U;
    bufp->fullWData(oldp+94,(__Vtemp_h5d3392b8__0),72);
    bufp->fullIData(oldp+97,(5U),32);
}
