#include<stdio.h>
void main()
{
int a[100],n,i,j,temp;
printf("Enter the size of the array \n");
scanf("%d",&n);
printf("Enter the array elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("sorted elements are \n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;i++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}