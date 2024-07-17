// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VKeyGeneration.h for the primary calling header

#include "VKeyGeneration__pch.h"
#include "VKeyGeneration__Syms.h"
#include "VKeyGeneration___024root.h"

extern "C" int generate_random_number(int min_value, int max_value);

VL_INLINE_OPT void VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(IData/*31:0*/ min_value, IData/*31:0*/ max_value, IData/*31:0*/ &generate_random_number__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP\n"); );
    // Body
    int min_value__Vcvt;
    for (size_t min_value__Vidx = 0; min_value__Vidx < 1; ++min_value__Vidx) min_value__Vcvt = min_value;
    int max_value__Vcvt;
    for (size_t max_value__Vidx = 0; max_value__Vidx < 1; ++max_value__Vidx) max_value__Vcvt = max_value;
    int generate_random_number__Vfuncrtn__Vcvt;
    generate_random_number__Vfuncrtn__Vcvt = generate_random_number(min_value__Vcvt, max_value__Vcvt);
    generate_random_number__Vfuncrtn = generate_random_number__Vfuncrtn__Vcvt;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VKeyGeneration___024root___dump_triggers__ico(VKeyGeneration___024root* vlSelf);
#endif  // VL_DEBUG

void VKeyGeneration___024root___eval_triggers__ico(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VKeyGeneration___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VKeyGeneration___024root___dump_triggers__act(VKeyGeneration___024root* vlSelf);
#endif  // VL_DEBUG

void VKeyGeneration___024root___eval_triggers__act(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VKeyGeneration___024root___dump_triggers__act(vlSelf);
    }
#endif
}
