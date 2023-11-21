// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPCsrc.h for the primary calling header

#ifndef VERILATED_VPCSRC___024ROOT_H_
#define VERILATED_VPCSRC___024ROOT_H_  // guard

#include "verilated.h"

class VPCsrc__Syms;

class VPCsrc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(sel,0,0);
    VL_IN(branch_PC,31,0);
    VL_IN(inc_PC,31,0);
    VL_OUT(out,31,0);

    // INTERNAL VARIABLES
    VPCsrc__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPCsrc___024root(VPCsrc__Syms* symsp, const char* name);
    ~VPCsrc___024root();
    VL_UNCOPYABLE(VPCsrc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
