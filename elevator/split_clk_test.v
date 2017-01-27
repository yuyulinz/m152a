`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:44:42 11/21/2016
// Design Name:   clk_split
// Module Name:   C:/Users/Leon/Downloads/elevator/split_clk_test.v
// Project Name:  elevator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clk_split
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module split_clk_test;

	// Inputs
	reg clk;

	// Outputs
	wire clk_500hz;
	wire clk_1hz;
	wire clk_2hz;
	wire clk_5hz;

	// Instantiate the Unit Under Test (UUT)
	clk_split uut (
		.clk(clk), 
		.clk_500hz(clk_500hz), 
		.clk_1hz(clk_1hz), 
		.clk_2hz(clk_2hz), 
		.clk_5hz(clk_5hz)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always clk = #5 ~clk;
      
endmodule

