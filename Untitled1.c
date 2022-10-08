#include <stdio.h>

int main()
{
   int a,i,c,e,f=5;
   
         printf("\n Enter the coin          :");
         scanf("%d",&a);
         printf("\n Enter the no.of tickets :");
         scanf("%d",&e);
   
   if (a%5==0)
   {
         printf("\n Your no.of tickets : %d",e);
       
       c=a-(e*f);
       if (c>=0)
       {
         printf("\n Your Balance       : %d",c);
       	 
	   }else
	     {   
	     printf("\n your amount        : %d",c);   
	     printf("\n Please pay balance amount to get the ticket");  
     	 }

   }
   else
   
           printf("\n Invailied coins");   
	  

    return 0;
}
