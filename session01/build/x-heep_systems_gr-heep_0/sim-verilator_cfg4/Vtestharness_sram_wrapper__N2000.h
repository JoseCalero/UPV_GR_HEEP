// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_SRAM_WRAPPER__N2000_H_
#define VERILATED_VTESTHARNESS_SRAM_WRAPPER__N2000_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_sram_wrapper__N2000 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(req_i,0,0);
    VL_IN8(we_i,0,0);
    VL_IN8(be_i,3,0);
    VL_IN8(pwrgate_ni,0,0);
    VL_OUT8(pwrgate_ack_no,0,0);
    VL_IN8(set_retentive_ni,0,0);
    VL_IN16(addr_i,12,0);
    SData/*12:0*/ __PVT__tc_ram_i__DOT__r_addr_q;
    SData/*12:0*/ tc_ram_i__DOT____Vlvbound_hdd9b40f9__0;
    VL_IN(wdata_i,31,0);
    VL_OUT(rdata_o,31,0);
    IData/*31:0*/ tc_ram_i__DOT____Vxrand___0;
    IData/*31:0*/ __PVT__tc_ram_i__DOT__rdata_q;
    IData/*31:0*/ __PVT__tc_ram_i__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__i;
    IData/*31:0*/ __PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j;
    IData/*31:0*/ __PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__i;
    IData/*31:0*/ __PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__j;
    IData/*31:0*/ __PVT__tc_ram_i__DOT__genblk2__DOT__unnamedblk4__DOT__i;
    VlUnpacked<IData/*31:0*/, 8192> tc_ram_i__DOT__sram;
    VlUnpacked<IData/*31:0*/, 8192> __PVT__tc_ram_i__DOT__init_val;

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness_sram_wrapper__N2000(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_sram_wrapper__N2000();
    VL_UNCOPYABLE(Vtestharness_sram_wrapper__N2000);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
