#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define size 15

void trimleft(char *a);
char trimright(char *a);
char trimiddle(char *a);

int main()
{
  char a[n + 1];
  printf("Type in the string\n");
  gets(a);
  trimleft(a);
  trimright(a);
  trimiddle(a);
  return 0;
}

void trimleft(char *a)
{
  int i,j;
  while(*a == ' ')
    for (i = 0; i < strlen(a); ++i){
      *(a + i) = *(a + i + 1);
    }
}

int trimright(char *a)
{
  int i,j;
  int right = 0;
  for (i = size -1 ; i >= 0; --i){
    if(!isspace(*(a + i)))
      break;
    right++;
  }
  return right;
}

void trimiddle(char *a, int size, int left, int right)
{
  int i;
  for(i = left; i < size - right; ++i){
    if(isspace(*(a + i)) && isspace(*(a + i + 1))){
      *(a + i) = '\0';
    }
  }
}

void out(char *a)
