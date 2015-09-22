#include <stdio.h>
main ()
{
  int number;
  char string[100];
  printf("Type the number: \n"); scanf("%d",&number);
  printf("Type the string: \n"); scanf("%s",string);
  printf("Your ouput: \n");
  printf("%d\n",number); printf("%s\n",string);
}
