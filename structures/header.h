/*
 
        This is the header file.

Date:11-09-2018.

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//COMPLEX NUMBERS.
 typedef struct
{
    int r,i;
          
}c;

 c add (c,c);
 c pro (c,c);
 c sub (c,c); 
 c divc (c,c);

 
 //STRUCTURE DATE
 typedef struct
{
         int d,m,y;
          
}date;

void prtdate(date);
date getdate(date);

//STRUCTURE TIME
typedef struct
{
    int h,m,s;
}time;

time gettime(time);
void puttime(time);
time addtime(time ,time);
time subtime(time ,time);

//STRUCTURE STUDENT
typedef struct
{
    char name[20],grade,gender;
    date dob,yoj;
    int regdno;
    float cgpa;
}student;

student get(student);
void dispavg(student [],int);
void prt(student);
void prtregd(student [],int ,int);
void prtyear(student [],int ,date);
void prtgender(student [],int ,char);
void cgpa(student[],int);

//STRUCTURE PLAYER
#define N 3
typedef struct
{
    char name[20];
    int age;
    float score;
}player,P;

P getP(P);
void putP(P);
P addp(P [],int);
P modify(P [],int);
P delP(P [],int);
P sortP(P [],int);
