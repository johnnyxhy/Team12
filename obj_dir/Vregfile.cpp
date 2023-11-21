// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vregfile.h"
#include "Vregfile__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vregfile::Vregfile(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vregfile__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , ad1{vlSymsp->TOP.ad1}
    , ad2{vlSymsp->TOP.ad2}
    , ad3{vlSymsp->TOP.ad3}
    , we3{vlSymsp->TOP.we3}
    , wd3{vlSymsp->TOP.wd3}
    , rd1{vlSymsp->TOP.rd1}
    , rd2{vlSymsp->TOP.rd2}
    , a0{vlSymsp->TOP.a0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vregfile::Vregfile(const char* _vcname__)
    : Vregfile(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vregfile::~Vregfile() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vregfile___024root___eval_initial(Vregfile___024root* vlSelf);
void Vregfile___024root___eval_settle(Vregfile___024root* vlSelf);
void Vregfile___024root___eval(Vregfile___024root* vlSelf);
#ifdef VL_DEBUG
void Vregfile___024root___eval_debug_assertions(Vregfile___024root* vlSelf);
#endif  // VL_DEBUG
void Vregfile___024root___final(Vregfile___024root* vlSelf);

static void _eval_initial_loop(Vregfile__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vregfile___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vregfile___024root___eval_settle(&(vlSymsp->TOP));
        Vregfile___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vregfile::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vregfile::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vregfile___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vregfile___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vregfile::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vregfile::final() {
    Vregfile___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vregfile::hierName() const { return vlSymsp->name(); }
const char* Vregfile::modelName() const { return "Vregfile"; }
unsigned Vregfile::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vregfile::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vregfile___024root__trace_init_top(Vregfile___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vregfile___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile___024root*>(voidSelf);
    Vregfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vregfile___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vregfile___024root__trace_register(Vregfile___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vregfile::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vregfile___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
