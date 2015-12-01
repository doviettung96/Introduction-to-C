#include <stdio.h>
#define size 12
int main(){
  int a[size],i,t=0;
  for(i=0;i<size;++i){
    printf("Type in the rain fall of month %d-th\n",i+1);
    scanf("%d",&a[i]);
    t+=a[i];
  }
    printf("%-7s%15s","Month","Rainfall (in mm)\n");
    for(i=0;i<size;++i)
      printf("%-7d%15d\n",i+1,a[i]);
    printf("The average amount of rainfall: %f\n",t/(float)size);
    return 0;
}
