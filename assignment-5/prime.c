/*
    This program uses while loop to display whether the entered number is a prime or no.
    
    Date: 20-06-2018.

*/
#include<stdio.h>
void main()
{

 int a,i=2;
 
 printf("\nEnter a number to know if its prime or no.\n");
 scanf("%i",&a);
 
 if(a==0||a==1)
    printf("\n%i is neither prime nor composite number.\n",a);
 else if(a==2||a==3)
        printf("\n%i is a prime number.\n",a);
 else
    {
      while(i<=a/2)
          {
           if(a%i==0)
             {
                printf("\n%i is not a prime number.\n",a);
		i=a;
	     }
	    else i++;
          }
      if(i!=a)
      printf("\n%i is a prime number.\n",a);
    }
}


