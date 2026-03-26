// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vtestharness.h"
#include "Vtestharness__Syms.h"
#include "verilated_dpi.h"


void Vtestharness::tb_getMemSize(int* mem_size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::tb_getMemSize\n"); );
    // Init
    IData/*31:0*/ mem_size__Vcvt;
    mem_size__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_getMemSize");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_tb_getMemSize_t __Vcb = (Vtestharness__Vcb_tb_getMemSize_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), mem_size__Vcvt);
    *mem_size = mem_size__Vcvt;
}

void Vtestharness::tb_readHEX(const char* file, svLogicVecVal* stimuli) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::tb_readHEX\n"); );
    // Init
    static thread_local std::string file__Vcvt;
    VlUnpacked<CData/*7:0*/, 327680> stimuli__Vcvt;
    for (int __Vi0 = 0; __Vi0 < 327680; ++__Vi0) {
        stimuli__Vcvt[__Vi0] = 0;
    }
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_readHEX");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_tb_readHEX_t __Vcb = (Vtestharness__Vcb_tb_readHEX_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    file__Vcvt = VL_CVT_N_CSTR(file);
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), file__Vcvt, stimuli__Vcvt);
    for (size_t stimuli__Vidx = 0; stimuli__Vidx < 327680; ++stimuli__Vidx) VL_SET_SVLV_I(8, stimuli + 1 * stimuli__Vidx, (&stimuli__Vcvt[0])[stimuli__Vidx]);
}

void Vtestharness::tb_loadHEX(const char* file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::tb_loadHEX\n"); );
    // Init
    static thread_local std::string file__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_loadHEX");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_tb_loadHEX_t __Vcb = (Vtestharness__Vcb_tb_loadHEX_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    file__Vcvt = VL_CVT_N_CSTR(file);
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), file__Vcvt);
}

void Vtestharness::tb_writetoSram0(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::tb_writetoSram0\n"); );
    // Init
    IData/*31:0*/ addr__Vcvt;
    addr__Vcvt = 0;
    CData/*7:0*/ val3__Vcvt;
    val3__Vcvt = 0;
    CData/*7:0*/ val2__Vcvt;
    val2__Vcvt = 0;
    CData/*7:0*/ val1__Vcvt;
    val1__Vcvt = 0;
    CData/*7:0*/ val0__Vcvt;
    val0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_writetoSram0");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_tb_writetoSram0_t __Vcb = (Vtestharness__Vcb_tb_writetoSram0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    addr__Vcvt = addr;
    val3__Vcvt = (0xffU & VL_SET_I_SVLV(val3));
    val2__Vcvt = (0xffU & VL_SET_I_SVLV(val2));
    val1__Vcvt = (0xffU & VL_SET_I_SVLV(val1));
    val0__Vcvt = (0xffU & VL_SET_I_SVLV(val0));
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), addr__Vcvt, val3__Vcvt, val2__Vcvt, val1__Vcvt, val0__Vcvt);
}

void Vtestharness::tb_writetoSram1(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::tb_writetoSram1\n"); );
    // Init
    IData/*31:0*/ addr__Vcvt;
    addr__Vcvt = 0;
    CData/*7:0*/ val3__Vcvt;
    val3__Vcvt = 0;
    CData/*7:0*/ val2__Vcvt;
    val2__Vcvt = 0;
    CData/*7:0*/ val1__Vcvt;
    val1__Vcvt = 0;
    CData/*7:0*/ val0__Vcvt;
    val0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_writetoSram1");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_tb_writetoSram1_t __Vcb = (Vtestharness__Vcb_tb_writetoSram1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    addr__Vcvt = addr;
    val3__Vcvt = (0xffU & VL_SET_I_SVLV(val3));
    val2__Vcvt = (0xffU & VL_SET_I_SVLV(val2));
    val1__Vcvt = (0xffU & VL_SET_I_SVLV(val1));
    val0__Vcvt = (0xffU & VL_SET_I_SVLV(val0));
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), addr__Vcvt, val3__Vcvt, val2__Vcvt, val1__Vcvt, val0__Vcvt);
}

void Vtestharness::tb_writetoSram2(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::tb_writetoSram2\n"); );
    // Init
    IData/*31:0*/ addr__Vcvt;
    addr__Vcvt = 0;
    CData/*7:0*/ val3__Vcvt;
    val3__Vcvt = 0;
    CData/*7:0*/ val2__Vcvt;
    val2__Vcvt = 0;
    CData/*7:0*/ val1__Vcvt;
    val1__Vcvt = 0;
    CData/*7:0*/ val0__Vcvt;
    val0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_writetoSram2");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_tb_writetoSram2_t __Vcb = (Vtestharness__Vcb_tb_writetoSram2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    addr__Vcvt = addr;
    val3__Vcvt = (0xffU & VL_SET_I_SVLV(val3));
    val2__Vcvt = (0xffU & VL_SET_I_SVLV(val2));
    val1__Vcvt = (0xffU & VL_SET_I_SVLV(val1));
    val0__Vcvt = (0xffU & VL_SET_I_SVLV(val0));
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), addr__Vcvt, val3__Vcvt, val2__Vcvt, val1__Vcvt, val0__Vcvt);
}

void Vtestharness::tb_writetoSram3(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::tb_writetoSram3\n"); );
    // Init
    IData/*31:0*/ addr__Vcvt;
    addr__Vcvt = 0;
    CData/*7:0*/ val3__Vcvt;
    val3__Vcvt = 0;
    CData/*7:0*/ val2__Vcvt;
    val2__Vcvt = 0;
    CData/*7:0*/ val1__Vcvt;
    val1__Vcvt = 0;
    CData/*7:0*/ val0__Vcvt;
    val0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_writetoSram3");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_tb_writetoSram3_t __Vcb = (Vtestharness__Vcb_tb_writetoSram3_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    addr__Vcvt = addr;
    val3__Vcvt = (0xffU & VL_SET_I_SVLV(val3));
    val2__Vcvt = (0xffU & VL_SET_I_SVLV(val2));
    val1__Vcvt = (0xffU & VL_SET_I_SVLV(val1));
    val0__Vcvt = (0xffU & VL_SET_I_SVLV(val0));
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), addr__Vcvt, val3__Vcvt, val2__Vcvt, val1__Vcvt, val0__Vcvt);
}

void Vtestharness::tb_writetoSram4(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::tb_writetoSram4\n"); );
    // Init
    IData/*31:0*/ addr__Vcvt;
    addr__Vcvt = 0;
    CData/*7:0*/ val3__Vcvt;
    val3__Vcvt = 0;
    CData/*7:0*/ val2__Vcvt;
    val2__Vcvt = 0;
    CData/*7:0*/ val1__Vcvt;
    val1__Vcvt = 0;
    CData/*7:0*/ val0__Vcvt;
    val0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_writetoSram4");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_tb_writetoSram4_t __Vcb = (Vtestharness__Vcb_tb_writetoSram4_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    addr__Vcvt = addr;
    val3__Vcvt = (0xffU & VL_SET_I_SVLV(val3));
    val2__Vcvt = (0xffU & VL_SET_I_SVLV(val2));
    val1__Vcvt = (0xffU & VL_SET_I_SVLV(val1));
    val0__Vcvt = (0xffU & VL_SET_I_SVLV(val0));
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), addr__Vcvt, val3__Vcvt, val2__Vcvt, val1__Vcvt, val0__Vcvt);
}

void Vtestharness::tb_writetoSram5(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::tb_writetoSram5\n"); );
    // Init
    IData/*31:0*/ addr__Vcvt;
    addr__Vcvt = 0;
    CData/*7:0*/ val3__Vcvt;
    val3__Vcvt = 0;
    CData/*7:0*/ val2__Vcvt;
    val2__Vcvt = 0;
    CData/*7:0*/ val1__Vcvt;
    val1__Vcvt = 0;
    CData/*7:0*/ val0__Vcvt;
    val0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_writetoSram5");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_tb_writetoSram5_t __Vcb = (Vtestharness__Vcb_tb_writetoSram5_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    addr__Vcvt = addr;
    val3__Vcvt = (0xffU & VL_SET_I_SVLV(val3));
    val2__Vcvt = (0xffU & VL_SET_I_SVLV(val2));
    val1__Vcvt = (0xffU & VL_SET_I_SVLV(val1));
    val0__Vcvt = (0xffU & VL_SET_I_SVLV(val0));
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), addr__Vcvt, val3__Vcvt, val2__Vcvt, val1__Vcvt, val0__Vcvt);
}

void Vtestharness::tb_writetoSram6(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::tb_writetoSram6\n"); );
    // Init
    IData/*31:0*/ addr__Vcvt;
    addr__Vcvt = 0;
    CData/*7:0*/ val3__Vcvt;
    val3__Vcvt = 0;
    CData/*7:0*/ val2__Vcvt;
    val2__Vcvt = 0;
    CData/*7:0*/ val1__Vcvt;
    val1__Vcvt = 0;
    CData/*7:0*/ val0__Vcvt;
    val0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_writetoSram6");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_tb_writetoSram6_t __Vcb = (Vtestharness__Vcb_tb_writetoSram6_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    addr__Vcvt = addr;
    val3__Vcvt = (0xffU & VL_SET_I_SVLV(val3));
    val2__Vcvt = (0xffU & VL_SET_I_SVLV(val2));
    val1__Vcvt = (0xffU & VL_SET_I_SVLV(val1));
    val0__Vcvt = (0xffU & VL_SET_I_SVLV(val0));
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), addr__Vcvt, val3__Vcvt, val2__Vcvt, val1__Vcvt, val0__Vcvt);
}

void Vtestharness::tb_writetoSram7(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::tb_writetoSram7\n"); );
    // Init
    IData/*31:0*/ addr__Vcvt;
    addr__Vcvt = 0;
    CData/*7:0*/ val3__Vcvt;
    val3__Vcvt = 0;
    CData/*7:0*/ val2__Vcvt;
    val2__Vcvt = 0;
    CData/*7:0*/ val1__Vcvt;
    val1__Vcvt = 0;
    CData/*7:0*/ val0__Vcvt;
    val0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_writetoSram7");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_tb_writetoSram7_t __Vcb = (Vtestharness__Vcb_tb_writetoSram7_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    addr__Vcvt = addr;
    val3__Vcvt = (0xffU & VL_SET_I_SVLV(val3));
    val2__Vcvt = (0xffU & VL_SET_I_SVLV(val2));
    val1__Vcvt = (0xffU & VL_SET_I_SVLV(val1));
    val0__Vcvt = (0xffU & VL_SET_I_SVLV(val0));
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), addr__Vcvt, val3__Vcvt, val2__Vcvt, val1__Vcvt, val0__Vcvt);
}

void Vtestharness::tb_writetoSram8(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::tb_writetoSram8\n"); );
    // Init
    IData/*31:0*/ addr__Vcvt;
    addr__Vcvt = 0;
    CData/*7:0*/ val3__Vcvt;
    val3__Vcvt = 0;
    CData/*7:0*/ val2__Vcvt;
    val2__Vcvt = 0;
    CData/*7:0*/ val1__Vcvt;
    val1__Vcvt = 0;
    CData/*7:0*/ val0__Vcvt;
    val0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_writetoSram8");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_tb_writetoSram8_t __Vcb = (Vtestharness__Vcb_tb_writetoSram8_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    addr__Vcvt = addr;
    val3__Vcvt = (0xffU & VL_SET_I_SVLV(val3));
    val2__Vcvt = (0xffU & VL_SET_I_SVLV(val2));
    val1__Vcvt = (0xffU & VL_SET_I_SVLV(val1));
    val0__Vcvt = (0xffU & VL_SET_I_SVLV(val0));
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), addr__Vcvt, val3__Vcvt, val2__Vcvt, val1__Vcvt, val0__Vcvt);
}

void Vtestharness::tb_writetoSram9(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::tb_writetoSram9\n"); );
    // Init
    IData/*31:0*/ addr__Vcvt;
    addr__Vcvt = 0;
    CData/*7:0*/ val3__Vcvt;
    val3__Vcvt = 0;
    CData/*7:0*/ val2__Vcvt;
    val2__Vcvt = 0;
    CData/*7:0*/ val1__Vcvt;
    val1__Vcvt = 0;
    CData/*7:0*/ val0__Vcvt;
    val0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_writetoSram9");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_tb_writetoSram9_t __Vcb = (Vtestharness__Vcb_tb_writetoSram9_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    addr__Vcvt = addr;
    val3__Vcvt = (0xffU & VL_SET_I_SVLV(val3));
    val2__Vcvt = (0xffU & VL_SET_I_SVLV(val2));
    val1__Vcvt = (0xffU & VL_SET_I_SVLV(val1));
    val0__Vcvt = (0xffU & VL_SET_I_SVLV(val0));
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), addr__Vcvt, val3__Vcvt, val2__Vcvt, val1__Vcvt, val0__Vcvt);
}

void Vtestharness::tb_set_exit_loop() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::tb_set_exit_loop\n"); );
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_set_exit_loop");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_tb_set_exit_loop_t __Vcb = (Vtestharness__Vcb_tb_set_exit_loop_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()));
}

void Vtestharness::load_flash_hex(const char* firmware_file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness___024root::load_flash_hex\n"); );
    // Init
    static thread_local std::string firmware_file__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("load_flash_hex");
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vtestharness__Vcb_load_flash_hex_t __Vcb = (Vtestharness__Vcb_load_flash_hex_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    firmware_file__Vcvt = VL_CVT_N_CSTR(firmware_file);
    (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), firmware_file__Vcvt);
}
