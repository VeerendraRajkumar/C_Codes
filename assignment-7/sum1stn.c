/*
 
    This program uses recursive function rsm1stn() to find the sum of the first n numbers.

    Date:11-07-2018.

*/

#include"myheader.h"

void main()

{
 
 int n;
 
 printf("\n This program uses recursive function to find the sum of the first n numbers.\n");
 printf("\nEnter a number to find the sum of the first n numbers.\n");
 scanf("%i",&n);

 printf("\nThe sum of the first %i numbers is %i.\n",n,rsum1stn(n));
}
