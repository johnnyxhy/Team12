// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv.h for the primary calling header

#include "verilated.h"

#include "Vriscv___024root.h"

VL_INLINE_OPT void Vriscv___024root___sequent__TOP__0(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__riscv__DOT__my_regfile__DOT__register_array__v0;
    IData/*31:0*/ __Vdlyvval__riscv__DOT__my_regfile__DOT__register_array__v0;
    CData/*0:0*/ __Vdlyvset__riscv__DOT__my_regfile__DOT__register_array__v0;
    // Body
    __Vdlyvset__riscv__DOT__my_regfile__DOT__register_array__v0 = 0U;
    if (vlSelf->riscv__DOT__RegWrite) {
        __Vdlyvval__riscv__DOT__my_regfile__DOT__register_array__v0 
            = ((IData)(vlSelf->riscv__DOT__data_src)
                ? vlSelf->riscv__DOT__my_data_mem__DOT__ram
               [(0xffU & vlSelf->riscv__DOT__aluout)]
                : vlSelf->riscv__DOT__aluout);
        __Vdlyvset__riscv__DOT__my_regfile__DOT__register_array__v0 = 1U;
        __Vdlyvdim0__riscv__DOT__my_regfile__DOT__register_array__v0 
            = (0x1fU & (vlSelf->riscv__DOT__instr >> 7U));
    }
    vlSelf->riscv__DOT__pc = ((IData)(vlSelf->rst) ? 0U
                               : vlSelf->riscv__DOT__next_pc);
    if (__Vdlyvset__riscv__DOT__my_regfile__DOT__register_array__v0) {
        vlSelf->riscv__DOT__my_regfile__DOT__register_array[__Vdlyvdim0__riscv__DOT__my_regfile__DOT__register_array__v0] 
            = __Vdlyvval__riscv__DOT__my_regfile__DOT__register_array__v0;
    }
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

void Vriscv___024root___eval(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vriscv___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vriscv___024root___eval_debug_assertions(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
