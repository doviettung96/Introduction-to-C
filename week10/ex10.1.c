#include <stdio.h>
#define size 10
main(){
  int a[size];
  int i,t=0,min;
  for(i=0;i<size;i++){
    printf("Type in %d-th number",i+1);
    scanf("%d",&a[i]);
    if(a[i]%2!=0)
      t+=a[i];
    min=a[0];
    if(a[i]<min)
      min=a[i];
  }
  printf("Sum of the odd numbers is %d\n",t);
  printf("The minumum value is %d\n",min);
}
