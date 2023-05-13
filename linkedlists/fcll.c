#include"hcll.h"

node * INP(node *h,int x,int p)
{
    node *s=(node *)calloc(1,sizeof(node));
    node *t=h;
    int i=1;

    s->data=x;

    if(!h)
    {
        s->next=s;
        return s;
    }
    
    if(h->next==h)
    {
        h->next=s;
        s->next=h;
        return h;
    }
    if(!p)
    {
        s->next=h;
        while(t->next!=h)
            t=t->next;
        t->next=s;
        h=s;
        return h;
    }

    for(i=1;i<p&&t->next!=h;i++)
        t=t->next;
    if(p==i)
    {
        s->next=t->next;
        t->next=s;
    }
    else
    {
        printf("\n\tPosition invalid.\n");
        free(s);
    }
    return h;
}

void display(node *h)
{
    node *t=h;

    if(!h)
        printf("\n\tList is empty.\n");
    else
    {
        printf("\n\tThe elements are:\n");
        while(t->next!=h)
        {
            printf("%d (%x)->\t",t->data,t->next);
            t=t->next;
        }
        if(t->next==h)
            printf("%d (%x)\t",t->data,t->next);
    }
}

node * deletelist(node *h)
{
    if(!h)
    {
        return h;
    }

    if(h->next!=h)
    {
        node *temp,*t=h->next;
        while(t->next==h)
        {
            temp=t;
            t=t->next;
            free(temp);
        }
    }
    free(h);
    h=0;
    return h;
}

node * delete_v(node *h,int x)
{
    if(!h)
    {
        return h;
    }
    
    node *t=h,*p,*temp;

    if(h->next==h&&h->data==x)
    {
        free(h);
        h=0;
        return h;
    }

    if(h->data==x)
    {
        while(t->next!=h)
            t=t->next;
        t->next=h->next;
        t=h;
        h=t->next;
        free(t);
        return h;
    }
    
    while(t->next!=h)
        if(t->data==x)
        {
            p->next=t->next;
            temp=t;
            t=t->next;
            free(temp);
        }
        else
        {
            p=t;
            t=t->next;
        }
    if(t->next==h)
        if(t->data==x)
        { 
            p->next=h;
            free(t);
        }

    return h;
}

int find(node *h,int x)
{
    if(!h)
        return 0;
    else
    {
        node *t=h;int i=1;
        
            while(t->next!=h)
            {
                if(t->data==x)
                    return i;
                else
                {
                    t=t->next;
                    i++;
                }
            }
            if(t->data==x)
                return i;
            else
                return 0;
    }
}
