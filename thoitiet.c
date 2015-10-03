#include <stdio.h>
int main()
{
  int rainy,tem,hum;
  printf(" Does it rain? (1=yes,0=no)\n"); scanf("%d",&rainy);
  printf(" Type the temperature: ?C\n"); scanf("%d",&tem);
  printf(" Type the humidity: ?%%\n"); scanf("%d",&hum);
  printf(" Now we have some information\n");
  printf("\n %-15s\n","Forecast");
  printf(" %-15s%-10s%-16s%-10s\n","Day","Rainy?","Temperature (C)","Humidity %");
  if(rainy==0)
    printf(" %-15s%-10s%-16d%-10d\n","Tomorrow","Not rainy",tem,hum);
  else
     printf(" %-15s%-10s%-16d%-10d\n","Tomorrow","Rainy",tem,hum);
  if(tem>=35 && hum>=67)
    printf(" You should rest at home\n");
  else
    if(tem>=20 && tem<=30 && hum>=32 && hum<=40 && rainy==0)
  printf(" Let's go out for photography\n");
      else
    printf(" Don't forget to bring an umbrella!\n");
    }
