// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv.h for the primary calling header

#ifndef VERILATED_VRISCV___024ROOT_H_
#define VERILATED_VRISCV___024ROOT_H_  // guard

#include "verilated.h"

class Vriscv__Syms;

class Vriscv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ riscv__DOT__RegWrite;
    CData/*2:0*/ riscv__DOT__ALUctrl;
    CData/*0:0*/ riscv__DOT__ALUsrc;
    CData/*1:0*/ riscv__DOT__ImmSrc;
    CData/*0:0*/ riscv__DOT__PCsrc;
    CData/*0:0*/ riscv__DOT__data_src;
    CData/*0:0*/ riscv__DOT__eq;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    IData/*31:0*/ riscv__DOT__pc;
    IData/*31:0*/ riscv__DOT__next_pc;
    IData/*31:0*/ riscv__DOT__instr;
    IData/*31:0*/ riscv__DOT__immop;
    IData/*31:0*/ riscv__DOT__aluop1;
    IData/*31:0*/ riscv__DOT__aluop2;
    IData/*31:0*/ riscv__DOT__aluout;
    VlUnpacked<IData/*31:0*/, 32> riscv__DOT__my_instr_mem__DOT__ram;
    VlUnpacked<IData/*31:0*/, 32> riscv__DOT__my_regfile__DOT__register_array;
    VlUnpacked<IData/*31:0*/, 256> riscv__DOT__my_data_mem__DOT__ram;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vriscv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv___024root(Vriscv__Syms* symsp, const char* name);
    ~Vriscv___024root();
    VL_UNCOPYABLE(Vriscv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
