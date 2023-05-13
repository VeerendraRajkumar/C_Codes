/*
 
    This program uses recursive function rfibo()to find the n fibonacci term.

    Date:11-07-2018.

*/

#include"myheader.h"

void main()
{
 int n;

 printf("\nThis program uses recursive function to find the nth term.\n");
 printf("\nEnter a number to finthat fibonacci term.\n");
 scanf("%i",&n);

 printf("\nThe %ith fibonacci term is %i.\n",n,rfibo(n));
} 
