#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define size 15

void trimleft(char *a);
void trimright(char *a);
void trimiddle(char *a);

int main()
{
  char a[size + 1];
  printf("Type in the string\n");
  gets(a);
  trimleft(a);
  printf("%-16s","Remove left ");
  printf("%-16s\n",a);
  trimright(a);
  printf("%-16s","Remove right ");
  printf("%-16s\n",a);
  trimiddle(a);
  printf("%-16s","Remove middle ");
  printf("%-16s\n",a);
  return 0;
}

void trimleft(char *a)
{
  int i;
  while(*a == ' ')
    for (i = 0; i < strlen(a); ++i)
      *(a + i) = *(a + i + 1);
}

void trimright(char *a)
{
  int i;
  while(*(a + strlen(a)) == ' ')
    *(a + strlen(a)) = *(a + strlen(a) + 1); 
}

void trimiddle(char *a)
{
  int i,j;
  int n = strlen(a);
  for(i = 0; i < n; ++i){
    if(*(a + i) == ' ' && *(a + i + 1) == ' ')
      {
        for(j = i; j < n; ++j)
          *(a + j) = *(a + j + 1);
        n--;
        i--;
      }
  }
}
