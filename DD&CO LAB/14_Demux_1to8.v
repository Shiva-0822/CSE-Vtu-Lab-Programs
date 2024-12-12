module Demux_1to8(I,S0,S1,S2,Y0,Y1,Y2,Y3,Y4,Y5,Y6,Y7);
input I,S0,S1,S2; 
output Y0,Y1,Y2,Y3,Y4,Y5,Y6,Y7; 
assign Y0 = (I &(~S2&~S1&~S0)); 
assign Y1 = (I &(~S2&~S1&S0)); 
assign Y2 = (I &(~S2&S1&~S0)); 
assign Y3 = (I &(~S2&S1&S0)); 
assign Y4 = (I &(S2&~S1&~S0)); 
assign Y5 = (I &(S2&~S1&S0)); 
assign Y6 = (I &(S2&S1&~S0)); 
assign Y7 = (I &(S2&S1&S0)); 
endmodule 