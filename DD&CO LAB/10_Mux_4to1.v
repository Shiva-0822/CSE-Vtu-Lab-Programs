module mux_4to1(I3,I2,I1,I0,S1,S0,Y); 
input I3,I2,I1,I0,S1,S0; 
outputY; 
reg Y; 
always @ (I3 or I2 or I1or I0 or S1 or S0) 
begin
if (S1 == 0 &S0 ==0) 
Y = I0; 
else if (S1 == 0 &S0 ==1) 
Y = I1; 
else if (S1 == 1&S0 ==0) 
Y = I2; 
else 
begin 
Y = I3; 
end 
end 
endmodule