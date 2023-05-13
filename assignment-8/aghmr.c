/*
 
    This program uses function aghmr() to find am, gm, hm, and range of data entered in an array.

    Date:12-07-2018.

*/

#include"myheader.h"

void main()
{
 int a[10],n=10,i;

 printf("\nEnter the numbers in an array.\n");
 for(i=0;i<n;i++)
 {
  printf("Enter number %i\t",i+1);
  scanf("%i",&a[i]); 
 }
 
 aghmr(a,n);
}
