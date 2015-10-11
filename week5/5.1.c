#include <stdio.h>
main ()
{
  float k,m,t;
  printf("Nhap so kilomets k: \n"); scanf("%f",&k);
  m = 1/1.609*k;
  t = (k>=0)?printf("%f kilomets bang %f miles\n",k,m):printf("Ban da nhap sai,yeu cau nhap lai!\n");
}
