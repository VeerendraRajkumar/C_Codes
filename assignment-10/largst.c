 /*
         This program uses the stcmp() function defined in mystring.h .

        Date:22-08-2018.
 */
    
#include"mystring.h"

   void main()
{
         char s1[20],s2[20],l;

         printf("\nEnter string s1:\t");
         gets(s1);

         printf("\nEnter string s2:\t");
         gets(s2);
     
         l=largst(s1,s2);

         if(l=='s')
             printf("\n%s is the largest string.\n",s1);
         else
             printf("\n%s is the largest string.\n",s2);

                                                                                
}

