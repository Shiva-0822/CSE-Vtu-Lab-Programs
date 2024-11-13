#include<stdio.h>
int large(int a,int b,int c)
int main()
{
int num1,num2,num3,greatest;
printf("Enter three numbers \n");
scanf("%d%d%d",&num1,&num2,&num3);
greatest=large(int a,int b,int c)
printf("Greatest = %d",greatest);
return 0;
}
int large(int a,int b,int c)
{
if(a>b&&a>c)
return a;
else if(b>a&&b>a)
return b;
else
return c;
}