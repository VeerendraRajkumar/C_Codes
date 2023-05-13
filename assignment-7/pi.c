/*
 
   This program demonstrates the use of the functions pi1(),pi2(),pi3() functions which use 
   series definition to find the value of pi.

   Date:10-07-2018.

*/

#include"myheader.h"

void main()

{
 float p1,p2,p3;

 p1=pi1();
 p2=pi2();
 p3=pi3();

 printf("\nThis program uses series expansion for determination of the value of pi.\n ");
 printf("Using the first series method value of pi is %f.\n",p1);
 printf("Using the second series method value of pi is %f.\n",p2);
 printf("Using the third series method value of pi is %f.\n",p3);
}
