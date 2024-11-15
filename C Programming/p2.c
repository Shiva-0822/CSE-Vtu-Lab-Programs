// An electricty board ----------
#include<stdio.h>
void main(){
char name [10];
float unit, amt;
printf("Enter your name and units of power consumed");
scanf("%s%f", &name, &unit);
if(unit<=200)
amt = unit*0.80+100;
else if((unit>200)&&(unit<=300))
amt = 200*0.80+100*0.90+((unit-200)*0.90)+100;
else
amt = 200*0.80+100*0.90+((unit-300)*1)+100;
if(amt>400)
amt = 1.51*amt;
printf("Name : %s \n unit=%f \n charge=%f Rs", name, unit, amt);

}