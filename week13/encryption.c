#include <stdio.h>
#include <string.h>

void encrypt(char *a, int size, int distance);

int main()
{
  int way, select;
  int distance;
  int choice;
  char a[100];
  do {
    printf("\nEncryption and Decryption Program\n");
    printf("1. Encrypt a paragraph\n2. Decrypt this paragraph\n0. Exit\n");
    printf("Your choice?\n"); 
    scanf("%d",&select); 
    switch (select){
    case 1:
      printf("Type in the paragraph\n");
      gets(a);
      printf("How many distance(+ right - left)?\n");
      scanf("%d",&distance); 
      encrypt(a, strlen(a),distance);
      break;
    case 2: do {
        printf("1. How many distance (+ right - left)?\n0. Exit\n");
        printf("Your choice?\n");
        scanf("%d",&choice); 
        switch (choice) {
        case 1:
          scanf("%d",&distance); 
          encrypt(a, strlen(a), distance);
          break;
        case 0:
          break;
        default: printf("Invalid choice. Choose again\n");
          break;
        }
      } while (choice != 0);
      break;
    case 0: break;
    default: printf("Invalid choice. Choose again\n"); break;
    }
  } while (select != 0);
  
}

void encrypt(char *a, int size, int distance)
{
  int i;
    for(i = 0; i < size; ++i){
        if(*(a + i) >= 'A' && *(a + i) <= 'Z')
          if(*(a + i) + distance > 'Z')
            *(a + i) -= (26 - distance);
          else
            if(*(a + i) + distance < 'A')
              *(a + i) += (26 + distance);
            else
              *(a + i) += distance;
        else
          if(*(a + i) >= 'a' && *(a + i) <= 'z')
            if(*(a + i) + distance > 'z')
              *(a + i) -= (26 - distance);
            else
              if(*(a + i) + distance < 'a')
                *(a + i) += (26 + distance);
              else
                *(a + i) += distance;
        
    }
  for(i = 0; i < size; ++i)
      printf("%c",*(a + i));
  printf("\n");
}
