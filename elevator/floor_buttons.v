`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:12:10 11/22/2016 
// Design Name: 
// Module Name:    floor_buttons 
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
module floor_buttons(
    input [7:0] sw,
    input clk,
	 input [2:0] floor,
    output [7:0] swout
    );
	 
	 //board must start on all 0s
	 reg [7:0] prevsw = 8'b00000000; 
	 reg [7:0] swout_temp = 8'b00000000;
	 
	 always @ (posedge clk) 
	 begin
		if (sw[0] != prevsw[0])
		begin
			swout_temp[0] = 1;
			prevsw[0] <= sw[0];
		end
		
		if (sw[1] != prevsw[1])
		begin
			swout_temp[1] = 1;
			prevsw[1] <= sw[1];
		end
		
		if (sw[2] != prevsw[2])
		begin
			swout_temp[2] = 1;
			prevsw[2] <= sw[2];
		end
		
		if (sw[3] != prevsw[3])
		begin
			swout_temp[3] = 1;
			prevsw[3] <= sw[3];
		end
		
		if (sw[4] != prevsw[4])
		begin
			swout_temp[4] = 1;
			prevsw[4] <= sw[4];
		end
		
		if (sw[5] != prevsw[5])
		begin
			swout_temp[5] = 1;
			prevsw[5] <= sw[5];
		end
		
		if (sw[6] != prevsw[6])
		begin
			swout_temp[6] = 1;
			prevsw[0] <= sw[0];
		end
		
		if (sw[7] != prevsw[7])
		begin
			swout_temp[7] = 1;
			prevsw[7] <= sw[7];
		end
		
		if (swout_temp[floor] == 1)
		begin
			swout_temp[floor] = 0;
		end
	end
	
	assign swout = swout_temp;
		


endmodule
