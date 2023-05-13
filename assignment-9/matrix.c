/*
 
   This program uses functions such as addm() , prom() ,transpose(),checksymmetric() to do some operations on matrices.

   Date:1-08-2018.

*/

#include"myheader.h"

void main()
{
 int a[3][3],b[3][3],i,j,c,s[3][3];

 printf("Please enter the first matrix.\n"); 
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]); 
  }

 printf("Please enter the second matrix.\n");
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
  {
   scanf("%d",&b[i][j]);
  }

addm(a,b,3,3,s);

printf("sum :\n");
 printf(" the resultant matrix is:\n");
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   printf("%d  ",s[i][j]);
   printf("\n");
  }

prom(a,b,3,s);

printf("product :\n");
 printf(" the resultant matrix is:\n");
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   printf("%d  ",s[i][j]);
   printf("\n");
  }

transpose(a,3,s);

printf("transpose :\n");
 printf(" the resultant matrix is:\n");
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   printf("%d  ",s[i][j]);
   printf("\n");
  }

c=checksymmetric(a,3);
printf("\n");
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   printf("%d  ",a[i][j]);
   printf("\n");
  }

if(c==1)
 printf("The above matrix is symmetric.\n");
else
 printf("The above matrix is not symmetric.\n");
}
