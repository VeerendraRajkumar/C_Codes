/*

   This program works as a calculator and uses swithcase for implementation.

Date:03-07-2018.


*/

#include<stdio.h>
#include<math.h>
void main ()

{

	float n1,n2,rf;
	int r;
	char c='y',o;

 do
  {
   getchar(); 
   printf("\nEnter the operation you want to perform.\n");
   scanf("%c",&o);
   
   switch(o)
      
      {
        case '+':
		 printf("SUM\n");
		 printf("Enter two numbers.\n");
		 scanf("%f%f",&n1,&n2);
		 r=n1+n2;
		 printf("The sum of the entered numbers is %i \n",r);
 		 break;

	case '-':
		 printf("DIFFERENCE\n");
                 printf("Enter two numbers.\n");
                 scanf("%f%f",&n1,&n2);
		 r=n1-n2;
		 if(r<0)
 		 r*=-1;
                 printf("The difference of the entered numbers is %i \n",r);
                 break;

	case '*':
		 printf("PRODUCT\n");
                 printf("Enter two numbers.\n");
                 scanf("%f%f",&n1,&n2);
                 printf("The product of the entered numbers is %.1f \n",n1*n2);
                 break;

	case '/':
                 printf("Enter two numbers.\n");
                 scanf("%f%f",&n1,&n2);
                 printf("The quotient of the entered numbers is %.2f \n",(n1+0.0)/n2);
                 break;

	case '^':
		 printf("Enter two numbers.\n");
                 scanf("%f%f",&n1,&n2);
                 printf("The result of n1^n2 is %.2f \n",powf(n1,n2));
                 break;

	default:
		printf("You have entered an invalid operation.\n");
      }
   printf("Do you want to continue?\n");
   printf("y-yes   n-no\n");
   getchar();
   scanf("%c",&c);
  }while(c=='y');
}
