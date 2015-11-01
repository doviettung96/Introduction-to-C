#include <stdio.h>
#include <string.h>
#define ignore() {                 \
int ch;                       \
while((ch = getchar())&&ch!='\n'&&ch!=EOF); \
}
int choice,x;
void printbinary (int n);
void printoctal (int n);
void printhexa (int n);
void main(){
  do{
    printf("Program conversing the type of number:\n");
    printf("by Do Viet Tung\n");
    printf("1. Type number (decimal)\n");
    printf("2. Binary form\n");
    printf("3. Hexadecimal form\n");
    printf("4. Octal form\n");
    printf("5. Exit\n");
    printf("You choice?"); scanf("%d",&choice); ignore();
    switch (choice) {
    case 1:do{
        printf("Type in a positive integer number (decimal):"); scanf("%d",&x);ignore();
        if(x<=0)
        printf("Wrong input. Type again!\n");
      } while(x<=0);
      break;
    case 2: printbinary (x);
      break;
    case 3: printhexa (x);
      break;
    case 4: printoctal (x);
      break;
    case 5:break;
    default:printf("Wrong choice!");break;
    }
  }while(choice != 5);
}
void  printbinary (int n){
  long bin=0;
  int a=n,i=1,k=1;
  while(n>0){
  bin+=n%2*i;
  i*=10;
  n=n/2;
  }
  printf("%d is %ld in binary\n\n",a,bin);
}
void printhexa (int n){
  int x,c=0,rem,lost;
  int i,j,z;
  printf("%d is ",n);
  while(n>0){x=n;i=0;
  while(x>0){
    rem=x%16;
    x=x/16;
    i++;
  }
  if(c==1)
    for(z=1;z<i-j;z++)
      printf("0");
    if(rem<10)
      printf("%d",rem);
    else if(rem==10)
      printf("A");
    else if(rem==11)
      printf("B");
    else if(rem==12)
      printf("C");
    else if(rem==13)
      printf("D");
    else if(rem==14)
      printf("E");
    else if(rem==15)
      printf("F");
    lost=1;
    for(z=1;z<i;z++)
      lost*=16;
    n=n-rem*lost;
    if(n==0)
      for(z=1;z<i;z++)
        printf("0");
    j=i;
    c=1;
  }
  printf(" in hexadecimal\n\n");
}
void printoctal (int n){
  long oc=0;
  int a=n,i=1;
  while(n>0){
    oc+=n%8*i;
    i*=10;
    n=n/8;
  }
  printf("%d is %ld in octadecimal \n\n",a,oc);
}
