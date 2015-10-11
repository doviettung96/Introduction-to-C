#include <stdio.h>
#include <math.h>
main ()
{
  int n,m,hs,t;
  printf("Nhap tong so hoc sinh: \n"); scanf("%d",&n);
  hs = n/7;
  m = n%7;
  printf("The number of students in the smallest class: %d\n",hs);
  t = (m ==0 )? printf("The number of students in the largest class: %d\n",hs):printf("The number of students in the largest class: %d\n",hs + 1);
  printf("The average number of students per class: %f\n",n/7.0);
  printf("The number of classes of above average size: %d\n",m);
  printf("The number of students in classes of larger than average size: %d\n",(hs+1)*m);
  t = (m ==0)?printf("The number of classes of exactly average size: %d\n",7-m):printf("There is no class like this\n");
}
