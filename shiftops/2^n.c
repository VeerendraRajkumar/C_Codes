/*
 
    This program checks whether the given number is of the form 2^n or not.

    Date 19-12-2018.
*/

#include<stdio.h>

void main()
{
    int n,dn,i=0;


    printf("\n\tEnter a number.\n");
    scanf("%d",&n);

    dn=1<<i;
    
    while(n>dn)
    {
        i++;
        dn=1<<i;
    }
    if(dn==n)
        printf("Yes");
    else
        printf("No");
}
