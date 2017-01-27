`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:01:23 11/03/2016 
// Design Name: 
// Module Name:    stop_watch 
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
module stop_watch(
    input reset,
    input pause,
    input sel, 		//0: minutes 1: seconds
    input adj,	      //0: normal  1: 2hz
    input clk,
    output [3:0] m0,
    output [3:0] m1,
    output [3:0] s0,
    output [3:0] s1,
    output [7:0] seg,
    output [3:0] ad
    );
	 
	 
	 wire adj_clk_2hz;
	 wire time_clk_1hz;
	 wire blink_clk_5hz;
	 wire fast_clk_50hz;
	 
    split_clock clock (
        .clk(clk),
		  .reset(reset),
        .adj_clk_2hz(adj_clk_2hz),
		  .time_clk_1hz(time_clk_1hz),
		  .blink_clk_5hz(blink_clk_5hz),
		  .fast_clk_50hz(fast_clk_50hz)
    );

    

endmodule
