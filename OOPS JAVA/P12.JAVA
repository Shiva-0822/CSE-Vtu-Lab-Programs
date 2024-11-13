#include<stdio.h>
int sum(int a,int b);
int main()
{
int num1,num2,total=0;
printf("Enter the no \n");
scanf("%d%d",&num1,&num2);
total=sum(num1,num2);
printf("total=%d",total);
return 0;
}
int sum(int a,int b)
{
int result;
result=a+b;
}