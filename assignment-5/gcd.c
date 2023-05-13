/*
   This program uses wile loop to find gcd of two numbers.
   
   Date:20-06-2018.

*/

#include<stdio.h>
void main()
{
 
 int a,b,dv,dd,r=1;
 
 printf("\nEnter two numbers to know its gcd.\n");
 scanf("%i%i",&a,&b);

 if(a==b)
    printf("\nThe gcd of %i and %i is %i\n",a,b,a);
 else if(a>b)
      {
       dv=b;dd=a;
      }
      else
      {
       dv=a;dd=b;
      } 
 
 if(a!=b)
  {
   while(r)
       {
        r=dd%dv;
        if(r!=0)
	  {
           dd=dv;
	   dv=r;
	  }
	else
	  printf("\nThe gcd of %i and %i is %i\n",a,b,dv);
       }
  }
}



