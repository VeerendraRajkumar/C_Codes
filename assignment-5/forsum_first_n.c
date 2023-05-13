/* This program uses while loop to display the sum of the first n integers.
 
  Date: 20-06-2018

*/

#include<stdio.h>
void main()
{
 int n,dn,sum=0;
 printf("\nEnter the integer upto which you want the sum of the integers.\n");
 scanf("%i",&n);
 dn=n;
 for(;dn;)
  sum+=dn--;
 printf("\nThe sum of the first %i integers is %i \n",n,sum);
}    
