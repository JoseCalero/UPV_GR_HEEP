// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_spi_host__Tz2_TBz3.h"

extern const VlUnpacked<CData/*0:0*/, 8> Vtestharness__ConstPool__TABLE_h86359c3a_0;

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host__0(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8;
    u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8 = 0;
    CData/*2:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0xfffffffffULL & (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlSelfRef.__PVT__tx_valid_checked))
                                         ? vlSelfRef.__PVT__u_data_fifos__DOT__tx_data_be
                                         : ((0xa1fU 
                                             >= (0xfffU 
                                                 & ((IData)(0x24U) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                             ? (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 (((IData)(0x23U) 
                                                                   + 
                                                                   (0xfffU 
                                                                    & ((IData)(0x24U) 
                                                                       * 
                                                                       (0x7fU 
                                                                        & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x24U) 
                                                       * 
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x24U) 
                                                       * 
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x24U) 
                                                         * 
                                                         (0x7fU 
                                                          & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     (((IData)(0x1fU) 
                                                                       + 
                                                                       (0xfffU 
                                                                        & ((IData)(0x24U) 
                                                                           * 
                                                                           (0x7fU 
                                                                            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x24U) 
                                                          * 
                                                          (0x7fU 
                                                           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                      (0x7fU 
                                                                       & (((IData)(0x24U) 
                                                                           * 
                                                                           (0x7fU 
                                                                            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x24U) 
                                                          * 
                                                          (0x7fU 
                                                           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                             : vlSelfRef.u_data_fifos__DOT__u_tx_fifo__DOT____Vxrand___0))));
    vlSelfRef.__PVT__core_command = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__empty)
                                      ? 0ULL : (0x1fffffffffffffffULL 
                                                & (((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                    & (0U 
                                                       != 
                                                       (0xfU 
                                                        & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))))
                                                    ? vlSelfRef.__PVT__command
                                                    : 
                                                   ((0xf3U 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(0x3dU) 
                                                         * 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                      (((IData)(0x3cU) 
                                                                        + 
                                                                        (0xffU 
                                                                         & ((IData)(0x3dU) 
                                                                            * 
                                                                            (3U 
                                                                             & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x3dU) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x40U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x3dU) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x3dU) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                          (((IData)(0x1fU) 
                                                                            + 
                                                                            (0xffU 
                                                                             & ((IData)(0x3dU) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x3dU) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                           (7U 
                                                                            & (((IData)(0x3dU) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                               >> 5U))])) 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x3dU) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                                     : vlSelfRef.u_cmd_queue__DOT__cmd_fifo__DOT____Vxrand___0))));
    if (vlSelfRef.__PVT__core_command_valid) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active 
            = (((1U & (IData)((vlSelfRef.__PVT__core_command 
                               >> 0x3cU))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q))
                ? 4U : 2U);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle 
            = ((((1U & (IData)(vlSelfRef.__PVT__core_command)) 
                 != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q)) 
                | (((1U & (IData)((vlSelfRef.__PVT__core_command 
                                   >> 1U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)) 
                   | (((1U & (IData)((vlSelfRef.__PVT__core_command 
                                      >> 2U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q)) 
                      | (((0xfU & (IData)((vlSelfRef.__PVT__core_command 
                                           >> 0xbU))) 
                          != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q)) 
                         | (((0xfU & (IData)((vlSelfRef.__PVT__core_command 
                                              >> 3U))) 
                             != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q)) 
                            | (((0xfU & (IData)((vlSelfRef.__PVT__core_command 
                                                 >> 7U))) 
                                != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q)) 
                               | ((0xffffU & (IData)(
                                                     (vlSelfRef.__PVT__core_command 
                                                      >> 0xfU))) 
                                  != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q))))))))
                ? 6U : 1U);
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active = 7U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle = 0U;
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__core_command_valid))) 
           || ((1U & (IData)((vlSelfRef.__PVT__core_command 
                              >> 0x3cU))) == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 0U;
    if ((1U & (~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)))) {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgExtracted_h5b8f7692__0)))) {
                        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q) {
                            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                        }
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 1U;
            }
        }
    }
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 0U;
    } else if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                    = ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                        ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                        : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                            ? 1U : 6U));
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle;
                }
            } else if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                = ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                    ? ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgExtracted_h5b8f7692__0)
                        ? 2U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)
                                 ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                                 : 4U)) : 3U);
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 3U;
            }
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle;
        }
    }
    __Vtableidx12 = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d 
        = Vtestharness__ConstPool__TABLE_h86359c3a_0
        [__Vtableidx12];
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q) 
           != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int) 
           & (IData)(vlSelfRef.__PVT__core_command_valid));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0_q) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
    u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x3cU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol 
            = (1U & (IData)(vlSelfRef.__PVT__core_command));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x1fU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv 
            = (0xffffU & (IData)((vlSelfRef.__PVT__core_command 
                                  >> 0xfU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d 
            = (0xffffffU & (IData)((vlSelfRef.__PVT__core_command 
                                    >> 0x20U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle 
            = (0xfU & (IData)((vlSelfRef.__PVT__core_command 
                               >> 0xbU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead 
            = (0xfU & (IData)((vlSelfRef.__PVT__core_command 
                               >> 7U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail 
            = (0xfU & (IData)((vlSelfRef.__PVT__core_command 
                               >> 3U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x38U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d 
            = (3U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x3aU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 2U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x39U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 1U)));
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv 
            = (0xffffU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d 
            = (0xffffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle 
            = (0xfU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead 
            = (0xfU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail 
            = (0xfU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d 
            = (3U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q));
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0 
        = ((IData)(u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8) 
           & ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
              & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0 
        = ((IData)(u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8) 
           & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
              & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0 
        = ((IData)(u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8) 
           & ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
              | ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                 & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d = 0U;
    } else {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                = (0xffffffU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command_cpha1)
                                 ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q
                                 : (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                                    - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1))));
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d 
                = (0xfU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing)
                            ? ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                ? ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                    ? ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                        ? 0U : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle))
                                    : ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                        ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle)
                                        : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail)))
                                : ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                    ? 0U : ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                             ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead)
                                             : 0U)))
                            : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                                ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q) 
                                        - (IData)(1U)))));
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                = (0xffffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q);
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d 
                = (0xfU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q));
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d 
            = (0xffffU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_en)
                           ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle)
                               ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command)
                                        ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv)
                                        : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q))
                                            ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv)
                                            : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q) 
                                               - (IData)(1U)))))
                           : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)));
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d)) 
               & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d))))) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 1U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 7U;
        } else if ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 2U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 6U;
        } else if ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 4U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 4U;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 1U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_host_fsm.sv:405: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.spi2_host.u_spi_core.u_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d));
                    VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host_fsm.sv", 405, "");
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha) {
        vlSelfRef.__PVT__u_spi_core__DOT__speed = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__speed_cpha1;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting 
            = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0_q) 
               & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting 
            = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0_q) 
               & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__speed = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0;
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
             ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1)
             : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0)) 
           & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1)
               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q)));
    vlSelfRef.cio_sd_o = (0xfU & ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                   ? (1U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                            >> 7U))
                                   : ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                       ? (3U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                                >> 6U))
                                       : ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                           ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                              >> 4U)
                                           : 0U))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)
            ? 0U : (0xffffffU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en)
                                  ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command)
                                      ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d
                                      : (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                                         - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0)))
                                  : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q)));
    if ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q))) {
        vlSelfRef.__PVT__sd_en_core = 0U;
    } else {
        vlSelfRef.__PVT__sd_en_core = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                        ? 1U : (0xfU 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                                    ? 
                                                   (3U 
                                                    & (- (IData)((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q))))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                                     ? 
                                                    (- (IData)((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q)))
                                                     : 0U))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U 
                                                 == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)) 
                                                << 2U) 
                                               | (((1U 
                                                    == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)) 
                                                   << 1U) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)))))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_host_fsm.sv:567: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.spi2_host.u_spi_core.u_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed));
                    VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host_fsm.sv", 567, "");
                }
            }
        }
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)
            ? 0U : (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en)
                           ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting)
                               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit)
                               : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting)
                                   ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q) 
                                      - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size))
                                   : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)))
                           : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__wr_data 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__rd_ready)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d));
    vlSelfRef.cio_sd_en_o = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q)
                              ? (IData)(vlSelfRef.__PVT__sd_en_core)
                              : 0U);
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__wr_data 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_valid_sr)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__wr_data) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__wr_data));
    vlSelfRef.__PVT__u_spi_core__DOT__shift_en = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                                                  & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting));
    vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_h929d5760_0_4 
        = (((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
            & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__rd_ready));
    vlSelfRef.__PVT__u_spi_core__DOT__tx_ready_sr = 
        ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
         & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_d 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & ((IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_h929d5760_0_4) 
              | ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming)) 
                 & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_ready 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_ready_sr) 
           | ((~ (IData)((vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
                          >> 8U))) & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_valid)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_valid) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_ready));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_data 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_ready) 
            & (1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_data) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d = 0ULL;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data)));
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__load_data) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d = 4U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d 
                = (((QData)((IData)((((0x20000U & ((IData)(
                                                           (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                            >> 3U)) 
                                                   << 0x11U)) 
                                      | (0x1fe00U & 
                                         ((IData)((vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                   >> 0x1cU)) 
                                          << 9U))) 
                                     | ((0x100U & ((IData)(
                                                           (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                            >> 2U)) 
                                                   << 8U)) 
                                        | (0xffU & (IData)(
                                                           (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                            >> 0x14U))))))) 
                    << 0x12U) | (QData)((IData)((((0x20000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                               >> 1U)) 
                                                      << 0x11U)) 
                                                  | (0x1fe00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                                 >> 0xcU)) 
                                                        << 9U))) 
                                                 | ((0x100U 
                                                     & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                                  >> 4U))))))));
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d 
                = (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q) 
                         - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data)));
            vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q;
        }
    }
}

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host__1(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cio_sd_i = ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__spi2_sd_3_in_x) 
                            << 3U) | ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__spi2_sd_2_in_x) 
                                      << 2U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__spi2_sd_1_in_x) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__spi2_sd_0_in_x)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc)
            ? (IData)(vlSelfRef.cio_sd_i) : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted 
        = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
            ? ((0xfeU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                         << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits) 
                                          >> 1U))) : 
           ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
             ? ((0xfcU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                          << 2U)) | (3U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits)))
             : ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                 ? ((0xf0U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                              << 4U)) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits))
                 : 0U)));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d = 0U;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d 
            = (((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc)
                    ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2)
                    : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q)))
                ? (IData)(vlSelfRef.cio_sd_i) : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_h929d5760_0_4)
                ? ((((0U == ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                              ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q
                              : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q)) 
                     & (IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_h929d5760_0_4)) 
                    << 8U) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted))
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d 
            = (0xffU & (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_valid_sr) 
                         & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_ready_sr))
                         ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted)
                         : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__shift_en)
                             ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted)
                             : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q))));
    }
}
