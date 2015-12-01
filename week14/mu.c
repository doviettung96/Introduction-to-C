#include <stdio.h>
#define size 11
int number(int i);
double score(int i);
int getmenu();
double round(double a);
void result(int s,double p1,double p2,double p3,double p4,double p5);
double sum(double a[]);
double max(double a, double b);
double min(double a, double b);
void check(double a,double b,double c,double d,double e);
  
int main(){
  int i,k;
  int num[size];
  int choice;
  double j1[size],j2[size],j3[size],j4[size],j5[size];
  do{
     printf("1. Typing\n2. Printing the statistics\n3. Validating the judges\n0.Quit\n");
    printf("Your choice? \n"); scanf("%d",&choice);
  switch(choice){
    case 1:
      for(i=0;i<size;++i){
        num[i] = number(i);
        j1[i] = round(score(1));
        j2[i] = round(score(2));
        j3[i] = round(score(3));
        j4[i] = round(score(4));
        j5[i] = round(score(5));
      }
     break;
    case 2: printf("\t%-5s%-8s%-8s%-8s%-8s%-8s\n","No.","Judge 1","Judge 2","Judge 3","Judge 4","Judge 5");
      for(i=0;i<size;++i)
      result(num[i],j1[i],j2[i],j3[i],j4[i],j5[i]);
      break;
    case 3: check(sum(j1),sum(j2),sum(j3),sum(j4),sum(j5)); break;
  case 0: break;
  default:  printf("Invalid choice. Please select again\n"); break;
    }    
  }while(choice != 0);

}

int number(int i){
  int a;
    do{
        printf("The number on the uniform of the %d-th player is: \n",i+1);
        scanf("%d",&a);
    }while(a<=0);
      return a;
  }

double score(int i){
  double j;
  printf("The %d-th judge score: \n",i);
    scanf("%lf",&j);
    return j;
}

double round(double a){
  double g;
  g = a - (int) a;
  if(g >= 0 && g < 0.25)
    a = a - g;
  else if(g < 0.75)
    a = a - g + 0.5;
  else
    a = a - g + 1.0;
  return a;
}

void result(int s,double p1,double p2,double p3,double p4,double p5){
  int i;
    printf("\t%-5d%-8.1lf%-8.1lf%-8.1lf%-8.1lf%-8.1lf\n",s,p1,p2,p3,p4,p5);
}

double sum(double a[]){
  double sum;
  int i;
  sum = 0.0;
  for(i=0; i<size; ++i){
    sum+=a[i];
  }
  return sum;
}

double max(double a, double b){
  double max=a;
  if(b>a)
    max=b;
  return max;
}

double min(double a, double b){
  double min=a;
  if(b<a)
    min=b;
  return min;
}

void check(double a,double b,double c,double d,double e){
  double t,k;
  int i,m;
  t=max(e,(max(d,(max(c,(max(a,b)))))));
  k=min(e,(min(d,(min(c,(min(a,b)))))));
  i=(a==t?1:(b==t?2:(c==t?3:d==t?4:5)));
  m=(a==k?1:(b==k?2:(c==k?3:d==k?4:5)));
    printf("The most rigorous judge is %d-th\n",i);
    printf("The least rigorous judge is %d-th\n",m);
  }
