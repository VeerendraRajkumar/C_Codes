/*
 
    This program uses int checkmagicsq() function to display whether the given n*n square is a magic sq or not.
   
    Date:02-08-2018.

*/

#include"myheader.h"
void main()
{

 int a[10][10],n,i,j,c;

 printf("\n\t This program uses int checkmagicsq() function to display whether the given n*n square is a magic square or not.\n");

 printf("\n\tPlease enter the order of the square.\n");
 scanf("%d",&n);  
 
 printf("\n\tPlease enter the square.\n");
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
  scanf("%i",&a[i][j]);

 c=checkmagicsq(a,n);
 
 if(c==0)
   printf("\n\tThe given square is not a magic square.\n");
 else
  if(c==1)
   printf("\n\tThe given square is a magic square.\n");

}
