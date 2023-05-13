#include"header.h"

void main()
{
    P p[N];
    int U=-1,i,o;
    char c='y';

    while(c)
    {
        printf("\nEnter \n\t1.ADD\n\tMODIFY\n\tDELETE\n\tSORT\n\t");
        scanf("%i",&o);

        switch(o)
        {
            case 1:
                printf("You have opted to ADD.\n");
                p=addP(p,U);

        }
    }
}
