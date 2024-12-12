module mux_2to1(I1,I0,S,Y); 
input I1,I0,S; 
output Y; 
reg Y; 
always @ (S, I0 , I1) 
begin 
if (S == 0) 
begin 
Y = I0; 
end 
else 
begin 
Y = I1 ; 
end 
end 
endmodule