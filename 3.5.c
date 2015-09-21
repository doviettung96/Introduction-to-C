#include <stdio.h>
main ()
{
  char day[9];
  int overnight,threeday,weekly,total;
  printf("Welcome to BK library DVD shop\n");
  printf("The day of the week: "); scanf("%s",day); printf("%s\n",day);
  printf("The number of overnight: "); scanf("%d",&overnight); printf("%d\n",overnight);
  printf("The number of three-day: "); scanf("%d",&threeday); printf("%d\n",threeday);
  printf("The number of weekly: "); scanf("%d",&weekly); printf("%d\n",weekly);
  total = 7*overnight + 15*threeday + 21*weekly;
  printf("Total cost= %d$\n",total);
}
  
  
