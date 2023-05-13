/*
 
   This program prints truthtables for given expressions.
  
   Date:03-07-2018.

*/

#include<stdio.h>

void main()

{
  short int a,b,c,d,r1,r2,r3;

  printf("\n\ta\tb\tc\td\ta||b||c||d\ta&&b||c||d\t!(!a||b)&&(!c||d)\n");
 
  for(a=0;a<2;a++)
  for(b=0;b<2;b++)
  for(c=0;c<2;c++)
  for(d=0;d<2;d++)
  {
    r1=a||b||c||d;
    r2=a&&b||c||d;
    r3=!(!a||b)&&(!c||d);
    
    printf("\t%d\t%d\t%d\t%d\t      %d\t\t     %d\t\t\t %d\n",a,b,c,d,r1,r2,r3);
  }
  printf("\n");
}

