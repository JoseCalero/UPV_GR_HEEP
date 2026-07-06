//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2023.2 (lin64) Build 4029153 Fri Oct 13 20:13:54 MDT 2023
//Date        : Mon Jul  6 18:30:42 2026
//Host        : MFPDSMBAA1 running 64-bit Ubuntu 22.04.5 LTS
//Command     : generate_target xilinx_clk_wizard_wrapper.bd
//Design      : xilinx_clk_wizard_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module xilinx_clk_wizard_wrapper
   (clk_100MHz,
    clk_out1_0);
  input clk_100MHz;
  output clk_out1_0;

  wire clk_100MHz;
  wire clk_out1_0;

  xilinx_clk_wizard xilinx_clk_wizard_i
       (.clk_100MHz(clk_100MHz),
        .clk_out1_0(clk_out1_0));
endmodule
