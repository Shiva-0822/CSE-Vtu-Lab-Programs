#include<stdio.h>
void main()
{
int i,n,sum;
printf("Enter the numbers\n");
scanf("%d",&n);
i=1;
while(i<=n)
{
sum=sum+i;
i=i+1;
}
printf("The sum is =%d",sum);
}