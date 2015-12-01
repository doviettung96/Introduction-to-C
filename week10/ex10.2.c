#include <stdio.h>
#define size 10
int main(){
  int a[size],i,t=0;
  for(i=0;i<size;++i){
    printf("Input the %d-th number\n",i+1);
    scanf("%d",&a[i]);
  }
  for(i=0;i<size;++i)
    if(a[i]>a[i-1]&&a[i]>a[i+1])
      t+=a[i];
  printf("The sum of the local maximum is this array: %d\n",t);
}
