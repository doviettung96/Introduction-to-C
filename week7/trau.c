#include <stdio.h>
main(){
  int x,y,z;
  for(z=26;z<=200/7;z++){
    x=4*z-100;
  y=200-7*z;
  printf("Truong hop %d:\n",z-25);
  printf("Co %d trau dung, an %d bo co.\n",x,5*x);
  printf("Co %d trau nam, an %d bo co.\n",y,3*y);
  printf("Co %d trau gia, an %d bo co.\n",3*z,z);
  }
}
