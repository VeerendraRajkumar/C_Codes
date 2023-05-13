#include"mystring.h"

void main()

{
    char s[20],ss[10],rs[10];

    printf("\nEnter the string.\n");
    gets(s);
    printf("\nEntered string is:%s\n",s);
    
    printf("\nEnter the substring which needs to be replaced.\n");
    gets(ss);

    printf("\nEnter the string with which you want to replace. \n");
    gets(rs);

    replace(s,ss,rs);

    printf("\n\tMAIN PROGRAM\n");
    printf("\n\tThe modified string is :  %s\n",s);

}
