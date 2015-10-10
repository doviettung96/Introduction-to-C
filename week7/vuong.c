#include <stdio.h>
main()
{
  int x,y,n;
  printf("Number of row: \n"); scanf("%d",&n);
  for (x=1;x<=n;x++)
    {
      printf("*");
    }
    printf("\n");
    for(y=2;y<n;y++){
      for (x=1;x<=n;x++)
	printf("%c",(x==1||x==n)?'*':' ');
   printf("\n");
}
    for (x=1;x<=n;x++){
      printf("*");}
 printf("\n");    
}
    
