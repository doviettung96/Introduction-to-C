#include <stdio.h>
main ()
{
  char frame[] = "________________________________________________";
  int dodai;
  int Quantity;
  float Price, Total, VAT, Pay;
  char ISBN[7], Title[15]; 
  printf("Quantity: ?\n"); scanf("%6d",&Quantity);
  printf("ISBN: ?\n"); scanf("%7s",ISBN);
  printf("Title: ?\n"); scanf(" %[^\n]",Title);
  printf("Price= ?\n"); scanf("%8f",&Price);
  VAT = (4 /(double) 100);
  Total = Price*Quantity;
  Pay = Total*(1 + VAT);
  printf("%s\n",frame);
  printf("%-3c%-44s|\n",'|',"BK Bookseller");
  printf("|%47c\n",'|');
  printf("|%47c\n",'|');
  printf("%-3c%-6s%-7s%-15s%-8s%-8s|\n",'|',"Qty","ISBN","Title","Price","Total");
  printf("%-3c%-6d%-7s%-15s%-8g%-8g|\n",'|',Quantity,ISBN,Title,Price,Total);
  printf("|%-.43s%4c\n",frame,'|');
  printf("|%47c\n",'|');
  printf("|%47c\n",'|');
  printf("%-3c%-44s|\n",'|',"VAT: 4%");
  printf("%-3c%-8s%-8g%28c\n",'|',"You pay:",Pay,'|');
  printf("|%-.46s|\n",frame);
}
