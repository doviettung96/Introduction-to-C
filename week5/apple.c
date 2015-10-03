#include <stdio.h>
#include <math.h>
main ()
{
  int ipod,ipad,net,c;
  printf("Ban muon mua bao nhieu IPOD? \n"); scanf("%d",&ipod);
  printf("Ban muon mua bao nhieu IPAD? \n"); scanf("%d",&ipad);
  printf("SIEU THI TOPCARE - HOA DON THANH TOAN\n");
  printf("%-9s %d x 148 = %d$\n","Ipod",ipod,ipod*148);
  printf("%-9s %d x 288 = %d$\n","Ipad",ipad,ipad*288);
  net =	(ipod*148) + (ipad*288);
  printf("%-9s           %d$\n","Net",net);
  if((ipod>=3&&ipad >=2)||net>1020)
    printf("%-9s %d x 10%% = %g$\n%-9s: %d - %g = %g$\n","Discount",net,net*0.1,"You pay",net,net*0.1,net*0.9);
  else
    printf("You don't have any discount\n");
    printf("%9s          %d$\n","You pay",net);
}
