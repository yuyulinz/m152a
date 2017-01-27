`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:45:48 11/06/2016 
// Design Name: 
// Module Name:    basic_counter 
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
module basic_counter #(parameter [31:0] Max = 'd10)(
    input clk,
    input rst,
    input cnt,
    output [3:0] out,
    output carry
    );

    reg [31:0] count = 0;
	 
	 always @ (posedge clk or posedge rst) begin
	     if(rst) begin
		      count <= 0;
		  end else if (cnt) begin
		      if (count == Max - 1) begin
				    count <= 0;
			   end else begin
				    count <= count + 1;
				end
		  end
	 end
	 
	
	 assign carry = (count == Max - 1) ? 1 : 0;
	 assign out = count;

endmodule
