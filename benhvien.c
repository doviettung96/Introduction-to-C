#include <stdio.h>
main()
{
  float bh,tong,tien,max;
  int sog,soc,sos,bn,sobn,ngay,thuoc,tienphauthuat;
  char phauthuat,baohiem;
#define IGNORE() {					\
    int ch;						\
    while((ch = getchar()) && ch != '\n' && ch != EOF); \
  }
  tong=0; sog=0; soc=0; sos=0; max=0;
  printf("Nhap so benh nhan:\n"); scanf("%d",&sobn); IGNORE(); 
  for(bn=1;bn<=sobn;bn++){
    printf("Benh nhan thu %d\n",bn);
  printf("So ngay nam vien?\n"); scanf("%d",&ngay);IGNORE();
  printf("Tien thuoc?(ngan dong)\n"); scanf("%d",&thuoc); IGNORE();
  printf("[P]hau thuat/[K]hong phau thuat?\n");
  if(ngay<0||thuoc<0)
    printf("Nhap sai!\n");
  else{
    switch (phauthuat=getchar()){
    case 'P':printf("Tien phau thuat?(ngan dong)\n"); scanf("%d",&tienphauthuat);IGNORE();break;
  case 'K':printf("Khong phau thuat\n"); tienphauthuat=0; IGNORE(); break;
  default:printf("Nhap sai!\n"); IGNORE(); break; 
  }
  printf("The bao hiem loai nao? [G]old,[S]ilver,[C]itizen,[N]one\n");
  baohiem=getchar();
  switch (baohiem){
  case 'G':printf("Bao hiem loai Gold, thanh toan 30%%\n"); bh=0.3; sog++; break;
  case 'S':printf("Bao hiem loai Silver, thanh toan 50%%\n"); bh=0.5; sos++; break;
  case 'C':printf("Bao hiem loai Citizen, thanh toan 70%%\n"); bh=0.7; soc++;break;
  default:printf("Khong co bao hiem, thanh toan 100%%\n"); bh=1; break;
  }
  tien=150*ngay+thuoc+tienphauthuat;
  tong=tong+tien*bh;
  printf("Phi noi tru: %d ngan dong\n",150*ngay);
  printf("Tien thuoc %d ngan dong\n",thuoc);
  printf("Tong so tien can thanh toan la: %.2f ngan dong\n\n",tien*bh);
  if(max<tien*(1-bh))
     max=tien*(1-bh);
  }
  }
  printf("\n\nSo benh nhan la: %d\n",sobn);
  printf("Chi phi trung binh phai tra la: %.2f\n",tong/sobn);
  printf("So bao hiem cac loai la: G=%d S=%d C=%d\n",sog,sos,soc);
  printf("Loi nhuan nhieu nhat tu bao hiem 1 benh nhan duoc huong la: %.2f\n",max);  
  }
