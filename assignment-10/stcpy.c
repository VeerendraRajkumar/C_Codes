 /*
       This program uses the stlen() function defined in mystring.h .
  
        Date:22-08-2018. 
*/

 void main()
{
         char s1[20],s2[20];

         printf("\nEnter a string :\t");
         gets(s1);
         printf("\nThe entered string is : %s\n",s1);
         
         stcpy(s2,s1);

         printf("\nThe copied string is : %s\n",s2);
                         
}

