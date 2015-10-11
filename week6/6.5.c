#include <time.h>
#include <stdio.h>
#include <stdlib.h>
main ()
{
  int a,b;
  printf("Nhap so(1;10): \n");
 scanf("%d",&a);
  srand((unsigned)time(NULL));
  b= 1+rand()%10;
  if(a<1 || a>10)
    printf("Wrong. Type again!\n");
else
if(a>b)
printf("Too high\n");
 else if(a<b)
printf("Too low\n");
else
  printf("Bingo!\n");
printf("%d\n",b);
}
