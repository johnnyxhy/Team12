// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsext.h"
#include "Vsext__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsext::Vsext(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsext__Syms(contextp(), _vcname__, this)}
    , immsrc{vlSymsp->TOP.immsrc}
    , instr{vlSymsp->TOP.instr}
    , imm_out{vlSymsp->TOP.imm_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsext::Vsext(const char* _vcname__)
    : Vsext(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsext::~Vsext() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsext___024root___eval_initial(Vsext___024root* vlSelf);
void Vsext___024root___eval_settle(Vsext___024root* vlSelf);
void Vsext___024root___eval(Vsext___024root* vlSelf);
#ifdef VL_DEBUG
void Vsext___024root___eval_debug_assertions(Vsext___024root* vlSelf);
#endif  // VL_DEBUG
void Vsext___024root___final(Vsext___024root* vlSelf);

static void _eval_initial_loop(Vsext__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsext___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsext___024root___eval_settle(&(vlSymsp->TOP));
        Vsext___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vsext::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsext::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsext___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsext___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vsext::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsext::final() {
    Vsext___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsext::hierName() const { return vlSymsp->name(); }
const char* Vsext::modelName() const { return "Vsext"; }
unsigned Vsext::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vsext::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsext___024root__trace_init_top(Vsext___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsext___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsext___024root*>(voidSelf);
    Vsext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsext___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsext___024root__trace_register(Vsext___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsext::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsext___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
