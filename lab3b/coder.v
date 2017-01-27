`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:32:18 11/07/2016 
// Design Name: 
// Module Name:    coder 
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
module coder(
    input fclk,
    input [3:0] number,
    output [7:0] code
    );
	 
	 reg [7:0] temp;
	 
	 always @ (posedge fclk) begin
	     temp = 0;
		  case (number)
		      4'b0000: temp = 8'b00111111;
				4'b0001: temp = 8'b00000110;
				4'b0010: temp = 8'b01011011;
				4'b0011: temp = 8'b01001111;
				4'b0100: temp = 8'b01100110;
				4'b0101: temp = 8'b01101101;
				4'b0110: temp = 8'b01111101;
				4'b0111: temp = 8'b00000111;
				4'b1000: temp = 8'b01111111;
				4'b1001: temp = 8'b01101111;
				default: temp = 8'b00000000;
		  endcase
		  temp = ~temp;
	 end
	 
	 assign code = temp;


endmodule
