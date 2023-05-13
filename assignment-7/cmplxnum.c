/*
  
    This program uses functions addi(),subi(),proi(),divi() to add, subtract, multiply and divide two complex numbers.

    Date:10-07-2018.

*/

#include"myheader.h"

void main()

{
 int a1,a2,b1,b2;
 
 printf("\nEnter two complex numbers.");
 printf("\na1");
 scanf("%i",&a1);
 printf("\nb1");
 scanf("%i",&b1);
 printf("\na2");
 scanf("%i",&a2);
 printf("\nb2");
 scanf("%i",&b2);
 
 addi(a1,b1,a2,b2);
 subi(a1,b1,a2,b2);
 proi(a1,b1,a2,b2);
 divi(a1,b1,a2,b2);
}
