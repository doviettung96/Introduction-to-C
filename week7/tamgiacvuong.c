#include <stdio.h>
main()
{
  int x,y,n;
  printf("Number of row: \n"); scanf("%d",&n);
    for(y=1;y<=n;y++)
      {
      for (x=1;x<=y;x++)
	printf("*");
	printf("\n");
      }
}
    
