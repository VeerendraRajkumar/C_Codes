/*
 
    This program uses int checkduplicate() function to display whether the given array has any duplicate entries.
   
    Date:02-08-2018.

*/

#include"myheader.h"
void main()
{

 int a[10][10],n,i,j,c;

 printf("\n\t This program uses int checkduplicate() function to display whether the given array has any duplicate entries.\n");

 printf("\n\tPlease enter the order of the square.\n");
 scanf("%d",&n);  
 
 printf("\n\tPlease enter the elements in the array.\n");
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
  scanf("%i",&a[i][j]);

 c=checkduplicate(a,n);
 
 if(c==0)
   printf("\n\tThe given array does not have duplicates.\n");
 else
   printf("\n\tThe given array has duplicates.\n");

}
