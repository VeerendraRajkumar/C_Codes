/*
   This program gives the sum of the first n terms in a geometric series.
   
   The user must enter the first  term , the commom ratio , and the integrs till which he/she wants the sum.

   Date : 26-06-2018.

*/

#include<stdio.h>
#include<math.h>
void main()
{
 int a,r,sum,n,i;
 
 printf("\nEnter the first term of the geometric series.\n");
 scanf("%i",&a);

 printf("\nEnter the common ratio of the geometric series.\n");
 scanf("%i",&r);

 printf("\nEnter the term of the geometric series till where you want the sum.\n");
 scanf("%i",&n);

 for(i=0;i<n;i++)
   sum+=(a*pow(r,i));
 
 printf("\nThe sum of the first %i terms is %i \n",n,sum);

}
   
