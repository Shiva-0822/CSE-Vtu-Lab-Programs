module JK_FF( 
input clk, 
input j,k, 
output reg q, 
output q_bar ); 
always@(posedge clk) 
begin 
case({j,k}) 
2'b00: q = q; // No change 
2'b01: q = 1'b0; // reset 
2'b10: q = 1'b1; // set 
2'b11: q = ~q; // Invalid inputs 
endcase 
end 
assignq_bar = ~q; 
endmodule