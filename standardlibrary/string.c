#include <stdio.h>
#include <string.h>

void trimleft(char *a);
void trimright(char *a);
void trimmiddle(char *a);
void search(char a[][30],char *b);
int main()
{
  char lookup[30];
  char prods[5][30] = {"TV127  31 inch Television",
	                     "CD057  CD Player",
	                     "TA877  Answering Machine",
	                     "CS409  Car Stereo",
	                     "PC655  Personal Computer"};
  printf("Type in the product number\n");
  scanf("%s",lookup);
  trimleft(lookup);
  trimright(lookup);
  trimmiddle(lookup);
  search(prods,lookup);
  
}

void search(char a[][30], char *b){
  int i;
  char *check = NULL;
  for (i = 0; i < 5; ++i){
    check = strstr(*(a + i), b);
    if (check != NULL)
      break;
  }
  if (check == NULL)
    printf("No matching product was found.\n");
  else
    printf("%s\n",*(a + i));
}

void trimleft(char *a){
  int i;
  while(*a == ' ')
    for( i = 0; i < strlen(a); ++i)
      *(a + i) = *(a + i + 1);
}

void trimright(char *a){
  int i;
  while(*(a + strlen(a)) == ' ')
    *(a + strlen(a)) = *(a + strlen(a) + 1 );
}

void trimmiddle(char *a){
  int i,j;
  int n = strlen(a);
  for (i = 0; i < n; ++i)
    if(*(a + i) == ' ' && *(a + i + 1) == ' ')
      {
	for(j = i; j < n; ++j)
	  *(a + j ) = *(a + j + 1);
	n--;
	i--;
      }
}
