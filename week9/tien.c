#include <stdio.h>
void printbill (int a,int b,int c,int d);
int main(){
  int x,y,z,k,i=0,n,xmax=0,ymax=0,zmax=0,kmax=0;
  do{
  printf("How much money do you want to withdraw? "); scanf("%d",&n);
  if(n%5000!=0)
      printf("The amount of money must is a multiple of 5000\n");
  } while(n%5000!=0);
  for(x=0;x<=n/100000;x++)
    for(y=0;y<=n/20000;y++)
      for(z=0;z<=n/10000;z++){
        k=(n-100000*x-20000*y-10000*z)/5000;
        if(k>=0&&k%1==0){
          if(x>xmax)
            xmax=x;
            ymax=(n-xmax*100000)/20000;
            zmax=(n-xmax*100000-ymax*20000)/10000;
            kmax=(n-xmax*100000-ymax*20000-zmax*10000)/5000;
          i++;
          printf("Case %d: ",i);
          printbill (x,y,z,k);
        }
      }
          printf("\nThe best choice is: ");
          printbill (xmax,ymax,zmax,kmax);
  return 0;
}
void printbill (int a,int b,int c,int d){
  if(a>0)
    printf("%d 100000-bill ",a);
  if(b>0)
    printf("%d 20000-bill ",b);
  if(c>0)
    printf("%d 10000-bill ",c);
  if(d>0)
    printf("%d 5000-bill ",d);
  printf(".\n");
}
