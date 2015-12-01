#include <stdio.h>
const int size=5;

void get(int *p,int size);
int max(int a[], int size);
int min(int b[], int size);
void calcscore (int c[], int size);

int main(){
  int i,x[size];
  get(x,size);
  calcscore(x, size);
  return 0;
}

void get(int *p, int size){
  int i;
    do{
      for(i=0;i<size;++i){
      printf("Type in score: ");
      scanf("%d", p + i);
      if(*p<0||*p>10)
        printf("The scrore is out of range from 0 to 10\n");
      }
    }while(*p<0||*p>10);
  }

int max(int a[], int size){
  int h=a[0];
  int i=0;
  for(i=0;i<size;i++)
    if(a[i]>h)
      h=a[i];
  return h;
}
int min(int b[], int size){
  int i=0;
  int l=b[0];
  for(i=0;i<size;i++)
    if(b[i]<l)
      l=b[i];
  return l;
}
void calcscore(int c[], int size){
  int t=0,i;

  printf("max %d\nmin %d\n", max(c,size), min(c,size));
  for(i=0;i<size;++i)
    t+=c[i];
  printf("Average score: %f\n",(t-max(c,size)-min(c,size))/3.0);
}
