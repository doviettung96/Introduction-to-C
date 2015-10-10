#include <stdio.h>
main()
{
  int x,y,z,n;
  printf("Number of row: \n"); scanf("%d",&n);
  z=n;
  for (x=1;x<=n;x++)
    {
      printf("*");
    }
    printf("\n");
    for(y=2;y<=n-1;y++)
      {
	for (x=2;x<=n;x++)
	  printf("%c",x==z?'*':' ');
	    z--;
      printf("\n");
      }
    for (x=1;x<=n;x++)
    {
      printf("*");
    }
    printf("\n");
}
    
