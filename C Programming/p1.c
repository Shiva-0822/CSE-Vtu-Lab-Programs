#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main() {
    int a, b, c, d;
    float r1, r2;
    printf("Enter coefficients a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (a*b*c == 0)
{
printf("invalid input\n");
}
if(d==0)
{
printf("Roots are real and Equal\n");
r1=r2=-b/(2*a);
printf("Root1=%f \n", r1);
printf("Root2=%f \n", r2);
}
if(d>0)
{
printf("Roots are real and distinct \n");
r1=(-b+sqrt(d)) / (2*a);
r1=(-b-sqrt(d)) / (2*a);
printf("Root1=%f \n", r1);
printf("Root2=%f \n", r2);
}
if(d<0)
{
printf("Roots are imaginary \n");
r1=-b/(2*a);
r2=sqrt(-d)/(2*a);
printf("Root1=%f+i%f \n", r1, r2);
printf("Root2=%f-i%f \n", r1, r2);
}

}
 
