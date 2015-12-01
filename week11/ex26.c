#include <stdio.h>
int imcomeplus(int *salary,int year);
int main(){
  int year;
  int salary;
  printf("Current salary: \n"); scanf("%d",&salary);
  printf("How many years?\n"); scanf("%d",&year);
  if(year>3)
    printf("Your new salary is %d\n",incomeplus(&salary,year));
}
int imcomeplus(int *salary,int year){
  int n;
  n = *salary + 100*year;
  return n;

}
