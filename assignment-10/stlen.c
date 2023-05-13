/*
   This program uses the stlen() function defined in mystring.h .

Date:22-08-2018.

*/

void main()
{
    char s[20];

    printf("\nEnter a string :\t");
    gets(s);

    printf("\nThe length of the string is : %i .\n",stlen(s));
}
