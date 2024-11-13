#include<stdio.h>
void main()
{
int coins1,coins2,coins5,coins10,sum;
printf("Enter the number of each coins \n");
scanf("%d%d%d%d",&coins1,&coins2,&coins5,&coins10);
sum=1*coins1+2*coins2+5*coins5+10*coins10;
printf("The total ammount in piggy bank is =%d",sum);
}