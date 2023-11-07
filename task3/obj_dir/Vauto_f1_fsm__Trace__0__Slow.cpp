// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vauto_f1_fsm__Syms.h"


VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_init_sub__TOP__0(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+5,"N", false,-1, 15,0);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBus(c+9,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("auto_f1_fsm ");
    tracep->declBus(c+5,"N", false,-1, 15,0);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBus(c+9,"data_out", false,-1, 7,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->pushNamePrefix("clktick_ ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+5,"N", false,-1, 15,0);
    tracep->declBit(c+1,"tick", false,-1);
    tracep->declBus(c+2,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("f1_fsm_ ");
    tracep->declBit(c+7,"rst", false,-1);
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBus(c+9,"data_out", false,-1, 7,0);
    tracep->declBus(c+3,"current_state", false,-1, 31,0);
    tracep->declBus(c+4,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_init_top(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_init_top\n"); );
    // Body
    Vauto_f1_fsm___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vauto_f1_fsm___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vauto_f1_fsm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_register(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vauto_f1_fsm___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vauto_f1_fsm___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vauto_f1_fsm___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_full_sub_0(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_full_top_0\n"); );
    // Init
    Vauto_f1_fsm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vauto_f1_fsm___024root*>(voidSelf);
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vauto_f1_fsm___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vauto_f1_fsm___024root__trace_full_sub_0(Vauto_f1_fsm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vauto_f1_fsm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauto_f1_fsm___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->auto_f1_fsm__DOT__tick));
    bufp->fullSData(oldp+2,(vlSelf->auto_f1_fsm__DOT__clktick___DOT__count),16);
    bufp->fullIData(oldp+3,(vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state),32);
    bufp->fullIData(oldp+4,((((((((((0U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state) 
                                    | (1U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
                                   | (2U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
                                  | (3U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
                                 | (4U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
                                | (5U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
                               | (6U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)) 
                              | (7U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state))
                              ? ((0U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)
                                  ? 1U : ((1U == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)
                                           ? 2U : (
                                                   (2U 
                                                    == vlSelf->auto_f1_fsm__DOT__f1_fsm___DOT__current_state)
                                                    ? 3U
                                                    : 
                                                   ((3U 
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
    bufp->fullSData(oldp+5,(vlSelf->N),16);
    bufp->fullBit(oldp+6,(vlSelf->en));
    bufp->fullBit(oldp+7,(vlSelf->rst));
    bufp->fullBit(oldp+8,(vlSelf->clk));
    bufp->fullCData(oldp+9,(vlSelf->data_out),8);
    bufp->fullIData(oldp+10,(0x10U),32);
}
