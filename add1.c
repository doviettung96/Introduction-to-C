#include <stdio.h>
main ()
{
  int stt,ngay,thang,nam,hbd,hkt,mbd,mkt;
  char tenlop[8],tenmonhoc[20];
  printf("Nhap cac thong so sau: \n");
  printf("STT: \n"); scanf("%3d",&stt);
  printf("Ngay/thang/nam: \n"); scanf("%2d/%2d/%4d",&ngay,&thang,&nam);
  printf("Ten lop: \n"); scanf(" %[^\n]",tenlop);
  printf("Ten mon hoc: \n"); scanf(" %[^\n]",tenmonhoc);
  printf("Thoi gian bat dau(hh:mm) \n"); scanf("%2d:%2d",&hbd,&mbd);
  printf("Thoi gian ket thuc(hh:mm) \n"); scanf("%2d:%2d",&hkt,&mkt);
  printf("%-3s %-10s %-8s %-20s %-8s %-8s\n","STT","Ngay thang","Ten lop","Ten mon hoc","Bat dau","Ket thuc");
  printf("%-3d %-2d/%-2d/%-4d %-8s %-20s %-.2d:%-.2d     %-.2d:%-.2d\n",stt,ngay,thang,nam,tenlop,tenmonhoc,hbd,mbd,hkt,mkt);
}
