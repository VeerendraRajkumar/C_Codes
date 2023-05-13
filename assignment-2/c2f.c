
/*This program converts temperature given in celsius to farenheit.
  
*/
#include<stdio.h>
void main()
{
 printf("TEMPERATURE CONVERSION\n");
 printf("Enter a temperature in celsius.\t ");

 float c,f;

 scanf("%f",&c); 

 f=(1.8*c+32);       //conversion formula.

 printf("The temperature in farenheit is : \t %.2f",f);
}
 
