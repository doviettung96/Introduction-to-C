#include <stdio.h>
main()
{
  int x,y,a,b,n;
  printf("Height: \n"); scanf("%d",&n);
  a=b=n;
  for (y=1;y<=n;y++){
    for(x=1;x<=2*n-1;x++)
      printf("%c",(x<a||x>b)?' ':'*');
    a--; b++; printf("\n");
  }
}
    
