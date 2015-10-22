#include <stdio.h>
main(){
  int x,y,z,i;
  i=0;
  for(x=0;x<=20;x++){
    for(z=100-x;z>=0;z--){
      y=100-x-z;
      if((5*x+3*y+z/3==100)&&(z%3==0)){
        i++;
  printf("Truong hop %d:\n",i);
  printf("Co %d trau dung, an %d bo co.\n",x,5*x);
  printf("Co %d trau nam, an %d bo co.\n",y,3*y);
  printf("Co %d trau gia, an %d bo co.\n",z,z/3);
  }
    }
  }
}
