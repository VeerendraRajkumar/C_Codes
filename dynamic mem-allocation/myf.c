/*

    This program contains functions which uses dynamic allocation.

Date:04-09-2018.

*/
#include"myh.h"

int ** allocate_matrix(int **a,int r,int c)
{
    a=calloc(r,sizeof(int *));
    int i;
    if(a!=NULL)
    for(i=0;i<r;i++)
    {
         a[i]=calloc(c,sizeof(int));
        if(a[i]==NULL)
        {
            printf("Memory not allocated");
            exit(-1);
        }
    } 
    else
    {
        printf("Memory not allocated");
        exit(-1);                                      
    }
    
    return a;
}

void deallocate(int **a,int r,int c)
{
    int i;

    for(i=0;i<r;i++)
        free(a[i]);
    free(a);
}

int trace(int **a,int r,int c)
{
    int t,i;
    if(r==c)
    {
        for(i=0;i<r;i++)
            t+=a[i][i];
        return t;
    }
    else
        printf("\n\tINVALID INPUT.\n");
}

void sum(int **a,int **b,int r2,int c2,int **c)
{
        int i,j;
        for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            c[i][j]=a[i][j]+b[i][j];
}

void product(int **a,int r1,int c1,int **b,int r2,int c2,int **c)
{
    if(c1==r2)
    {
        int i,j,k;
        for(i=0;i<r1;i++)
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<c1;k++)
                    c[i][j]+=a[i][j]*b[i][j];
            }
    }
    else
        printf("Invalid input.");
}

int symmetric(int **a,int r,int c)
{
    int i,j;

    for(i=0;i<r;i++) 
    for(j=0;j<c;j++)
        if(a[i][j]!=a[j][i])
            return 0;
    return 1;
}

int diagonal(int **a,int r,int c)
{
    int i,j;

    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
        if(i!=j)
        if(a[i][j]!=0)
            return 0;
    return 1;
}

int scalar(int **a,int r,int c)
{
    int i;

    if(!diagonal(a,r,c))
        return 0;
    else
        for(i=0;i<r-1;i++)
            if(a[i][i]!=a[i+1][i+1])
                return 0;
    return 1;
}

int upper(int **a,int r,int c)
{
    int i,j;

    for(i=1;i<r;i++)
    for(j=0;j<i;j++)
        if(a[i][j]!=0)
            return 0;
    return 1;
}

int lower(int **a,int r,int c)
{
    int i,j;

    for(i=1;i<r;i++)
    for(j=0;j<i;j++)
        if(a[j][i]!=0)
            return 0;
    return 1;
}

char triangular(int **a,int r,int c)
{
    int i=upper(a,r,c);
    if(i)
        return 'u';
    else
    {  i=lower(a,r,c);
        if(i)
            return 'l';
        else
            return 'n';
    }
}
