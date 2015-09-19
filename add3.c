#include <stdio.h>
main ()
{
  float C1, F2, C2, F1;
  printf("Input two temperatures:\n");
  printf("C1= "); scanf("%f",&C1);
  printf("F2= "); scanf("%f",&F2);
  F1 = 9*C1/(float)5 + 32;
  C2 = 5*(F2-32)/(float)9;
  printf("The converted value of C1 in F is %g Fahrenheit degree\n",F1);
  printf("The converted value of F2 in C is %g Celsius degree\n",C2);
}
