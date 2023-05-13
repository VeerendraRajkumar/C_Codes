/*
 
        This program counts the number of words in the file.

Date:17-11-2018.

*/

#include<stdio.h>
#include<string.h>
void main()
//void main(int argc,char* argv[])
{
    FILE *fp;
    char s[20];
    int count=0;

    if(fp=fopen("r.txt","r"))
    {
        while(fscanf(fp,"%s",s)!=EOF)
        {
                count++;
        }

        printf("The number of words in the file are %d .",count);

        fclose(fp);
    }
}
