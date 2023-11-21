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
    CData/*0:0*/ riscv__DOT__my_PCReg__DOT__clk;
    VL_IN8(rst,0,0);
    CData/*0:0*/ riscv__DOT__RegWrite;
    CData/*2:0*/ riscv__DOT__ALUctrl;
    CData/*0:0*/ riscv__DOT__ALUsrc;
    CData/*0:0*/ riscv__DOT__PCsrc;
    CData/*0:0*/ riscv__DOT__eq;
    CData/*0:0*/ riscv__DOT__my_mux2to1__DOT__sel;
    CData/*2:0*/ riscv__DOT__my_alu__DOT__aluctrl;
    CData/*0:0*/ riscv__DOT__my_PCReg__DOT__rst;
    CData/*0:0*/ riscv__DOT__my_PCsrc__DOT__sel;
    CData/*0:0*/ __Vclklast__TOP__riscv__DOT__my_PCReg__DOT__clk;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*11:0*/ riscv__DOT__ImmSrc;
    VL_OUT(a0,31,0);
    IData/*31:0*/ riscv__DOT__pc;
    IData/*31:0*/ riscv__DOT__branch_pc;
    IData/*31:0*/ riscv__DOT__inc_pc;
    IData/*31:0*/ riscv__DOT__instr;
    IData/*31:0*/ riscv__DOT__aluop1;
    IData/*31:0*/ riscv__DOT__aluop2;
    IData/*31:0*/ riscv__DOT__aluout;
    IData/*31:0*/ riscv__DOT__rs1;
    IData/*31:0*/ riscv__DOT__rs2;
    IData/*31:0*/ riscv__DOT__rd;
    VlUnpacked<IData/*31:0*/, 32> riscv__DOT__my_instr_mem__DOT__ram;
    VlUnpacked<IData/*31:0*/, 32> riscv__DOT__my_regfile__DOT__register_array;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

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
