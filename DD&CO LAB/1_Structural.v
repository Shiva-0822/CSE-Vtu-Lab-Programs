// Verilog HDL Program for structural Modelling

module simple_circuit ( 
input A, 
input B, 
input C, 
output Y, 
); 
wire s1; 
or o1(s1,A,B); 
and a1(Y,s1,C) 
endmodule