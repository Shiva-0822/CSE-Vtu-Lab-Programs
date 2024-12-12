module T_FF( 
input clk, 
input d, 
output reg q, 
output q_bar 
); 
assign temp=0; 
always@(posedge clk) 
begin 
case({t}) 
1'b0: q = temp; // no change 
1'b1: q = ~temp; // complement 
endcase 
end 
assign q_bar = ~q; 
endmodule 