#include<stdio.h>
void function(int ,int )
void main()
{
int x=5 , y=10;
function (x,y);
printf("value of x in main=%d & value of y in main=%d",x,y);
void function(int x,int y)
{
x= 10;
y= 5;
printf("value of x =%d & value of y =%d",x,y);
}
}