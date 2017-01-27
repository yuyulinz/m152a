`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:59:41 11/17/2016
// Design Name:   state
// Module Name:   C:/Users/152/Desktop/elevator/statetest.v
// Project Name:  elevator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: state
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module statetest;

	// Inputs
	reg [7:0] sw;
	reg close;
	reg clk;
	reg [2:0] floor;

	// Outputs
	wire dir;
	wire door;

	// Instantiate the Unit Under Test (UUT)
	
	state uut (
		.sw(sw), 
		.close(close), 
		.clk(clk), 
		.floor(floor), 
		.dir(dir), 
		.door(door)
	);

	initial begin
		// Initialize Inputs
		sw = 0;
		close = 0;
		clk = 0;
		floor = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		sw = 8'b10000000;
		#5000;
		close = 1;
		#100;
		close = 0;
		
		#5000 floor = 3'b111;
		
		#5000 sw = 8'b00000001;
		
        
		// Add stimulus here

	end
      always clk = #5 ~clk;
endmodule

