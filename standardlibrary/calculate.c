#include <stdio.h>

#define size 5;

void get(double *a, int size);
double sum(double *a, int size);
double max(double *a, int size);
double min(double *a, int size);

int main()
{
  double a[size];
  get(a,size);
  printf("Sum of all the number in this array: %f\n",sum(a,size));
  printf("Max of this array: %f\n",max(a,size));
  printf("Min of this array: %f\n",min(a,size));
  
}

void get(double *a, int size){
  int i;
  for(i = 0; i < size; ++i){
    printf("a[%d] = ",i);
    scanf("%f",a + i);
  }
    
}
  double sum(double *a, int size){
    double sum;
  int i;
  sum = 0.0;
  for(i = 0; i < size; ++i){
    sum += *(a + i);
  }
  return sum;
}

double max(double *a, int size){
  double max = *a;
  int i;
  for(i = 0; i <size; ++i){
    if (*(a + i + 1) > *(a + i) )
      max = *(a + i +1);
  }
  return max;
}

double min(double *a, int size){
  double min = *a;
  int i;
  for(i = 0; i < size; ++i){
    if (*(a + i +1) < *(a + i))
      min = *(a + i +1);
  return min;
  }
}
