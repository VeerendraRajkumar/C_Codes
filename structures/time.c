/*
 
        Date:11-09-2018.

*/

#include"header.h"

void main()
{
    time t1,t2,t;

/*    printf("\nENTER TIME:");
    t1=gettime(t1);

    printf("Enter the time to be added.");
    t2=gettime(t2);

    t=addtime(t1,t2);
    puttime(t);
*/
    printf("Enter time:");
    t1=gettime(t1);
    printf("Enter time to be subtracted:");
    t2=gettime(t2);

    t=subtime(t1,t2);
    puttime(t);
}
