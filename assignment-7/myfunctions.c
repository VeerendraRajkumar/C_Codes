/*
 

    This is the file which contains all my functions.

*/

#include"myheader.h"

long int fact(int n)

{
 long int f=1;

 while(n)
  f*=n--;

 return f;
}

long int rfact(long int n)
{
 if(n==1)
  return 1;
 
 return n*fact(n-1);
}

int rfibo(int n)
{
 if(n==1||n==2)
  return 1;

 return rfibo(n-1)+rfibo(n-2);
}

int rgcd(int m,int n)
{
  if(n==0)
   return m;
  else if(n>m)
        rgcd(n,m);
  else
     rgcd(n,m%n);
}

int rsum1stn(int n)
{
 if(n==1)
  return 1;

 return n+rsum1stn(n-1);
}

int rdsum(int n)
{
 if(n==0)
  return 0;

 return (n%10)+rdsum(n/10);
}

long int comb (int n,int r)
{
  long int o;
  
  o=fact(n)/(fact(r)*fact(n-r));
  return o;
}

long int d2b(int n)
{
 long int r=0;
 int i;
 
 for(i=0;n;i++)
 {
  r+=(n%2*pow(10,i));
  n=n/2;
 } 
 return r;
}

double ex(float x)
{
 printf("\nin function ex(x).\nThe value of x is %f.\n",x);
 double s=0.0,bs=1.0;x+=0.0;
 int i=1;

 while(1)
 {
  s=bs+(powf(x,i)/fact(i));
  if(fabs(s-bs)<0.001)
  return s;
  i++;bs=s;
 }
}

double  sine(float x)
{
 printf("\nin function sine(x).\nThe value of x is %f.\n",x);
 double s=0.0,bs=x+0.0;x+=0.0;
 int i=1,sn=0;

 while(1)
 {
  s=bs+powf((-1.0),sn)*(powf(x,i)/fact(i));
  if(fabs(bs-s)<0.001)
   return s;
  bs=s;i+=2;sn++;
 }
}

double  cosine(float x)
{
 printf("\nin function cosine(x).\nThe value of x is %f.\n",x);
 float x1=0.0,x2=1.0;x+=0.0;
 int c=2,s=1;

 while(1)
 {
  x1=x2+(powf(x,c)/fact(c)*powf(-1.0,s));
  printf("\n%f\n",x1);
  if(abs(x1-x2)>0.001)
   break;
  c+=2;s++;x2=x1;
 }
 return x1;
}

float avg(float sum,int n)
{
 sum+=0.0;
 float a;
 
 a=sum/n;
 return a;
}

float pi1()
{
 float pi=0.0;
 int i;
 
 for(i=0;i<100000;i++)
  pi+=powf(-1.0,i)*(1.0/(2*i+1));
 pi*=4;
 return pi;
}

float pi2()
{
 float pi=0.0;
 int i;

 for(i=1;i<100000;i++)
  pi+=6/powf(i,2.0);
 pi=sqrt(pi);
 return pi;
}

float pi3()
{
 float pi=4.0;
 int i;

 for(i=1;i<100000;i++)
  pi*=((2.0*i)*(2.0*i+2))/((2.0*i+1)*(2*i+1.0));
 return pi;
}

void c2s(int x,int y,int z)
{
 r=sqrt(x*x+y*y+z*z);
 theta=atan(sqrt(x*x+y*y)/z);
 fi=atan(y/z);
}

void addi(int a1,int b1,int a2,int b2)
{
  printf("\nThe sum of (%i+i%i) + (%i+i%i) is %i+i%i.",a1,b1,a2,b2,a1+a2,b1+b2);
}

void subi(int a1,int b1,int a2,int b2)
{
  printf("\nThe difference of (%i+i%i) - (%i+i%i) is %i+i%i.",a1,b1,a2,b2,a1-a2,b1-b2);
}

void proi(int a1,int b1,int a2,int b2)
{
 printf("\nThe product of (%i+i%i) . (%i+i%i) is %i+i%i.",a1,b1,a2,b2,a1*a2-b1*b2,a2*b1+a1*b2);
}

void divi(int a1,int b1,int a2,int b2)
{
 printf("\nThe sum of (%i+i%i) / (%i+i%i) is %.1f+i%.1f.",a1,b1,a2,b2,(a1*a2+b1*b2)/(powf(a2,2.0)*powf(b2,2.0)),(a1*b2-a2*b1)/powf(a2,2.0)*powf(b2,2.0));
}

