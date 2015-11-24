#include <stdio.h>
#include <string.h>
#include <ctype.h>

void get(char *a,int len,char b, char c);
int main()
{
  int n,len;
  char a[10];
  char b,c;
  printf("Type in the sentence\n");
  scanf("%s",a);
  len = strlen(a);
 printf("Type in 2 chars (b_c)\n");
  scanf("%c_%c",&b,&c);
  get(a,len,b,c);
  printf("%s\n",a);
}

void get(char *a,int len, char b, char c){
  int i;
  for(i = 0; i < len; ++i)
    if(*(a + i) == b) 
      *(a + i) = c;
}
