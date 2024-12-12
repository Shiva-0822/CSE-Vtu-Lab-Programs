module D_FF( 
input clk, 
input d, 
output reg q, 
output q_bar 
); 
always@(posedge clk) 
begin 
case({d}) 
1'b0: q = 1'b0; // reset 
1'b1: q = 1'b1; // set 
endcase 
end 
assign q_bar = ~q; 
endmodule