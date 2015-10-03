#include <stdio.h>
main ()
{
  int myheight,o1,h1,o2,h2;
  int d1,d2,d3,d4;
  printf("\nLogin - enter your height (cm): "); scanf("%d",&myheight); printf("%d\n",myheight);
  printf("Hi Lan:\n");
  printf("- How old are you? "); scanf("%d",&o1);
  if(o1 < 16)
    printf("%d (%d)\n",o1,d1=0);
  else if(o1>16&&o1<21)
    printf("%d (%d)\n",o1,d1=5);
  else
    printf("%d (%d)\n",o1,d1=2);
  printf("- What's your height? "); scanf("%d",&h1);
  if (h1 >= myheight)
    printf("%d (%d)\n",h1,d2=-1);
  else if((h1+30)<myheight)
    printf("%d (%d)\n",h1,d2=-2);
  else
    printf("%d (%d)\n",h1,d2=3);
  
  printf("Hi Mai:\n");
  printf("- How old are you? "); scanf("%d",&o2);
  if (o2 < 16)
    printf("%d (%d)\n",o2,d3=0);
  else if(o2>16&&o2<21)
    printf("%d (%d)\n",o2,d3=5);
  else printf("%d (%d)\n",o2,d3=2);
  printf("- What's your height? "); scanf("%d",&h2);
  if (h2>=myheight)
    printf("%d (%d)\n",h2,d4=-1);
  else if(h2+30<myheight)
    printf("%d (%d)\n",h2,d4=-2);
  else
    printf("%d (%d)\n",h2,d4=3);
  printf(" Your decision: \n");
  if ((d1+d2)>(d3+d4))
    printf("Lan, are you free on Saturday?\n");
  else if((d1+d2)<(d3+d4))
	  printf("Mai, are you free on Saturday?\n");
	  else printf("Lan, are you free on Saturday?\nMai, are you free on Sunday?\n");
}
