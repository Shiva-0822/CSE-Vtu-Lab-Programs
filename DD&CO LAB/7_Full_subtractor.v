modulefull_subtractor( 
input A,
input B, 
input C, 
output Difference, 
output Borrow 
); 
assign Difference = A ^ B ^ C; 
assign Borrow =( ~A & B) | (~(A ^ B) & C); 
endmodule