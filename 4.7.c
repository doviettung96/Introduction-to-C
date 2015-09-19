#include <stdio.h>
#define YELLOW "\x1b[43m"
#define RESET "\x1b[0m"
main ()
{
  char frame[] = "________________________________________________";
  int Quantity;
  float Price, Total, VAT, Pay;
  char ISBN[7], Title[15]; 
  printf("Quantity: ?\n"); scanf("%6d",&Quantity);
  printf("ISBN: ?\n"); scanf("%7s",ISBN);
  printf("Title: ?\n"); scanf(" %[^\n]",Title);
  printf("Price= ?\n"); scanf("%8f",&Price);
  VAT = (4 /(float) 100);
  Total = Price*Quantity;
  Pay = Total*(1 + VAT);
  printf("\n%s\n",frame);
  printf(""YELLOW"%-3c%-44s|"RESET"\n",'|',"BK Bookseller");
  printf(""YELLOW"|%47c"RESET"\n",'|');
  printf(""YELLOW"|%47c"RESET"\n",'|');
  printf(""YELLOW"%-3c%-6s%-7s%-15s%-8s%-8s|"RESET"\n",'|',"Qty","ISBN","Title","Price","Total");
  printf(""YELLOW"%-3c%-6d%-7s%-15s%-8g%-8g|"RESET"\n",'|',Quantity,ISBN,Title,Price,Total);
  printf(""YELLOW"|%-.43s%4c"RESET"\n",frame,'|');
  printf(""YELLOW"|%47c"RESET"\n",'|');
  printf(""YELLOW"|%47c"RESET"\n",'|');
  printf(""YELLOW"%-3c%-4s %-39g|"RESET"\n",'|',"VAT:",VAT);
  printf(""YELLOW"%-3c%-8s %-8g%28c"RESET"\n",'|',"You pay:",Pay,'|');
  printf(""YELLOW"|%-.46s|"RESET"\n",frame);
}
