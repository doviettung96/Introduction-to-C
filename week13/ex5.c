#include <stdio.h>
#include <string.h>

int strend(char *a, char *b);
int main()
{
  char a[20];
  char b[20];
  printf("Type in a sentence\n");
  gets(a);
  printf("Another\n");
  gets(b)

  printf("\n");
}

int strend(char *a, char *b){
  int i;
  for (i = 0; i < n; ++i){
    printf("%c",*(a + i));
    if(*(a  + i) == ' ')
    printf("\n");
  }

}
