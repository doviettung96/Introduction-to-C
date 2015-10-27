#include <stdio.h>
#include <math.h>
#define pi 3.1415
#define ignore() {                  \
int ch;                      \
while((ch=getchar())&&ch!='\n'&&ch!=EOF); \
}
main(){
  char choice;
  double x,square,saiso,e,sin;
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
      sin=x-1/6.0*x*x*x*(1-1/20.0*x*x+1/840.0*x*x*x*x);
      e=1+x*(1+1/2.0*x*(1+1/3.0*x*(1+1/4.0*x*(1+1/5.0*x*(1+1/6.0*x*(1+1/7.0*x))))));
      break;
    case 'S': printf("Sin(%lf)=%lf\n\n",x,sin);break;
    case 'E':printf("Exp(x) = %lf\n\n",e);break;
  case 'R':do{
      square = saiso;
      saiso= 0.5*(saiso+x/saiso);
    } while (fabs(saiso-square)>0.0001);
    printf("Square root of %lf is %lf\n\n",x,square); break;
  case 'Q':break;
  }
  }  while(choice != 'Q');
}
