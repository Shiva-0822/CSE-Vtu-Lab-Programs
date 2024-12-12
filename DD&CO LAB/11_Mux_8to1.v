module mux_8to1 (I7, I6, I5, I4, I3, I2, I1, I0, S2, S1, S0, Y); 
input I7, I6, I5, I4, I3, I2, I1, I0, S2, S1, S0; 
output Y; 
reg Y; 
always @ (I7 or I6 or I5 or I4 or I3 or I2 or I1 or I0 or S2 or S1 or S0) 
begin 
if (S2 ==0 & S1 == 0 & S0 ==0) 
Y = I0; 
else if (S2 ==0 & S1 == 0 & S0 ==1) 
Y = I1; 
else if (S2 ==0 & S1 == 1 & S0 ==0) 
Y = I2; 
else if (S2 ==0 & S1 == 1 & S0 ==1) 
Y = I3; 
else if (S2 ==1 & S1 == 0 & S0 ==0) 
Y = I4; 
else if (S2 ==1 & S1 == 0 & S0 ==1) 
Y = I5; 
else if (S2 ==1 & S1 == 1 & S0 ==0)
Y = I6; 
else 
begin 
Y = I7; 
end 
end 
endmodule