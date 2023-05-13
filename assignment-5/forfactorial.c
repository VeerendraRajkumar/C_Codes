/*
   This program uses while loop to display the factorial of a given integer.
 
   Date: 20-06-2018.

*/
#include<stdio.h>
void main()
{
 int r=1,n;

 printf("\nEnter a number to find its fatorial.\n");
 scanf("%i",&n);

 for(;n;)
   r*=n--; 

 printf("\nThe factorial of the entered number is %i\n",r);
}

