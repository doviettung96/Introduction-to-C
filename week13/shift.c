#include <stdio.h>

void left(char *a, int size, int distance);
void right(char *a, int size, int distance);

int main()
{
  int size;
  int l,r;
  printf("Type in the size of the string\n");
  scanf("%d",&size);
  char a[size + 1];
  printf("Type in the string\n");
  scanf("%s",a);
  printf("How many distance do you want to shift? (left right)\n");
  scanf("%d %d",&l,&r);
  left(a, size, l);
  right(a, size, r);
  return 0;
}

void left(char *a, int size, int distance)
{
  int i,j;
  char b[size + 1];
  for(i = 0, j = distance; i < size - distance , j < size; ++i, ++j)
    *(b + i) = *(a + j);
  for(i = size - distance, j = 0; i < size, j < distance; ++i, ++j)
    *(b + i) = *(a + j);
  printf("The string a after shifting left %d position becomes\n", distance);
  for(i = 0; i < size; ++i)
    printf("%c",*(b + i));
  printf("\n");
}

void right(char *a, int size, int distance)
{
  int i,j;
  char b[size + 1];
  for(i = size - distance, j = 0; i < size, j < distance; ++i, ++j)
    *(b + j) = *(a + i);
  for(i = 0, j = distance; i < size - distance , j < size; ++i, ++j)
    *(b + j) = *(a + i);
  printf("The string a after shifting right %d position becomes\n", distance);
  for(j = 0; j < size; ++j)
    printf("%c",*(b + j));
  printf("\n");
}
