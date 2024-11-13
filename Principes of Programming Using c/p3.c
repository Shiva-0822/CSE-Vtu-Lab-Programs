// Displaying number of rows as input program 4
#include<stdio.h>
void main()
{
int n,i,k,j,m;
printf("Enter the number of interations: \n");
scanf("%d", &n);
for (i=1;i<=n;i++);
{
for (k=1;k<=n-i;k++)
printf(" ");
for (j=1;j<i+1;j++)
printf("%d", j);
for (m=j-2;m>=1;m--)
printf("%d", m);
for (k=1;k<=n-i;k++)
printf(" ");
printf("\n");
}
}