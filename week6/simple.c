#include <stdio.h>
#include <math.h>
main()
{
  float a,b;
  char operator;
  printf("Type as the form:a operator b\n");
  scanf("%f %c %f",&a,&operator,&b);
  switch (operator)
    {
    case '+':printf("%f %c %f = %f\n",a,operator,b,a+b); break;
    case '-':printf("%f %c %f = %f\n",a,operator,b,a-b); break;
    case '*':printf("%f %c %f = %f\n",a,operator,b,a*b); break;
    case '/':printf("%f %c %f = %f\n",a,operator,b,a/b); break;
    default:printf("Wrong.\n"); break;
    }
}
