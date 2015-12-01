#include <stdio.h>

main()
{
  typedef struct {
    int rainfall;
    int htem, ltem;
    float  atem;
  } weather;
  weather tab[12];
  int i;
  int h;
  int l;
  int total = 0;
  for( i = 0; i < 12; ++i){
    printf("Month %d-th\n",i + 1);
    printf("Rainfall (mm)? \n");
    scanf("%d",&tab[i].rainfall);
    total += tab[i].rainfall;
    printf("High tem (C)? \n");
    scanf("%d",&tab[i].htem);

    printf("Low tem (C)? \n");
    scanf("%d",&tab[i].ltem);
  }
  h =  tab[0].htem;
  l =  tab[0].ltem; 
  for( i = 0; i < 12; ++i){
    if(tab[i].htem > h)
      h = tab[i].htem;
    if(tab[i].ltem < l)
      l = tab[i].ltem;

    tab[i].atem = 0.5 *(tab[i].htem + tab[i].ltem);
    printf("The average temperature of %d-th month is %.1f\n",i + 1, tab[i].atem);
  }
    printf("The highest is %d and lowest is %d\n",h,l);
    printf("The total rainfall is %d and the average rainfall is %.2f\n", total, total/12.0);
}
