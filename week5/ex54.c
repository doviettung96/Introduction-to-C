#include <stdio.h>
#include <math.h>
main ()
{
  int a,b,c,max1,max2;
  int var1;
  printf("Nhap gia tri cua a,b,c:a= b= c=\n"); scanf("%d %d %d",&a,&b,&c);
  max1 = a>=b?a:b;max2 = max1>=c?max1:c;
  printf("The maximum number among a,b,c: %d\n",max2);
  var1 = (a+b+c)/3.0>10 ? printf("The sum of 2 first numbers: %d\n",a+b):printf("The difference of the 2 last numbers: %d\n",b-c); 
}
