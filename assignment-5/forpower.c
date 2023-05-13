/*
    This program uses while loop to implement a^b .

    Date: 20-06-2018.

*/

#include<stdio.h>
void main()
{

 int a,b,r=1;

 printf("\nThis program displays a^b if a and b are entered in the given order\n");
 printf("\nEnter the base and the power.");
 scanf("%i%i",&a,&b);

 for(;b;b--)
   r*=a;	

 printf("\nThe result is %i",r);

}

					
