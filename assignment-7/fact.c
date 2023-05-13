/*
 
    This program uses recursive factorial function rfact() to find the factorial of the entered number.

    Date:11-07-2018.

*/

#include"myheader.h"

void main()
{

 long int n;
 
 printf("\nThis program uses recursive function to find factorial.\n");
 printf("\nEnter a number to find its factorial.\n");
 scanf("%li",&n);

 printf("\nThe factorial of %li is %li.\n ",n,rfact(n));
}
 
