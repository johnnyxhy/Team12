// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vctr_unit.h for the primary calling header

#ifndef VERILATED_VCTR_UNIT___024ROOT_H_
#define VERILATED_VCTR_UNIT___024ROOT_H_  // guard

#include "verilated.h"

class Vctr_unit__Syms;

class Vctr_unit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(eq,0,0);
    VL_OUT8(RegWrite,0,0);
    VL_OUT8(ALUctrl,2,0);
    VL_OUT8(ALUsrc,0,0);
    VL_OUT8(ImmSrc,1,0);
    VL_OUT8(PCsrc,0,0);
    VL_OUT8(data_src,0,0);
    VL_IN(instr,31,0);

    // INTERNAL VARIABLES
    Vctr_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vctr_unit___024root(Vctr_unit__Syms* symsp, const char* name);
    ~Vctr_unit___024root();
    VL_UNCOPYABLE(Vctr_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
