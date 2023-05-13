#include<stdio.h>

void main()
{
    int a,b;

    printf("\n\tEnter any two numbers.\n");
    scanf("%d%d",&a,&b);

    a=a^b;
    b=a^b;
    a=a^b;

    printf("\n\tFIRST NUMBER:%d\n\tSECOND NUMBER:%d\n",a,b);
}
