/*
 
     This program uses function long int d2b(int) to change decimal number (base 10) to binary.

     Date:10-07-2018.

*/

#include"myheader.h"

void main()

{

 int n;

 printf("\n\t\tThis program converts a decimalnumber(base 10) to binary(base 2).\n");
 printf("Enter a decimalnumber to convert to binary.\n");
 scanf("%i",&n);
 
 printf("\nThe binary form of %i is %li.\n",n,d2b(n));
}
    
