#include <stdio.h>
void isleapyear(int n);
void main(){
  int n;
  printf("Type in the year:"); scanf("%d",&n);
  isleapyear(n);
}
void isleapyear(int n){
  if(n%4==0&&n%100!=0)
    printf("%d is a leap year\n",n);
  else
    printf("%d is not a leap year\n",n);
}
