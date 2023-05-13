/*
 
    This is a header file for polynomial opreations.

    Date 12-12-18.

*/

#include<stdio.h>
#include<stdlib.h>

struct pnode
{
    int c,e;
    struct pnode * next;
};

typedef struct pnode * polyptr,*pp,pnode;

polyptr cterm(pp);
void display(pp);
polyptr deletelist(pp);
polyptr createnode();
polyptr addpoly(polyptr,polyptr);
polyptr INE(pp,int,int);
pp IND(pp,int,int);
pp propoly(pp,pp);
