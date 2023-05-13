#include<stdio.h>
#include<stdlib.h>

struct dllnode
{
    int data;
    struct dllnode *l,*r;
};

typedef struct dllnode node;

node * cnode();
node * INP(node *h,int x,int p);
node * delete(node *h,int x);
int find(node *h,int x);
node * deletelist(node *h);
void display(node *h);
