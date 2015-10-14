#include <stdio.h>
main()
{
  int a,b,i;
  for(a=0;a<=7;a++){
    printf("|%4s|%6s| ","STT","Ki tu");
    }
        printf("\n");
        for(b=0;b<=15;b++){
        for(a=0;a<=7;a++){
          i=16*a+b;
          if((i>=0&&i<=32)||i>126)
             printf("|%4d|%6c| ",i,' ');
          else
          printf("|%4d|%6c| ",i,i);
          
        }
        printf("\n");
        }
        printf("\n");
        i=16*8;
        for(a=8;a<=15;a++){
    printf("|%4s|%6s| ","STT","Ki tu");
    }
        printf("\n");
        for(b=0;b<=15;b++){
        for(a=8;a<=15;a++){
          printf("|%4d|%6c| ",i,' ');
          i=16*a+b;
        }
        printf("\n");
        }
}
