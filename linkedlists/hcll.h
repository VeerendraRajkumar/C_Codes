#include<stdio.h>
#include<stdlib.h>

struct cllnode
{
    int data;
    struct cllnode *next;
};

typedef struct cllnode node;

node * INP(node *,int,int);
node * delete_v(node *,int);
void display(node *);
node *deletelist(node *);
