/*
 

    This is th  file which contains all my functions.

*/

#include"myheader.h"

long  int fact(int n)

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
 long int  r=0;
 int i;
 
 for(i=0;n;i++)
 {
  r+=(n%2*pow(10,i));
  n=n/2;
 } 
 return  ;
}

double ex(float x)
{
 printf("\nin function ex(x).\nThe value of x is %f.\n",x);
 double s=0.0,bs=1.0;x+=0.0;
 int i=1;

 while(1)
 {
  s=bs+(powf(x,i)/fact(i));
  if (fabs(s-bs)<0.001)
  return s;
  i++;bs=s;
 }
}

double  sine (float x)
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
 return pi ;
}

void c2s(int x,int y,int z)
{
 r=sqrt(x*x+y*y+z*z);
 theta=atan(sqrt(x*x+y*y)/z);
 fi=atan(y/z);
}

void add (int a1,int b1,int a2,int b2)
{
  printf("\nThe sum of (%i+i%i) + (%i+i%i) is %i+i%i.",a1,b1,a2,b2,a1+a2,b1+b2);
}

void subi(int a1,int b1,int a2,int b2)
{
  printf("\nThe difference of (%i+i%i) - (%i+i%i) is %i+i%i.",a1,b1,a2,b2,a1-a2,b1-b2);
}

void pro (int a1,int b1,int a2,int b2)
{
 printf("\nThe product of (%i+i%i) . (%i+i%i) is %i+i%i.",a1,b1,a2,b2,a1*a2-b1*b2,a2*b1+a1*b2);
}

void divi(int  a1,int b1,int a2,int b2)
{
 printf("\nThe su  of (%i+i%i) / (%i+i%i) is %.1f+i%.1f.",a1,b1,a2,b2,(a1*a2+b1*b2)/(powf(a2,2.0)*powf(b2,2.0)),(a1*b2-a2*b1)/powf(a2,2.0)*powf(b2,2.0));
}

void aghm (int a[],int n)
{
 float am=0.0,gm=1.0,hm;
 int i,min=100000,max=-100000;
 
 for(i=0;i<n;i++)
   {
    a +=a[i];
    gm*=a[i];
   }
 am/=n;
 hm=gm;
 gm=powf(gm,1.0/n);
 hm/=am;
 
 printf("\n\tFor th  given data:");
 printf("\n\t AM = %f. \n\t GM = %f.\n\t HM = %f.\n",am,gm,hm);
 
 for(i=0;i<n;i++)
 {
  if(min>a[i])
    min=a[i];
  if(max<a[i])
    max=a[i];
 }
 
 printf("\n The range is %f.\n",max-min); 
}

void swp(int *a,int *b)
{
 int s;
 
 s=*a;*a=*b;*b=s;

}

void bubblesort(int a[],int n)

{

 int i,j,f=0;

 for(i=0;i<n;i++)
 {f=0;
  for(j=0;j<n-i-1;j++)
  {
   if(a[j]>a[j+1])
    {
     swp(&a[j],&a[j+1]);
     f++; 
    }
  }
  if(f==0)
   break; 
 }
}

void selectionsort(int a[],int n)
{
 
 int i,j,minp;
 
 for(j=0;j<n;j++)
  {
     minp=j;
   
   for(i=j+1;i<n;i++)
    if(a[minp]>a[i])
     minp=i;
   
   if(minp!=j)
    swp(&a[minp],&a[j]); 
  }
}

void mergesort(int a[],int l,int r)
{
 
 int c;
 
 if(l<r)
  {
   c=(l+r)/2;
   mergesort(a,l,c);
   mergesort(a,c+1,r);
   merge(a,l,c,r);
  } 
}

void merge(int a[],int l,int c,int r)
{
 int t[10],i=l,j=c+1,k=l;

 while(i<=c&&j<=r)
  if(a[i]<a[j])
    t[k++]=a[i++];
  else 
    t[k++]=a[j++];

 if(i>c)
  while(j<=r)
    t[k++]=a[j++];
 else
   if(j>r)
    while(i<=c)
      t[k++]=a[i++];

 for(i=l;i<=r;i++)
  a[i]=t[i];
}

int linearsearch(int a[],int n,int k)
{
 
 int i;

 for(i=0;i<n;i++)
  if(a[i]==k)
   return i;
 if(i>n)
  return -1;

}

int binarysearch(int a[],int n,int k)
{
 
 int min=0,max=n-1,mid=(min+max)/2;

 if(a[mid]==k)
  return mid;
 else
  while(a[mid]!=k)
   {
    if(a[mid]>k)
     {  min=0;max=mid-1; mid=max/2; }
    else
      if(a[mid]<k)
       { min=mid+1;mid=(min+max)/2; }
   }
 return mid;
}

int rbinsearch(int a[],int min,int mid,int max,int key)
{

 if(a[mid]==key)
  return mid;
 else
 {
  if(a[mid]>key)
    rbinsearch(a,min,(min+mid-1)/2,mid-1,key);
  if(a[mid]<key)
   rbinsearch(a,mid+1,(mid+1+max)/2,max,key);
 }
} 
