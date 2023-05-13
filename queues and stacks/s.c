/*
 
    This program implements stack using arrays.

Date: 25-08-2018.

*/

#include"sandq.h"

void main()
{
    int s[N],i,top,o;
    char c='y';

    istack(s,&top);
    while(c=='y')
    {
      printf("\n\tENTER YOUR CHOICE.\n");
      printf("\n\t1.PUSH\n\t2.POP\n\t3.PRT\n\t4.ISFULL\n\t5.ISEMPTY\n\t6.INITZ\n\t");
      scanf("%i",&o);
      switch(o)
      {
          case 1:
              if(isfull(s,&top))
                  printf("\n\tThe stack is full.\n");
              else
              {
                  printf("\n\tEnter the input.\n");
                  scanf("%i",&i);
                  push(s,&top,i);
                  printf("The status of stack is:");
                  prts(s,&top);
              }
              break;

         case 2:
              if(isempty(s,&top))
                  printf("\n\tThe stack is empty.\n");
              else
              {
                  i=pop(s,&top);
                  printf("\n\tThe popped  element is %i.\n",i);
                  printf("The stauts of stack is:");
                  prts(s,&top);
              }
              break;
        case 3:
              if(isempty(s,&top))
                  printf("\n\tThe stack is empty.\n");
              else
                  prts(s,&top);
              break;
        case 4:
              if(isfull(s,&top))
                  printf("\n\tYes the satck is full.\n");
              else
                  printf("\n\tNo the stack is not full.\n");
              break;
        case 5:
              if(isempty(s,&top))
                  printf("\n\tYes the stack is empty.\n");
              else
                  printf("\n\tNo the stack is not empty.\n");
              break;
        case 6:
               istack(s,&top);
               break;
        default:
              printf("\n\tEnter proper input.\n");              
      }  
    getchar();
    printf("\n\tDo you want to continue.\n");
    scanf("%c",&c);
    }
}
