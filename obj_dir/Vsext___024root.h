// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsext.h for the primary calling header

#ifndef VERILATED_VSEXT___024ROOT_H_
#define VERILATED_VSEXT___024ROOT_H_  // guard

#include "verilated.h"

class Vsext__Syms;

class Vsext___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN16(immsrc,11,0);
    VL_IN(instr,31,0);
    VL_OUT(imm_out,31,0);

    // INTERNAL VARIABLES
    Vsext__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsext___024root(Vsext__Syms* symsp, const char* name);
    ~Vsext___024root();
    VL_UNCOPYABLE(Vsext___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
