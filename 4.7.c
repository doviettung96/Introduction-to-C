#include <stdio.h>
#define YELLOW "\x1b[43m"
#define RESET "\x1b[0m"
main ()
{
  char frame[] = "______________________________________________________________";
  int Quantity;
  float Price, Total, VAT, Pay;
  char ISBN[7], Title[20]; 
  printf("Quantity: ?\n"); scanf("%6d",&Quantity);
  printf("ISBN: ?\n"); scanf("%7s",ISBN);
  printf("Title: ?\n"); scanf(" %[^\n]",Title);
  printf("Price= ?\n"); scanf("%8f",&Price);
  VAT = (4.0 / 100.0);
  Total = Price*Quantity;
  Pay = Total*(1 + VAT);
  printf("\n%s\n",frame);
  printf(""YELLOW"%-3c%-58s|"RESET"\n",'|',"BK Bookseller");
  printf(""YELLOW"|%61c"RESET"\n",'|');
  printf(""YELLOW"|%61c"RESET"\n",'|');
  printf(""YELLOW"%-3c%-6s%-7s%-25s%-10s%-10s|"RESET"\n",'|',"Qty","ISBN","Title","Price","Total");
  printf(""YELLOW"%-3c%-6d%-7s%-25s%-10g%-10g|"RESET"\n",'|',Quantity,ISBN,Title,Price,Total);
  printf(""YELLOW"|%-.57s%4c"RESET"\n",frame,'|');
  printf(""YELLOW"|%61c"RESET"\n",'|');
  printf(""YELLOW"|%61c"RESET"\n",'|');
  printf(""YELLOW"%-3c%-4s %-53g|"RESET"\n",'|',"VAT:",VAT);
  printf(""YELLOW"%-3c%-8s %-8g%42c"RESET"\n",'|',"You pay:",Pay,'|');
  printf(""YELLOW"|%-.60s|"RESET"\n",frame);
}
