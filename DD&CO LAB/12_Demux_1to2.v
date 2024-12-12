module Demux_1to2(I,Sel,Y0,Y1); 
inputI,Sel; 
output Y0,Y1; 
assign Y0 = (I&(~S0)); 
assign Y1 = (I & S0); 
endmodule