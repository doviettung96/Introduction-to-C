#include <stdio.h>
#include <math.h>
#define pi 3.1415
#define ignore() {                  \
int ch;                      \
while((ch=getchar())&&ch!='\n'&&ch!=EOF); \
}
main(){
  char choice;
  double x,square,saiso,c=1.0;d=1.0;e=1.0,sin=0;
  int i,j,n;
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
    case 'T':do{ printf("Type in a positive real number:"); scanf("%lf",&x); ignore();
      if(x<0)
        printf("Wrong.Type again\n");
      } while(x<0);
        printf("Type in deviation:"); scanf("%lf",&saiso); ignore();
      break;
    case 'S':printf("Type in n"); scanf("%d",&n); ignore();
      for(i=1,j=1;j<=n,i<=2n+1;i+=2,j++){
        c*=x/i;
        sin+=(j%2==1?c:-c);
          }
  printf("Sin(%lf)=%lf\n\n",x,sin);break;
    case 'E':for(i=1,i<=n;i++){
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
}
