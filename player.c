#include <stdio.h>
int main()
{
  int dodai;
  char frame[] = "____________________________________________________________________";
  char l0[] = "Name"; char r0[] = "Jermain Defoe";
  char l1[] = "Date of birth"; char l2[] = "Age"; char l3[] = "Country of birth";
  char r1[] = "Height"; char r2[] = "Weight"; char r3[] = "National team";
  char l4[] = "Appearances"; char l5[] = "Goals"; char l6[] = "Yellow cards"; char l7[] = "Red cards"; char l8[] = "Club"; char r8[] = "Number";
  char r4[] = "Titles won"; char r5[] = "25-man squad member"; char r6[] = "Home grown player";			  	
  printf("%s\n",frame);
  printf("|%-66s|\n","Player information");
  printf("|%-.66s|\n",frame);											    printf("|%-19s|%-46s|\n",l0,r0);
  printf("|%-.19s|%-.46s|\n",frame,frame);
  printf("|%-19s|%-2d/%-2d/%-9d|%-19s|%-5g%-5c|\n",l1,07,10,1982,r1,1.71,'m');
  printf("|%-.19s|%-.15s|%-.19s|%-.10s|\n",frame,frame,frame,frame);
  printf("|%-19s|%-15d|%-19s|%-3d%-7s|\n",l2,32,r2,65,"kg");
  printf("|%-.19s|%-.15s|%-.19s|%-.10s|\n",frame,frame,frame,frame);
  printf("|%-19s|%-15s|%-19s|%-10s|\n",l3,"England",r3,"England");
  printf("|%-.19s|%-.15s|%-.19s|%-.10s|\n",frame,frame,frame,frame);
  printf("|%-19s|%-15s|%-19s|%-10d|\n",l8,"Sunderland",r8,18);
  printf("|%-.19s|%-.15s|%-.19s|%-.10s|\n\n",frame,frame,frame,frame);
  printf("%s\n",frame);
  printf("|%-66s|\n","Career overview");
  printf("|%-.66s|\n",frame);
  printf("|%-19s|%-15d|%-19s|%-10c|\n",l4,384,r4,'-');
  printf("|%-.19s|%-.15s|%-.19s|%-.10s|\n",frame,frame,frame,frame);
  printf("|%-19s|%-15d|%-19s|%-10s|\n",l5,130,r5,"SQUAD");
  printf("|%-.19s|%-.15s|%-.19s|%-.10s|\n",frame,frame,frame,frame);
  printf("|%-19s|%-15d|%-19s|%-10s|\n",l6,34,r6,"HG");
  printf("|%-.19s|%-.15s|%-.19s|%-.10s|\n",frame,frame,frame,frame);
  printf("|%-19s|%-15d%-20c%-11c|\n",l7,2,'|','|');
  printf("|%-.19s|%-.15s|%-.19s|%-.10s|\n",frame,frame,frame,frame);
}
