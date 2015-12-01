#include <stdio.h>
void dotest(char ans, int j);
int check(char ans, char corr);

int main()
{
  typedef struct {
    char ans[5];
    char corr;
  } test;

  typedef struct {
    int num;
    int score;
  } result;
  
  
  test exam[5];
  result can[5];
  int i,j;
  result tmp;
  
  printf("The 1st question: \n");
  printf("A. \nB. \nC. \n");
  exam[0].corr = 'A';
  printf("The 2nd question: \n");
  printf("A. \nB. \nC. \n");
  exam[1].corr = 'B';
  printf("The 3rd question: \n");
  printf("A. \nB. \nC. \n");
  exam[2].corr = 'C';
  printf("The 4th question: \n");
  printf("A. \nB. \nC. \n");
  exam[3].corr = 'A';
  printf("The 5th question: \n");
  printf("A. \nB. \nC. \n");
  exam[4].corr = 'B';
  
  
  
  for(i = 0; i < 5; ++i){
    can[i].num = i + 1;
    can[i].score = 0;
    for(j = 0; j < 5; ++j){
      dotest(exam[i].ans[j], j);
      can[i].score += check(exam[i].ans[j], exam[i].corr);
    }
  }
  
  for(i = 0; i < 4; ++i)
    for(j = 1; j < 5; ++i)
      if(can[i].score > can[j].score){
        tmp = can[i];
        can[i] = can[j];
        can[j] = tmp;
      }
  
  printf("The final result in the increasing order\n");
  for(i = 0; i < 5; ++i)
    printf("Candidate number %d, score %d\n",can[i].num,can[i].score);     
}

void dotest(char ans, int i)
{
  printf("Question number %d\n",i + 1);
  printf("Your answer: \n");
  scanf( "%c",&ans);
}

int check(char ans, char corr)
{
  int score = 0;
  if(ans = corr)
    ++score;
  return score;
}
