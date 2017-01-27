`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:45:05 10/18/2016 
// Design Name: 
// Module Name:    FPCVT 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module FPCVT(
    input [11:0] D,
    output S,
    output [2:0] E,
    output [3:0] F
    );
		wire [11:0] dm;

	signmag task1(
		.D(D),
		.S(S),
		.dm(dm)
	);

endmodule
