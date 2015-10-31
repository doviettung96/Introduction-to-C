#include <stdio.h>
#define ignore() {                 \
int ch;                       \
while((ch = getchar())&&ch!='\n'&&ch!=EOF); \
}
main(){
  int choice,a,n,m;
  long bin,oc;
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
        printf("Type in a positive integer number (decimal):"); scanf("%d",&a);ignore();n=a;m=a;bin=0;oc=0;
        if(a<=0)
        printf("Wrong input. Type again!\n");
      } while(a<=0);
      break;
    case 2:while(n>0){
        bin=bin*10+n%2;
        n=n/2;
      }
      printf("%d is %ld in binary\n\n",a,a%2!=0?bin:10*bin);
      break;
    case 3:printf("%d is %x in hexadecimal\n\n",a,a);break;
     case 4:while(m>0){
        oc=oc*10+m%2;
        m=m/8;
      }
      printf("%d is %ld in binary\n\n",a,a%2!=0?bin:10*bin);
      break;
    case 5:break;
    default:printf("Wrong choice!");break;
    }
  }while(choice != 5);
}
