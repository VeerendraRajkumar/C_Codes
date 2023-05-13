/*
 
   This program uses file handling to handle student details.

Date:12-11-2018.

*/

#include<stdio.h>
#include<errno.h>
#include<string.h>

typedef struct
{
    char name[10];
    int rno;
    int age;
    int marks;
}student,S;

void putS(S s)
{
    printf("\n\tName :%s",s.name);
    printf("\n\tR.no: %d",s.rno);
    printf("\n\tAge: %d",s.age);
    printf("\n\tMarks: %d \n",s.marks);
}

void insert(S p)
{
    FILE *fp;
    if(fp=fopen("student.txt","a"))
    {
     /*   fprintf(fp,"%s",p.name);
        fprintf(fp,"%i",p.rno);
        fprintf(fp,"%i",p.age);
        fprintf(fp,"%i",p.marks);
       */ fwrite(&p,sizeof(S),1,fp);
        fclose(fp);
    }
}

void display()
{
    FILE *fp;
    S s;   
    if(fp=fopen("student.txt","r"))
    {
        fread(&s,sizeof(S),1,fp);
        while(feof(fp)==0)
        {
            putS(s);
            fread(&s,sizeof(S),1,fp);
        }

        fclose(fp);
    }
    
}


void modify(S s)
{
    FILE *fp;
    S ds;

    if(fp=fopen("student.txt","r+"))
    {
        while(feof(fp)!=EOF)
        {
            fread(&ds,sizeof(S),1,fp);
            if(ds.rno==s.rno)
                break;
        }
        fseek(fp,(-1*sizeof(ds)),1);
        fwrite(&s,sizeof(S),1,fp);
        fclose(fp);
    }

    printf("\nThe modified records are :\n");
    display();
}

void delete(S s)
{
    FILE *f1,*f2;
    S t;

    if(f1=fopen("student.txt","r"))
        if(f2=fopen("temp.txt","w"))
        {
            fread(&t,sizeof(S),1,f1);
            while(feof(f1)==0)
            {
                if(t.rno!=s.rno)
                fwrite(&t,sizeof(S),1,f2);
                fread(&t,sizeof(S),1,f1);
            }
            fclose(f2);
            fclose(f1);
        }
    remove("student.txt");
    rename("temp.txt","student.txt");
    printf("\n\tThe updated records are:\n");
    display();
}


void main()
{
    int o;
    S t;

    while(1)
    {
        printf("\n\tENTER:\n");
        printf("\t\t1.INSERT\n\t\t2.DISPLAY\n\t\t3.MODIFY\n\t\t4.DELETE\n\t\t5.EXIT\n");
        scanf("%i",&o);

        switch(o)
        {
            case 1:
                printf("\n\tEnter the details of the student.");
                printf("\n\tEnter the name of the student.");
                getchar();
                gets(t.name);
                printf("\n\tEnter registration number.");
                scanf("%i",&t.rno);
                printf("\n\tEnter the age of the student.");
                scanf("%i",&t.age);
                printf("\n\tEnter marks.");
                scanf("%i",&t.marks); 
                printf("\n\tYou have entered.\n");
                putS(t);
                insert(t);
                break;

            case 2:
                display();
                break;

            case 3:
                printf("\n\tEnter the unique R.no of the student.");
                scanf("%d",&t.rno);
                printf("Enter the modifications.");
                printf("\n\tEnter the name of the student.");
                getchar();
                gets(t.name);
                getchar();
                printf("\n\tEnter the age of the student.");
                scanf("%i",&t.age);
                printf("\n\tEnter marks.");
                scanf("%i",&t.marks);
                putS(t);
                modify(t);
                break;

            case 4:
                printf("\n\tEnter the unique R.no of the student you want to delete.\n");
                scanf("%d",&t.rno);
                delete(t);
                break;

            case 5:
                exit(0);
                break;

            default :
                printf("\n\n\tEnter proper input.\n");
        }
    }
}
