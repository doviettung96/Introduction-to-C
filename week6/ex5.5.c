#include <stdio.h>
main ()
{
  float num1, num2;
  printf("Type two double numbers, and I will tell you\n");
  scanf("%f%f",&num1,&num2);
printf("The relationship between them: \n");
  if(num1 == num2)
    printf("%g and %g are equivalent\n",num1,num2);
  else if(num1 != num2)
    printf("%g and %g are different\n",num1,num2);
  if(num1 < num2)
    printf("%g is smaller than %g\n",num1,num2);
  else if(num1 <= num2)
    printf("%g is smaller than or equal to %g\n",num1,num2);
  else if(num1 > num2)
    printf("%g is greater than %g\n",num1,num2);
  else
    printf("%g is greater than or equal to %g\n",num1,num2);
}
