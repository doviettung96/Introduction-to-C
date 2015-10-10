#include <stdio.h>
main()
{
  int x,y,a,b,c,d,n;
  printf("Type n: \n"); scanf("%d",&n); printf("Height is: %d\n",2*n-1);
  a=n; b=a; c=a; d=a;
  for (y=1;y<=n;y++){
    for(x=1;x<=n;x++)
      printf("%c",x<a?' ':'*');
      a--;
    for(x=n+1;x<=2*n-1;x++)
	       printf("%c",x>b?' ':'*');
	       b++;
    printf("\n");
  }
  for(y=n+1;y<=2*n-1;y++){
      for(x=n;x>=1;x--)
	printf("%c",x>c-1?' ':'*');
      c--;
      for(x=2*n-1;x>=n+1;x--)
	printf("%c",x<d+2?' ':'*');
      d++;
      printf("\n");
  }
}
