`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:17:53 11/03/2016
// Design Name:   split_clk
// Module Name:   D:/School/UCLA/Junior/Fall 2016/m152a/lab3b/split_clk_test.v
// Project Name:  lab3b
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: split_clk
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
	reg reset;

	// Outputs
	wire adj_clk_2hz;
	wire time_clk_1hz;
	wire blink_clk_5hz;
	wire fast_clk_50hz;

	// Instantiate the Unit Under Test (UUT)
	split_clk uut (
		.clk(clk), 
		.reset(reset), 
		.adj_clk_2hz(adj_clk_2hz), 
		.time_clk_1hz(time_clk_1hz), 
		.blink_clk_5hz(blink_clk_5hz), 
		.fast_clk_50hz(fast_clk_50hz)
	);
 
   
  
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here 

	end  
	
	always clk = #5 ~clk;
       
endmodule

