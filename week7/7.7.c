#include <stdio.h>
main()
{
  float cs,cf,low,up,step;
  printf("Type the lowest temperature in Celcius: \n"); scanf("%f",&low);
  printf("Type the hightest temperature in Celcius: \n"); scanf("%f",&up);
  printf("Type the step: \n"); scanf("%f",&step);
  printf("Temperature conversion\n");
  for (cs=low;cs<=up;cs=cs+step)
    printf("%6.2f in C is equal to %6.2f in F\n",cs,cs*1.8+32);
}
