/*
 
   This program uses bubblesort() function to sort the given array.

   Date:17-07-2018.

*/

#include"myheader.h"
#define n 10
void main()
{
 
 int a[10],i;
 
 printf("\n\tThis program uses bubblesort() function to sort the given array.");

 printf("\n\tEnter the numbers in the array.");
 for(i=0;i<n;i++)
 {
  printf("\n\tEnter the %i element in the array.\t",i+1);
  scanf("%i",&a[i]);
 }
 
 bubblesort(a,n);
 
 printf("\n\tThe sorted array is:");
  
 for(i=0;i<n;i++)
  printf("\n\t%i\t",a[i]);
}

