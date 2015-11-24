#include <stdio.h>
#include <string.h>
#include <ctype.h>

int get(char *a);
int main()
{
  int n,len;
  char a[8];
  char b,c;
  printf("Type in the sentence\n");
  scanf("%s",a);
  printf("The code %s in proper format\n",get(a) == 0?"is not":"is");
  
}

int get(char *a){
  int i;
  for(i = 3; i < 8; ++i){
    if(!isdigit(*(a + i))) 
      return 0;
  }
  return 1;
}
