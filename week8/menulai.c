#include <stdio.h>
#define ignore() {                 \
int ch;                       \
while((ch = getchar())&&ch!='\n'&&ch!=EOF); \
}
main()
{
  float lai,laisuatnam;
  int tien,tienlai,sodu,i,thang,tonglai,select;
  char ten[100];
    do{
  printf("TAI KHOAN TIEN GUI ACB: \n");
  printf("Your choice?\n");
  printf("1. Gui tien va thoi han\n");
  printf("2. Lai suat nam\n");
  printf("3. Chi tiet lai suat(thong ke)\n");
  printf("4. Thoat\n");
  scanf("%d",&select); ignore();
    switch (select){
    case 1:printf("Tai khoan khach hang:"); scanf("%[^\n]",ten); ignore();
      printf("So tien gui:"); scanf("%d",&tien); ignore();
      printf("Lai suat mot thang (%%):"); scanf("%f",&lai);ignore();                printf("So thang gui: "); scanf("%d",&thang); ignore();
      printf("\n\n");
      break;
    case 3:printf("%-6s%-15s%-10s%-15s\n","Thang","Tien dau ky","Tien lai","So du");
  sodu=tien; tonglai=0;
  for(i=1;i<=thang;i++)
    {
      tienlai=sodu*lai/100.0;
      printf("%-6d%-15d%-10d%-15d\n",i,sodu,tienlai,sodu+tienlai);
      sodu=sodu+tienlai;
      tonglai=tonglai+tienlai;
    }
  printf("Tong lai: %d\n",tonglai);
  laisuatnam=tonglai/(float)tien;
    break;
    case 2:laisuatnam=printf("Lai suat nam: %.2f%%\n\n",laisuatnam*100);break;
    case 4:break;
    default:printf("Wrong choice.Type again!\n\n"); break;
    }
    } while(select != 4);
    }
      
      
