#include <stdio.h>

char class(float grade);
void out(char *id, char *name, float grade, char class);

int main()
{
  typedef struct {
    char id[6];
    char name[31];
    float grade;
    char classement;
  } student;

  int i,j,num;
  printf("Type in the number of students\n");
  scanf("%d",&num);
  student hs[num];
  student temp;
  for(i = 0; i < num; ++i){
    printf("Information of the %d-th student \n",i + 1);
    printf("ID? \n");
    scanf(" %[^\n]s", hs[i].id);
    printf("Name?\n"); 
    scanf(" %[^\n]s", hs[i].name);
    printf("Grade?\n"); scanf(" %f",&hs[i].grade);  
    hs[i].classement = class(hs[i].grade);
    
  }
  for(i = 0; i < num - 1; ++i)
    for(j = 1; j < num; ++j)
      if(hs[i].grade < hs[j].grade){
      temp = hs[i];
      hs[i] = hs[j];
      hs[j] = temp;
    }
  printf("\n The list of students according to their grade\n");
  for(i = 0; i < num; ++i)
    out(hs[i].id, hs[i].name, hs[i].grade, hs[i].classement);
  return 0;
}

char class(float grade){
  if (grade <= 10 && grade >= 9)
    return 'A';
  else
    if (grade >= 8)
      return 'B';
    else
      if (grade >= 6.5)
	return 'C';
      else
	return 'D'; 
}

void out(char *id, char *name, float grade, char class){
  printf("ID : %s\n", id);
  printf("Name : %s\n", name);
  printf("Grade : %.2f\n", grade);
  printf("Classement : %c\n", class);
}
