#include <stdio.h>


int main()
{
  int i;
  typedef struct {
    char name[20];
    int age;
    float grade;
  } student_t;

  student_t hs[3];
  for(i = 0; i < 3; ++i)
{
    printf("Type in the name of the student %d\n",i + 1);
    gets(hs[i].name);
    printf("Type the the age of the student %d\n", i + 1);
    scanf("%d",&hs[i].age); 
    printf("Type in the grade of the students %d\n", i + 1);
    scanf("%f",&hs[i].grade); 
 }
  for(i = 0; i < 3; ++i)
    printf("%s%d%f\n",hs[i].name, hs[i].age, hs[i].grade);
return 0;
}
