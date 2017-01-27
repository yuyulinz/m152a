`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:51:04 11/06/2016 
// Design Name: 
// Module Name:    adv_counter 
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
module adv_counter(
    input clk,
    input rst,
    input cnt,
    output [3:0] ones,
    output [3:0] tens,
    output carry
    );
	 
	 
	 wire cnttens;
	 wire onescarry;
	 wire tenscarry;
	 
	 basic_counter #( .Max('d10) ) one (
	     .clk(clk),
		  .rst(rst),
		  .cnt(cnt),
		  .out(ones),
		  .carry(onescarry)
	 );
	 
	 assign cnttens = onescarry & cnt;
	 
	 basic_counter #( .Max('d6) ) ten (
	     .clk(clk),
		  .rst(rst),
		  .cnt(cnttens),
		  .out(tens),
		  .carry(tenscarry)
	 );
	 
	 assign carry = onescarry & tenscarry;


endmodule
