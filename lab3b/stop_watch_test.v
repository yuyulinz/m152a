`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:17:34 11/03/2016
// Design Name:   stop_watch
// Module Name:   D:/School/UCLA/Junior/Fall 2016/m152a/lab3b/stop_watch_test.v
// Project Name:  lab3b
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: stop_watch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module stop_watch_test;

	// Inputs
	reg reset;
	reg pause;
	reg sel;
	reg adj;
	reg clk;

	// Outputs
	wire [3:0] m0;
	wire [3:0] m1;
	wire [3:0] s0;
	wire [3:0] s1;
	wire [7:0] seg;
	wire [3:0] ad;

	// Instantiate the Unit Under Test (UUT)
	stop_watch uut (
		.reset(reset), 
		.pause(pause), 
		.sel(sel), 
		.adj(adj), 
		.clk(clk), 
		.m0(m0), 
		.m1(m1), 
		.s0(s0), 
		.s1(s1), 
		.seg(seg), 
		.ad(ad)
	);

	initial begin
		// Initialize Inputs
		reset = 0;
		pause = 0;
		sel = 0;
		adj = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

