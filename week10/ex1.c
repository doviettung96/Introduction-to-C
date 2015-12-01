#include <stdio.h>
float kinetic (float m,float v);
void main(){
  float m,v;
  do{
  printf("Type in mass(m)\n"); scanf("%f",&m);
  printf("Type in velocity(v)\n"); scanf("%f",&v);
  } while(m<=0||v<=0);
  printf("The kinetic energy of the object m=%.2f and v=%.2f is: %.2f\n",m,v,kinetic(m,v));}
float kinetic (float m,float v){
  return m*v*v/2;}

