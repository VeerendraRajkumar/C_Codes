/*
 
   This program demonstrares the use of the function c2s() function.
   c2s() function converts cartesianto spherical coordinates.

*/

#include"myheader.h"
void main()
{
 int x,y,z;

 printf("Enter the ooordinates in cartesian form.\n");
 scanf("%i%i%i",&x,&y,&z);

 c2s(x,y,z);
 printf("The transformation of x,y,z to spherical coordinates gives r=%f , theta=%f , fi=%f",r,theta,fi);
} 
