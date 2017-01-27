`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:46:54 11/06/2016
// Design Name:   adv_counter
// Module Name:   D:/School/UCLA/Junior/Fall 2016/m152a/lab3b/advcountertest.v
// Project Name:  lab3b
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adv_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module advcountertest;

	// Inputs
	reg clk;
	reg rst;
	reg cnt;

	// Outputs
	wire [3:0] ones;
	wire [3:0] tens;
	wire carry;

	// Instantiate the Unit Under Test (UUT)
	adv_counter uut (
		.clk(clk), 
		.rst(rst), 
		.cnt(cnt), 
		.ones(ones), 
		.tens(tens), 
		.carry(carry)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		cnt = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		#50 rst = 1;
		#50 rst = 0;
	end
	
	always clk = #5 ~clk;
      
endmodule

