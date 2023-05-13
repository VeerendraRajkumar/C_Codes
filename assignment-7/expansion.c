/*
 
   This program uses the functions double e(float),double sine(float),double cosine(float) defined in myfunctions.c.

   Date:10-07-2018.

*/

#include"myheader.h"

void main()

{

 double e,s,c;
 float x;

 printf("\nEnter a number to know e^x,sin(x),cos(x) using series expansion.\n");
 scanf("%f",&x);

// printf("The entered value of x is %f",x); 
// e=ex(x);
 printf("Processed ex(x)");
 s=sine(x);
/* printf("Processed sin(x)");
 c=cosine(x);
 printf("Processed cos(x)");
*/
// printf("\ne^%f=%lf.\nsin(%f)=%lf.\ncos(%f)=%lf.\n",x,e,x,s,x,c);
printf("\nsine^%.2f=%.4lf.\n",x,s);
}
