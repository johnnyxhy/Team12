// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_mem.h for the primary calling header

#ifndef VERILATED_VDATA_MEM___024ROOT_H_
#define VERILATED_VDATA_MEM___024ROOT_H_  // guard

#include "verilated.h"

class Vdata_mem__Syms;

class Vdata_mem___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN(a,31,0);
    VL_OUT(rd,31,0);
    VlUnpacked<IData/*31:0*/, 256> data_mem__DOT__ram;

    // INTERNAL VARIABLES
    Vdata_mem__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_mem___024root(Vdata_mem__Syms* symsp, const char* name);
    ~Vdata_mem___024root();
    VL_UNCOPYABLE(Vdata_mem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
