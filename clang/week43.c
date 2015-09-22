#include <stdio.h>
main ()
{
  int h1,m1,s1;
  int h2,m2,s2;
  int distance;
  printf("Type the first time: \n"); scanf("%d:%d:%d",&h1,&m1,&s1);
  printf("The first time is: %-.2d:%-.2d:%-.2d\n",h1,m1,s1);
  printf("Type the second time: \n"); scanf("%d:%d:%d",&h2,&m2,&s2);
  /* by default, the second time is always greater than the first time */
  printf("The second time is: %-.2d:%-.2d:%-.2d\n",h2,m2,s2);
  distance = (h2-h1)*3600 + (m2-m1)*60 + (s2-s1);
    printf("The distance between them is:%d s\n",distance);
}
