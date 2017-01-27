`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:47:41 10/18/2016 
// Design Name: 
// Module Name:    signmag 
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
module signmag(
    input [11:0] D,
    output S,
    output [11:0] dm
    );

	reg [11:0] temp;

	always @ (*)
	begin
		if (D[11] == 0)
			temp = D;
		else if (D = 12'b1000_0000_0000)
			temp = 12'b0111_1111_1111;
		else
			temp = ~D +1;
	end
	
	assign S = D[11];
	assign dm = temp;

endmodule
