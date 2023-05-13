/*
    This is a program in which functions for stacks and queues aare present.

     Date:25-08-2018.
     
*/

 #include"sandq.h"

void intzcq(int cq[],int *f,int *r)
{
    *f=*r=-1;
}

void encq(int cq[],int *f,int *r,int x)
{
    if(*f==-1&&*r==-1)
    {
        *f=*r=0;
        cq[*r]=x;
    }
    else
        if(*f==0&&*r==(N-1))
            printf("\n\tcq overflow.\n");
        else
            if(*f!=0&&*f==*r+1)
                printf("\n\tcq overflow.\n");
            else
            {
                if(*r==(N-1)&&*f!=0)
                    *r=0;
                else
                    *r=*r+1;

                cq[*r]=x;
            } 
}

int decq(int cq[],int *f,int *r)
{
    if(*f==*r==-1)
        printf("\n\tcq underflow\n");
    else
        if(*f==*r)
        {
            int t=*f;
            *f=*r=-1;
            return cq[t];
        }
        else
            if(*f==(N-1))
            {
                *f=0;
                return cq[N-1];
            }
            else
            {
                *f=*f+1;
                return cq[*f-1];
            }
}

void prtcq(int cq[],int *f,int *r)
{
    int i;

    if(*r<*f)
    {
        for(i=*f;i<N;i++)
            printf("%i ",cq[i]);
    
        for(i=0;i<*r;i++)
            printf("%i ",cq[i]);
    }
    else
        for(i=*f;i<=*r;i++)
            printf("%i ",cq[i]);

    printf("\n");
}

int iscqfull(int cq[],int *f,int *r)
{
    if(*f==0&&*r==(N-1))
        return 1;
    else
        if(*f==(*r+1))
            return 1;

    return 0;
}

int iscqempty(int cq[],int *f,int *r)
{
    if(*f==*r==-1)
        return 1;
    return 0;
}

void istack(int a[],int *top)
{
    *top=-1;
}

void push(int a[],int *top,int x)
{
    if(*top==N-1)
        printf("\n\tSTACK OVERFLOW.\n");
    else
    {
        *top=*top+1;
        a[*top]=x;
    }
}

int pop(int a[],int *top)
{
    if(*top<0)
        printf("\n\tSTACK UNDERFLOW.\n");
    else
    {
        *top=*top-1;
        return a[*top+1];
    }
}

void prts(int a[],int *top)
{
    int i;
    for(i=*top;i>=0;i--)
        printf("\n%i",a[i]);
    printf("\n");
}
int topvalue(int a[],int *top)
{
    if(*top<0)
        printf("STACK UNDERFLOW.");
    else
        return a[*top];
}

int isempty(int a[],int *top)
{
    if(*top<0)
        return 1;
    
    return 0;
}

int isfull(int a[],int *top)
{
    if(*top==N-1)
        return 1;

    return 0;
}

void iq(int q[],int *f,int *r)
{
    *f=-1;
    *r=-1;
}

void enq(int q[],int *f,int *r,int x)
{
    if(*f==-1&&*r==-1)
    {
        *r=*f=0;
        q[*r]=x;
    }
    else
        if(*r==N-1)
            printf("\n\tQUEUE OVERFLOW.\n");
        else
        {
            *r=*r+1;
            q[*r]=x;
        }
}
int deq(int q[],int *f,int *r)
{
    if(*r==-1)
        printf("\n\tQUEUE UNDERFLOW.\n");
    else
        if(*f==*r)
        {
            int t=*f;
            iq(q,f,r);
            return q[t];
        }
        else
            if(*f<N)
            {
                *f=*f+1;
                return q[*f-1];
            }
}

int isqfull(int q[],int *f,int *r)
{
    if(*r==N-1)
        return 1;
    return 0;
}

int isqempty(int q[],int *f,int *r)
{
    if(*f==-1&&*r==-1)
        return 1;
    return 0;
}

void prtq(int q[],int *f,int *r)
{
    int i;
    if(!isqempty(q,f,r))
       for(i=*f;i<=*r;i++)
           printf("   %i",q[i]);
    else
        printf("\n\tQUEUE IS EMPTY.\n");
}
