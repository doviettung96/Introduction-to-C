#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#define ignore(){                 \
int ch;          \
 while((ch=getchar())&&ch!='\n'&&ch!=EOF);      \
}
int main(){
  int goal,start,i,a,b,c;
  printf("ICT GAME CENTER - SMART STRATEGY\n");
  printf("Start:"); scanf("%d",&start); ignore(); printf("%d\n",start);
  printf("Goal:"); scanf("%d",&goal); ignore(); printf("%d\n",goal);
  srand(time(NULL));
  i=rand()%2; a=start;
  printf("Who plays first (randomly): P%d\n",i==0?1:2);
  do{
    switch(i%2){
    case 0:printf("P1's turn\n");do{
    printf("Choose a number:"); scanf("%d",&b); ignore(); printf("%d\n",b);
    if(b<=0||b>5)
    printf("Invalid input. Please retype!\n");
    else if((b-c)%2==0&&c!=0)
    printf("Foul!Retype.");
      } while(b<=0||b>5||((b-c)%2==0&&c!=0)); a+=b;i++;
    printf("Now the value is: %d\n",a); break;
    case 1:printf("P2's turn\n");do{
    printf("Choose a number:"); scanf("%d",&c); ignore(); printf("%d\n",c);
     if(c<=0||c>5)
    printf("Invalid input. Please retype!\n");
    else if((b-c)%2==0&&b!=0)
    printf("Foul!Retype.");
    } while(c<=0||c>5||((b-c)%2==0&&b!=0)); a+=c;i++;
    printf("Now the value is: %d\n",a); break;
      }
  } while (a<goal);
  printf("P%d has won the game. Congratulate!\n",(i%2==0)?2:1);
  return 0;
}
