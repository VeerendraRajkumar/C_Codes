/*
 
    This program uses commmand line arguments to replace a word in a file.

Date:12-11-2018.

*/

#include<stdio.h>
#include<string.h>

int main(int argc ,char *argv[])
{
    FILE *f1,*f2;
    char s[50],c;

    if(f1=fopen(argv[1],"r"))
    if(f2=fopen("temp","w"))
    {
        fscanf(f1,"%s",s);
        while(!feof(f1))
        {
            c=fgetc(f1);
            if(!(strcmp(s,argv[2])))
                fprintf(f2,"%s%c",argv[3],c);
            else
                fprintf(f2,"%s%c",s,c);

            fscanf(f1,"%s",s);
        }
    }
        fclose(f1);
        fclose(f2);

        remove(argv[1]);
        rename("temp",argv[1]);
}

