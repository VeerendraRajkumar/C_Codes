/*
 
     This program sorts the alphabets of the given string.

Date:23-08-2018.
*/

#include"mystring.h"

void main()
{
    char s[20];
   
    printf("\nEnter the string.\n");
    gets(s);

    sort_a(s);

    printf("\nThe sorted string is:\t%s\n",s);
}
