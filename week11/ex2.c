#include <stdio.h>

double x2(double *x);

int main(){
  int i;
  double a[7] = {1,2,3,4,5,6,7};
  for(i=0;i<5;++i){
    printf("Double of a[%d] is %f\n",i,x2(&a[i]));
    printf("a[%d] is %f\n",i,a[i]);
  }
}

double x2(double *x){
  double n;
  n = *x * 2;
  return n;
}


