/*
 
    This recreates GREP .

Date:14-11-2018.

*/

#include<stdio.h>
#include<string.h>

void main(int argc ,char* argv[])
{
    FILE *fp;
    char s[50],*p;
    char n[10]=" ";

    strcat(n,argv[2]);
    strcat(n," ");
    strcpy(argv[2],n);

    if(fp=fopen(argv[1],"r"))
    {
        while(feof(fp)==0)
        {
           p=fgets(s,50,fp);
            if(strstr(s,n)!=NULL)
                printf("%s",s);
        }
        fclose(fp);
    }
}
