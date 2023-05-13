/*
 
    This file contains the main program for the circular linked lists operations.

Date:8-12-2018.

*/

#include"hcll.h"

void  main()
{
    node *head=0;
    int o,n,p;
    while(1)
    {
        printf("\n\n\tENTER:\n");
        printf("\n\t1.INSERT AFTR POSN.\n\t2.DISPLAY.\n\t3.DELETE.\n\t4.FIND.\n\t5.DELETE LIST.\n\t6.EXIT.\n");
        getchar();
        scanf("%d",&o);

        switch(o)
        {
            case 1:
                printf("\n\tEnter the number to be inserted.\n");
                scanf("%d",&n);
                printf("\n\tEnter the position.\n");
                scanf("%d",&p);
                head=INP(head,n,p);
                display(head);
                break;
            case 2:
                display(head);
                break;
            case 3:
                printf("\n\tEnter the number to be deleted.\n");
                scanf("%d",&n);
                head=delete_v(head,n);
                display(head);
                break;
            case 4:
                printf("\n\tEnter the number you want to find.\n");
                scanf("%d",&n);
                p=find(head,n);
                if(p)
                    printf("\n\tThe element is in position %d.\n",p);
                else
                    printf("\n\tElement not found.\n");
                break;
            case 5:
                head=deletelist(head);
                display(head);
                break;
            case 6:
                exit(0);
                break;
        }
    }
}
