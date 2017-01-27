`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:16:45 11/03/2016 
// Design Name: 
// Module Name:    split_clk 
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
module split_clk(
    input clk,
	 input reset,
    output adj_clk_2hz,
    output time_clk_1hz,
    output blink_clk_5hz,
    output fast_clk_50hz
    );
	 
	 reg [27:0] adj_count = 0;
	 reg [27:0] time_count = 0;
	 reg [27:0] blink_count = 0;
	 reg [27:0] fast_count = 0;
	 
	 reg adj_clk_2hz_reg = 0;
	 reg time_clk_1hz_reg = 0;
	 reg blink_clk_5hz_reg = 0;
	 reg fast_clk_50hz_reg = 0;
    
	 always @ (posedge clk or posedge reset)
	 begin
	 
	     if (reset)
		    begin
		      adj_count = 0;
				time_count = 0;
				blink_count = 0;
				fast_count = 0;
		    end 
		  else 
		    begin
			   adj_count = adj_count + 1;
				time_count = time_count + 1;
				blink_count = blink_count + 1;
				fast_count = fast_count + 1;
				
				
				
			   if (adj_count == 25000)
				  begin
				    adj_count = 0;
					 adj_clk_2hz_reg = ~adj_clk_2hz_reg;
				  end
				else begin end
				
				if (time_count == 50000)
				  begin
				    time_count = 0;
					 time_clk_1hz_reg = ~time_clk_1hz_reg;
				  end
			   else begin end
				
				if (blink_count == 10000)
				  begin
				    blink_count = 0;
					 blink_clk_5hz_reg = ~blink_clk_5hz_reg;
				  end
				else begin end
				
				if (fast_count == 1000)
				  begin
				    fast_count = 0;
					 fast_clk_50hz_reg = ~fast_clk_50hz_reg;
				  end
				else begin end
          end
			 
    end
	   
	 assign adj_clk_2hz = adj_clk_2hz_reg;
	 assign time_clk_1hz = time_clk_1hz_reg;
	 assign blink_clk_5hz = blink_clk_5hz_reg;
	 assign fast_clk_50hz = fast_clk_50hz_reg;


endmodule
