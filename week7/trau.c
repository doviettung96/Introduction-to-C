#include <stdio.h>
main(){
  int x,y,z,i;
  i=0;
  for(z=0;z<=100/3;z++){
    for(x=20-z/5;x>=0;x--){
      y=100-x-3*z;
      if(5*x+3*y+z==100){
        i++;
  printf("Truong hop %d:\n",i);
  printf("Co %d trau dung, an %d bo co.\n",x,5*x);
  printf("Co %d trau nam, an %d bo co.\n",y,3*y);
  printf("Co %d trau gia, an %d bo co.\n",3*z,z);
  }
    }
  }
}
