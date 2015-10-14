#include <stdio.h>
main()
{
  int a,b;
  printf("%80s\n\n","Bang Cuu Chuong");
  for(b=1;b<=9;b++){
    for(a=1;a<=9;a++){
    printf("|%d x %d = %2d|",a,b,a*b);
    printf("\t");
    }
    printf("\n");
      }
}
