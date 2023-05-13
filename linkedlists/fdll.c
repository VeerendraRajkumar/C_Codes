#include"hdll.h"

node * cnode()
{
     node *s;
    return  s=(node *)calloc(1,sizeof(node));
}

node * INP(node *h,int x,int p)
{
    node *s=cnode(),*t=h;
    int i=1;
    s->data=x;

    if(!h)
        return s;
    else
    {
        if(!p)
        {
            s->r=h;
            h->l=s;
            return s;
        }
        else
        {
            for(i=1;i<p&&t->r!=0;i++)
                t=t->r;
            if(i==p)
            {
                s->r=t->r;
                s->l=t;
                if(t->r)
                t->r->l=s;
                t->r=s;
                return h;
            }
            else
                printf("\n\tNode can't be inserted at the desired position as the position doesn't exist.\n");
        }
    }
}

node * delete(node *h,int x)
{
    if(!h)
        return h;
    
    node *temp,*t=h;
        if(t->data==x)
            if(t->r!=0)
            {
                t->r->l=0;
                h=t->r;
                free(t);
            }    
            else
            {
                free(t);
                return 0;
            }

            while(t->r!=0)
            {
                if(t->data==x)
                { 
                    t->l->r=t->r;
                    t->r->l=t->l;
                    free(t);
                } 
                else
                    t=t->r;
            }

            if(t->r==0&&t->data==x)
                {
                    t->l->r=0;
                    free(t);
                }  

            return h;
}

int find(node *h,int x)
{
    int p=1;

    if(!h)
    {
        printf("\n\tList is empty.\n");
        return -1;
    }
    while(h!=0)
    {
        if(h->data==x)
            return p;
        else
        {
            p++;h=h->r;
        }
    }
    return 0;
}

node * deletelist(node *h)
{
    node *t=h;
    if(!h)
        return 0;
    else
    {
        while(t!=0)
        {
            t=t->r;
            free(h);
            h=t;
        }
    }

    return t;
}

void display(node *h)
{
    if(!h)
    {
        printf("\n\tList is empty.\n");
        return ;
    }
    else
    {
        printf("\n\tThe elements in the list are :\n");
        while(h!=0)
        {
            printf("(%x) %d (%x)\t",h->l,h->data,h->r);
            h=h->r;
        }
    }
}
