/*

    This file contains functions definitions for the declared functions in the header file.

Date:11-08-2018.

*/


#include"header.h"

/////////FUNCTIONS RELATED TO STRUCTURE DATE.
void prtdate(date t)
{
    printf("%i/%i/%i",t.d,t.m,t.y);
}

date getdate(date t)
{
    scanf("%i%i%i",&t.d,&t.m,&t.y);
    return t;
}

///////FUNCTIONS RELATED TO TIME STRUCTURE.
time gettime(time t)
{
    printf("\nEnter hrs: ");
    scanf("%d",&t.h);
    printf("\nEnter min: ");
    scanf("%d",&t.m);
    printf("\nEnter sec: ");
    scanf("%d",&t.s);

    return t;
}

void puttime(time t)
{
    printf("\nHrs:  %d",t.h);
    printf("\nMin :  %d",t.m);
    printf("\nSec:  %d",t.s);
}

time addtime(time t1,time t2)
{
    
    t1.s+=t2.s;
    t1.m+=(t1.s/60); 
    t1.s%=60;
    
    t1.m+=t2.m;
    t1.h+=t1.m/60;
    t1.m%=60;

    t1.h+=t2.h;
    t1.h%=24;

    return t1; 
}

time subtime(time t1,time t2)
{
    time t;
    t2.h*=-1;
    t2.m*=-1;t2.s*=-1;
   
    t= addtime(t1,t2);
    return t;
}

////////FUNCTIONS RELATED TO STRUCTURE STUDENT
void prt(student s)
{
    printf("\nRegdno:%d",s.regdno);
    printf("\nGrade:%c",s.grade);
    printf("\nGender:%c",s.gender);
    printf("\nName:%s",s.name);
    printf("\nCgpa:%f",s.cgpa);
    printf("\nDOB:");
    prtdate(s.dob);
    printf("\nYOJ:");
    prtdate(s.yoj);
}

student get(student s)
{
    printf("Enter details:");
     printf("\nRegdno:");
     scanf("%i",&s.regdno);
     printf("\nGrade:");
     getchar();
     scanf("%c",&s.grade);     
     printf("\nGender:");
     getchar();
     scanf("%c",&s.gender);
     printf("\nName:");
     getchar();
     gets(s.name);
     printf("\nCgpa:");
     scanf("%f",&s.cgpa);                    
     printf("\nDOB:");
     s.dob=getdate(s.dob);
     printf("\nYOJ:");                 
     s.yoj=getdate(s.yoj);
     getchar();

     return s;
}

void dispavg(student s[],int size)
{
    int avg=0,i;

    for(i=0;i<size;i++)
        avg+=s[i].cgpa;
    avg/=size;

    for(i=0;i<size;i++)
        if(s[i].cgpa>=avg)
            prt(s[i]);
}

void prtregd(student s[],int size,int regdno)
{
    int i;

    for(i=0;i<size;i++)
   {

        if(s[i].regdno==regdno)
        {
            prt(s[i]);
        }
    }
}

void prtyear(student s[],int size,date yoj)
{
    int i;

    for(i=0;i<size;i++)
        if(s[i].yoj.d==yoj.d&&s[i].yoj.m==yoj.m&&\
                s[i].yoj.y==yoj.y)
            prt(s[i]);
}

void prtgender(student s[],int size,char g)
{
    int i;

    for(i=0;i<size;i++)
        if(s[i].gender==g)
            prt(s[i]);
}

void cgpa(student s[],int size)
{
    student temp;
    int i,j,minp;
    for(j=0;j<size;j++)
    {
        minp=j;
        for(i=j+1;i<size;i++)
            if(s[minp].cgpa>s[i].cgpa)
                minp=i;

        if(minp!=j)
        {
            temp=s[minp];
            s[minp]=s[j];
            s[j]=temp;
        }
    }
    for(i=0;i<size;i++)
        prt(s[i]);
}

//Functions for player

 P getP(P p)
{
    printf("\nEnter the name of the player.\t");
    gets(p.name);
    printf("\nEnter age.\t");
    scanf("%d",&p.age);
    printf("\nEnter score.\t");
    scanf("%f",&p.score);

    return p;
                                        
}

void putP(P p)
{    
    printf("\nThe name of the playeris :\t%s",p.name);
    printf("\nAge:\t%i",p.age);
    printf("\nScore:\t%f",p.score);
}

 P addp(P p[],int i)
{
    i++;
    
    if(i<=N-1)
    {
      p[i]=getP(p[i]);
      return p;               
    }
    else 
    {
        printf("\nYou exceeded limit.\n");
    }
}

P modify(P p[],int i)
{
    int c;
    printf("Enter \t1.NAME.\n\t2.AGE.\n\t3.SCORE.\n\t4.COMPLETELY.\n");
    scanf("%i",c);

    switch(c)
    {
        case 1:
                printf("\nEnter the name of the player.\t");
                 gets(p[i].name);
                 break;
        case 2:
                 printf("\nEnter age.\t");
                 scanf("%d",&p[i].age);
                 break;
        case 3:
                printf("\nEnter score.\t");
                scanf("%f",&p[i].score);
                break;
        case 4:
                p[i]=getP[i];
                break;
    }
}

int searchP(P p[],char *n,int l)
{
    int i;
    for(i=0;i<l;i++)
        if(strcmp(p[i].name,n)==0)
            return i;
}

P delP(P p[],int i)
{
    P t;
    char n[20];int pos;
    printf("\nEnter the name of the player you want to delete.\n");
    gets(n);
    pos=searchP(p,n,i);
    t=p[pos];
    if(i>1||i==0)
    {
        p[pos]=p[i-1];
        printf("\n\tDeleted.\n");
        putP(t);
    }
   else
       if(i<0)
           printf("\n\tThe array is empty.\n");

}

P sortP(P p[],int U)
{
    p t;
    int i,j,minp;

    for(i=0;i<U;i++)
    {
     minp=i;
     for(j=i+1;j<U;j++)
         if(p[j]<p[minp])
             minp=j;
     if(minp!=i)
     {

     }
    }
     
}
