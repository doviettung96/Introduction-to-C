#include <stdio.h>
#include <math.h>
main ()
{
  float x1,y1,x2,y2,distance;
  printf("Type your coordinate x1;y1\n");
  scanf("%f;%f",&x1,&y1);
  printf("Type your coordinate x2;y2\n");
  scanf("%f;%f",&x2,&y2);
  if(x1==0)
    if(y1==0)
    printf("You're at the center\n");
    else
      if(y1<0)
    printf("You're in the South\n");
      else
    printf("You're in the North\n");
else
  if(y1==0)
    if(x1>0)
      printf("You're in the East\n");
    else
      printf("You're in the West\n"); 
   if(x1>0)
      if(y1>0)
      printf("It's North East\n");
    else
	printf("It's South East\n");
    else
	   if(y1>0)
	     printf("It's North West\n");
	   else
	       printf("It's South West\n");
   distance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)); 
printf("The distance to your destination is: %f m\n",distance);
}
