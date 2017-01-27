`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:47:18 11/21/2016 
// Design Name: 
// Module Name:    clk_split 
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
module clk_split(
    input clk,
    output clk_500hz,
    output clk_1hz,
    output clk_2hz,
    output clk_5hz
    );
	 
	 reg [27:0] count_2hz = 0;
	 reg [27:0] count_1hz = 0;
	 reg [27:0] count_5hz = 0;
	 reg [27:0] count_500hz = 0;
	 
	 reg reg_2hz = 0;
	 reg reg_1hz = 0;
	 reg reg_5hz = 0;
	 reg reg_500hz = 0;
	 
	 always @ (posedge clk)
	 begin
		count_2hz = count_2hz + 1;
		count_1hz = count_1hz + 1;
		count_5hz = count_5hz + 1;
		count_500hz = count_500hz + 1;
		
		if(count_2hz == 25000000)
		begin
			count_2hz = 0;
			reg_2hz = ~reg_2hz;
		end
		else begin end
		
		if(count_1hz == 50000000)
		begin
			count_1hz = 0;
			reg_1hz = ~reg_1hz;
		end
		else begin end
		
		if(count_5hz == 10000000)
		begin
			count_5hz = 0;
			reg_5hz = ~reg_5hz;
		end
		else begin end
		
		if(count_500hz == 100000)
		begin
			count_500hz = 0;
			reg_500hz = ~reg_500hz;
		end 
		else begin end
		
	end
	
	assign clk_2hz = reg_2hz;
	assign clk_1hz = reg_1hz;
	assign clk_5hz = reg_5hz;
	assign clk_500hz = reg_500hz;


endmodule
