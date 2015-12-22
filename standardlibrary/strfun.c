#include <stdio.h>
#include <string.h>

int strend(char *a, char *b);
char* punc(char *a, char *b);

int main()
{
  char a[30],b[30];
  char* sign = ".,;:!?";
  char *p;
  char c[30];
  printf("Type in 3 strings of characters\n");
  printf("a = ");
  gets(a);
  printf("b = ");
  gets(b);
  printf("c = ");
  gets(c);
  printf("a %d b\n",strcmp(a,b));
  
  if(strend(a,b))
    printf("The string %s has %s at the end\n",a,b);
  else
    printf("The string %s doesn't have %s at the end\n",a,b);
  
  for(p = punc(c, sign); p != NULL; p = punc(p + 1, sign))
    *p = ' ';
  printf("The string c after replaces all signs with spaces is: %s\n",c);
  return 0;
}

int strend(char *a, char *b)
{
  int result = 0;
  if(strlen(b) <= strlen(a)){
    a += strlen(a) - strlen(b);
    if(strcmp(a,b) == 0)
      result = 1;
  }
  return result;
}

char* punc(char *a, char *b)
{
  while(*a != '\0')
    {
      if(strchr(b,*a) != NULL)
        return a;
      ++a;
    }
  return NULL;
}
