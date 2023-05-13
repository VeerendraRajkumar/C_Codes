#include<stdio.h>
#include<ctype.h>

void main()
{

    FILE *fp;
    char c;
    int s=0,a=0,t=0,n=0;

    fp=fopen("sample.txt","r");

    if(fp==NULL)
    {
        printf("Not able to access the file.");
    //    exit(-1);
    }

    while((c=fgetc(fp))!=EOF)
    {
        switch(c)
        {
            case '\t':t++;
                      break;

            case ' ':s++;
                     break;

            case '\n':n++;
                      break;

            default :a++;
        }
    }
    printf("\nCharacters : %i.",a);
    printf("\nSpaces : %i.",s);
    printf("\nTab : %i.",t);
    printf("\nNewline : %i",n);

    fclose(fp);
}
