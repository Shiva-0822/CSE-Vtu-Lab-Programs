# include<stdio.h>
# include <math.h>
int main()
{
    // area of triangle by using heron's formula

    float a,b,c,s,area;
    printf("Enter the length of three sides of a triangle:\n");
    scanf("%f%f%f", &a,&b,&c);
    s = (a+b+c)/2;
    printf("The value of S is %.2f\n",s);
    area = sqrt(s*(s-a) * (s-b) * (s-c));
    printf("The area of the triangle is:%f\n", area);
    return 0;
}