#include <stdio.h>
void rev(int n);
void main(){
  int a;
  do{
  printf("Type in a natural number: "); scanf("%d",&a);
  if(a%1!=0&&a<0)
    printf("Your number is not a natural number\n");
  }while(a%1!=0&&a<0);
  rev(a);
}
void rev(int n){
  int rev=0,a=n;
  while(n>0){
    rev=rev*10+n%10;
    n/=10;
  }
  printf("The reverse number of %d is %d\n",a,rev);
}
