#include <stdio.h>
int main(){
  int *ptr;
  int a,b,c;
  printf("Type in a b c\n");
  scanf("%d %d %d",&a,&b,&c);
  ptr = &a;
  printf("a= %d\n",*ptr);
  ptr = &b;
  printf("b= %d\n",*ptr);
  ptr = &c;
  printf("c= %d\n",*ptr);
  return 0;
}
