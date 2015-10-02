#include <stdio.h>
main ()
{
  int a[3],p,weekday,price,young,adult,old;
  char title[100];
  enum day {Monday =2,Tuesday,Wednesday,Thursday,Friday};
  young = 0; adult = 0; old =0;
  {
  printf("Number of persons: ?\n"); scanf("%d",&p);
  printf("Title of movie: ?\n"); scanf("%s",title);
  printf("Type the day of the week(example: 2 = Monday\n"); scanf("%d",&weekday);
  }
  if(p<=0)
    printf("Sadly, no one buy ticket!\n");

  if(p>0)
    {
  printf("Age of No 1: ?\n");
  scanf("%d",&a[1]);
  if(a[1]<=0)
    printf("Wrong. Type again!\n");
  else if(a[1]<18)
      young++;
    else if(a[1]>=65)
       old++;
    else
     adult++;
    }
  if(p>1)
    {
  printf("Age of No 2: ?\n");
  scanf("%d",&a[2]);
  if(a[2]<=0)
    printf("Wrong. Type again!\n");
  else if(a[2]<18)
      young++;
    else if(a[2]>=65)
      old++;
    else
       adult++;
    }
    
    if(p==3)
     {
  printf("Age of No 3: ?\n");
  scanf("%d",&a[3]);
  if(a[3]<=0)
    printf("Wrong. Type again!\n");
  else if(a[3]<18)
      young++;
    else if(a[3]>=65)
      old++;
    else
      adult++;
     }
    
  if(p>0)
  {
    printf("\nGALAXY CINEMA BILLING\n");
    printf("Number of persons: %d\n",p);
    if(p<2)
      printf("Age of No 1: %d\n",a[1]);
    if(p>=2)
      printf("Age of No 2: %d\n",a[2]);
    if(p==3)
      printf("Age of No 3: %d\n",a[3]);
   
  printf("Title of movie: %s\n",title);
  if(weekday<=0 || weekday>8)
    printf("Wrong. Type again!\n");
  else if(weekday<=6)
    {
    price=10;
    printf("Weekend or weekday?: weekday\n");
    }
    else
      {
	price=7;
    printf("Weekend or weekday?: weekend\n");
      }
      printf("Payment: %d*%d*50%% + %d*%d + %d*%d*70%% = %g$\n",price,young,price,adult,price,old,price*young*0.5 + price*adult + price*old*0.7);
  }  
}
