#include <stdio.h>
void main()
{
      int a, b, sum, diff, pro, quo, rem;
      char ch;
      printf("enter the expression:\n");
      scanf("%d%c%d", &a, &ch, &b);
      switch (ch)
      {
      case '+':
            sum = a + b;
            printf("The sum is =%d", sum);
            break;
      case '-':
            diff = a - b;
            printf("The difference is =%d", diff);
            break;
      case '*':
            pro = a * b;
            printf("The product is =%d", pro);
            break;
      case '/':
            if (b != 0)
            {
                  quo = a / b;
                  printf("The quotient is =%d", quo);
            }
            else
            {
                  printf("Divided by zero order = infinity");
            }
            break;
      case '%':
            rem = a % b;
            printf("The reminder is =%d", rem);
            break;
      deafult:
            printf("enterd wrong choice\n");
      }
}