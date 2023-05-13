/*
 
    This program uses recursive binarysearch( ) function to find the given element in a sorted array.

    Date:24-07-2018.

*/

#include"myheader.h" 

void main() 
{
 int a[10],i,key,pos=-1;

 printf("\n\t This program uses recursive binarysearch( ) function to find the given element in a sorted array.\n");
 printf("\n\tEnter the elements in the array.\n");
 
 for(i=0;i<10;i++)
 { 
  printf("\tEnter the %i number.\t",i+1);
  scanf("%i",&a[i]);
 }

 printf("\n\tEnter the number you want to find in the array.\n");
 scanf("%i",&key);

 pos=binarysearch(a,10,key);

 printf("The position of the key is %i.",pos);

}
