// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_POWER_MANAGER_SEQUENCE_H_
#define VERILATED_VTESTHARNESS_POWER_MANAGER_SEQUENCE_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_power_manager_sequence final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(start_off_sequence_i,0,0);
    VL_IN8(start_on_sequence_i,0,0);
    VL_IN8(switch_ack_i,0,0);
    VL_OUT8(switch_onoff_signal_o,0,0);
    CData/*2:0*/ __PVT__sequence_curr_state;
    CData/*2:0*/ __PVT__sequence_next_state;
    CData/*0:0*/ __PVT__switch_onoff_signal_d;
    CData/*0:0*/ __PVT__switch_onoff_signal_q;

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness_power_manager_sequence(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_power_manager_sequence();
    VL_UNCOPYABLE(Vtestharness_power_manager_sequence);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
