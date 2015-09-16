#include <stdio.h>
int main()
{
  int dodai;
  char local[] = "Nhan Ly";
  char country[] = "Vietnam";
  char frame[] = "_______________________________________________________";
  printf("\n%-s, %-s %-s\n\n",local,country,"Weather");
  printf("_______________________________________________________%n\n",&dodai);
  printf("|%-8s%-5s%-5s%-5s%-13s%-7s%-10s|\n","DAY","COND","HIGH","LOW","DESCRIPTION","PRECIP","WIND");
  printf("|%.53s|\n",frame);
  printf("|%-8s%-5s%-2d%-1c%-2c%-2d%-1c%-2c%-13s%3d%-4c%-4s%2d%-4s|\n","FRI","@@",83,'\'','F',76,'\'','F',"Thunderstorms",90,'%',"ENE",6,"mph");
         printf("|%-4s%-4d%-5s%41c\n","Sep",18,"@@",'|');
	 printf("|%.53s|\n",frame);
  printf("|%-8s%-5s%-2d%-1c%-2c%-2d%-1c%-2c%-13s%3d%-4c%-4s%2d%-4s|\n","SAT","@@",88,'\'','F',77,'\'','F',"Thunderstorms",60,'%',"SE",7,"mph");
	 printf("|%-4s%-4d%-5s%41c\n","Sep",19,"@@",'|');
	 printf("|%.53s|\n",frame);
  printf("|%-8s%-5s%-2d%-1c%-2c%-2d%-1c%-2c%-13s%3d%-4c%-4s%2d%-4s|\n","SON","@@",92,'\'','F',78,'\'','F',"Thunderstorms",80,'%',"SE",5,"mph");
	 printf("|%-4s%-4d%-5s%41c\n","Sep",20,"@@",'|');
	 printf("|%.53s|\n",frame);
  printf("|%-8s%-5s%-2d%-1c%-2c%-2d%-1c%-2c%-13s%3d%-4c%-4s%2d%-4s|\n","MON","@@",90,'\'','F',78,'\'','F',"Thunderstorms",80,'%',"ESE",6,"mph");	 
	 printf("|%-4s%-4d%-5s%41c\n","Sep",21,"@@",'|');
	 printf("|%.53s|\n",frame);
  printf("|%-8s%-5s%-2d%-1c%-2c%-2d%-1c%-2c%-13s%3d%-4c%-4s%2d%-4s|\n","TUE","@@",88,'\'','F',78,'\'','F',"Thunderstorms",80,'%',"SE",7,"mph");
	 printf("|%-4s%-4d%-5s%41c\n","Sep",22,"@@",'|');
	 printf("|%.53s|\n",frame);
}
