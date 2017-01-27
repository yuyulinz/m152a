`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:55:28 11/07/2016
// Design Name:   coder
// Module Name:   D:/School/UCLA/Junior/Fall 2016/m152a/lab3b/codertest.v
// Project Name:  lab3b
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: coder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module codertest;

	// Inputs
	reg fclk;
	reg [3:0] number;

	// Outputs
	wire [7:0] code;

	// Instantiate the Unit Under Test (UUT)
	coder uut (
		.fclk(fclk), 
		.number(number), 
		.code(code)
	);

	initial begin
		// Initialize Inputs
		fclk = 0;
		number = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

