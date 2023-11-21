// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv.h for the primary calling header

#include "verilated.h"

#include "Vriscv___024root.h"

VL_INLINE_OPT void Vriscv___024root___sequent__TOP__0(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->riscv__DOT__pc = ((IData)(vlSelf->riscv__DOT__my_PCReg__DOT__rst)
                               ? 0U : ((IData)(vlSelf->riscv__DOT__my_PCsrc__DOT__sel)
                                        ? vlSelf->riscv__DOT__branch_pc
                                        : vlSelf->riscv__DOT__inc_pc));
    vlSelf->riscv__DOT__instr = vlSelf->riscv__DOT__my_instr_mem__DOT__ram
        [(0x1fU & vlSelf->riscv__DOT__pc)];
    if ((4U == (0x1fU & (vlSelf->riscv__DOT__instr 
                         >> 2U)))) {
        vlSelf->riscv__DOT__ALUctrl = 0U;
        vlSelf->riscv__DOT__ALUsrc = 1U;
        vlSelf->riscv__DOT__ImmSrc = (vlSelf->riscv__DOT__instr 
                                      >> 0x14U);
    } else if ((0x18U == (0x1fU & (vlSelf->riscv__DOT__instr 
                                   >> 2U)))) {
        vlSelf->riscv__DOT__ALUctrl = 1U;
        vlSelf->riscv__DOT__ALUsrc = 0U;
        vlSelf->riscv__DOT__ImmSrc = ((0x800U & (vlSelf->riscv__DOT__instr 
                                                 << 4U)) 
                                      | ((0x7e0U & 
                                          (vlSelf->riscv__DOT__instr 
                                           >> 0x14U)) 
                                         | (0x1eU & 
                                            (vlSelf->riscv__DOT__instr 
                                             >> 7U))));
    }
}

VL_INLINE_OPT void Vriscv___024root___sequent__TOP__1(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__riscv__DOT__my_regfile__DOT__register_array__v0;
    IData/*31:0*/ __Vdlyvval__riscv__DOT__my_regfile__DOT__register_array__v0;
    CData/*0:0*/ __Vdlyvset__riscv__DOT__my_regfile__DOT__register_array__v0;
    // Body
    __Vdlyvset__riscv__DOT__my_regfile__DOT__register_array__v0 = 0U;
    if (vlSelf->riscv__DOT__RegWrite) {
        __Vdlyvval__riscv__DOT__my_regfile__DOT__register_array__v0 
            = vlSelf->riscv__DOT__aluout;
        __Vdlyvset__riscv__DOT__my_regfile__DOT__register_array__v0 = 1U;
        __Vdlyvdim0__riscv__DOT__my_regfile__DOT__register_array__v0 
            = (0x1fU & vlSelf->riscv__DOT__rd);
    }
    if (__Vdlyvset__riscv__DOT__my_regfile__DOT__register_array__v0) {
        vlSelf->riscv__DOT__my_regfile__DOT__register_array[__Vdlyvdim0__riscv__DOT__my_regfile__DOT__register_array__v0] 
            = __Vdlyvval__riscv__DOT__my_regfile__DOT__register_array__v0;
    }
    vlSelf->a0 = vlSelf->riscv__DOT__my_regfile__DOT__register_array
        [0U];
    vlSelf->riscv__DOT__aluop1 = vlSelf->riscv__DOT__my_regfile__DOT__register_array
        [(0x1fU & vlSelf->riscv__DOT__rs1)];
}

VL_INLINE_OPT void Vriscv___024root___sequent__TOP__2(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___sequent__TOP__2\n"); );
    // Body
    if ((4U == (0x1fU & (vlSelf->riscv__DOT__instr 
                         >> 2U)))) {
        vlSelf->riscv__DOT__RegWrite = 1U;
    } else if ((0x18U == (0x1fU & (vlSelf->riscv__DOT__instr 
                                   >> 2U)))) {
        vlSelf->riscv__DOT__RegWrite = 0U;
    }
}

VL_INLINE_OPT void Vriscv___024root___multiclk__TOP__0(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___multiclk__TOP__0\n"); );
    // Body
    vlSelf->riscv__DOT__aluop2 = ((IData)(vlSelf->riscv__DOT__my_mux2to1__DOT__sel)
                                   ? (((- (IData)((1U 
                                                   & ((IData)(vlSelf->riscv__DOT__ImmSrc) 
                                                      >> 0xbU)))) 
                                       << 0xcU) | (IData)(vlSelf->riscv__DOT__ImmSrc))
                                   : vlSelf->riscv__DOT__my_regfile__DOT__register_array
                                  [(0x1fU & vlSelf->riscv__DOT__rs2)]);
    if ((0U == (IData)(vlSelf->riscv__DOT__my_alu__DOT__aluctrl))) {
        vlSelf->riscv__DOT__aluout = (vlSelf->riscv__DOT__aluop1 
                                      + vlSelf->riscv__DOT__aluop2);
    } else if ((1U != (IData)(vlSelf->riscv__DOT__my_alu__DOT__aluctrl))) {
        vlSelf->riscv__DOT__aluout = 0U;
    }
    if ((0U != (IData)(vlSelf->riscv__DOT__my_alu__DOT__aluctrl))) {
        vlSelf->riscv__DOT__eq = ((1U == (IData)(vlSelf->riscv__DOT__my_alu__DOT__aluctrl)) 
                                  & (vlSelf->riscv__DOT__aluop1 
                                     == vlSelf->riscv__DOT__aluop2));
    }
    if ((4U == (0x1fU & (vlSelf->riscv__DOT__instr 
                         >> 2U)))) {
        vlSelf->riscv__DOT__PCsrc = 0U;
    } else if ((0x18U == (0x1fU & (vlSelf->riscv__DOT__instr 
                                   >> 2U)))) {
        vlSelf->riscv__DOT__PCsrc = (1U & (~ (IData)(vlSelf->riscv__DOT__eq)));
    }
}

void Vriscv___024root___eval(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->riscv__DOT__my_PCReg__DOT__clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__riscv__DOT__my_PCReg__DOT__clk)))) {
        Vriscv___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vriscv___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->riscv__DOT__my_PCReg__DOT__clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__riscv__DOT__my_PCReg__DOT__clk)))) {
        Vriscv___024root___sequent__TOP__2(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->riscv__DOT__my_PCReg__DOT__clk) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__riscv__DOT__my_PCReg__DOT__clk))))) {
        Vriscv___024root___multiclk__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__riscv__DOT__my_PCReg__DOT__clk 
        = vlSelf->riscv__DOT__my_PCReg__DOT__clk;
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
