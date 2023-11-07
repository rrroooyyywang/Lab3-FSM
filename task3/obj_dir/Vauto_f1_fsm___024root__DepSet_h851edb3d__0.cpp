// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vauto_f1_fsm.h for the primary calling header

#include "verilated.h"

#include "Vauto_f1_fsm___024root.h"

VL_INLINE_OPT void Vauto_f1_fsm___024root___sequent__TOP__0(Vauto_f1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__auto_f1_fsm__DOT__clktick___DOT__count;
    // Body
    __Vdly__auto_f1_fsm__DOT__clktick___DOT__count 
        = vlSelf->auto_f1_fsm__DOT__clktick___DOT__count;
    if (vlSelf->rst) {
        vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state = 0U;
        vlSelf->auto_f1_fsm__DOT__tick = 0U;
        __Vdly__auto_f1_fsm__DOT__clktick___DOT__count 
            = vlSelf->N;
    } else {
        if (vlSelf->auto_f1_fsm__DOT__tick) {
            vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state 
                = vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__next_state;
        }
        if (vlSelf->en) {
            if ((0U == (IData)(vlSelf->auto_f1_fsm__DOT__clktick___DOT__count))) {
                vlSelf->auto_f1_fsm__DOT__tick = 1U;
                __Vdly__auto_f1_fsm__DOT__clktick___DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__auto_f1_fsm__DOT__clktick___DOT__count 
                    = (0xffffU & ((IData)(vlSelf->auto_f1_fsm__DOT__clktick___DOT__count) 
                                  - (IData)(1U)));
                vlSelf->auto_f1_fsm__DOT__tick = 0U;
            }
        }
    }
    if (((((((((0U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state) 
               | (1U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
              | (2U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
             | (3U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
            | (4U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
           | (5U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
          | (6U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
         | (7U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state))) {
        if ((0U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) {
            vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__next_state = 1U;
            vlSelf->data_out = 0U;
        } else if ((1U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) {
            vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__next_state = 2U;
            vlSelf->data_out = 1U;
        } else if ((2U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) {
            vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__next_state = 3U;
            vlSelf->data_out = 3U;
        } else if ((3U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) {
            vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__next_state = 4U;
            vlSelf->data_out = 7U;
        } else if ((4U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) {
            vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__next_state = 5U;
            vlSelf->data_out = 0xfU;
        } else if ((5U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) {
            vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__next_state = 6U;
            vlSelf->data_out = 0x1fU;
        } else if ((6U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) {
            vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__next_state = 7U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__next_state = 8U;
            vlSelf->data_out = 0x7fU;
        }
    } else {
        vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__next_state = 0U;
        vlSelf->data_out = ((8U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)
                             ? 0xffU : 0U);
    }
    vlSelf->auto_f1_fsm__DOT__clktick___DOT__count 
        = __Vdly__auto_f1_fsm__DOT__clktick___DOT__count;
}

void Vauto_f1_fsm___024root___eval(Vauto_f1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vauto_f1_fsm___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vauto_f1_fsm___024root___eval_debug_assertions(Vauto_f1_fsm___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
