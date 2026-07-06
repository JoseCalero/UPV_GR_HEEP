set_property SRC_FILE_INFO {cfile:/home/mfpdsmbaa/LabCatreda/GR-HEEP/hw/fpga/constraints/nexys/pin_assign.xdc rfile:../../../../../../hw/fpga/constraints/nexys/pin_assign.xdc id:1} [current_design]
set_property SRC_FILE_INFO {cfile:/home/mfpdsmbaa/LabCatreda/GR-HEEP/hw/fpga/constraints/common/spi_slave.xdc rfile:../../../../../../hw/fpga/constraints/common/spi_slave.xdc id:2} [current_design]
set_property SRC_FILE_INFO {cfile:/home/mfpdsmbaa/LabCatreda/GR-HEEP/hw/fpga/constraints/common/jtag.xdc rfile:../../../../../../hw/fpga/constraints/common/jtag.xdc id:3} [current_design]
set_property SRC_FILE_INFO {cfile:/home/mfpdsmbaa/LabCatreda/GR-HEEP/hw/fpga/constraints/common/sync.xdc rfile:../../../../../../hw/fpga/constraints/common/sync.xdc id:4} [current_design]
set_property src_info {type:XDC file:1 line:6 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN E3 IOSTANDARD LVCMOS33} [get_ports {clk_i}]; #IO_L12P_T1_MRCC_35 Sch=clk100mhz
set_property src_info {type:XDC file:1 line:9 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN C12 IOSTANDARD LVCMOS33} [get_ports {rst_i}]; #IO_L3P_T0_DQS_AD1P_15 Sch=cpu_resetn
set_property src_info {type:XDC file:1 line:12 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN V11 IOSTANDARD LVCMOS33} [get_ports {rst_led_o}];
set_property src_info {type:XDC file:1 line:13 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN J13 IOSTANDARD LVCMOS33} [get_ports {clk_led_o}];
set_property src_info {type:XDC file:1 line:14 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN N14 IOSTANDARD LVCMOS33} [get_ports {exit_valid_o}];
set_property src_info {type:XDC file:1 line:15 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN R18 IOSTANDARD LVCMOS33} [get_ports {exit_value_o}];
set_property src_info {type:XDC file:1 line:16 export:INPUT save:INPUT read:READ} [current_design]
set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets clk_led_o_OBUF]
set_property src_info {type:XDC file:1 line:17 export:INPUT save:INPUT read:READ} [current_design]
set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets rst_led_o_OBUF]
set_property src_info {type:XDC file:1 line:20 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN L16 IOSTANDARD LVCMOS33} [get_ports {execute_from_flash_i}]; #Sch=sw[1]
set_property src_info {type:XDC file:1 line:21 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN M13 IOSTANDARD LVCMOS33} [get_ports {boot_select_i}]; #Sch=sw[2]
set_property src_info {type:XDC file:1 line:24 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN J15 IOSTANDARD LVCMOS33} [get_ports {jtag_trst_ni}]; #IO_L24N_T3_RS0_15 Sch=sw[0]
set_property src_info {type:XDC file:1 line:28 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN C17 IOSTANDARD LVCMOS33} [get_ports {spi_flash_csb_o}]; #IO_L20N_T3_A19_15 Sch=ja[1]
set_property src_info {type:XDC file:1 line:29 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN D18 IOSTANDARD LVCMOS33} [get_ports {spi_flash_sck_o}]; #IO_L21N_T3_DQS_A18_15 Sch=ja[2]
set_property src_info {type:XDC file:1 line:30 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN E18 IOSTANDARD LVCMOS33} [get_ports {spi_flash_sd_io[0]}]; #IO_L21P_T3_DQS_15 Sch=ja[3]
set_property src_info {type:XDC file:1 line:31 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN G17 IOSTANDARD LVCMOS33} [get_ports {spi_flash_sd_io[1]}]; #IO_L18N_T2_A23_15 Sch=ja[4]
set_property src_info {type:XDC file:1 line:32 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN D17 IOSTANDARD LVCMOS33} [get_ports {spi_flash_sd_io[2]}]; #IO_L16N_T2_A27_15 Sch=ja[7]
set_property src_info {type:XDC file:1 line:33 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN E17 IOSTANDARD LVCMOS33} [get_ports {spi_flash_sd_io[3]}]; #IO_L16P_T2_A28_15 Sch=ja[8]
set_property src_info {type:XDC file:1 line:38 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN K1 IOSTANDARD LVCMOS33} [get_ports {spi_csb_o}]; #IO_L23N_T3_35 Sch=jc[1]
set_property src_info {type:XDC file:1 line:39 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN F6 IOSTANDARD LVCMOS33} [get_ports {spi_sck_o}]; #IO_L19N_T3_VREF_35 Sch=jc[2]
set_property src_info {type:XDC file:1 line:40 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN J2 IOSTANDARD LVCMOS33} [get_ports {spi_sd_io[0]}]; #IO_L22N_T3_35 Sch=jc[3]
set_property src_info {type:XDC file:1 line:41 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN G6 IOSTANDARD LVCMOS33} [get_ports {spi_sd_io[1]}]; #IO_L19P_T3_35 Sch=jc[4]
set_property src_info {type:XDC file:1 line:42 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN E7 IOSTANDARD LVCMOS33} [get_ports {spi_sd_io[2]}]; #IO_L6P_T0_35 Sch=jc[7]
set_property src_info {type:XDC file:1 line:43 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN J3 IOSTANDARD LVCMOS33} [get_ports {spi_sd_io[3]}]; #IO_L22P_T3_35 Sch=jc[8]
set_property src_info {type:XDC file:1 line:48 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN C4 IOSTANDARD LVCMOS33} [get_ports {uart_rx_i}]; #IO_L7P_T1_AD6P_35 Sch=uart_txd_in
set_property src_info {type:XDC file:1 line:49 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN D4 IOSTANDARD LVCMOS33} [get_ports {uart_tx_o}]; #IO_L11N_T1_SRCC_35 Sch=uart_rxd_out
set_property src_info {type:XDC file:1 line:56 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN E16 IOSTANDARD LVCMOS33} [get_ports {jtag_tms_i}]; #IO_L11N_T1_SRCC_15 Sch=jb[7]
set_property src_info {type:XDC file:1 line:57 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN F13 IOSTANDARD LVCMOS33} [get_ports {jtag_tdi_i}]; #IO_L5P_T0_AD9P_15 Sch=jb[8]
set_property src_info {type:XDC file:1 line:58 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN G13 IOSTANDARD LVCMOS33} [get_ports {jtag_tdo_o}]; #IO_0_15 Sch=jb[9]
set_property src_info {type:XDC file:1 line:59 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN H16 IOSTANDARD LVCMOS33} [get_ports {jtag_tck_i}]; #IO_L13P_T2_MRCC_15 Sch=jb[10]
set_property src_info {type:XDC file:1 line:62 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN V17 IOSTANDARD LVCMOS33} [get_ports {spi2_sd_io[1]}];
set_property src_info {type:XDC file:1 line:63 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN U17 IOSTANDARD LVCMOS33} [get_ports {spi2_sd_io[2]}];
set_property src_info {type:XDC file:1 line:64 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN U16 IOSTANDARD LVCMOS33} [get_ports {spi2_sd_io[3]}];
set_property src_info {type:XDC file:1 line:65 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN V16 IOSTANDARD LVCMOS33} [get_ports {i2c_scl_io}];
set_property src_info {type:XDC file:1 line:66 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN T15 IOSTANDARD LVCMOS33} [get_ports {i2c_sda_io}];
set_property src_info {type:XDC file:1 line:67 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN U14 IOSTANDARD LVCMOS33} [get_ports {gpio_io[5]}];
set_property src_info {type:XDC file:1 line:68 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN T16 IOSTANDARD LVCMOS33} [get_ports {gpio_io[6]}];
set_property src_info {type:XDC file:1 line:69 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN V15 IOSTANDARD LVCMOS33} [get_ports {gpio_io[7]}];
set_property src_info {type:XDC file:1 line:70 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN V14 IOSTANDARD LVCMOS33} [get_ports {gpio_io[8]}];
set_property src_info {type:XDC file:1 line:71 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN V12 IOSTANDARD LVCMOS33} [get_ports {gpio_io[9]}];
set_property src_info {type:XDC file:1 line:72 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN H17 IOSTANDARD LVCMOS33} [get_ports {gpio_io[10]}];
set_property src_info {type:XDC file:1 line:75 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN N17 IOSTANDARD LVCMOS33} [get_ports {gpio_io[0]}]; #IO_L9P_T1_DQS_14 Sch=btnc
set_property src_info {type:XDC file:1 line:76 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN M18 IOSTANDARD LVCMOS33} [get_ports {gpio_io[1]}]; #IO_L4N_T0_D05_14 Sch=btnu
set_property src_info {type:XDC file:1 line:77 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN P17 IOSTANDARD LVCMOS33} [get_ports {gpio_io[2]}]; #IO_L12P_T1_MRCC_14 Sch=btnl
set_property src_info {type:XDC file:1 line:78 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN M17 IOSTANDARD LVCMOS33} [get_ports {gpio_io[3]}]; #IO_L10N_T1_D15_14 Sch=btnr
set_property src_info {type:XDC file:1 line:79 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict {PACKAGE_PIN P18 IOSTANDARD LVCMOS33} [get_ports {gpio_io[4]}]; #IO_L9N_T1_DQS_D13_14 Sch=btnd
set_property src_info {type:XDC file:1 line:82 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN T10 IOSTANDARD LVCMOS33} [get_ports { spi_slave_sck_io }];
set_property src_info {type:XDC file:1 line:83 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN R10 IOSTANDARD LVCMOS33} [get_ports { spi_slave_cs_io }];
set_property src_info {type:XDC file:1 line:84 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN K16 IOSTANDARD LVCMOS33} [get_ports { spi_slave_miso_io }];
set_property src_info {type:XDC file:1 line:85 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN K13 IOSTANDARD LVCMOS33} [get_ports { spi_slave_mosi_io }];
set_property src_info {type:XDC file:1 line:86 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN P15 IOSTANDARD LVCMOS33} [get_ports { pdm2pcm_clk_io }];
set_property src_info {type:XDC file:1 line:87 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN T11 IOSTANDARD LVCMOS33} [get_ports { pdm2pcm_pdm_io }];
set_property src_info {type:XDC file:1 line:88 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN L18 IOSTANDARD LVCMOS33} [get_ports { i2s_sck_io }];
set_property src_info {type:XDC file:1 line:89 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN H15 IOSTANDARD LVCMOS33} [get_ports { i2s_ws_io }];
set_property src_info {type:XDC file:1 line:90 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN U13 IOSTANDARD LVCMOS33} [get_ports { i2s_sd_io }];
set_property src_info {type:XDC file:1 line:91 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN J17   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[13] }]; #IO_L23P_T3_FOE_B_15 Sch=an[0]
set_property src_info {type:XDC file:1 line:92 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN J18   IOSTANDARD LVCMOS33 } [get_ports { gpio_io[12] }]; #IO_L23N_T3_FWE_B_15 Sch=an[1]
set_property src_info {type:XDC file:1 line:93 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN T9    IOSTANDARD LVCMOS33 } [get_ports { gpio_io[11] }]; #IO_L24P_T3_A01_D17_14 Sch=an[2]
set_property src_info {type:XDC file:1 line:94 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN J14   IOSTANDARD LVCMOS33 } [get_ports { spi2_csb_o[0] }]; #IO_L19P_T3_A22_15 Sch=an[3]
set_property src_info {type:XDC file:1 line:95 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN P14   IOSTANDARD LVCMOS33 } [get_ports { spi2_csb_o[1] }]; #IO_L8N_T1_D12_14 Sch=an[4]
set_property src_info {type:XDC file:1 line:96 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN T14   IOSTANDARD LVCMOS33 } [get_ports { spi2_sck_o }]; #IO_L14P_T2_SRCC_14 Sch=an[5]
set_property src_info {type:XDC file:1 line:97 export:INPUT save:INPUT read:READ} [current_design]
set_property -dict { PACKAGE_PIN K2    IOSTANDARD LVCMOS33 } [get_ports { spi2_sd_io[0] }]; #IO_L23P_T3_35 Sch=an[6]
set_property src_info {type:XDC file:1 line:100 export:INPUT save:INPUT read:READ} [current_design]
set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets jtag_tck_i_IBUF]
set_property src_info {type:XDC file:2 line:4 export:INPUT save:INPUT read:READ} [current_design]
set_case_analysis 0 gr_heep_i/pad_control_i/pad_control_reg_top_i/u_pad_mux_spi_slave_mosi/q_reg[*]/Q
set_property src_info {type:XDC file:2 line:5 export:INPUT save:INPUT read:READ} [current_design]
set_case_analysis 0 gr_heep_i/pad_control_i/pad_control_reg_top_i/u_pad_mux_spi_slave_miso/q_reg[*]/Q
set_property src_info {type:XDC file:2 line:6 export:INPUT save:INPUT read:READ} [current_design]
set_case_analysis 0 gr_heep_i/pad_control_i/pad_control_reg_top_i/u_pad_mux_spi_slave_sck/q_reg[*]/Q
set_property src_info {type:XDC file:2 line:7 export:INPUT save:INPUT read:READ} [current_design]
set_case_analysis 0 gr_heep_i/pad_control_i/pad_control_reg_top_i/u_pad_mux_spi_slave_cs/q_reg[*]/Q
set_property src_info {type:XDC file:2 line:22 export:INPUT save:INPUT read:READ} [current_design]
set_false_path -from  gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_slave_sm/u_spiregs/reg2_reg[*]/C -to gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_obiplug/FSM_sequential_OBI_CS_reg[*]/D
set_property src_info {type:XDC file:2 line:25 export:INPUT save:INPUT read:READ} [current_design]
set_false_path -from  gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_slave_sm/u_spiregs/reg1_reg[*]/C -to gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_obiplug/FSM_sequential_OBI_CS_reg[*]/D
set_property src_info {type:XDC file:2 line:52 export:INPUT save:INPUT read:READ} [current_design]
set_false_path -from  gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_slave_sm/FSM_sequential_state_reg[*]/C -to gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_syncro/rdwr_reg_reg[*]/D
set_property src_info {type:XDC file:2 line:62 export:INPUT save:INPUT read:READ} [current_design]
set_max_delay -datapath_only -from gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_dcfifo_tx/i_cdc_fifo_gray/i_src/wptr_q_reg[*]/C -to gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_dcfifo_tx/i_cdc_fifo_gray/i_dst/gen_sync[*].i_sync/reg_q_reg[0]/D 5.00
set_property src_info {type:XDC file:2 line:65 export:INPUT save:INPUT read:READ} [current_design]
set_max_delay -datapath_only -from gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_dcfifo_tx/i_cdc_fifo_gray/i_src/gen_word[*].data_q_reg[*][*]/C -to gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_dcfifo_tx/i_cdc_fifo_gray/i_dst/i_spill_register/spill_register_flushable_i/gen_spill_reg.a_data_q_reg[*]/D 5.00
set_property src_info {type:XDC file:2 line:68 export:INPUT save:INPUT read:READ} [current_design]
set_max_delay -datapath_only -from gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_dcfifo_tx/i_cdc_fifo_gray/i_dst/rptr_q_reg[*]/C -to gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_dcfifo_tx/i_cdc_fifo_gray/i_src/gen_sync[*].i_sync/reg_q_reg[0]/D 5.00
set_property src_info {type:XDC file:2 line:72 export:INPUT save:INPUT read:READ} [current_design]
set_max_delay -datapath_only -from gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_dcfifo_rx/i_cdc_fifo_gray/i_src/wptr_q_reg[*]/C -to gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_dcfifo_rx/i_cdc_fifo_gray/i_dst/gen_sync[*].i_sync/reg_q_reg[0]/D 5.00
set_property src_info {type:XDC file:2 line:75 export:INPUT save:INPUT read:READ} [current_design]
set_max_delay -datapath_only -from gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_dcfifo_rx/i_cdc_fifo_gray/i_src/gen_word[*].data_q_reg[*][*]/C -to gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_dcfifo_rx/i_cdc_fifo_gray/i_dst/i_spill_register/spill_register_flushable_i/gen_spill_reg.a_data_q_reg[*]/D 5.00
set_property src_info {type:XDC file:2 line:78 export:INPUT save:INPUT read:READ} [current_design]
set_max_delay -datapath_only -from gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_dcfifo_rx/i_cdc_fifo_gray/i_dst/rptr_q_reg[*]/C -to gr_heep_i/core_v_mini_mcu_i/debug_subsystem_i/gen_spi_slave.obi_spi_slave_i/u_dcfifo_rx/i_cdc_fifo_gray/i_src/gen_sync[*].i_sync/reg_q_reg[0]/D 5.00
set_property src_info {type:XDC file:3 line:3 export:INPUT save:INPUT read:READ} [current_design]
set_false_path -hold -through [get_nets -filter {NAME=~"*async*"} -of_objects [get_cells -hier -filter {REF_NAME =~ cdc_2phase_src* || ORIG_REF_NAME =~ cdc_2phase_src*}]]
set_property src_info {type:XDC file:3 line:9 export:INPUT save:INPUT read:READ} [current_design]
foreach cell $all_cdc4pahse_srcs {
set_max_delay -through [get_nets -filter {NAME=~"*data_src_q*"} $cell/*] 20.000
set_false_path -hold -through [get_nets -filter {NAME=~"*data_src_q*"} $cell/*]
set_max_delay -through [get_nets -filter {NAME=~"*req_src_q*"} $cell/*] 20.000
set_false_path -hold -through [get_nets -filter {NAME=~"*req_src_q*"} $cell/*]
}
set_property src_info {type:XDC file:4 line:5 export:INPUT save:INPUT read:READ} [current_design]
foreach cell $all_sync_cells {
set_max_delay -through [get_pins -filter {NAME=~"*reg_q_reg[0]/D"} -of_objects [get_cells $cell/*]] 20.000
set_false_path -hold -through [get_pins -filter {NAME=~"*reg_q_reg[0]/D"} -of_objects [get_cells $cell/*]]
}
