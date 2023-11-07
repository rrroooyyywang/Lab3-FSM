// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vauto_f1_fsm__Syms.h"


void Vauto_f1_fsm___024root__trace_chg_sub_0(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vauto_f1_fsm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_chg_top_0\n"); );
    // Init
    Vauto_f1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vauto_f1_fsm___024root*>(voidSelf);
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vauto_f1_fsm___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vauto_f1_fsm___024root__trace_chg_sub_0(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->auto_f1_fsm__DOT__tick));
        bufp->chgSData(oldp+1,(vlSelf->auto_f1_fsm__DOT__clktick___DOT__count),16);
        bufp->chgIData(oldp+2,(vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state),32);
        bufp->chgIData(oldp+3,((((((((((0U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state) 
                                       | (1U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
                                      | (2U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
                                     | (3U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
                                    | (4U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
                                   | (5U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
                                  | (6U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
                                 | (7U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state))
                                 ? ((0U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)
                                     ? 1U : ((1U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)
                                              ? 2U : 
                                             ((2U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)
                                               ? 3U
                                               : ((3U 
                                                   == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)
                                                   ? 4U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)
                                                    ? 5U
                                                    : 
                                                   ((5U 
                                                     == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)
                                                     ? 6U
                                                     : 
                                                    ((6U 
                                                      == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)
                                                      ? 7U
                                                      : 8U)))))))
                                 : 0U)),32);
    }
    bufp->chgSData(oldp+4,(vlSelf->N),16);
    bufp->chgBit(oldp+5,(vlSelf->en));
    bufp->chgBit(oldp+6,(vlSelf->rst));
    bufp->chgBit(oldp+7,(vlSelf->clk));
    bufp->chgCData(oldp+8,(vlSelf->data_out),8);
}

void Vauto_f1_fsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_cleanup\n"); );
    // Init
    Vauto_f1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vauto_f1_fsm___024root*>(voidSelf);
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
