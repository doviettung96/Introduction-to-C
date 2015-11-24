#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int n,len;
  printf("Type in the size of string\n");
scanf("%d",&n);
  char a[n];
  printf("Type in the sentence\n");
  scanf("%s",a);
  len = strlen(a);
  printf("The number of blanks in the line is:%d\n",count(a,len));
}

int count (char *a,int len)
{
  int n;
  int i;
  for(i = 0; i < len; ++i)
{
    if((*(a + i)) != ' ')
       n++;
  }
       return n;
       }
