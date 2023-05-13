/*
 
   This program uses function mergesort() to sort the array given by the user.

   Date:18-07-2018.

*/

#include"myheader.h"

void  main()
{
 
 int a[10],n=10,i;

 printf("\n\tThis program uses function mergesort() to sort the array given by the user.\n");
 printf("\t Enter the elements in the array.\n");

 for(i=0;i<10;i++)
 {
  printf("\n\tEnter the %i element of the array.",i+1);
  scanf("%i",&a[i]);
 }

 mergesort(a,0,9); 

 printf("\n\tThe sorted array is:\n");

 for(i=0;i<10;i++)
 printf("\n\t%i",a[i]);

}
