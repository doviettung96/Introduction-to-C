#include <stdio.h>
#include <math.h>
main ()
{
  int sotu,sotv,solap;
 char chay[] = "Mat hang ban chay nhat la: "; char e[] = "Mat hang ban e nhat la: ";
 char tu[] = "Tu lanh Electrolux"; char tv[] = "Tivi LCD Sony"; char lap[] = "Laptop HP";
 char cao[] = "Mat hang co doanh so cao nhat la: "; char thap[] = "Mat hang co doanh so thap nhat la: ";
printf("Bao cao doanh so - Sieu thi Viet Long\n");
printf(" So luong hang ban ra \n");
printf("Tu lanh Electrolux: "); scanf("%d",&sotu); printf("Doanh so: %d trieu VND\n",sotu*8);
printf("Tivi LCD Sony: "); scanf("%d",&sotv); printf("Doanh so: %d trieu VND\n",sotv*15);
printf("Laptop HP: "); scanf("%d",&solap); printf("Doanh so: %d trieu VND\n",solap*12);
printf("\nTong doanh so: %d trieu VND\n",(sotu*8)+(sotv*15)+(solap*12));

 if(sotu<sotv)
   {
   if(sotv<solap)
     {
     printf("%s%s\n",chay,lap);
     printf("%s%s\n",e,tu);
   }
   else if(sotv==solap)
       {
	 printf("%s%s,%s\n",chay,tv,lap);
	 printf("%s%s\n",e,tu);
       }
   else if(sotu>solap)
	   {
	     printf("%s%s\n",chay,tv);
	     printf("%s%s\n",e,lap);
	   }
   else if(sotu<solap)
	       {
		 printf("%s%s\n",chay,tv);
		 printf("%s%s\n",e,tu);
	       }
		 else
	       {
		 printf("%s%s\n",chay,tv);
		 printf("%s%s,%s\n",e,tu,lap);
	       }
   }
 
 else if(sotu==sotv)
   {
   if(sotv<solap)
		 {
		   printf("%s%s\n",chay,lap);
		   printf("%s%s,%s\n",e,tu,tv);
		 }
   else if(sotv==solap)
     printf("Khong co mat hang nao ban chay hay e nhat\n");
     else
		       {
			 printf("%s%s,%s\n",chay,tu,tv);
			 printf("%s%s\n",e,lap);
		       }
   }
 else
   {
     if(sotv>solap)
			   {
			     printf("%s%s\n",chay,tu);
			     printf("%s%s\n",e,lap);
			   }
 else if(sotv==solap)
			       {
				 printf("%s%s\n",chay,tu);
				 printf("%s%s,%s\n",e,tv,lap);
			       }
 else if(sotu>solap)
				   {
				     printf("%s%s\n",chay,tu);
				     printf("%s%s\n",e,tv);
				   }
 else if(sotu==solap)
				       {
					 printf("%s%s,%s\n",chay,tu,lap);
					 printf("%s%s\n",e,tv);
				       }
					 else
					   {
					     printf("%s%s\n",chay,lap);
					     printf("%s%s\n",e,tv);
					   }
   }
 
 if((sotu*8)<(sotv*15))
   {
   if((sotv*15)<(solap*12))
   {
     printf("%s%s\n",cao,lap);
     printf("%s%s\n",thap,tu);
   }
   else if((sotv*15)==(solap*12))
       {
	 printf("%s%s,%s\n",cao,tv,lap);
	 printf("%s%s\n",thap,tu);
       }
   else if((sotu*8)>(solap*12))
	   {
	     printf("%s%s\n",cao,tv);
	     printf("%s%s\n",thap,lap);
	   }
   else if((sotu*8)<(solap*12))
	       {
		 printf("%s%s\n",cao,tv);
		 printf("%s%s\n",thap,tu);
	       }
		 else
	       {
		 printf("%s%s\n",cao,tv);
		 printf("%s%s,%s\n",thap,tu,lap);
	       }
   }
 
 else if((sotu*8)==(sotv*15))
   {
   if((sotv*15)<(solap*12))
		 {
		   printf("%s%s\n",cao,lap);
		   printf("%s%s,%s\n",thap,tu,tv);
		 }
     else if((sotv*15==solap*12))
      printf("Khong co mat hang nao ban cao hay thap nhat\n");
    else
		       {
			 printf("%s%s,%s\n",cao,tu,tv);
			 printf("%s%s\n",thap,lap);
		       }
   }
 
 else
   {
     if((sotv*15)>(solap*12))
			   {
			     printf("%s%s\n",cao,tu);
			     printf("%s%s\n",thap,lap);
			   }
     else if((sotv*15)==(solap*12))
			       {
				 printf("%s%s\n",cao,tu);
				 printf("%s%s,%s\n",thap,tv,lap);
			       }
     else if((sotu*8)>(solap*12))
				   {
				     printf("%s%s\n",cao,tu);
				     printf("%s%s\n",thap,tv);
				   }
     else if((sotu*8)==(solap*12))
				       {
					 printf("%s%s,%s\n",cao,tu,lap);
					 printf("%s%s\n",thap,tv);
				       }
					 else
					   {
					     printf("%s%s\n",cao,lap);
					     printf("%s%s\n",thap,tv);
					   }
   }
}
			       
