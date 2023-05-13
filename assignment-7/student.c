/*
 
   This program displays average marks of a student along with his registration number.

   Date:10-07-2018.

*/

#include"myheader.h"

void main()
{
 float a,sum,marks;
 int ns,sb,i,j,rn;

 printf("Enter the number of students in your class.\n");
 scanf("%i",&ns);

 for(i=0;i<ns;i++)
  {
   sum=0.0;
   printf("Enter the registration number of the student %i.\n",i+1);
   scanf("%i",&rn);
   printf("Enter the number of the subjects.\n");
   scanf("%i",&sb);

   for(j=0;j<sb;j++)
    {
     printf("Enter the marks in subject %i.\n",j+1);
     scanf("%f",&marks);
     sum+=marks;
    }
   a=avg(sum,sb);

   printf("\nThe registration number of student %i is %i.\n",i+1,rn);
   printf("The average marks obtained by student %i is %.2f.\n",i+1,a);

  }
}
