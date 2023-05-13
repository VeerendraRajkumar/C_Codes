/*
 
    This file is the main program for polynomials functions.

    Date 15-12-2018.

*/

#include"hp.h"

void main()
{
    pp h1=0,h2=0,h=0;

    int o,flag;

    while(1)
    {
        printf("\n\tENTER\n");
        printf("\n\t1.create poly.\n\t2.add.\n\t3.multiply.\n\t4.display.\n\t5.deletelists.\n\t0.exit.");
        scanf("%d",&o);

        switch(o)
        {
            case 1:
                flag=1;
                printf("\n\tFirst poly\n");
                while(flag)
                {
                     h1=cterm(h1);
                    printf("\n\tinsert(1) or no(0).\n");
                    scanf("%d",&flag);
                }

                flag=1;
                printf("\n\tSecond poly\n");
                while(flag)
                {
                    h2=cterm(h2);
                    printf("\n\tinsert(1) or no(0).\n");
                    scanf("%d",&flag);
                }
                break;
            case 2:
                h=addpoly(h1,h2);
                display(h);
                break;
            case 3:
                h=propoly(h1,h2);
                display(h);
                break;
            case 4:
                printf("\n\tFirst polynomial.\n");
                display(h1);
                printf("\n\tSecond polynomial.\n");
                display(h2);
                break;
            case 5:
                h1=deletelist(h1);
                h2=deletelist(h2);
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("\n\tEnter proper input.\n");
        }
    }
}
