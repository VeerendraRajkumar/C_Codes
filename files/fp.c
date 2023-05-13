/*
 
    This file contains the functions for operations of polynomials.

    Date 14-12-2018.

*/

#include"hp.h"

pp cterm(pp h)
{
    int c,e;

    printf("\n\tEnter the coeff.\n");
    scanf("%d",&c);
    printf("\n\tEnter the expo.\n");
    scanf("%d",&e);

    h=IND(h,c,e);

    return h;
}

void display(pp h)
{
    if(!h)
        printf("\n\tnull poly\n");
    while(h!=0)
    {
        printf("\n\t%dx^%d",h->c,h->e);
        if(h->next!=0)
            printf("\t+\t");
        h=h->next;
    }
}

pp INE(pp h,int c,int e)
{
    pp s=0;
    s=(pp)calloc(1,sizeof(pnode));

    s->c=c;   s->e=e;

    if(!h)
        return s;
    if(!h->next)
    {
        h->next =s;
        return h;
    }

    pp t=h;

    while(t->next!=0)
        t=t->next;
    t->next=s;

    return h;
}

pp deletelist(pp h1)
{
    pp t=h1;
    while(h1!=0)
    {
        t=h1;h1=h1->next;
        free(t);
    }
    return 0;
}

pp addpoly(pp a,pp b)
{
    pp c=0;

    if(!a&&!b)
        return 0;
    while(a!=0&&b!=0)
    {
           if(a->e > b->e)
           {
            c=INE(c,a->c,a->e);
            a=a->next;
           }
           if(a->e < b->e)
           {
            c=INE(c,b->c,b->e);
            b=b->next;
           }
           if(a->e == b->e)
           {
               c=INE(c,a->c + b->c,b->e);
               a=a->next; b=b->next;
           }
    }

    if(!a)
    {
        while(b!=0)
        {
            c=INE(c,b->c,b->e);
            b=b->next;
        }
    }

    if(!b)
    {
        while(a!=0)
        {
            c=INE(c,a->c,a->e);
            a=a->next;

        }

    }

    return c;
}

pp IND(pp h,int c,int e)
{
    pp s=(pp)calloc(1,sizeof(pnode));
    
    s->c=c;   s->e=e;

    if(!h)
        return s;

    if(!h->next)
    {
        if(h->e == s->e)
            h->c += s->c;
        else
        {
            if(h->e > s->e)
                h->next=s;
            else
            {
                s->next=h;
                h=s;
            }
        }
        return h;
    }

    pp t=h;int flag=1;

    while(t!=0)

        if(t->e!=e)
            t=t->next;
        else
        {
            t->c+=c;
            flag=0;
        }
    if(flag)
    {
        t=h;
    
        while(t!=0)
        
            if(t->e > e && (t->next ==0|| t->e < e))
            {
                s->next = t->next;
                t->next =s;
                break;
            }
        
            else
                t=t->next;
        return h;
    }
}

pp propoly(pp a,pp b)
{

    pp c=0;
    
    if((!a)||(!b))
        return 0;

    pp ta=a,tb=b,t=0;
    int flag =1;
    for(ta=a ; ta->next!=0 ; ta=ta->next)
        for(tb=b ; tb->next!=0; flag=1,tb=tb->next)
        {
            t=c;
            if(flag)
                while(t!=0)

                    if(t->e==(ta->e + tb->e))

                    {
                        t->c+=(ta->c * tb->c);
                        flag=0;
                    }

                    else
                        t=t->next;
            if(flag)
                c=IND(c,(ta->c * tb->c),(t->e + tb->e));
        }

    return c;
}
