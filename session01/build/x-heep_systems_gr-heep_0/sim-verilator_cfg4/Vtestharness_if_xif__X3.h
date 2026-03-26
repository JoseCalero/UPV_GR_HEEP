// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_IF_XIF__X3_H_
#define VERILATED_VTESTHARNESS_IF_XIF__X3_H_  // guard

#include "verilated.h"


class Vtestharness__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestharness_if_xif__X3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__compressed_valid;
    CData/*0:0*/ __PVT__compressed_ready;
    CData/*0:0*/ __PVT__issue_valid;
    CData/*0:0*/ __PVT__issue_ready;
    CData/*0:0*/ __PVT__commit_valid;
    CData/*4:0*/ __PVT__commit;
    CData/*0:0*/ __PVT__mem_valid;
    CData/*0:0*/ __PVT__mem_ready;
    CData/*7:0*/ __PVT__mem_resp;
    CData/*0:0*/ __PVT__mem_result_valid;
    CData/*0:0*/ __PVT__result_valid;
    CData/*0:0*/ __PVT__result_ready;
    SData/*8:0*/ __PVT__issue_resp;
    IData/*21:0*/ __PVT__compressed_req;
    QData/*32:0*/ __PVT__compressed_resp;
    VlWide<5>/*143:0*/ __PVT__issue_req;
    VlWide<3>/*81:0*/ __PVT__mem_req;
    QData/*37:0*/ __PVT__mem_result;
    QData/*59:0*/ __PVT__result;

    // INTERNAL VARIABLES
    Vtestharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestharness_if_xif__X3(Vtestharness__Syms* symsp, const char* v__name);
    ~Vtestharness_if_xif__X3();
    VL_UNCOPYABLE(Vtestharness_if_xif__X3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtestharness_if_xif__X3* obj);

#endif  // guard
