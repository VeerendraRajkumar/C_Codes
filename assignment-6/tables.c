/*
 
   This program prints the tables of 5 to 9 upto 10.

   Date :26-06-2018.

*/

#include<stdio.h>

void main()

{
 
 int i,j;
 
 for(i=1;i<=20;i++)
   {
    for(j=5;j<=9;j++)
      printf("   %i*%3i=%3i    ",j,i,j*i);
    printf("\n");
   }
}
