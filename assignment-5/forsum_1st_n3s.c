/*
    This program uses while loop to find the sum of the first n cubes.

    Date:20-06-2018.

*/

#include<stdio.h>
void main()

{
 
 int n,sum=0,dn;
 
 printf("\nEnter the number upto which you want to know the sum of the first n cubes.\n");
 scanf("%i",&n);
 
 if(n==1||n==0)
  printf("\nThe sum of the first %i cubes is %i\n",n,n);
 else
  {
   dn=n;
   for(;dn;)
      sum+=dn*dn*dn--;
   printf("\nThe sum of the first %i cubes is %i\n",n,sum);
  }

}
