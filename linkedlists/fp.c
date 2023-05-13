/*
 
    This is the file which contains functions on polynomials.

    Date 12-12-2018.

*/

#include"hp.h"

pp createnode()
{
    pp s=(pp)calloc(1,sizeof(*pp));
    return s;
}

pp addpoly(pp a,pp b)
{
    pp h;

    if(!a)
    {
        while(b!=0)
        {
            h=INE(h,b->c,b->e);
            b=b->next;
        }
        return h;
    }

    if(!b)
    {
        while(a!=0)
        {
            h=INE(h,a->c,a->e);
            a=a->next;
        }
        return h;
    }

    while(a!=0&&b!=0)
    {
        if(a->e)
    }
}
