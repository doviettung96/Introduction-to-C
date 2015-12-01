#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  typedef struct {
    float str,luck,hp;
  } attributes;
  attributes fighter[3];

  int n,m;
  int i;
  printf("\nWelcome to the world tournament\n");
  for(i = 0; i < 3; ++i)
    in_attributes(fighter[i].str, fighter[i].luck, fighter[i].hp,3);
  
  
}

void in_attributes(float a, float b, float c, int size)
{
  int i;
  for (i = 0; i < size; ++i){
    printf("Type in the attributes of the %d-th fighter\n",i + 1);
    printf("\nStrength: "); scanf( "%f", &a);
    printf("\nLuck: "); scanf( "%f", &b);
    printf("\nHealth: "); scanf( "%f", &c);
  }
}

void out_attributes(float a, float b, float c, int size)
{
  for (i = 0; i < size; ++i){
    printf("The current attributes of the %d-th fighter are\n");
    printf("\nStrength: %f", a);
    printf("\nLuck: %f", b);
    printf("\nHealth: %f", c);
  }
}

void arena(attributes a, attributes b, int f1, int f2, int size)
{
  int j;
  float hp1, hp2;
  int win;
  hp1 = *(c + f1); hp2 = *(c + f2);
  if(*(b + f1) > *(b + f2))
    printf("F%d attack first\n", f1 + 1);
  else
    printf("F%d attack first\n", f2 + 1);

  do{
    if(*(a + f1) >= *(a + f2))
        { 
        hp2 = hp2 - *(a + f1);
        if (hp2 <= 0){
          win = f1;
        }
      
        hp1 = hp1 - *(a + f2);
        if (hp1 <= 0)
          win = f2;
      }
      
      else
        {
          hp1 = hp1 - *(a + f2);
          if (hp1 <= 0)
            win = f2;
    
          hp2 = hp2 - *(a + f1);
          if (hp2 <= 0)
            win = f1;
        }
    } while (hp1 > 0 && hp2 > 0);
    
    
      if(f1 == win)
        {
          printf("%d-th fighter has won and received a buff of 2%% to all attributes\n",f1 + 1);
          printf("%d-th fighter has been beaten and received a buff of 1%% to all attributes\n",f2 + 1);
     
              *(a + f1) *= 1.02;
              *(b + f1) *= 1.02;
              *(c + f1) *= 1.02;
              *(a + f2) *= 1.01;
              *(b + f2) *= 1.01;
              *(c + f2) *= 1.01;
        }
      else
        {
          if(f2 == win)
            {
              printf("%d-th fighter has won and received a buff of 2%% to all attributes\n",f2 + 1);
              printf("%d-th fighter has been beaten and received a buff of 1%% to all attributes\n",f1 + 1);

              *(a + f1) *= 1.01;
              *(b + f1) *= 1.01;
              *(c + f1) *= 1.01;
              *(a + f2) *= 1.02;
              *(b + f2) *= 1.02;
              *(c + f2) *= 1.02;
      }
  }
}
