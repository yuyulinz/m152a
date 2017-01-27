`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:07:17 11/07/2016 
// Design Name: 
// Module Name:    display 
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
module display(
    input fclk,
    input bclk,
    input rst,
	 input secondsscount,
	 input minutescount,
    input [3:0] second1,
    input [3:0] second2,
    input [3:0] minute1,
    input [3:0] minute2,
    output [7:0] seg,
    output [3:0] an
    );
	 
	 reg [7:0] tempseg;
	 reg [3:0] tempan;
	 reg [1:0] position;
	 reg [1:0] nextpos;
	 
	 wire [7:0] second1code;
	 wire [7:0] second2code;
	 wire [7:0] minute1code;
	 wire [7:0] minute2code;

    coder second1(
	     .fclk(fclk),
		  .number(second1),
		  .code(second1code)
	 );
	 
	 coder second2 (
	     .fclk(fclk),
		  .number(second2),
		  .code(second2code)
	 );
	 
	 coder minute1 (
	     .fclk(fclk),
		  .number(minute1),
		  .code(minute1code)
	 );
	 
	 coder minute2 (
	     .fclk(fclk),
		  .number(minute2),
		  .code(minute2code)
	 );
	 
	 always @ (*) begin
	     tempan = 4'b1111;
		  tempseg = 8';
		  
		  case(position)
		      2'b00: tempan = 4'b1110;
				2'b01: tempan = 4'b1101;
				2'b10: tempan = 4'b1011;
				2'b11: tempan = 4'b0111;
	     endcase
		  
		  case(position)
		      2'b00: begin
					 if ( !minutescount && bclk ) begin
					     tempseg = 8'b11111111;
					 end else begin
				        tempseg = second1code;
				    end
					 end
				2'b01: if ( !minutescount && bclk ) begin
					     tempseg = 8'b11111111;
					 end else begin
				        tempseg = second2code;
				    end
					 end
				2'b10: if ( !secondscount && bclk ) begin
					     tempseg = 8'b11111111;
					 end else begin
				        tempseg = minute1code;
				    end
					 end
				2'b11: if ( !secondscount && bclk ) begin
					     tempseg = 8'b11111111;
					 end else begin
				        tempseg = minute2code;
				    end
					 end
		  endcase
    end
	
	 always @ ( posedge fclk or posedge rst) begin
	     if (rst) begin
		      position <= 2'b00;
		  end else begin
		      position <= nextpos;
		  end
    end
	 
	 always @ (*) begin
	     nextpos = position;
		  case(position)
		      2'b00: nextpos = 2'b01;
				2'b01: nextpos = 2'b10;
				2'b10: nextpos = 2'b11;
				2'b11: nextpos = 2'b00;
		  endcase
    end
	 
	 assign an = tempan;
	 assign seg = tempseg;
	     
endmodule
