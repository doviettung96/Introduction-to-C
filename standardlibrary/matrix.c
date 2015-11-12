#include <stdio.h>

/* size = the number of columns in the original array */
#define size 4;
#define degree 3;

void in_matrix(float *a, int size, int degree);
void out_matrix(float *a, int size, int degree);
void mul_matrix(float *a, float *b, float *c, int size, int degree);
void add_matrix(float *a, float *b, float *c, int size, int degree);

int main()
{
  float a[degree][degree];
  float b[degree][degree];
  float c[degree][degree];
  float d[degree][degree];
  
  in_matrix(a,size,degree);
  in_matrix(b,size,degree);
  
  mul_matrix(a,b,c,size,degree);
  add_matrix(a,b,c,size,degree);

  printf("\nA = \n")
  out_matrix(a,size,degree);
  printf("\nB = \n");
  out_matrix(b,size,degree);
  printf("\nC = \n");
  out_matrix(c,size,degree);
  printf("\nD = \n");
  out_matrix(d,size,degree);
  return 0;
}

void in_matrix(float *a, int size, int degree){
  int i,j;
  for(i = 1; i <= degree; ++i)
    for(j = 1; j <= degree; ++j)
      {
        printf("\na[%d][%d] = ",i,j);
        scanf("%f", a + i*size + j);
      }
}

void out_matrix(float *a, int size, int degree){
  int i,j;
  for(i = 1; i <= degree; ++i)
    {
      printf("\n");
      for(j = 1; j <= degree; ++j)
        printf("%8.2f", *(a + i*size + j));
    }
}

void mul_matrix(float *a, float *b, float *c, int size, int degree){
  int i,j,k;
  for(i = 1; i <= degree; ++i)
    for(j = 1; j <= degree; ++j)
      {
        *(c + i*size +j) = 0;
        for(k = 1; k <= degree; ++k)
          *(c + i*size + j) += (*(a + i*size + k) * (b + k*size + j) );
      }
}

void add_matrix(float *a, float *b, float *c, int size, int degree){
  int i,j;
  for(i = 1; i <= degree; ++i)
    for(j =1; j <= degree; ++j)
      *(c + i*size + j) = *(a + i*size + j) + *(b + i*size +j);
}
