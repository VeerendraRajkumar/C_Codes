/*
        
        This program trims a given file.

Date:24-10-2018.

*/

#include<stdio.h>

void main()
{
    FILE *f1,*f2;
    char c;

    if(f1=fopen("file.txt","r"))
        if(f2=fopen("trim.txt","w"))
        {
            while((c=fgetc(f1))==' ');
            fseek(f1,-1,1);
            while((c=fgetc(f1))!=EOF)
            {
                fputc(c,f2);
                if(c==' ')
                {
                    while(((c=fgetc(f1))!=EOF)&&(c==' '));
                    fseek(f1,-1,1);

                }
            }

            fclose(f1);
            fclose(f2);
        }
    remove("file.txt");
    rename("trim.txt","file.txt");
}
