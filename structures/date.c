/*
 
    This program gives you tomorrow's date if you enter today's date.

Date:06-09-2018.

*/

#include<stdio.h>

typedef struct
{
    int d,m,y;
}date;

int validdate(date t)
{
    if(t.d<=0||t.d>32||t.m<=0||t.m>13||t.y<=0)
        return 0;
    if(t.m==2&&(t.y%100!=0&&t.y%4==0||t.y%400==0))
    {   if(t.d>29)
            return 0;
    }
    else
    {   if(t.m==2&&t.d>28)
          return 0;
    
    }
    if(t.m==4||t.m==6||t.m==9||t.m==11)
    {   if(t.d>30)
            return 0;
    }
    else
    {
        if(t.d>31)
            return 0;
    }
    return 1;
}
void main()
{
    date t;
    int i=1;
    while(i)
    {
        printf("\n\tEnter today's date:dd/mm/yyyy\n");
        scanf("%i%i%i",&t.d,&t.m,&t.y);
        if(validdate(t))
            i=0;
    }
    if(t.m==1||t.m==3||t.m==5||t.m==7||t.m==8||t.m==10||t.m==12)
    {
        if(t.d==31)
        {
            if(t.m==12)
            {
                t.m=1;t.y++;
            }
            else
                t.m++;
            t.d=1;
        }
        else
            t.d++;
    }
    else
        if(t.m==2)
        {
            if(t.d==28)
                if(t.y%100!=0&&t.y%4==0||t.y%400==0)
                    t.d++;
                else
                {t.d=1;t.m++;}
            else
                t.d++;
        }
        else
        {

            if(t.d==30)
            {t.d=1;t.m++;}
            else
                t.d++;
        }

    printf("\n\tTOMORROW'S DATE:%2i/%2i/%i\n",t.d,t.m,t.y);

}
