#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void in_attributes(float *a, int degree);
void out_attributes(float *a, int degree);
void arena(float *a, int f1, int f2, int degree);
void bonus(float *a, int f1, int f2, int degree, int n, int bonus);
  
int main()
{
  float fighter[3][3];
  int n,m;
  printf("\nWelcome to the world tournament\n");
  in_attributes((float*)fighter,3);
  printf("\nHow many round of fight?\n");
  scanf("%d",&n);
  
  for (m = 1; m <= n; ++m)
    {
      srand(time(NULL));

      printf("\nRound %d\n",m);
      printf("\nMatch 1: F1 VS F2\n");
      arena((float*)fighter,0,1,3);
      bonus((float*)fighter,0,1,3,rand() % 2, rand() % 100);

      printf("\nMatch 2: F2 vs F3\n");
      arena((float*)fighter,1,2,3);
      bonus((float*)fighter,1,2,3,rand() % 2, rand() % 100);

      printf("\nMatch 3: F3 vs F1\n");
      arena((float*)fighter,2,0,3);
      bonus((float*)fighter,2,0,3,rand() % 2, rand() % 100);
  }
  out_attributes((float*)fighter,3);
  return 0;
}

void in_attributes(float *a, int degree){
  int i;
  for (i = 0; i < degree; ++i)
    {
      printf("\nType in the attributes of the %d-th fighter (str_agi_hp)\n", i+1);
      scanf("%f_%f_%f",a + i*degree, a + i*degree + 1, a + i*degree + 2);
    }
}

void out_attributes(float *a, int degree)
{
  int i;
  for (i = 0; i < degree; ++i)
    printf("\nThe attributes of the %d-th fighter are (str agi hp): %8.2f %8.2f %8.2f\n", i + 1,*(a + i*degree), *(a + i*degree + 1),*(a + i*degree + 2));
}

void arena(float *a, int f1, int f2, int degree)
{
  int j;
  float hp1, hp2;
  int win;
  hp1 = *(a + f1*degree + 2);
  hp2 = *(a + f2*degree + 2);
  if(*(a + f1*degree + 1) >= *(a + f2*degree + 1))
    printf("F%d attack first\n",f1 + 1);
  else
    printf("F%d attack first\n",f2 + 1);
  
    do {
     
      if(*(a + f1*degree + 1) >= *(a + f2*degree + 1))
        { 
        hp2 = hp2 - *(a + f1*degree);
        if (hp2 <= 0){
          win = f1;
        }
      
        hp1 = hp1 - *(a + f2*degree);
        if (hp1 <= 0)
          win = f2;
      }
      
      else
        {
          hp1 = hp1 - *(a + f2*degree);
          if (hp1 <= 0)
            win = f2;
    
          hp2 = hp2 - *(a + f1*degree);
          if (hp2 <= 0)
            win = f1;
        }
    } while (hp1 > 0 && hp2 > 0);
    
    
      if(f1 == win)
        {
          printf("%d-th fighter has won and received a buff of 2%% to all attributes\n",f1 + 1);
          printf("%d-th fighter has been beaten and received a buff of 1%% to all attributes\n",f2 + 1);
          for (j = 0; j < degree; ++j)
            {
              *(a + f1*degree + j) *= 1.02;
              *(a + f2*degree + j) *= 1.01;
            }
        }
      else
        {
          if(f2 == win)
            {
              printf("%d-th fighter has won and received a buff of 2%% to all attributes\n",f2 + 1);
              printf("%d-th fighter has been beaten and received a buff of 1%% to all attributes\n",f1 + 1);
              for (j = 0; j < degree; ++j)
                {
                  *(a + f1*degree + j) *= 1.01;
                  *(a + f2*degree + j) *= 1.02;
                }
            }
        }
}

void bonus(float *a, int f1, int f2, int degree, int n, int bonus){
  int j;
    if( n == 0){
      for (j = 0; j < degree; ++j)
        *(a + f1*degree + j) *= (1 +  bonus / 100.0);
      printf("The %d-th fighter has received a buff of %d%% to all attributes\n", f1 + 1, bonus);
    }
    else
      {
        for (j = 0; j < degree; ++j)
          *(a + f2*degree + j) *= (1 +  bonus / 100.0);
        printf("The %d-th fighter has received a buff of %d%% to all attributes\n",f2 + 1,  bonus);
      }
}
