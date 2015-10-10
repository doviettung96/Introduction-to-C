#include <stdio.h>
main()
{
  float lai;
  int tien,tienlai,sodu,i,thang,tonglai;
  char ten[100];
  printf("Tai khoan khach hang: \n"); scanf("%[^\n]",ten);
  printf("So tien gui: \n"); scanf("%d",&tien);
  printf("Lai suat mot thang (%%): \n"); scanf("%f",&lai);
  printf("So thang gui: \n"); scanf("%d",&thang);
  printf("\nTai khoan khach hang: %s\n",ten);
  printf("%-6s%-15s%-10s%-15s\n","Thang","Tien dau ky","Tien lai","So du");
  sodu=tien; tonglai=0;
  for(i=1;i<=thang;i++)
    {
      tienlai=sodu*lai/100.0;
      printf("%-6d%-15d%-10d%-15d\n",i,sodu,tienlai,sodu+tienlai);
      sodu=sodu+tienlai;
      tonglai=tonglai+tienlai;
    }
  printf("Tong lai: %d\n",tonglai);
}
      
      
