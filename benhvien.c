#include <stdio.h>
main()
{
  float bh;
  int ngay,thuoc,tienphauthuat;
  char phauthuat,baohiem;
#define IGNORE() {					\
    int ch;						\
    while((ch = getchar()) && ch != '\n' && ch != EOF); \
  } 
  printf("So ngay nam vien?\n"); scanf("%d",&ngay);IGNORE();
  printf("Tien thuoc?(ngan dong)\n"); scanf("%d",&thuoc); IGNORE();
  printf("[P]hau thuat/[K]hong phau thuat?\n");
  if(ngay<0||thuoc<0)
    printf("Nhap sai!\n");
  else{
    switch (phauthuat=getchar()){
    case 'P':printf("Tien phau thuat?(ngan dong)\n"); scanf("%d",&tienphauthuat);IGNORE();break;
  case 'K':printf("Khong phau thuat\n"); tienphauthuat=0; break;
  default:printf("Nhap sai!\n"); break;
  }
  printf("The bao hiem loai nao? [G]old,[S]ilver,[C]itizen,[N]one\n");
  baohiem=getchar();
  switch (baohiem){
  case 'G':printf("Bao hiem loai Gold, thanh toan 30%%\n"); bh=0.3; break;
  case 'S':printf("Bao hiem loai Silver, thanh toan 50%%\n"); bh=0.5; break;
  case 'C':printf("Bao hiem loai Citizen, thanh toan 70%%\n"); bh=0.7; break;
  default:printf("Khong co bao hiem, thanh toan 100%%\n"); bh=1; break;
  }
  printf("Phi noi tru: %d ngan dong\n",150*ngay);
  printf("Tien thuoc %d ngan dong\n",thuoc);
  printf("Tong so tien can thanh toan la: %.2f ngan dong\n",(150*ngay+thuoc+tienphauthuat)*bh);
  }
  }
