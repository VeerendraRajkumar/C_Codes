/*
 
    This program copies a text file to another.

Date:20-10-2018.

*/

#include<stdio.h>
#include<string.h>

void main()

{
    FILE *f1,*f2;
    char c;

    f1=fopen("sample.txt","r");
    f2=fopen("copy.txt","w");

    printf("\nThe original file is:\n");
    if(f1!=NULL && f2!=NULL)
    {
        while((c=fgetc(f1))!=EOF)
        {
            fputc(c,f2);
            printf("%c",c);
        }
    }

    fclose(f2);
    f2=fopen("copy.txt","r");
    if(f2!=NULL)
        while((c=fgetc(f2))!=EOF)
        printf("%c",c);
    fclose(f1);
    fclose(f2);
}
