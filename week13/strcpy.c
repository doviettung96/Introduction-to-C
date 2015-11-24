#include <stdio.h>
#include <string.h>

int strcp(char *b, char *a);
int main()
{
  int i;
  char a[10];
  char b[20];
  char c[30];
  printf("Type in the 1st sentence\n");
  gets(a);
  printf("Type in the 2nd setence\n");
  gets(b);
  printf("The 2nd sentence now become\n");
  for(i = 0; i < (strcp(b,a)); ++i)
    printf("%c",*(b + i));
  printf("\n");
  printf("c = ");
  strcpy(c,a);
  printf("%s\n",c);
}

int strcp(char *b, char *a){
  int i = 0;
  int j;
  while(*(a + i) != '\0')
    i++;
  for(j = 0; j < i; ++j)
    *(b + j) = *(a + j);
  *(b + j) = '\0';
  return i;
  }
  
