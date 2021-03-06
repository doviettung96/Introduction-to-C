#include <stdio.h>
#define num 40

void draw(int no,int status,int w);

int main(){
  int a[40],i,w[40],s = 0;
  int choice,com,max,min,k,use=0;
  for(i=0;i<num;++i){
    a[i] = 0;
    w[i] = 0;
  }
  do{
     printf("\n1. Using a computer\n2. Leaving a computer\n3. Status of computers\n4. Electricity consumption and bill\n5. The most useful and the least useful computer\n0.Quit\n");
    printf("Your choice? \n"); scanf("%d",&choice);
  switch(choice){
  case 1:printf("What computer do you want to use?\n");
    scanf("%d",&com);
    for(i=0;i<num;++i){
      if(i == com - 1){
        if(a[i]!=0)
        printf("This computer is being used.\n");
      else {
        printf("You can use it right now.\n");
        a[i] = 1;
        w[i]+=400;
        s+=400;
        use +=1;
      }
      }
    }
    break;
  case 2:printf("What computer do you want to leave?\n");
     scanf("%d",&com);
     for(i=0;i<num;++i)
       if(i == com - 1){
         if(a[i]==0)
           printf("This computer is already left\n");
         else{
           printf("Done!\n");
           a[i]=0;
         }
       }
    break;
  case 3: for(i=0;i<num;i=i+5){
       draw(i+1,a[i],w[i]);
       draw(i+2,a[i+1],w[i+1]);
       draw(i+3,a[i+2],w[i+2]);
       draw(i+4,a[i+3],w[i+3]);
       draw(i+5,a[i+4],w[i+4]);
    }
      break;
  case 4: printf("Total amount of electricity is consumed: %d\n",s);
    printf("You have to pay: %.2f dong\n",s*0.75);
    break;
  case 5: max=min=w[0];
    for(i=0;i<num;++i){
      if(w[i]>max)
        max=w[i];
     
      if(w[i]<=min)
        min=w[i];
    }
    printf("\nThe most useful computers are: \n");
    for(i=0;i<num;++i)
      if(w[i]==max)
        printf("%d ",i+1);
    printf("\nThe least useful computers are: \n");
    for(i=0;i<num;++i)
      if(w[i]==min)
        printf("%d ",i+1);
    break;
  case 0: break;
  default:  printf("Invalid choice. Please select again\n"); break;
    }    
  }while(choice != 0);
}


void draw(int no,int status,int w){
   printf(" __________  \n");
   printf("|%5s%-5d| \n","No.",no);
   printf("|%10s| \n",status==0?"OFF":"ON");
   printf("|%5s%-5d| \n","Used",use);
   printf("|%6d %3s| \n",w,"Wh");
   printf(" __________  \n");
  }
