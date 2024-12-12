// Verilog HDL Program for Behavioural Modelling

module simple_circuit( 
input A, 
input B, 
input C, 
output reg Y 
); 
always@(*) 
begin 
case({A,B}) 
3'b000:Y=0; 
3'b001:Y=0; 
3'b010:Y=0; 
3'b011:Y=1; 
3'b100:Y=0; 
3'b101:Y=1; 
3'b110:Y=0; 
3'b111:Y=1; 
default:Y=0; 
endcase 
end 
endmodule 