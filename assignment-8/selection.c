/*
 
   This program uses function selectionsort() to sort a given array.

   Date:18-07-2018.

*/

#include"myheader.h"

void main()

{
 
 int a[10],n=10,i;

 printf("\n\tThis program uses function selectionsort() to sort a given array.\n");
 printf("\tEnter the elements in the array.\n");
 
 for(i=0;i<n;i++)
 {
  printf("\n\tEnter the %i element in the array.\t",i+1);
  scanf("%i",&a[i]);
 }

 selectionsort(a,n);

 printf("\n\tThe sorted array is:\n");
 
 for(i=0;i<n;i++)
 
  printf("\n\t%i",a[i]);
}
