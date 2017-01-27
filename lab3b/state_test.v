`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:18:26 11/06/2016
// Design Name:   select_state
// Module Name:   D:/School/UCLA/Junior/Fall 2016/m152a/lab3b/state_test.v
// Project Name:  lab3b
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: select_state
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module state_test;

	// Inputs
	reg reset;
	reg pause;
	reg sel;
	reg adj;
	reg clk;

	// Outputs
	wire [3:0] mode;

	// Instantiate the Unit Under Test (UUT)
	select_state uut (
		.reset(reset), 
		.pause(pause), 
		.sel(sel), 
		.adj(adj), 
		.clk(clk), 
		.mode(mode)
	);

	initial begin
		// Initialize Inputs
		reset = 0;
		pause = 0;
		sel = 0;
		adj = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#1 $monitor("mode = %b", mode);
        
		// Add stimulus here
		#20 pause = 1;
		#20 pause = 0;
		#20 pause = 1;
		#20 pause = 0;
		#20 adj = 1;
		#20 sel = 1;
		#20 pause = 1;
		#20 pause = 0;
		#20 adj = 0;
		#20 pause = 1;
		#20 pause = 0;
		
		

	end
	
	
	
	always clk = #5 ~clk;
      
endmodule

