`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:38:31 11/06/2016 
// Design Name: 
// Module Name:    select_mode 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module select_mode(
    input rst,
    input [3:0] mode,
    input adj_clk_2hz,
    input time_clk_1hz,
    output secondsclk,
    output minutesclk,
    output secondscount,
    output minutescount,
	 output mrst
    );

	 assign secondsclk = mode[2] ? adj_clk_2hz : time_clk_1hz;
	 assign minutesclk = mode[3] ? adj_clk_2hz : time_clk_1hz;
	 assign secondscount = mode[0];
	 assign minutescount = mode[1];
    assign mrst = rst;
endmodule
