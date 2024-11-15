#include<stdio.h>
void main()
{
int i,n,low,high,mid,flag,key,a[100];
printf("Enter the size of the array \n");
scanf("%d",&n);
printf("Enter the elements of an array in ascending order \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the key element to be searched \n");
scanf("%d",&key);
flag=0;
low=0;
high=0;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
flag=1;
printf("The key element is found at position %d \n",mid++);
break;
}
if(key>a[mid])
{
low=mid+1;
}
if(key<a[mid])
{
high=mid-1;
}
}
if(flag==0)
{
printf("Elements not found search is unsuscessful \n");
}
}