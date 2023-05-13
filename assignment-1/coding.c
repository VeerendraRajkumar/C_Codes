#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,dn,k,**m,i,j,no;

    printf("\nEnter n:");
    scanf("%i",&n);
    
    m=calloc(n,sizeof(int *));
    if(m!=NULL)
    for(i=0;i<n;i++)
    {
        m[i]=calloc(n,sizeof(int));
        if(m[i]==NULL)
        { 
            printf("\nMemory not allocated.");
            exit(-1);
        }
    }
    else
    {
        printf("\nMemory not allocated");
        exit(-1);
    }
    
    m[n/2][n/2]=1;
    for(dn=n,k=0;dn>=0;dn-=2,k++)
    {
    for(i=k,j=k,no=dn*dn;j<dn;j++,no--)
        m[i][j]=no;
    for()
    }
    for(i=0;i<n;i++)
    {    
        for(j=0;j<n;j++)
        printf("%i ",m[i][j]);
        printf("\n");
    }
}
