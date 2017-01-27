`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:00:45 11/17/2016 
// Design Name: 
// Module Name:    state 
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
module state(
    input [7:0] sw,
    input close,
    input clk,
    input [2:0] floor,
    output dir,
    output door
    );
	 
	 //set dir to up, door open
	 reg dir_temp = 1;
	 reg door_temp = 1;
	 reg close_deb = 0;
	 wire [2:0] floor_temp = floor;
	 reg [2:0] index;
	 
	 //closes door at close button
	 always @ (posedge clk)
	 begin
		if(close)// & ~close_deb & door_temp)
		begin
			door_temp = 0; 
		end else begin end
		close_deb <= close;
	 end
	 
	 //determines direction based on dir and switches
	 always @ (posedge clk) 
	 begin
		case (door_temp) 
			1'b1: begin
				if (dir_temp == 1)
				begin
					
					if(sw[0] == 1)
					begin
					  if(floor_temp > 0)
					  begin
					    dir_temp = 0;
					  end else begin end
					end else begin end
					
					if(sw[1] == 1)
					begin
						if(floor_temp > 1)
						begin
							dir_temp = 0;
						end else if ( floor_temp < 1 ) begin
						   dir_temp = 1;
						end
					end else begin end
					
					if(sw[2] == 1)
					begin
					if(floor_temp > 2)
						begin
							dir_temp = 0;
						end else if ( floor_temp < 2 ) begin
						   dir_temp = 1;
						end
					end else begin end
					
					if(sw[3] == 1)
					begin
					   if(floor_temp > 3)
						begin
							dir_temp = 0;
						end else if ( floor_temp < 3 ) begin
							dir_temp = 1;
						end
					end else begin end
					
					if(sw[4] == 1)
					begin
						if(floor_temp > 4)
						begin
							dir_temp = 0;
						end else if ( floor_temp < 4 ) begin
						   dir_temp = 1;
						end
					end else begin end
					
					if(sw[5] == 1)
					begin
						if(floor_temp > 5)
						begin
							dir_temp = 0;
						end else if ( floor_temp < 5 ) begin
						   dir_temp = 1;
						end
					end else begin end
					
					if(sw[6] == 1)
					begin
						if(floor_temp > 6)
						begin
							dir_temp = 0;
						end else if ( floor_temp < 6 ) begin
						   dir_temp = 1;
						end
					end else begin end
					
					if(sw[7] == 1)
					begin
						if(floor_temp < 7)
						begin
							dir_temp = 1;
						end else begin end
					end else begin end
					
					
					/*
					for (index = floor_temp; index >= 0; index = index - 1)
					begin
						if(sw[index])
						begin
							dir_temp = 0;
						end else begin end
					end
				
					for (index = floor_temp; index < 8; index = index + 1)
					begin
						if (sw[index])
						begin
							dir_temp = 1;
						end else begin end
					end 
					*/
					
					
					
				end
				else			
				begin
			
					if(sw[7] == 1)
					begin
					  if(floor_temp < 7)
					  begin
					    dir_temp = 1;
					  end else begin end
					end else begin end
					
					if(sw[6] == 1)
					begin
						if(floor_temp < 6)
						begin
							dir_temp = 1;
						end else if ( floor_temp > 6 ) begin
						   dir_temp = 0;
						end
					end else begin end
					
					if(sw[5] == 1)
					begin
					if(floor_temp < 5)
						begin
							dir_temp = 1;
						end else if ( floor_temp > 5 ) begin
						   dir_temp = 0;
						end
					end else begin end
					
					if(sw[4] == 1)
					begin
					   if(floor_temp < 4)
						begin
							dir_temp = 1;
						end else if ( floor_temp > 4 ) begin
							dir_temp = 0;
						end
					end else begin end
					
					if(sw[3] == 1)
					begin
						if(floor_temp < 3 )
						begin
							dir_temp = 1;
						end else if ( floor_temp > 3 ) begin
						   dir_temp = 0;
						end
					end else begin end
					
					if(sw[2] == 1)
					begin
						if(floor_temp < 2)
						begin
							dir_temp = 1;
						end else if ( floor_temp > 2 ) begin
						   dir_temp = 0;
						end
					end else begin end
					
					if(sw[1] == 1)
					begin
						if(floor_temp < 1)
						begin
							dir_temp = 1;
						end else if ( floor_temp > 1 ) begin
						   dir_temp = 0;
						end
					end else begin end
					
					if(sw[0] == 1)
					begin
						if(floor_temp > 1)
						begin
							dir_temp = 0;
						end else begin end
					end else begin end
					
					/*
					for (index = floor_temp; index < 8; index = index + 1)
					begin
						if (sw[index])
						begin
							dir_temp = 1;
						end else begin end
					end
					for (index = floor_temp; index >= 0; index = index - 1)
					begin
						if(sw[index])
						begin
							dir_temp = 0;
						end else begin end
					end
					
					*/
					
				end
				
			end
			
			1'b0: begin
				if(sw[floor_temp])
				begin
					door_temp = 1;
				end else begin end
			end
			
		endcase
	end
	
	assign door = door_temp;
	assign dir = dir_temp;
						
endmodule
