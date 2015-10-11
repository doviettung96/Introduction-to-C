#include <stdio.h>
#include <math.h>
main ()
{
  float a,b,t1,t2;
  printf("Nhap a= b= \n"); scanf("%f %f",&a,&b);
  t1 = (a+b)*(a+b)*(a+b)/(a*a - b*b) - a*b;
  t2 = (a-b)*(a+b) / (a*a - b*b)/(a*a + b*b);
  printf("(a+b)^3 / (a^2 - b^2) - ab = %f\n",t1);
  printf("(a-b)(a+b)/(a^2 - b^2)(a^2 + b^2) = %f\n",t2);
}
