#include <stdio.h>
#include <math.h>
main ()
{
  int a,b,c;
  printf("Nhap gia tri cua a,b,c:a= b= c=\n"); scanf("%d %d %d",&a,&b,&c);
  printf("gia tri cua a < 5 la: %d \n",a < 5);
  printf("gia tri cua a <= b la: %d \n",a <= b);
  printf("gia tri cua a > b + c la: %d \n",a > b + c);
  printf("gia tri cua a >= b + 5 la: %d\n",a >= b + 5);
  printf("gia tri cua a == -6 la: %d\n",a == -6);
  printf("gia tri cua a != 0 la: %d\n",a != 0);
  printf("gia tri cua a < 5 va a > b + c la: %d\n",(a < 5) && (a > b + c));
  printf("gia tri cua a <= b or a != 0 la: %d\n",(a <= b) || (a != 0));
  printf("gia tri cua negation a == -6 la: %d\n",!(a ==-6));
}
