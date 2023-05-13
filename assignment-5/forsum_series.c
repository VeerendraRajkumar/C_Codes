/*
     This program uses while loop to display the sum of the sum of the series.

     Date:20-06-2018.

*/

#include<stdio.h>
void main()

{

 float n,dn,sum=0.0;
 
 printf("\nEnter the number upto which you want the sum of the series.\n");
 scanf("%f",&n);

 if(n==0)
   printf("\nThe sum is %f\n",sum); 
 else 
  {
   dn=n+1.0;
   for(;dn;)
     sum+=((dn-1)/dn--);
   printf("\nThe sum is %f\n",sum);
  }

} 
