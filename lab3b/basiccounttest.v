`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:33:47 11/06/2016
// Design Name:   basic_counter
// Module Name:   D:/School/UCLA/Junior/Fall 2016/m152a/lab3b/basiccounttest.v
// Project Name:  lab3b
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: basic_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module basiccounttest;

	// Inputs
	reg clk;
	reg rst;
	reg cnt;

	// Outputs
	wire [3:0] out;
	wire carry;

	// Instantiate the Unit Under Test (UUT)
	basic_counter #( .Max('d10) ) uut(
		.clk(clk), 
		.rst(rst), 
		.cnt(cnt), 
		.out(out), 
		.carry(carry)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		cnt = 1;

		// Wait 100 ns for global reset to finish
		#100;
      
		#510 rst =1;
		#30 rst = 0;
		// Add stimulus here
		

	end
	
	always clk = #5 ~clk;
      
endmodule

