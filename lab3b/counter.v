`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:53:49 11/06/2016 
// Design Name: 
// Module Name:    counter 
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
module counter(
    input sclk,
    input mclk,
    input scnt,
    input mcnt,
	 input rst,
    output [3:0] second1,
    output [3:0] second2,
    output [3:0] minute1,
    output [3:0] minute2
    );

	 wire secondscarry; 
    wire minutescarry;
	 wire mincount;
	 
    adv_counter s (
	     .clk(sclk),
		  .rst(rst),
		  .cnt(scnt),
		  .ones(second1),
		  .tens(second2),
		  .carry(secondscarry)
	 );
	 
	 assign mincount = (secondscarry & scnt & mcnt) | (mcnt & ~scnt);
	 
	 adv_counter m (
	     .clk(mclk),
		  .rst(rst),
		  .cnt(mincount),
		  .ones(minute1),
		  .tens(minute2),
		  .carry(minutescarry)
	 );
    

endmodule
