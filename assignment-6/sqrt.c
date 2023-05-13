/*
 
   This program uses a mathematical method to find square root of an entered number.

   Date:03-07-2018.

*/

#include<stdio.h>
#include<limits.h>
#include<math.h>
void main()

{

  float v1,v2,n;
  int i;

  printf("Enter a number to find its square root.\n");
  scanf("%f",&n);
  n+=0.0;

  printf("Please wait calculating!!!\n");
  v1=1;
  for(i=0;i<INT_MAX;i++)
  {
   v2=0.5*(v1+n/v1);
   v1=v2;
  }
  printf("The square root of the entered number is %f.\n",v1);
}
