#include <stdio.h>
#include <math.h>
#define ignore() {                  \
int ch;                      \
while((ch=getchar())&&ch!='\n'&&ch!=EOF); \
}
int main(){
  char choice;
  double x,square,saiso,c=1.0,d=1.0,e=1.0,sin=0;
  int i,n;
  do{
    printf("MENU\n");
    printf("Your choice?\n");
    printf("Type (T)\n");
    printf("SIN X (S)\n");
    printf("SQUARE ROOT (R)\n");
    printf("E^X (E)\n");
    printf("QUIT (Q)\n");
    choice=getchar(); ignore();
    switch (choice){
    case 'T':do{
        printf("Type in a positive real number:"); scanf("%lf",&x); ignore();
      if(x<0)
        printf("Wrong.Type again\n");
      } while(x<0);
        printf("Type in deviation:"); scanf("%lf",&saiso); ignore();
      break;
    case 'S':do {
        printf("Type in n: "); scanf("%d",&n); ignore();
        if(n<=1)
          printf("n must be greater than 1\n");
      } while(n<=1);
      for(i=1;i<=n;i++){
        c*=x/i;
        sin+=(i%2==0?0:(i%4==1?c:-c));
          }
  printf("Sin(%lf)=%lf\n\n",x,sin);break;
    case 'E':do{
    printf("Type in n: "); scanf("%d",&n); ignore();
    if(n<=1)
      printf("n must be greater than 1\n");
  } while (n<=1);
      for(i=1;i<=n;i++){
        d*=x/i;
          e+=d;
      }
      printf("Exp(%lf) = %lf\n\n",x,e);break;
  case 'R':do{
      square = saiso;
      saiso= 0.5*(saiso+x/saiso);
    } while (fabs(saiso-square)>0.0001);
    printf("Square root of %lf is %lf\n\n",x,square); break;
  case 'Q':break;
  }
  }  while(choice != 'Q');
  return 0;
}
