/*
 

    This is the file which contains all my functions.

*/

#include"myheader.h"

int fact(int n)
{
 int f=1;

 while(n)
  f*=n--;

 return f;
}
