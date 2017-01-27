`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:46:37 11/07/2016
// Design Name:   coder
// Module Name:   D:/School/UCLA/Junior/Fall 2016/m152a/lab3b/codetest.v
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

module codetest;

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

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		number = 4'b0000;
		#100000 number = 4'b0001;
		#100000 number = 4'b0010;
		#100000 number = 4'b0011;
		#100000 number = 4'b0100;
		#100000 number = 4'b0101;
		#100000 number = 4'b0110;
		#100000 number = 4'b0111;
		#100000 number = 4'b1000;
		#100000 number = 4'b1001;

	end
      always fclk = #5 ~fclk;
endmodule

