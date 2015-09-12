#include <stdio.h>
#define BOLDRED "\033[1;31m"
#define BLUE "\x1b[34m"
#define RESET "\x1b[0m"
#define BLACK "\033[30m"
#define BOLDBLUE "\033[1m\033[34m"
#define BOLDBLACK "\033[1m\033[30m"
#define BBLUE "\x1b[44m"
int main ()
{
  char horizontalframe[] = "________________________________________________________";
  char tentruong[] = "TRUONG DAI HOC BACH KHOA HA NOI ";
  char tenthe[] = "THE SINH VIEN";
  int id = 20145084;
  char lop[] = "ICT";
  char hoten[] = "DO VIET TUNG";
  int ngay = 10, thang = 12, nam = 1996;
  char hokhau[] = "Chuong My - Ha Noi";
  char nhomnganh[] = "Cong nghe thong tin";
  int ngaygt = 30, thanggt = 05, namgt = 2019;
  int ngayph =01, thangph = 10, namph = 2014;
  char mavach[] = "|||||||||||||||||||||||||||||||";
  printf("%s\n",horizontalframe);
 printf("%-1c"BOLDRED"%4s"RESET"%3s%48c\n",'|'," ___","___",'|');
 printf("%-1c"BOLDRED"%4s"RESET"%3s"BOLDBLUE"%42s"RESET"%6c\n",'|'," | |","  |",tentruong,'|');
 printf("%-1c"BOLDRED"%4s"RESET"%3s"BOLDRED"%32s"RESET"%16c\n",'|'," |_|","__|",tenthe,'|');
 printf("|"BOLDRED"%.54s"RESET"|\n",horizontalframe);
 printf("|%55c\n",'|');
 printf("%-1c"BBLUE"|%8c"RESET""BLUE" MSSV:"RESET" %-18d"RESET" "BLUE"Lop: "RESET"%3s %d%10c\n",'|','|',id,lop,2,'|');
 printf("%-1c"BBLUE"|%8c"RESET""BLUE" Ho ten: "RESET" %-12s"RESET"%24c\n",'|','|',hoten,'|');
 printf("%-1c"BBLUE"|%8c"RESET""BLUE" Ngay sinh: "RESET"%-.2d/%-.2d/%-8d"RESET""BLUE"%-3s"RESET"%17c\n",'|','|',ngay,thang,nam,"Nam",'|');
 printf("%-1c"BBLUE"|%8c"RESET""BLUE" Ho khau: "RESET"%18s"RESET"%18c\n",'|','|',hokhau,'|');
 printf("%-1c"BBLUE"|%8c"RESET""BLUE" Nhom nganh: "RESET"%20s"RESET"%13c\n",'|','|',nhomnganh,'|');
 printf("%-1c"BBLUE"|%8c"RESET""BLUE" Khoa hoc: "RESET" K%2d"RESET" "BLUE" Co gia tri den: "RESET"%.2d/%.2d/%.4d"RESET"%3c\n",'|','|',59,ngaygt,thanggt,namgt,'|');
 printf("|%52s  |\n",mavach);
 printf("| NPH:%.2d/%.2d/%.4d%37s  |\n",ngayph,thangph,namph,mavach);
 printf
   ("|%.54s|\n",horizontalframe);
 return 0;
}
