`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:58:53 11/06/2016
// Design Name:   stop_watch
// Module Name:   D:/School/UCLA/Junior/Fall 2016/m152a/lab3b/stpwatchtest.v
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

module stpwatchtest;

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
	wire [3:0] an;

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
		.an(an)
	);

	initial begin
		// Initialize Inputs
		reset = 0;
		pause = 0;
		sel = 1;
		adj = 1;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		#1000000 sel = 0;
		#1000000 sel = 1;
		#1000000 adj = 0;
		#1000000 pause = 1;
		#100 pause = 0;
		#1000000 pause = 1;
		#100 pause = 0;
		#1000000 reset = 1;
		#100 reset = 0;
		
        
		// Add stimulus here

	end
	
	always clk = #1 ~clk;
      
endmodule

