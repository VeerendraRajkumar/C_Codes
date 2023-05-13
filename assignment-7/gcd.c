/*
 
    This program uses recursive function rgcd() to find the gcd of the entered numbers.

    Date:11-07-2018.

*/

#include"myheader.h"

void main()
{
 
 int m,n;
 
 printf("\nThis program uses recursive function to find the gcd of the entered numbers. \n");
 printf("\nEnter two numbers to find their gcd.\n");
 scanf("%i%i",&m,&n);

 printf("\nThe gcd of %i and %i is %i.\n",m,n,rgcd(m,n));
}
