#include <stdio.h>


void reverseint(int *a);

int main(){
 int a;
  do{
    printf("Type in a positive integer number\n");
    scanf("%d",&a);
    if(a < 0)
      printf("Please type in a positive integer number\n");
  } while (a < 0);
  reverseint(&a);
  printf("%4d\n",a);
}

void reverseint(int *a){
  int rev = 0;
  int n = *a;
  while (n > 0){
    rev = rev * 10 + n%10;
    n /= 10;
  }
  *a = rev;
}
