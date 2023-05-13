/*
 */
#include<stdio.h>
void main()
{
 printf("Enter a 3 digit number.\n");
 int n;
 scanf("%d",&n);
 int sum=0,c;
 c=n%10;
 sum+=c;
 n=n/10;
 c=n%10;
 sum+=c;
 n=n/10;
 c=n%10;
 sum+=c;
 printf("The sum of the digits of the 3 digit number is : %d",sum);
 printf("\n");
}
