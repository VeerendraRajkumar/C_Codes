#include<stdio.h>
#include<math.h>

void main()
{
    int i,n,mask=1,sum=0,c;
    printf("\n\tEnter a number to get the binary form of that number.\n");
    scanf("%d",&n);

 /*   for(i=31;i>=0;i--)
    {
        mask=1<<i;
        if(n&mask)
            printf("1");
        else
            printf("0");
        if(i%8==0)
            printf(" ");
    }
    */
for(i=0;i<32;i++,mask=mask<<1)
{
    c=n&mask;
    sum+=((c*pow(10,i))/mask);
}
printf("%i",sum);
}
