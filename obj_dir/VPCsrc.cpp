// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPCsrc.h"
#include "VPCsrc__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPCsrc::VPCsrc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPCsrc__Syms(contextp(), _vcname__, this)}
    , sel{vlSymsp->TOP.sel}
    , branch_PC{vlSymsp->TOP.branch_PC}
    , inc_PC{vlSymsp->TOP.inc_PC}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPCsrc::VPCsrc(const char* _vcname__)
    : VPCsrc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPCsrc::~VPCsrc() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPCsrc___024root___eval_initial(VPCsrc___024root* vlSelf);
void VPCsrc___024root___eval_settle(VPCsrc___024root* vlSelf);
void VPCsrc___024root___eval(VPCsrc___024root* vlSelf);
#ifdef VL_DEBUG
void VPCsrc___024root___eval_debug_assertions(VPCsrc___024root* vlSelf);
#endif  // VL_DEBUG
void VPCsrc___024root___final(VPCsrc___024root* vlSelf);

static void _eval_initial_loop(VPCsrc__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPCsrc___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPCsrc___024root___eval_settle(&(vlSymsp->TOP));
        VPCsrc___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VPCsrc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPCsrc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPCsrc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPCsrc___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VPCsrc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPCsrc::final() {
    VPCsrc___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPCsrc::hierName() const { return vlSymsp->name(); }
const char* VPCsrc::modelName() const { return "VPCsrc"; }
unsigned VPCsrc::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VPCsrc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VPCsrc___024root__trace_init_top(VPCsrc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPCsrc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPCsrc___024root*>(voidSelf);
    VPCsrc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPCsrc___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPCsrc___024root__trace_register(VPCsrc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPCsrc::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPCsrc___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
