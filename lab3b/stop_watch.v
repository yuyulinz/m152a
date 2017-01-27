`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:16:16 11/03/2016 
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
    output [3:0] an
    );
	 
	 
	 wire adj_clk_2hz;
	 wire time_clk_1hz;
	 wire blink_clk_5hz;
	 wire fast_clk_50hz;
	 
	 wire srst;
	 wire mrst;
	 wire [3:0] mode;
	 
	 wire [3:0] second1;
	 wire [3:0] second2;
	 wire [3:0] minute1;
	 wire [3:0] minute2;
	 
	 wire secondsclk;
	 wire minutesclk;
	 wire secondscount;
	 wire minutescount;
	 
	 
    split_clk clock(
        .clk(clk),
		  .reset(reset),
        .adj_clk_2hz(adj_clk_2hz),
		  .time_clk_1hz(time_clk_1hz),
		  .blink_clk_5hz(blink_clk_5hz),
		  .fast_clk_50hz(fast_clk_50hz)
    );
	 
	 select_state state (
	     .reset(reset),
		  .pause(pause),
		  .sel(sel),
		  .adj(adj),
		  .clk(clk),
		  .mode(mode),
		  .rst(srst)
	 );
	 
	 select_mode m (
	     .rst(srst),
	     .mode(mode),
		  .adj_clk_2hz(adj_clk_2hz),
		  .time_clk_1hz(time_clk_1hz),
		  .secondsclk(secondsclk),
		  .minutesclk(minutesclk),
		  .secondscount(secondscount),
		  .minutescount(minutescount),
		  .mrst(mrst)
    );
	 
	 counter t (
	     .sclk(secondsclk),
		  .mclk(minutesclk),
		  .scnt(secondscount),
		  .mcnt(minutescount),
		  .rst(mrst),
		  .second1(second1),
		  .second2(second2),
		  .minute1(minute1),
		  .minute2(minute2)
    );
	 
	 display d (
	     .fclk(fast_clock_50hz),
		  .bclk(blink_clk_5hz),
		  .rst(reset),
		  .secondscount(secondscount),
		  .minutescount(minutescount),
		  .second1(second1),
		  .second2(second2),
		  .minute1(minute1),
		  .minute2(minute2),
		  .seg(seg),
		  .an(an)
    );
	 
	 assign m0 = minute1;
	 assign m1 = minute2;
	 assign s0 = second1;
	 assign s1 = second2;
	 
endmodule
