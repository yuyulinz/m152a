`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:01:20 11/07/2016
// Design Name:   display
// Module Name:   D:/School/UCLA/Junior/Fall 2016/m152a/lab3b/displaytest.v
// Project Name:  lab3b
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: display
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module displaytest;

	// Inputs
	reg fclk;
	reg bclk;
	reg rst;
	reg secondscount;
	reg minutescount;
	reg [3:0] second1;
	reg [3:0] second2;
	reg [3:0] minute1;
	reg [3:0] minute2;

	// Outputs
	wire [7:0] seg;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	display uut (
		.fclk(fclk), 
		.bclk(bclk), 
		.rst(rst),
		.secondscount(secondscount),
		.minutescount(minutescount),
		.second1(second1), 
		.second2(second2), 
		.minute1(minute1), 
		.minute2(minute2), 
		.seg(seg), 
		.an(an)
	);

	initial begin
		// Initialize Inputs
		fclk = 0;
		bclk = 0;
		rst = 0;
		secondscount = 1;
		minutescount = 1;
		second1 = 0;
		second2 = 0;
		minute1 = 0;
		minute2 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      always fclk = #5 ~fclk;
		always bclk = #10 ~bclk;
endmodule

