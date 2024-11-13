#include<stdio.h>
void main()
{
int a;
printf("Enter the age of the Voter: \n");
scanf("%d", &a);
if (a<18)
printf("The person is not eligible to Vote \n");
if (a>=18)
printf("The person is eligible to Vote \n");
}