#include <stdio.h>


void turn_row(int *a, int row, int col, int choose, int turn);
void turn_col(int *a, int row, int col, int choose, int turn);
void turn_pos(int *a, int row, int col, int choosex, int choosey, int turn);
void out_matrix(int *a, int *w, int row, int col);

 int main(){
   int i,j;
   int a[5][3];
   int w[5][3];
   int choice;
   int select;
   int r,c,n,m;
   
for(i = 0; i < 5; ++i)
  for(j = 0; j < 3; ++j){
    a[i][j] = 0;
    w[i][j] = 0;
  }
      
   do{
     printf(" \n\nLIGHTBUBS SYSTEM \n\n");
     printf("1. Turn on/off the lights in a row\n");
     printf("2. Turn on/off the lights in a column\n");
     printf("3. Turn on/off the light in a specific position\n");
     printf("4. Status of the lightbubs system\n");
     printf("0. Exit\n");
     printf("What is your choice?\n");
     scanf("%d",&choice);
     switch (choice){

     case 1:
       do{
       printf("\n1. Choose the row to turn on\n2. Choose the row to turn off\n3. Exit\nYour choice?\n");
       scanf("%d",&select);
       
       switch (select) {
       case 1: printf("Which row?\n");
         scanf("%d",&r);  
         turn_row((int*)a, 5, 3, r, 1);
         break;
       case 2: printf("Which row?\n");
         scanf("%d",&r);  
         turn_row((int*)a, 5, 3, r, 0);
         break;
       case 3: break;
       default: printf("Invalid choice. Select again\n");
         break;
       }
       }  while (select != 3);
       break;

     case 2:
       do{
       printf("\n1. Choose the column to turn on\n2. Choose the column to turn off\n3. Exit\nYour choice?\n");
       scanf("%d",&select);
       
       switch(select) {
       case 1: printf("Which column?\n");
         scanf("%d",&c); 
         turn_col((int*)a, 5, 3, c, 1);
         break;
       case 2: printf("Which column?\n");
         scanf("%d",&c); 
         turn_col((int*)a, 5, 3, c, 0);
         break;
       case 3: break;
       default: printf("Invalid choice. Select again\n");
         break;
       }
       } while(select != 3);
       break;

     case 3:
       do{
       printf("\n1. Choose the position (x;y) to turn on\n1. Choose the position (x;y) to turn off\n3. Exit\nYour choice?\n");
       scanf("%d",&select); 
       
       switch (select) {
       case 1: printf("Which position (x;y)?\n");
         scanf("%d;%d",&m,&n); 
         turn_pos((int*)a, 5, 3, m, n, 1);
         break;
       case 2: printf("Which position (x;y)?\n");
         scanf("%d;%d",&m,&n); 
         turn_pos((int*)a, 5, 3, m, n, 0);
         break;
       case 3: break;
       default: printf("Invalid choice. Select again\n");
         break;
       }
       } while(select != 3);
       break;

     case 4: out_matrix((int*)a, (int*)w, 5, 3);
       break;

     case 0: break;

     default: printf("Wrong selection. Select again\n");
     }
   } while (choice != 0);
   return 0;
   
 }

void turn_row(int *a, int row, int col, int choose, int turn){
  int j;
  for(j = 0; j < col; ++j)
    {
      if(turn == 0)
        *(a + (choose - 1)*col + j) = 0;
      else
        *(a + (choose - 1)*col + j) = 1;
    }
}

void turn_col(int *a, int row, int col, int choose, int turn){
  int i;
  for(i = 0; i < row; ++i)
    {
      if(turn == 0)
        *(a + i*col + choose - 1) = 0;
      else
        *(a + i*col + choose - 1) = 1;
    }
}

void turn_pos(int *a, int row, int col, int choosex, int choosey, int turn)
{
    {
      if(turn == 0)
        *(a + (choosex - 1)*col + choosey - 1 ) = 0;
      else
        *(a + (choosex - 1)*col + choosey - 1) = 1;
    }
}

void out_matrix(int *a, int *w, int row, int col){
  int i,j;
  for(i = 0; i < row; ++i)
    {
      for(j = 0; j < col; ++j){
        if(*(a + i*col +j) != 0){
        if(i % 2 == 0 && j % 2 == 0)
          *(w + i*col +j) = 10;
          else
            if(i % 2 == 1 && j % 2 == 1)
           *(w + i*col +j) = 20;
            else
              *(w + i*col +j) = 15;
        }
        printf("%-4s ",*(a + i*col + j) == 0?"OFF":"ON");
        printf("%3d W ",*(w + i*col +j));
      }
            printf("\n");
    }
}
