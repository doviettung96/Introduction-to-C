#include <stdio.h>
#include <string.h>

#define MAX 8

void trimleft(char *a);
void trimright(char *a);
void trimmiddle(char *a);

int main()
{
  typedef struct {
    char hoten[30];
    int diem[5];
  } ketqua_vdv;
  ketqua_vdv vdv[MAX];
  int select;
  int i,j;
  int so, sieuxatien = 0;
  int tong[MAX];
  int tongtem;
  ketqua_vdv tmp;
  do{
    printf("1. Dang ki vdv\n2. Thi dau\n3. Xep hang\n4. Sieu xa tien\n5. Thoat\n");
    printf("Xin moi lua chon\n"); scanf("%d",&select);
    switch(select){
    case 1: do {
	printf("Nhap so van dong vien\n"); 
	scanf("%d",&so);
	while(getchar() != '\n');
	if(so < 0 || so > 8)
	  printf("Nhap sai so vdv. Nhap lai\n");
      } while( so < 0 || so >  8);
      for(i = 0; i < so; ++i){
	printf("Nhap ho ten cho vdv so %d\n", i + 1);
	do {
	  gets(vdv[i].hoten);
	if(vdv[i].hoten[0] > 'Z' || vdv[i].hoten[0] < 'A'  )
	  printf("Ten vdv phai bat dau la 1 chu cai\n");
	} while ( vdv[i].hoten[0] > 'Z' || vdv[i].hoten[0] < 'A');
	trimleft(vdv[i].hoten); trimright(vdv[i].hoten); trimmiddle(vdv[i].hoten);
      }
      printf("\nTen cac vdv sau khi chuan hoa la\n");
      printf("%4s %-30s\n","STT","Ho ten vdv");
      for(i = 0; i < so; ++i)
	
	printf("%4d %-30s\n",i+ 1, vdv[i].hoten);
      
      break;
    case 2: 
      for(i = 0; i < 5;++i)
	for(j = 0; j < so; ++j){
	  printf("Luot thi dau so %d\n",i + 1);
	printf("VDV so %4d, %-30s\n",j + 1,vdv[j].hoten);
	printf("So diem?"); 
	do{
	  scanf("%d",&vdv[j].diem[i]); 
	  if(vdv[j].diem[i] < 0 || vdv[j].diem[i] > 10)
	    printf("Diem chi nam trong khoang 0 den 10. Yeu cau nhap lai\n");
	}while(vdv[j].diem[i] < 0 || vdv[j].diem[i] > 10);
	}
      
      printf("%-30s %4d%4d%4d%4d%4d\n","Ho ten",1,2,3,4,5);
      
      for(j = 0; j < so; ++j)
	  printf("%-30s %4d%4d%4d%4d%4d\n",vdv[j].hoten,vdv[j].diem[0],vdv[j].diem[1],vdv[j].diem[2],vdv[j].diem[3],vdv[j].diem[4]);
    
    
    break;

  case 3: 
    
    for( i = 0; i < so; ++i)
      tong[i] = 0;
    for( i = 0; i < so; ++i)
      for(j = 0; j < 5; ++j)
        tong[i] += vdv[i].diem[j];
    for( i = 0; i < so - 1; ++i)
      for( j = 1; j < so; ++j)
        if(tong[i] < tong[j])
      {
        tmp = vdv[i];
        tongtem = tong[i];
        vdv[i] = vdv[j];
        tong[i] = tong[j];
        vdv[j] = tmp;
        tong[j] = tongtem;
    }

      
    printf("%-30s %8s %6s\n","Ho ten","Rank","Score");
    printf("%-30s %8s %6d\n",vdv[0].hoten,"Gold",tong[0]);
    printf("%-30s %8s %6d\n",vdv[1].hoten,"Silver",tong[1]);
    printf("%-30s %8s %6d\n",vdv[so - 1].hoten,"Worse",tong[so - 1]);
    break;

  case 4: 
      for(j = 0; j < so; ++j)
	for(i = 0; i < 5; ++i){
	  if(vdv[j].diem[i] == 10 && vdv[j].diem[i + 1] == 10 && vdv[j].diem[i + 2] == 10 )
	    {
	    printf("Van dong vien so %d, %-30s la 1 sieu xa tien\n",j + 1, vdv[j].hoten);
	  sieuxatien += 1;
	    }
	}
      if(sieuxatien == 0)
	printf("Khong co sieu xa tien\n");
      break;

  case 5: break;
  default: printf("Lua chon sai. Xin lua chon lai\n"); break;
    }
  }while (select != 5);
}
void trimleft(char *a){
  int i;
  while(*a == ' ')
    for( i = 0; i < strlen(a); ++i)
      *(a + i) = *(a + i + 1);
}

void trimright(char *a){
  int i;
  while(*(a + strlen(a)) == ' ')
    *(a + strlen(a)) = *(a + strlen(a) + 1 );
}

void trimmiddle(char *a){
  int i,j;
  int n = strlen(a);
  for (i = 0; i < n; ++i)
    if(*(a + i) == ' ' && *(a + i + 1) == ' ')
      {
	for(j = i; j < n; ++j)
	  *(a + j ) = *(a + j + 1);
	n--;
	i--;
      }
}
