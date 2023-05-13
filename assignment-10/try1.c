/*
   This program tries out the various functions in string.h .

   Date:16-08-2018.

*/

#include<stdio.h>
#include<string.h>

void main()
{
    char s[10],s1[10];
   /* printf("Enter input.\n");
    scanf("%s",s);
    printf("%s\n",s);
    getchar();8*/
    printf("Enter input.\n");
    gets(s);
    puts(s);
    printf("%i",strlen(s));
    strcpy(s1,s);
    printf("\n%i\n",strcmp(s1,s));
    strcat(s1,s);
    puts(s1);
}
