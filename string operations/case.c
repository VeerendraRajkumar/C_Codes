/*
    
        This program change the case of every letter.

Date:22-10-2018.

*/

#include<stdio.h>
#include<ctype.h>
void main()
{
 FILE *f1,*f2;
 char c;

 if(f1=fopen("file.txt","r"))
     if(f2=fopen("f.txt","w"))
 {
     while((c=fgetc(f1))!=EOF)
     {
         if(c>='A'&&c<='Z')
         {
             c=c+32;
             fputc(c,f2);
         }
         else
             if(c>='a'&&c<='z')
             {
                 c-=32;
                 fputc(c,f2);
             }
             else
                 fputc(c,f2);
     }
     fclose(f1);
     fclose(f2);
 }

 remove("file.txt");
 rename("f.txt","file.txt");
}
