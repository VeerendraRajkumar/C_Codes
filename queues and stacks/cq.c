/*
 
    This program implements circular queue using arrays.

Date: 25-08-2018.

*/

#include"sandq.h"

void main()
{
    int cq[N],i,f,r,o;
    char c='y';

    intzcq(cq,&f,&r);
    while(c=='y')
    {
      printf("\n\tENTER YOUR CHOICE.\n");
      printf("\n\t1.ENQ\n\t2.DEQ\n\t3.PRT\n\t4.ISFULL\n\t5.ISEMPTY\n\t6.INTZ\n\t");
      scanf("%i",&o);
      switch(o)
      {
          case 1:
              if(iscqfull(cq,&f,&r))
                  printf("\n\tThe q is full.\n");
              else
              {
                  printf("\n\tEnter the input.\n");
                  scanf("%i",&i);
                  encq(cq,&f,&r,i);
                  printf("The status of q is:");
                  prtcq(cq,&f,&r);
              }
              break;

         case 2:
              if(iscqempty(cq,&f,&r))
                  printf("\n\tThe q is empty.\n");
              else
              {
                  i=decq(cq,&f,&r);
                  printf("\n\tThe deleted element is %i.\n",i);
                  printf("The stauts of q is:");
                  prtcq(cq,&f,&r);
              }
              break;
        case 3:
              if(iscqempty(cq,&f,&r))
                  printf("\n\tThe q is empty.\n");
              else
                  prtcq(cq,&f,&r);
              break;
        case 4:
              if(iscqfull(cq,&f,&r))
                  printf("\n\tYes the q is full.\n");
              else
                  printf("\n\tNo the q is not full.\n");
              break;
        case 5:
              if(iscqempty(cq,&f,&r))
                  printf("\n\tYes the q is empty.\n");
              else
                  printf("\n\tNo the q is not empty.\n");
              break;
        case 6:
               intzcq(cq,&f,&r);
               break;
        default:
              printf("\n\tEnter proper input.\n");              
      }  
    getchar();
    printf("\n\tDo you want to contiue.\n");
    scanf("%c",&c);
    }
}
