// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv.h for the primary calling header

#include "verilated.h"

#include "Vriscv___024root.h"

VL_ATTR_COLD void Vriscv___024root___initial__TOP__0(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h5d3392b8__0;
    // Body
    __Vtemp_h5d3392b8__0[0U] = 0x2e6d656dU;
    __Vtemp_h5d3392b8__0[1U] = 0x6e737472U;
    __Vtemp_h5d3392b8__0[2U] = 0x69U;
    VL_READMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h5d3392b8__0)
                 ,  &(vlSelf->riscv__DOT__my_instr_mem__DOT__ram)
                 , 0U, 0x1fU);
    VL_READMEM_N(true, 32, 256, 0, std::string{"data.mem"}
                 ,  &(vlSelf->riscv__DOT__my_data_mem__DOT__ram)
                 , 0U, 0xffU);
}

VL_ATTR_COLD void Vriscv___024root___settle__TOP__0(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->riscv__DOT__my_regfile__DOT__register_array
        [0xaU];
    vlSelf->riscv__DOT__instr = vlSelf->riscv__DOT__my_instr_mem__DOT__ram
        [(0x1fU & vlSelf->riscv__DOT__pc)];
    vlSelf->riscv__DOT__aluop1 = vlSelf->riscv__DOT__my_regfile__DOT__register_array
        [(0x1fU & (vlSelf->riscv__DOT__instr >> 0xfU))];
    if ((4U == (0x1fU & (vlSelf->riscv__DOT__instr 
                         >> 2U)))) {
        vlSelf->riscv__DOT__RegWrite = 1U;
        vlSelf->riscv__DOT__data_src = 0U;
        vlSelf->riscv__DOT__ALUctrl = 0U;
        vlSelf->riscv__DOT__ALUsrc = 1U;
        vlSelf->riscv__DOT__ImmSrc = 0U;
    } else if ((0x18U == (0x1fU & (vlSelf->riscv__DOT__instr 
                                   >> 2U)))) {
        vlSelf->riscv__DOT__RegWrite = 0U;
        vlSelf->riscv__DOT__data_src = 0U;
        vlSelf->riscv__DOT__ALUctrl = 1U;
        vlSelf->riscv__DOT__ALUsrc = 0U;
        vlSelf->riscv__DOT__ImmSrc = 2U;
    } else if ((0U == (0x1fU & (vlSelf->riscv__DOT__instr 
                                >> 2U)))) {
        vlSelf->riscv__DOT__RegWrite = 1U;
        vlSelf->riscv__DOT__data_src = 1U;
        vlSelf->riscv__DOT__ALUctrl = 0U;
        vlSelf->riscv__DOT__ALUsrc = 1U;
        vlSelf->riscv__DOT__ImmSrc = 0U;
    }
    vlSelf->riscv__DOT__immop = ((0U == (IData)(vlSelf->riscv__DOT__ImmSrc))
                                  ? (((- (IData)((vlSelf->riscv__DOT__instr 
                                                  >> 0x1fU))) 
                                      << 0xcU) | (vlSelf->riscv__DOT__instr 
                                                  >> 0x14U))
                                  : ((2U == (IData)(vlSelf->riscv__DOT__ImmSrc))
                                      ? (((- (IData)(
                                                     (vlSelf->riscv__DOT__instr 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0x800U 
                                             & (vlSelf->riscv__DOT__instr 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->riscv__DOT__instr 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->riscv__DOT__instr 
                                                     >> 7U)))))
                                      : (((- (IData)(
                                                     (vlSelf->riscv__DOT__instr 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->riscv__DOT__instr 
                                            >> 0x14U))));
    vlSelf->riscv__DOT__aluop2 = ((IData)(vlSelf->riscv__DOT__ALUsrc)
                                   ? vlSelf->riscv__DOT__immop
                                   : vlSelf->riscv__DOT__my_regfile__DOT__register_array
                                  [(0x1fU & (vlSelf->riscv__DOT__instr 
                                             >> 0x14U))]);
    if ((0U == (IData)(vlSelf->riscv__DOT__ALUctrl))) {
        vlSelf->riscv__DOT__aluout = (vlSelf->riscv__DOT__aluop1 
                                      + vlSelf->riscv__DOT__aluop2);
    } else if ((1U != (IData)(vlSelf->riscv__DOT__ALUctrl))) {
        vlSelf->riscv__DOT__aluout = 0U;
    }
    if ((0U != (IData)(vlSelf->riscv__DOT__ALUctrl))) {
        vlSelf->riscv__DOT__eq = ((1U == (IData)(vlSelf->riscv__DOT__ALUctrl)) 
                                  & (vlSelf->riscv__DOT__aluop1 
                                     == vlSelf->riscv__DOT__aluop2));
    }
    if ((4U == (0x1fU & (vlSelf->riscv__DOT__instr 
                         >> 2U)))) {
        vlSelf->riscv__DOT__PCsrc = 0U;
    } else if ((0x18U == (0x1fU & (vlSelf->riscv__DOT__instr 
                                   >> 2U)))) {
        vlSelf->riscv__DOT__PCsrc = (1U & (~ (IData)(vlSelf->riscv__DOT__eq)));
    } else if ((0U == (0x1fU & (vlSelf->riscv__DOT__instr 
                                >> 2U)))) {
        vlSelf->riscv__DOT__PCsrc = 0U;
    }
    vlSelf->riscv__DOT__next_pc = ((IData)(vlSelf->riscv__DOT__PCsrc)
                                    ? (vlSelf->riscv__DOT__pc 
                                       + vlSelf->riscv__DOT__immop)
                                    : ((IData)(4U) 
                                       + vlSelf->riscv__DOT__pc));
}

VL_ATTR_COLD void Vriscv___024root___eval_initial(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_initial\n"); );
    // Body
    Vriscv___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vriscv___024root___eval_settle(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_settle\n"); );
    // Body
    Vriscv___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vriscv___024root___final(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___final\n"); );
}

VL_ATTR_COLD void Vriscv___024root___ctor_var_reset(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->riscv__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->riscv__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->riscv__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->riscv__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->riscv__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->riscv__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->riscv__DOT__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->riscv__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->riscv__DOT__data_src = VL_RAND_RESET_I(1);
    vlSelf->riscv__DOT__immop = VL_RAND_RESET_I(32);
    vlSelf->riscv__DOT__aluop1 = VL_RAND_RESET_I(32);
    vlSelf->riscv__DOT__aluop2 = VL_RAND_RESET_I(32);
    vlSelf->riscv__DOT__aluout = VL_RAND_RESET_I(32);
    vlSelf->riscv__DOT__eq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->riscv__DOT__my_instr_mem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->riscv__DOT__my_regfile__DOT__register_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->riscv__DOT__my_data_mem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
