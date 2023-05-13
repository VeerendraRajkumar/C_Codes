#include"mystring.h"
void main()
{
    char s[10];

    printf("\nEnter the string\n");
    gets(s);
    sort_words(s);
    printf("\nThe sorted string is %s\n");
}
