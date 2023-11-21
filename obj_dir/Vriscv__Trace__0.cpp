// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv__Syms.h"


void Vriscv___024root__trace_chg_sub_0(Vriscv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vriscv___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_chg_top_0\n"); );
    // Init
    Vriscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv___024root*>(voidSelf);
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vriscv___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vriscv___024root__trace_chg_sub_0(Vriscv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->riscv__DOT__my_instr_mem__DOT__ram[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+32,(vlSelf->riscv__DOT__pc),32);
        bufp->chgIData(oldp+33,(((IData)(vlSelf->riscv__DOT__PCsrc)
                                  ? (vlSelf->riscv__DOT__pc 
                                     + vlSelf->riscv__DOT__immop)
                                  : ((IData)(4U) + vlSelf->riscv__DOT__pc))),32);
        bufp->chgIData(oldp+34,(vlSelf->riscv__DOT__instr),32);
        bufp->chgBit(oldp+35,(vlSelf->riscv__DOT__RegWrite));
        bufp->chgCData(oldp+36,(vlSelf->riscv__DOT__ALUctrl),3);
        bufp->chgBit(oldp+37,(vlSelf->riscv__DOT__ALUsrc));
        bufp->chgCData(oldp+38,(vlSelf->riscv__DOT__ImmSrc),2);
        bufp->chgBit(oldp+39,(vlSelf->riscv__DOT__PCsrc));
        bufp->chgBit(oldp+40,(vlSelf->riscv__DOT__data_src));
        bufp->chgIData(oldp+41,(((IData)(vlSelf->riscv__DOT__data_src)
                                  ? vlSelf->riscv__DOT__my_data_mem__DOT__ram
                                 [(0xffU & vlSelf->riscv__DOT__aluout)]
                                  : vlSelf->riscv__DOT__aluout)),32);
        bufp->chgIData(oldp+42,(vlSelf->riscv__DOT__my_data_mem__DOT__ram
                                [(0xffU & vlSelf->riscv__DOT__aluout)]),32);
        bufp->chgIData(oldp+43,(vlSelf->riscv__DOT__immop),32);
        bufp->chgIData(oldp+44,(vlSelf->riscv__DOT__aluop1),32);
        bufp->chgIData(oldp+45,(vlSelf->riscv__DOT__aluop2),32);
        bufp->chgIData(oldp+46,(vlSelf->riscv__DOT__my_regfile__DOT__register_array
                                [(0x1fU & (vlSelf->riscv__DOT__instr 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+47,(vlSelf->riscv__DOT__aluout),32);
        bufp->chgIData(oldp+48,((vlSelf->riscv__DOT__pc 
                                 + vlSelf->riscv__DOT__immop)),32);
        bufp->chgIData(oldp+49,(((IData)(4U) + vlSelf->riscv__DOT__pc)),32);
        bufp->chgBit(oldp+50,(vlSelf->riscv__DOT__eq));
        bufp->chgCData(oldp+51,((0x1fU & (vlSelf->riscv__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+52,((0x1fU & (vlSelf->riscv__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+53,((0x1fU & (vlSelf->riscv__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+54,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[0]),32);
        bufp->chgIData(oldp+55,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[1]),32);
        bufp->chgIData(oldp+56,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[2]),32);
        bufp->chgIData(oldp+57,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[3]),32);
        bufp->chgIData(oldp+58,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[4]),32);
        bufp->chgIData(oldp+59,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[5]),32);
        bufp->chgIData(oldp+60,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[6]),32);
        bufp->chgIData(oldp+61,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[7]),32);
        bufp->chgIData(oldp+62,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[8]),32);
        bufp->chgIData(oldp+63,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[9]),32);
        bufp->chgIData(oldp+64,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[10]),32);
        bufp->chgIData(oldp+65,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[11]),32);
        bufp->chgIData(oldp+66,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[12]),32);
        bufp->chgIData(oldp+67,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[13]),32);
        bufp->chgIData(oldp+68,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[14]),32);
        bufp->chgIData(oldp+69,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[15]),32);
        bufp->chgIData(oldp+70,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[16]),32);
        bufp->chgIData(oldp+71,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[17]),32);
        bufp->chgIData(oldp+72,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[18]),32);
        bufp->chgIData(oldp+73,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[19]),32);
        bufp->chgIData(oldp+74,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[20]),32);
        bufp->chgIData(oldp+75,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[21]),32);
        bufp->chgIData(oldp+76,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[22]),32);
        bufp->chgIData(oldp+77,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[23]),32);
        bufp->chgIData(oldp+78,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[24]),32);
        bufp->chgIData(oldp+79,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[25]),32);
        bufp->chgIData(oldp+80,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[26]),32);
        bufp->chgIData(oldp+81,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[27]),32);
        bufp->chgIData(oldp+82,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[28]),32);
        bufp->chgIData(oldp+83,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[29]),32);
        bufp->chgIData(oldp+84,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[30]),32);
        bufp->chgIData(oldp+85,(vlSelf->riscv__DOT__my_regfile__DOT__register_array[31]),32);
    }
    bufp->chgBit(oldp+86,(vlSelf->clk));
    bufp->chgBit(oldp+87,(vlSelf->rst));
    bufp->chgIData(oldp+88,(vlSelf->a0),32);
}

void Vriscv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_cleanup\n"); );
    // Init
    Vriscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv___024root*>(voidSelf);
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
