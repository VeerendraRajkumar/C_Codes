/*
 
   This program uses recursive function rdsum() to find the sum of the digits of the entered number.

   Date:11-07-2018.

*/

#include"myheader.h"

void main()

{
 
 int n;

 printf("\nThis program uses recursive function to find the sum of the digits of the entered number.\n");
 printf("\n Enter a number to find the sum of its digits.\n");
 scanf("%i",&n);

 printf("\n The sum of the digits of %i is %i.\n",n,rdsum(n)); 
}
