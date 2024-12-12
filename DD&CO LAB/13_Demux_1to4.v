module Demux_1to4(I,S0,S1,Y0,Y1,Y2,Y3); 
input I,S0,S1; 
output Y0,Y1,Y2,Y3; 
assign Y0 = (I &(~S1&~S0)); 
assign Y1=(I &(~S1&S0)); 
assign Y2=(I &(S1&~S0));
assign Y3=(I &(S1&S0)); 
endmodule