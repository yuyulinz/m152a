`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:54:13 11/06/2016
// Design Name:   counter
// Module Name:   D:/School/UCLA/Junior/Fall 2016/m152a/lab3b/countertest.v
// Project Name:  lab3b
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module countertest;

	// Inputs
	reg sclk;
	reg mclk;
	reg scnt;
	reg mcnt;
	reg rst;

	// Outputs
	wire [3:0] second1;
	wire [3:0] second2;
	wire [3:0] minute1;
	wire [3:0] minute2;

	// Instantiate the Unit Under Test (UUT)
	counter uut (
		.sclk(sclk), 
		.mclk(mclk), 
		.scnt(scnt), 
		.mcnt(mcnt), 
		.rst(rst), 
		.second1(second1), 
		.second2(second2), 
		.minute1(minute1), 
		.minute2(minute2)
	);

	initial begin
		// Initialize Inputs
		sclk = 0;
		mclk = 0;
		scnt = 1;
		mcnt = 1;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      always sclk = #5 ~sclk;
		always mclk = #5 ~mclk;
endmodule

