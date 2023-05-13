/*
 
   This program finds the product integers and skips the value if zero is entered.
  
   Date : 26-06-2018.

*/

#include<stdio.h>

void main()

{ 
 
 int i,num,p=1,n;

 printf("\nEnter n.\n");
 scanf("%i",&n);
 
 for(i=0;i<n;i++)
   {
 
    printf("Enter the %ist number.\n",i+1);
    scanf("%i",&num);

    if(num==0)
      continue;
    else
      p*=num;
   }

 printf("\n The product is %i.\n",p); 

}

