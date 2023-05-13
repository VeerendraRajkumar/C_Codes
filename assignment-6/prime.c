/*
   
    This program displays the first n prime numbers.

    Date : 26-06-2018.

*/

#include<stdio.h>

void main()

{

 int n,j,i,k;

 do
   {
    
    printf("Enter n.\n");
    scanf("%i",&n);
    
    if(n<=0)
     {
     printf("Please enter a correct value.\n");
     continue;
     }
   }while(n<=0);

 i=n;
 if(i==1)
   printf("Prime numbers : %i\n",2);
 else
   if(i>=2)
    printf("Prime numbers : %i  %i",2,3);

 j=4;i=2; 

 do
  {
    k=2;
    do
     {
      if(j%k==0)
      {
       j++;k=j;break;
      }
      else
        k++;
     }while(k<=(j/2));
    
    if(k!=j)
     {
      printf("  %i   ",j);
      i++;j++;
     }
  }while(i<n);
 printf("\n");
} 
