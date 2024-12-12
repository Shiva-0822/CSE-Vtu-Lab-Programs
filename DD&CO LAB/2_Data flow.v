// Verilog HDL Program for Data flow Modelling 

module simple_circuit ( 
input A, 
input B, 
input C, 
output Y,); 
assign Y=((A|B)&C); 
endmodule