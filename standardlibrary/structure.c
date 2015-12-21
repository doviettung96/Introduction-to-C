#include <stdio.h>
#include <string.h>

typedef struct
  {
    int mssv;
    char hoten[30];
  } man;
  man thongtin[3];

void sort(man *a, man *b, int msa, int msb);
void out(int a, char *b);

int main()
{
 
  int i;
  printf("Nhap vao thong tin cua 3 hoc sinh\n");
  for(i = 0; i < 3; ++i){
    printf("STT %d\n",i + 1);
    printf("MSSV: ");
    scanf("%d",&thongtin[i].mssv);
    while(getchar() != '\n');
    printf("Ho ten: ");
    gets(thongtin[i].hoten);
  }
  for(i = 0; i < 2; ++i){
    sort(thongtin + i, thongtin + i + 1, thongtin[i].mssv, thongtin[i + 1].mssv);
  }
  printf("\nDanh sach hoc sinh sap xep theo mssv tang dan la\n");
  for(i = 0; i < 3; ++i){
    out(thongtin[i].mssv,thongtin[i].hoten);
  }
  
  return 0;
}

void sort(man *a, man *b, int msa, int msb){
  man tmp;
  if(msa > msb){
    tmp = *a;
    *a = *b;
    *b = tmp;
  }
}

void out(int a, char *b){
  printf("MSSV: %d\n",a);
  printf("Ho ten: %s\n",b);
}
