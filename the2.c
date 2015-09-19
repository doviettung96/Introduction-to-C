#include <stdio.h>
#define BOLDRED "\033[1;31m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"
#define BLACK "\033[30m"
#define BOLDBLUE "\033[1m\033[34m"
#define BOLDBLACK "\033[1m\033[30m"
#define BBLUE "\x1b[44m"
 main ()
 {
  char horizontalframe[] = "________________________________________________________";
  char tentruong[42];
  char tenthe[32];
  int id;
  char gender[4];
  char lop[5];
  char hoten[12];
  int ngay, thang, nam;
  char hokhau[18];
  char nhomnganh[20];
  int khoahoc;
  int ngaygt, thanggt, namgt;
  int ngayph, thangph, namph;
  char mavach[] = "|||||||||||||||||||||||||||||||";
  
  printf("Nhap ten truong: \n");
  scanf("%[^\n]",tentruong);
  printf("Nhap ten the: \n");
  scanf(" %[^\n]",tenthe);
  printf("Nhap MSSV: \n");
  scanf("%18d",&id);
  printf("Nhap ten lop: \n");
  scanf(" %[^\n]",lop);
  printf("Nhap ho va ten: \n");
  scanf(" %[^\n]",hoten);
  printf("Nhap ngay sinh(dd/mm/yyyy): \n");
  scanf("%2d/%2d/%8d",&ngay,&thang,&nam);
  printf("Gioi tinh: \n");
  scanf("%s",gender);
  printf("Nhap ho khau: \n");
  scanf(" %[^\n]",hokhau);
  printf("Nhap nhom nganh: \n");
  scanf(" %[^\n]",nhomnganh);
  printf("Nhap khoa hoc(number): \n");
  scanf("%2d",&khoahoc);
  printf("Nhap ngay het gia tri(dd/mm/yyyy): \n");
  scanf("%2d/%2d/%4d",&ngaygt,&thanggt,&namgt);
  printf("Nhap ngay phat hanh(dd/mm/yyyy): \n");
  scanf("%2d/%2d/%4d",&ngayph,&thangph,&namph);

  printf("%s\n",horizontalframe);
 printf("%-1c"BOLDRED"%4s"RESET"%3s%48c\n",'|'," ___","___",'|');
 printf("%-1c"BOLDRED"%4s"RESET"%3s"BOLDBLUE"%42s"RESET"%6c\n",'|'," | |","  |",tentruong,'|');
 printf("%-1c"BOLDRED"%4s"RESET"%3s"BOLDRED"%32s"RESET"%16c\n",'|'," |_|","__|",tenthe,'|');
 printf("|"BOLDRED"%.54s"RESET"|\n",horizontalframe);
 printf("|%55c\n",'|');
 printf("%-1c"BBLUE"|%8c"RESET""BLUE" MSSV:"RESET" %-18d"RESET" "BLUE"Lop: "RESET"%-14s|\n",'|','|',id,lop);
 printf("%-1c"BBLUE"|%8c"RESET""BLUE" Ho ten: "RESET" %-12s"RESET"%24c\n",'|','|',hoten,'|');
 printf("%-1c"BBLUE"|%8c"RESET""BLUE" Ngay sinh: "RESET"%-.2d/%-.2d/%-8d"RESET""BLUE"%-5s"RESET"%15c\n",'|','|',ngay,thang,nam,gender,'|');
 printf("%-1c"BBLUE"|%8c"RESET""BLUE" Ho khau: "RESET"%-28s"RESET"%8c\n",'|','|',hokhau,'|');
 printf("%-1c"BBLUE"|%8c"RESET""BLUE" Nhom nganh: "RESET"%-30s"RESET"%3c\n",'|','|',nhomnganh,'|');
 printf("%-1c"BBLUE"|%8c"RESET""BLUE" Khoa hoc: "RESET" K%2d"RESET" "BLUE" Co gia tri den: "RESET"%.2d/%.2d/%.4d"RESET"%3c\n",'|','|',59,ngaygt,thanggt,namgt,'|');
 printf("|%52s  |\n",mavach);
 printf("| NPH:%.2d/%.2d/%.4d%37s  |\n",ngayph,thangph,namph,mavach);
 printf
   ("|%.54s|\n",horizontalframe);
}
