#include <stdio.h>
#include <math.h>
int sum(int n);
void sub(int n);
void square(int n);
void main(){
  int n;
  printf("Input n\n"); scanf("%d",&n);
  if(n<1)
    printf("Error! n must be greater than 1\n");
  else{
  printf("The sum is: %d\n",sum(n));
  sub(n);
  square(n);
  }
}
int sum(int n){
  int i,s=0;
  for(i=0;i<=n;i++)
    s=s+i*i*i;
    return s;
}
void sub(int n){
  int i;
  printf("All the submultiples of %d are: ",n);
  for(i=1;i<=n;++i)
    if(n%i==0)
      printf("%d ",i);
  printf("\n");
}
void square(int n){
  int i;
  printf("All the perfect squares: ");
  for(i=1;i<=n;++i)
    printf("%d ",i*i);
  printf("\n");
}
