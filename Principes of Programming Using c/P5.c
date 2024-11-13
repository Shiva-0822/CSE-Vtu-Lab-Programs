#include<stdio.h>
#include<math.h>
void main()
{
int i, n, deg;
float rad, term, sum;
printf("Enter degree\n");
scanf("%d",&deg);
printf("Enter the number of terms\n");
scanf("%d", &n);
rad = deg*(3.14/180);
term= sum = rad;
for (i=1; i<n; i++)
{
term = term* -rad*rad / (2*i*(2*i+1)); 
sum = sum + term;
}
printf("Using Taylor's series the sum is =%f\n", sum);
printf("Using in-built function the sum is =%f\n", sin(rad));
}