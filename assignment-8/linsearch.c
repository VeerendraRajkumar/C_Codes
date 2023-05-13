/*
 
   This program uses linearsearch() function to find the element in the given array.

   Date:24-07-2018.

*/

#include"myheader.h"

void main()

{

 int a[10],i,key,pos;

 printf("\n\tThis program uses linearsearch() function to find the element in the given array.\n");
 printf("\tEnter the elemnts in the array.\n");

 for(i=0;i<10;i++)
 {
  printf("\tEnter the %i number.",i+1);
  scanf("%i",&a[i]);
 }
 
 printf("\n\tEnter the number you want to find.\n");
 scanf("%i",&key);

 pos= linearsearch(a,10,key);
 
 if(pos==-1)
  printf("\n\tThe key isnot present in the array of elements entered.\n");
 else
  printf("\n\tThe position of key in the array is %i.\n",pos);

} 
