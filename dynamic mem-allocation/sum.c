/*
 
   This program uses dynamic allocation for implementing matrices.

Date:04-09-2018.

*/

#include"myh.h"

void main()
{
    int **a,**b,**c;
    int r1,c1,r2,c2,i,j;

    printf("MATRIX 1");
    printf("\n\tEnter the number of rows.\n");
    scanf("%i",&r1);
    printf("\n\tEnter the number of cloumns.\n");
    scanf("%i",&c1);
    a=allocate_matrix(a,r1,c1);
    
    printf("MATRIX 2");
    printf("\n\tEnter the number of rows.\n");
    scanf("%i",&r2);
    printf("\n\tEnter the number of cloumns.\n");
    scanf("%i",&c2);
    b=allocate_matrix(b,r2,c2);

    for(i=0;i<r1;i++)
    for(j=0;j<c1;j++)
        scanf("%i",&a[i][j]);

     
    for(i=0;i<r2;i++)
    for(j=0;j<c2;j++)
        scanf("%i",&b[i][j]);

    if(r1==r2&&c1==c2)
        c=allocate_matrix(c,r1,c2);
    else
        printf("\n\tCannot add matrices of different dimensions.\n\tINVALID INPUT.\n");

    sum(a,b,r1,c1,c);

    printf("SUM\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            printf("%i ",c[i][j]);
        printf("\n");
    }
    deallocate(a,r1,c1);
    deallocate(b,r2,c2);
    deallocate(c,r1,c2);
}
