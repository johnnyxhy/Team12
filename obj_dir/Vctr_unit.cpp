// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vctr_unit.h"
#include "Vctr_unit__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vctr_unit::Vctr_unit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vctr_unit__Syms(contextp(), _vcname__, this)}
    , eq{vlSymsp->TOP.eq}
    , RegWrite{vlSymsp->TOP.RegWrite}
    , ALUctrl{vlSymsp->TOP.ALUctrl}
    , ALUsrc{vlSymsp->TOP.ALUsrc}
    , PCsrc{vlSymsp->TOP.PCsrc}
    , ImmSrc{vlSymsp->TOP.ImmSrc}
    , instr{vlSymsp->TOP.instr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vctr_unit::Vctr_unit(const char* _vcname__)
    : Vctr_unit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vctr_unit::~Vctr_unit() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vctr_unit___024root___eval_initial(Vctr_unit___024root* vlSelf);
void Vctr_unit___024root___eval_settle(Vctr_unit___024root* vlSelf);
void Vctr_unit___024root___eval(Vctr_unit___024root* vlSelf);
#ifdef VL_DEBUG
void Vctr_unit___024root___eval_debug_assertions(Vctr_unit___024root* vlSelf);
#endif  // VL_DEBUG
void Vctr_unit___024root___final(Vctr_unit___024root* vlSelf);

static void _eval_initial_loop(Vctr_unit__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vctr_unit___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vctr_unit___024root___eval_settle(&(vlSymsp->TOP));
        Vctr_unit___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vctr_unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vctr_unit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vctr_unit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vctr_unit___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vctr_unit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vctr_unit::final() {
    Vctr_unit___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vctr_unit::hierName() const { return vlSymsp->name(); }
const char* Vctr_unit::modelName() const { return "Vctr_unit"; }
unsigned Vctr_unit::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vctr_unit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vctr_unit___024root__trace_init_top(Vctr_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vctr_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vctr_unit___024root*>(voidSelf);
    Vctr_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vctr_unit___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vctr_unit___024root__trace_register(Vctr_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vctr_unit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vctr_unit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
