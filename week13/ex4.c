#include <stdio.h>
#include <string.h>

void sep(char *a, int n);
int main()
{
  char a[20];
  printf("Type in a sentence\n");
  gets(a);
  sep(a,strlen(a));
  printf("\n");
}

void sep(char *a, int n){
  int i;
  for (i = 0; i < n; ++i){
    printf("%c",*(a + i));
    if(*(a  + i) == ' ')
    printf("\n");
  }

}
