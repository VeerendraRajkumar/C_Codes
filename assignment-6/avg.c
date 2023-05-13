/*
    This program displays the average of atmost n positive numbers entered by the user.
  
    Date : 26-06-2018.

*/

#include<stdio.h>

void main()

{
 
 int num,i,n; float avg=0.0;
 
 printf("Enter n.\n");
 scanf("%i",&n);
 
 for(i=1;i<=n;i++)
    {
    
     printf("Enter number.\n");
     scanf("%i",&num);
  
     if(num<0)
       break;
     else 
        avg+=num;
    
    }

avg=(avg/(i-1));

 printf("The average of the entered numbers is %.2f .\n",avg);

}
