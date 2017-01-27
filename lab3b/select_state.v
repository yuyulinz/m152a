`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:48:50 11/06/2016 
// Design Name: 
// Module Name:    select_state 
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
module select_state(
    input reset,
    input pause,
    input sel,
    input adj,
    input clk,
    output [3:0] mode,
	 output rst
    );
	 
	 parameter [3:0] normal = 4'b0011;
	 parameter [3:0] adjsecond = 4'b0101;
	 parameter [3:0] adjminute = 4'b1010;
	 parameter [3:0] paused = 4'b0000;
	 
	 reg [3:0] modetemp = normal;
	 reg helddown = 0;
	 reg rsttemp = 0;
	 
	 always @ (posedge clk or posedge reset) 
	 begin
	     rsttemp = reset;
		  
	     case (modetemp)
		      normal: begin
				    if (pause & ~helddown) begin
					     modetemp = paused;
					 end else if (adj) begin
					     if (sel) begin
						      modetemp = adjsecond;
						  end else begin
						      modetemp = adjminute;
						  end
					 end else begin
					     modetemp = normal;
					 end
				end
				paused: begin
				    if (pause & ~helddown) begin
					     if (adj) begin
						      if (sel) begin
								    modetemp = adjsecond;
							   end else begin
								    modetemp = adjminute;
								end
						  end else begin
						      modetemp = normal;
						  end
					 end else begin
					     modetemp = paused;
					 end
				end
				adjsecond: begin
				    if (pause & ~helddown) begin
					     modetemp = paused;
					 end else if (!adj) begin
					     modetemp = normal;
					 end else if (!sel) begin
					     modetemp = adjminute;
					 end else begin
					     modetemp = adjsecond;
					 end
				end
				adjminute: begin
				    if (pause & ~helddown) begin
					     modetemp = paused;
					 end else if (!adj) begin
					     modetemp = normal;
					 end else if (sel) begin
					     modetemp = adjsecond;
					 end else begin
					     modetemp = adjminute;
					 end
			   end
		  endcase
		  
		  helddown <= pause;
	 end
	 
	 assign mode = modetemp;
	 assign rst = rsttemp;
								

endmodule
