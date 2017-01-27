`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:44:42 11/22/2016
// Design Name:   floor_buttons
// Module Name:   C:/Users/Leon/Downloads/elevator/buttons.v
// Project Name:  elevator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: floor_buttons
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module buttons;

	// Inputs
	reg [7:0] sw;
	reg clk;
	reg [2:0] floor;

	// Outputs
	wire [7:0] swout;

	// Instantiate the Unit Under Test (UUT)
	floor_buttons uut (
		.sw(sw), 
		.clk(clk), 
		.floor(floor), 
		.swout(swout)
	);

	initial begin
		// Initialize Inputs
		sw = 8'b00000000;
		clk = 0;
		floor = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		sw = 8'b01000000;
		
		#100;
		
		sw = 8'b00000000;
		
		#100;
		
		floor = 6;
		
        
		// Add stimulus here

	end
	
	always clk = #5 ~clk;
      
endmodule

