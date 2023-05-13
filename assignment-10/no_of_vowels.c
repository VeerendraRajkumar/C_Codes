    /*
     *           This program uses the stcmp() function defined in mystring.h .
     *
     *                     Date:22-08-2018.
     *
     *                         */

 #include"mystring.h"

    void main()
{
                    int n;
                   char s[20];
                
                   printf("\nEnter string:\t");
                   gets(s);

                   n=no_of_vowels(s);

                   printf("\nThe number of vowels entered in the string is: %i.\n",n);

                   prt_no_each_vowels(s);

}
