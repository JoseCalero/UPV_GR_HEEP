// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vtestharness::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vtestharness__Dpi.h"
#include "Vtestharness.h"

#ifndef VL_DPIDECL_load_flash_hex_
#define VL_DPIDECL_load_flash_hex_
void load_flash_hex(const char* firmware_file) {
    // DPI export at ../../../tb/tb_util.svh:348:6
    return Vtestharness::load_flash_hex(firmware_file);
}
#endif

#ifndef VL_DPIDECL_simutil_get_scramble_key_
#define VL_DPIDECL_simutil_get_scramble_key_
int simutil_get_scramble_key(svBitVecVal* val) {
    // DPI export at ../../../hw/vendor/x-heep/hw/vendor/openhwgroup_cv32e20/rtl/cve2_if_stage.sv:189:28
    return Vtestharness::simutil_get_scramble_key(val);
}
#endif

#ifndef VL_DPIDECL_simutil_get_scramble_nonce_
#define VL_DPIDECL_simutil_get_scramble_nonce_
int simutil_get_scramble_nonce(svBitVecVal* nonce) {
    // DPI export at ../../../hw/vendor/x-heep/hw/vendor/openhwgroup_cv32e20/rtl/cve2_if_stage.sv:192:28
    return Vtestharness::simutil_get_scramble_nonce(nonce);
}
#endif

#ifndef VL_DPIDECL_tb_getMemSize_
#define VL_DPIDECL_tb_getMemSize_
void tb_getMemSize(int* mem_size) {
    // DPI export at ../../../tb/tb_util.svh:27:6
    return Vtestharness::tb_getMemSize(mem_size);
}
#endif

#ifndef VL_DPIDECL_tb_loadHEX_
#define VL_DPIDECL_tb_loadHEX_
void tb_loadHEX(const char* file) {
    // DPI export at ../../../tb/tb_util.svh:38:6
    return Vtestharness::tb_loadHEX(file);
}
#endif

#ifndef VL_DPIDECL_tb_readHEX_
#define VL_DPIDECL_tb_readHEX_
void tb_readHEX(const char* file, svLogicVecVal* stimuli) {
    // DPI export at ../../../tb/tb_util.svh:32:6
    return Vtestharness::tb_readHEX(file, stimuli);
}
#endif

#ifndef VL_DPIDECL_tb_set_exit_loop_
#define VL_DPIDECL_tb_set_exit_loop_
void tb_set_exit_loop() {
    // DPI export at ../../../tb/tb_util.svh:338:6
    return Vtestharness::tb_set_exit_loop();
}
#endif

#ifndef VL_DPIDECL_tb_writetoSram0_
#define VL_DPIDECL_tb_writetoSram0_
void tb_writetoSram0(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    // DPI export at ../../../tb/tb_util.svh:157:6
    return Vtestharness::tb_writetoSram0(addr, val3, val2, val1, val0);
}
#endif

#ifndef VL_DPIDECL_tb_writetoSram1_
#define VL_DPIDECL_tb_writetoSram1_
void tb_writetoSram1(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    // DPI export at ../../../tb/tb_util.svh:175:6
    return Vtestharness::tb_writetoSram1(addr, val3, val2, val1, val0);
}
#endif

#ifndef VL_DPIDECL_tb_writetoSram2_
#define VL_DPIDECL_tb_writetoSram2_
void tb_writetoSram2(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    // DPI export at ../../../tb/tb_util.svh:193:6
    return Vtestharness::tb_writetoSram2(addr, val3, val2, val1, val0);
}
#endif

#ifndef VL_DPIDECL_tb_writetoSram3_
#define VL_DPIDECL_tb_writetoSram3_
void tb_writetoSram3(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    // DPI export at ../../../tb/tb_util.svh:211:6
    return Vtestharness::tb_writetoSram3(addr, val3, val2, val1, val0);
}
#endif

#ifndef VL_DPIDECL_tb_writetoSram4_
#define VL_DPIDECL_tb_writetoSram4_
void tb_writetoSram4(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    // DPI export at ../../../tb/tb_util.svh:229:6
    return Vtestharness::tb_writetoSram4(addr, val3, val2, val1, val0);
}
#endif

#ifndef VL_DPIDECL_tb_writetoSram5_
#define VL_DPIDECL_tb_writetoSram5_
void tb_writetoSram5(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    // DPI export at ../../../tb/tb_util.svh:247:6
    return Vtestharness::tb_writetoSram5(addr, val3, val2, val1, val0);
}
#endif

#ifndef VL_DPIDECL_tb_writetoSram6_
#define VL_DPIDECL_tb_writetoSram6_
void tb_writetoSram6(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    // DPI export at ../../../tb/tb_util.svh:265:6
    return Vtestharness::tb_writetoSram6(addr, val3, val2, val1, val0);
}
#endif

#ifndef VL_DPIDECL_tb_writetoSram7_
#define VL_DPIDECL_tb_writetoSram7_
void tb_writetoSram7(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    // DPI export at ../../../tb/tb_util.svh:283:6
    return Vtestharness::tb_writetoSram7(addr, val3, val2, val1, val0);
}
#endif

#ifndef VL_DPIDECL_tb_writetoSram8_
#define VL_DPIDECL_tb_writetoSram8_
void tb_writetoSram8(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    // DPI export at ../../../tb/tb_util.svh:301:6
    return Vtestharness::tb_writetoSram8(addr, val3, val2, val1, val0);
}
#endif

#ifndef VL_DPIDECL_tb_writetoSram9_
#define VL_DPIDECL_tb_writetoSram9_
void tb_writetoSram9(int addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    // DPI export at ../../../tb/tb_util.svh:319:6
    return Vtestharness::tb_writetoSram9(addr, val3, val2, val1, val0);
}
#endif

