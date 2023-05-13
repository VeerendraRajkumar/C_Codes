/*
    This program use of the various functions defined in mystring.h .

Date:21-08-2018.

*/

#include"mystring.h"

void main()
{
    int i;
    char s1[50],s2[20];

//    printf("\n\tEnter the input in the first string.\n");
//    gets(s1);
    printf("\n\tEnter the input in the second string.\n");
    gets(s2);

//    printf("\nThe string length of the first string is : %i\n",stlen(s1));
    printf("\nThe string length of the second string is : %i\n",stlen(s2));

    stcpy(s1,s2);

    printf("\nThe copied string s1 is :\t %s\n",s1);

    stcat(s1,"India is my country.");

    printf("\nThe concatenated string s1 is :\t %s\n",s1);

    printf("The string was compared :%i",stcmp(s1,s2));
}
