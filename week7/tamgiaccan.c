#include <stdio.h>
main()
{
  int x,y,a,b,n,m;
  printf("Height: \n"); scanf("%d",&n);
  m=(n-1)*2+1;
  a=m/2+1;
  b=m/2+1;
  for (y=1;y<=n;y++){
    for(x=1;x<=m/2+1;x++)
      printf("%c",x<a?' ':'*');
      a--;
    for(x=m/2+2;x<=m;x++)
	       printf("%c",x<=b?'*':' ');
	       b++;
	       printf("\n");
  }
}
    
