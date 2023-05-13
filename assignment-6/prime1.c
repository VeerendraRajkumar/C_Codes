/*
 
   This program displays the prime numbers between the numbers entered by the user.

   Date:03-07-2018.

*/

#include<stdio.h>
 void main()

{

 int n1,n2,i,j,f;

 printf("Enter two numbers between whom you want prime numbers to be displayed.\n");
 scanf("%i%i",&n1,&n2);

 for(i=n1;i<=n2;i++)
 {
  f=0;
  for(j=1;j<=i;j++)
  { if(i%j==0)
     f++;
  }
  if(f==2)
   printf("  %i ",i);
 }  

}


