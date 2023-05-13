/*
 
    This program prints pascal's triangle fro the number of rows entered by the user.

     Date : 04-07-2018.

*/

#include"myheader.h"

void main()

{
 int n,s,i,j,dn;

 printf("Enter the number of rows of pascal triangle.\n");
 scanf("%i",&n);
 
 dn=n-1;
 for(i=0;i<n;i++)
 { s=dn;
   while(s)
   {
    printf("   ");s--;
   }
    for(j=0;j<=i;j++)
     printf("%4li   ",comb(i,j));
    printf("\n");dn--;
   
 }
}
