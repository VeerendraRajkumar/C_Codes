/*

        This program removes blanks in a given file.

Date:22-10-2018.

*/
#include<stdio.h>
void main()
{
    FILE *f1,*f2;
    char c;

    if(f1=fopen("sample.txt","r"))
    if(f2=fopen("new.txt","w"))
    {
        while((c=fgetc(f1))!=EOF)
        {
            if(c=='\n')
                continue;
            else
                fputc(c,f2);
        }
        fclose(f1);
        fclose(f2);
    }

    remove("sample.txt");
    rename("new.txt","sample.txt");
}

