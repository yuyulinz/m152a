`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:48:26 11/17/2016 
// Design Name: 
// Module Name:    elevator 
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
module elevator(
    input [7:0] sw,
    input add,
    input rem,
    input close,
    input clk,
    output [3:0] an,
    output [7:0] seg,
    output [3:0] floor_out,
    output [2:0] people_out,
    output dir_out,
    output door_out
    );
	 
	 wire [2:0] floor;
	 wire [2:0] people;
	 wire [7:0] buttons;
	 wire dir;
	 wire door;
	 
	 wire clk_2hz;
	 wire clk_1hz;
	 wire clk_5hz;
	 wire clk_500hz;
	 
	 clk_split split1(
	 .clk(clk),
	 .clk_500hz(clk_500hz),
	 .clk_1hz(clk_1hz),
	 .clk_2hz(clk_2hz),
	 .clk_5hz(clk_5hz)
	 );
	
	 state s1(
	 .sw(buttons),
	 .close(close),
	 .clk(clk_500hz),
	 .floor(floor),
	 .dir(dir),
	 .door(door)
	 );
	 
	 floor_buttons fb1(
		.sw(sw),
		.clk(clk_500hz),
		.floor(floor),
		.swout(buttons)
	 );
	 
	 
	
	
endmodule
