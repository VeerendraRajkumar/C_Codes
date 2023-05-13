/*
 
	This is a menu based program on linked lists opreations.

	Date:28-11-2018.

*/

#include<stdio.h>
#include<stdlib.h>

//DEFINTION OF STRUCTURE.

struct Node
	{
	  int data;
	  struct Node * next;
	}; 

typedef struct Node node;

//FUNCTIONS ON THE LINKED LISTS.

node * INB(node * h,int x)//INSERT IN THE BEGINNING FUNCTION.
{
 node *t=(node *)calloc(1,sizeof(node));
 
 t->data=x;
 if(h!=NULL)
	t->next=h;
 h=t;

 return h;
}

node * INP(node* h,int x,int p) //INSERT AT A GIVEN POSITION.
{
    int i;
    node *temp=h;
        
    node *t=(node *)calloc(1,sizeof(node));

    if(!p)
    {
        t->data=x;
        t->next=h;
    }

    else
    {
        if(!h)
        {
            t->data=x;
            h=t;
        }
        else
        {
            for(i=1;i<p&&temp->next!=0;i++)
                temp=temp->next;
            t->data=x;
            t->next=temp->next;
            temp->next=t;
        }
    }
    return h;
}

node* INE(node *h,int x) //INSERT AT THE END OF THE LIST
{
    node *t=(node *)calloc(1,sizeof(node));
    node *temp=h;

    t->data=x;
    if(!h)
        h=t;
    else
    {
        while(temp->next!=0)
            temp=temp->next;
        temp->next=t;
    }
    return h;
}

node* INA(node* h,int x) //INSERT IN ASCENDING ORDER.
{
    node *temp=h,*t=(node*)calloc(1,sizeof(node));
    
    t->data=x;
    
    if(!h)
        h=t;
    else
        if(!h->next)
            if(h->data<x)
                h->next=t;
            else
            {
                t->next=h;
                h=t;
            }
        else
        {
            while(temp)
            if(temp->data<x&&(!temp->next||temp->data>x))
            {
                t->next=temp->next;
                temp->next=t;
                break;
            }
        }
    return h;
}

void display(node * h) //DISPLAY FUNCTION
{
 node *t=h;

 if(h==NULL)
    printf("\n\tThe list is empty.\n");
 else
    {
	printf("\n\tThe elements in the list are :\n");
     while(t!=0)
	{
	  printf("\t%d",t->data);
	  t=t->next;
	}
    }
}


node * delete(node * h,int x) //DELETE A GIVEN ELEMENT FUNCTION
{
    if(!h)
    { 
        printf("\n\tList is empty.\n");
        return h;
    }

    if(h->next==0)
    {
        free(h);
        h=0;
        return h;
    }

    node *temp,*t=h,*p=0;

    while(t->next!=0)
    {
        if(t->data==x)
        {
            temp=t;
            t=t->next;
            if(p)
            p->next=t;
            else
                h=t;
            free(temp);
        }
        else
        {
            p=t;
            t=t->next;
        }
    }

    if(t->next==0)
    {
        if(t->data==x)
        {
            temp=t;
            p->next=0;
            free(temp);
        }
    }

    return h;
}

int isempty(node * h) //ISEMPTY FUNCTION
{
    if(h==0)
        return 1;
    return 0;
}

int find(node *h,int x)//FIND AN ELMENT IN THE LIST FUNCTION
{
        node *t=h;
        if(!h)
            return 0; 
        int count=1;
        while(t!=0)
        {
            if(t->data==x)
                return count;
            else 
            {
                count++;
                t=t->next;
            }
        }
        return 0;
}

node* deletelist(node *h) //DELETES THE WHOLE LIST.
{
    if(!h)
        return h;
    else
    {
        node *temp, *t=h;
        while(t!=0)
        {
            temp=t;
            t=t->next;
            free(temp);
        }
        return h=t;
    }
}

int count(node *h)//COUNT FUNCTION WHICH TELLS THE NUMBER OF ELEMENTS IN LIST.
{
    int count=1;
    node *t=h;

    if(!h)
        return 0;
    while(t->next!=0)
    {
        count++;
        t=t->next;
    }
    return count;
}

node * reverse(node *h) //REVERSE THE LIST
{
    node *t1,*t2;
    
    if(h==0||h->next==0)
        return h;

    t1=h;
    t2=h->next;
    h->next=0;

    while(t2!=0)
    {
        h=t2;
        t2=h->next;
        h->next=t1;
        t1=h;
    }

    return h;
}

node * sort(node *h)//SORT THE LIST.
{
    node *t1=h,*t2,*minp;
    int i;

    while(t1!=0)
    {
        minp=t1;
        t2=t1->next;

        while(t2!=0)
        {
            if(minp->data>t2->data)   
                minp=t2;
                t2=t2->next;
        }   

        if(minp!=t1)
        {
          i=minp->data;
          minp->data=t1->data;
          t1->data=i;
        }
        t1=t1->next;
    }

    return h;
}

node * DPN(node *h)
{
    if(!h)
    {
        printf("List is empty");
        return h;
    }
    else
    {
        node *temp,*t=h,*p;
        int i,n=1;
        while(t!=0)
        {
            if(n==1)
            {
                p=t;t=t->next;n++;
            }
            if(n==2||n==3)
            {
                p->next=t->next;
                temp=t;
                n++;
                t=t->next;
                free(temp);
            }
            else
            {
                for(i=2;i<=n/2;i++)
                    if(n%i==0)
                        break;
                if(i<=(n/2))
                {
                    p=t;
                    t=t->next;
                    n++;
                }
                else
                {
                    p->next=t->next;
                    temp=t;
                    n++;
                    t=t->next;
                    free(temp);
                }
            }
        }
        return h;
    }
}

void P_REP(node *h)
{
    if(!h)
        return ;
    if(h->next==0)
    {
        printf("\n\tNO REPEATS.\n");
        return ;
    }
    node *t1=h,*t2;
    printf("\n\tthe repeating elements (if any) are: \n");
    while(t1->next!=0)
    {
        t2=t1->next;
        while(t2!=0)
        {
            if(t1->data==t2->data)
                printf("%d\t",t1->data);
            t2=t2->next;
        }
        t1=t1->next;
            t1=t1->next;
    }
}

void main()
{

 node *head=0;
 
 int o,x,p;

 while('y')
  {
    printf("\n\n\tEnter :\n");
    printf("\t1.INSERT AT BEGN.\t2.INSERT AFTR POSTN.\t3.INSERT AT END.\n\t4.DISPLAY THE LIST.\n\t5.DELETE AN ELEMENT.\t\
            6.DELETE LIST.\n\t7.FIND.\n\t8.REVERSE THE LIST.\n\t9.SORT THE LIST.\n\t10.COUNT.\n\t11.DELETE PRIME POSN.\n\t12.PRNT REPS.\n\t0.EXIT.\n");
    scanf("%d",&o);

    switch(o)
	{
	  case 1:
		printf("\n\tEnter the number to insert.\n");
		scanf("%d",&x);
		head=INB(head,x);
        display(head);
		break;
      case 2:
        printf("\n\tEnter the number and the position.\n");
        scanf("%d%d",&x,&p);
        head=INP(head,x,p);
        display(head);
        break;
      case 3:
        printf("\n\tEnter the number to be inserted.\n");
        scanf("%d",&x);
        head=INE(head,x);
        display(head);
        break;
	  case 4:
		display(head);
		break;
	  case 5:
        if(!isempty(head))
        {
        printf("\n\tEnter the number you want to delete.\n");
        scanf("%d",&x);
        head=delete(head,x);
        }
        else
            printf("\n\tThe list is empty.\n");
		break;
      case 6:
        head=deletelist(head);
        display(head);
        break;
      case 7:
        printf("\n\tEnter the element to find it.\n");
        scanf("%d",&x);
        x=find(head,x);
        if(x)
        printf("\n\tThe element was found in position %d.\n",x);
        else
            printf("\n\tElement not found.\n");
        break;
      case 8:
        head=reverse(head);
        display(head);
        break;
      case 9:
        head=sort(head);
        display(head);
        break;
      case 10:
        x=count(head);
        if(x)
            printf("\n\tThe number of elements in the list :%d.\n",x);
        else
            printf("\n\tList is empty.\n");
        break;
      case 11:
        head=DPN(head);
        display(head);
        break;
      case 12:
        P_REP(head);
        break;
	  case 0:
		exit(1);
	  default :
		printf("\n\tEnter the correct input\n");
	}
   }
}
