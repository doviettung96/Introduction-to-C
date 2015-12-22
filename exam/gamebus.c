#include <stdio.h>
#include <string.h>

typedef struct{
  int color;
  int score;
  char name[30];
} info;

void out(int *a);
void swap(int *a, int *b);
void correct(char *a);
void sort(info *a, info *b, int sa, int sb);

char  x[] = "Green", d[] = "Red",v[] = "Yellow";
void main()
{
  int a[5][3];
  info player[4];
  int choice;
  int i = 0,j = 0;
  int r,c;
  int n;
  int try;
  info tmp;
  printf("Welcome to the last passenger game\n");
  do {
    printf("\n1. Create a matrix of colors\n2. Manipulating the colors\n3. Play!\n4. Result\n0. Quit\n");
    printf("Your choice: ");
    scanf("%d",&choice);
    
    switch (choice){
    case 1: a[0][0] = a[1][2] = a[2][2] = a[3][0] = a[4][2] = 0;
      a[0][1] = a[1][0] = a[2][1] = a[3][2] = a[4][0] = 1;
      a[0][2] = a[1][1] = a[2][0] = a[3][1] = a[4][1] = 2;
      printf("\nThe matrix of color as below\n");
      out((int *)a);
      break;
    case 2: printf("Type in the location and the color of the entry\n");
      do{
        while(getchar() != '\n');
        printf("Row: "); scanf("%d",&r);
        while(getchar() != '\n');
        printf("Column: "); scanf("%d",&c);
        if(r > 5 || r <= 0 || c > 3 || c <= 0)
          printf("Wrong location.Type again\n");
        else
          do{
            printf("New color for the entry (0 - %s, 1 - %s, 2 - %s): ",x,v,d);
            while(getchar() != '\n');
            scanf("%d",&n);
            
            if(n < 0 || n > 2)
              printf("Wrong color. Choose again\n");
            if(n == a[r - 1][c - 1])
              printf("The color is already in this entry\n");
            else
              for(j = 0; j < 3; ++j)
                if(n == a[r - 1][j])
                  swap(&a[r - 1][c - 1],&a[r - 1][j]);
            } while(n < 0 || n > 2 || n == a[r - 1][c - 1]);
      } while (r > 5 || r <= 0 || c > 3 || c <= 0);
      out((int *)a);
      break;
    case 3:
      for(i = 0; i < 4; ++i){
        player[i].score = 0;
        j = 0;
        printf("The %d-th player's turn\n",i + 1);
        while(getchar() != '\n');
        printf("Name: ");
        gets(player[i].name);
        correct(player[i].name);
        printf("Your own color: ");
        scanf("%d",&player[i].color);
        printf("Now, you have to choose the column for each row that have your color\n");
        while(j < 5){
          printf("Row %d, your choice: ",j + 1);
          scanf("%d",&try);
          if(a[j][try - 1] == player[i].color){
            player[i].score += 1;
            j++;
          }
          else
            {
              printf("You've failed\n");
            break;
          }
        }
      }
      break;
    case 4:
      printf("The result of this game\n");
      printf("%-6s%-30s%-8s%-6s\n","Turn","Player","Color","Score");
      for(i = 0; i < 4; ++i)
        printf("%-6d%-30s%-8s%-6d\n",i + 1, player[i].name, (player[i].color == 0?x:player[i].color == 1?v:d), player[i].score);
      
      for(i = 0; i < 3; ++i)
        for(j = i; j < 4; ++j)
          if(player[i].score > player[j].score){
            tmp = player[i];
            player[i] = player[j];
            player[j] = tmp;
          }
      printf("The MVP player is: \n");
      printf("%-6d%-30s%-8s%-6d\n",3, player[3].name, (player[3].color == 0?x:player[3].color == 1?v:d), player[3].score);
      printf("The worst player is: \n");
      printf("%-6d%-30s%-8s%-6d\n",0, player[0].name, (player[0].color == 0?x:player[0].color == 1?v:d), player[0].score);
      
      break;
    case 0: break;
    default: printf("Invalid choice. Choose again!\n"); break;
    }
  } while(choice != 0 );
}

void out(int *a){
  int i,j;
  for(i = 0; i < 5; ++i){
    for(j = 0; j < 3; ++j)
      printf("%-7s",(*(a + i*3 + j) == 0?x:*(a + i*3 + j) == 1?v:d));        
    printf("\n");
  }
}

void swap(int *a, int *b){
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

void correct(char *a){
  int i;
  if(a[0] >= 'a' && a[0] <= 'z')
    a[0] -= 32;
  for(i = 1; a[i] != '\0'; ++i)
    if(a[i - 1] == ' ' && a[i] >= 'a' && a[i] <= 'z')
      a[i] -= 32;
}



