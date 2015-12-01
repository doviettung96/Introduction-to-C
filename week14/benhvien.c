#include <stdio.h>

#define IGNORE() {					\
    int ch;						\
    while((ch = getchar()) && ch != '\n' && ch != EOF); \
  }

int main()
{
  float max, tong;
  int sog,soc,sos;
  int bn,sobn;
  typedef struct {
    int ngay;
    int thuoc;
    int tienphauthuat;
    char phauthuat;
    char baohiem;
    float bh;
    float tien;
  } benhnhan;
  benhnhan patient[sobn];
  
  tong=0; sog=0; soc=0; sos=0; max=0;
  printf("Nhap so benh nhan:\n"); scanf("%d",&sobn); IGNORE(); 
  for(bn = 1; bn <= sobn; bn++){
    
    printf("Benh nhan thu %d\n",bn);
  printf("So ngay nam vien?\n"); scanf("%d",&patient[bn].ngay);IGNORE();
  printf("Tien thuoc?(ngan dong)\n"); scanf("%d",&patient[bn].thuoc); IGNORE();
  printf("[P]hau thuat/[K]hong phau thuat?\n");
  if(patient[bn].ngay < 0|| patient[bn].thuoc < 0)
    printf("Nhap sai!\n");
  else{
    switch (patient[bn].phauthuat=getchar()){
    case 'P':printf("Tien phau thuat?(ngan dong)\n");
      scanf("%d",&patient[bn].tienphauthuat);
      IGNORE();
      break;
    case 'K':printf("Khong phau thuat\n");
    patient[bn].tienphauthuat = 0;
    IGNORE();
    break;
  default:printf("Nhap sai!\n");
    IGNORE();
    break; 
  }
  printf("The bao hiem loai nao? [G]old,[S]ilver,[C]itizen,[N]one\n");
  patient[bn].baohiem = getchar();
  
  switch (patient[bn].baohiem){
  case 'G':printf("Bao hiem loai Gold, thanh toan 30%%\n");
    patient[bn].bh = 0.3;
    sog++;
    break;
  case 'S':printf("Bao hiem loai Silver, thanh toan 50%%\n");
    patient[bn].bh = 0.5;
    sos++;
    break;
  case 'C':printf("Bao hiem loai Citizen, thanh toan 70%%\n");
    patient[bn].bh = 0.7;
    soc++;
    break;
  default:printf("Khong co bao hiem, thanh toan 100%%\n");
    patient[bn].bh = 1;
    break;
  }
  
  patient[bn].tien = 150*patient[bn].ngay + patient[bn].thuoc + patient[bn].tienphauthuat;
  tong += patient[bn].tien * patient[bn].bh;
  printf("Phi noi tru: %d ngan dong\n",150 * patient[bn].ngay);
  printf("Tien thuoc %d ngan dong\n",patient[bn].thuoc);
  printf("Tong so tien can thanh toan la: %.2f ngan dong\n\n",patient[bn].tien*patient[bn].bh);
  if(max < patient[bn].tien * (1 - patient[bn].bh))
     max = patient[bn].tien*(1 - patient[bn].bh);
  }
  }
  printf("\n\nSo benh nhan la: %d\n",sobn);
  printf("Chi phi trung binh phai tra la: %.2f\n",tong / sobn);
  printf("So bao hiem cac loai la: G=%d S=%d C=%d\n",sog,sos,soc);
  printf("Loi nhuan nhieu nhat tu bao hiem 1 benh nhan duoc huong la: %.2f ngan dong\n",max);
  return 0;
  }
