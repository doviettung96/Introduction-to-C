#include <stdio.h>
#include <math.h>
main()
{
  int x;
  for (x=1;x<=10;x++)
    printf("%d^2 = %d\n",x,x*x);
  for (x=10;x>=1;x--)
    printf("%d^2 = %d\n",x,x*x);
}
