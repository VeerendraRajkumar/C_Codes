 /*
       This program uses the stcmp() function defined in mystring.h .
  
       Date:22-08-2018.
 */

  #include"mystring.h"

     void main()
{
          char s[20],c;               
          
          printf("\nEnter the string:\t");
          gets(s);

          printf("\nEnter the character to be searched:\t");
          scanf("%c",&c);

          if(search(s,c))
              printf("\nThe character '%c' is present in the given string.\n",c);
          else
              printf("\nThe entered character is not present\n.");
}

