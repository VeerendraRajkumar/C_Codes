/*
 
            COMPLEX NUMBERS

Date:06-08-2018.

*/

#include"ch.h"

void main()
{
    c z1,z2,s;
    int o;
    char c='y';

    while(c=='y')
    {
        printf("\n\tEnter the option.\n");
        printf("\n\t1.SUM\n\t2.SUB\n\t3.PRODUCT\n\t4.DIV\n");
        scanf("%i",&o);

        switch(o)
        {
            case 1:
                    printf("\n\tEnter the first complex number z1 .");
                    scanf("%i %i",&z1.r,&z1.i);
                    printf("\n\tEnter the second complex number z2 .");
                    scanf("%i %i",&z2.r,&z2.i);
                    s=add(z1,z2);
                    printf("\n\tThe sum of the entered complex numbers is %i+%ii",s.r,s.i);
                    break;
            
        
            case 2:
                    printf("\n\tEnter the first complex number z1 .");
                    scanf("%i %i",&z1.r,&z1.i);
                    printf("\n\tEnter the second complex number z2 .");
                    scanf("%i %i",&z2.r,&z2.i);
                    s=sub(z1,z2);
                    printf("\n\tThe difference of the entered complex numbers is %i+%ii",s.r,s.i);
                    break;
            case 3:
                    printf("\n\tEnter the first complex number z1 .");
                    scanf("%i %i",&z1.r,&z1.i);
                    printf("\n\tEnter the second complex number z2 .");
                    scanf("%i %i",&z2.r,&z2.i);
                    s=pro(z1,z2);
                    printf("\n\tThe product of the entered complex numbers is %i+%ii",s.r,s.i);
                    break;
            case 4:
                    printf("\n\tEnter the first complex number z1 .");
                    scanf("%i %i",&z1.r,&z1.i);
                    printf("\n\tEnter the second complex number z2 .");
                    scanf("%i %i",&z2.r,&z2.i);
                    s=div(z1,z2);
                    printf("\n\tThe division of the entered complex numbers is %i+%ii",s.r,s.i);
                    break;
        }
        getchar();
        printf("\n\tDo you want to continue?\n");
        scanf("%c",&c);
    }

if()}
