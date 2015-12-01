#include <stdio.h>
#include <math.h>
int prime(int n);
void main(){
  int i,n;
  printf("Type in number n\n"); scanf("%d",&n);
  for(i=2;i<=n;++i)
    if(prime(i))
      printf("%d\n",i);
}
int prime(int n){
  int i;
  for(i=2;i<=sqrt(n);++i){
    if(n%i==0)
      return 0;
  }
  return 1;
  }
