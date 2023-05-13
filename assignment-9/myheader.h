/*
    
    This is my header file.


*/
#include<stdio.h>
#include<math.h>
long int fact(int);//this function finds the factorial of a given number.

long int rfact(long int);//Tihs recursive function calculates the factorial of a given number.

int rfibo(int);//This recursive function gives n fibonacci number.

int rgcd(int,int);//This recursive function gives gcd of two numbers entered.

int rsum1stn(int);//This recursive function retu rns the sum of first n positive integers.

int rdsum(int);//This recursive function returns sum of the digits of the entered number.

long int comb(int,int);//this function gives nCr of the entered n and c .

long int d2b(int);//This function converts decimal to binary.

double ex(float);//this function gives the value of e^x using series.

double sine(float);//This function gives the value of sin using series.

double cosine(float);//This function gives the value of cos using series.

void addi(int,int,int,int);//This function adds 2 complex numbers.

void subi(int,int,int,int);//This function finds the difference btween 2 complex numbers.

void proi(int,int,int,int);//This function finds the product of 2 complex numbers.

void divi(int,int,int,int);//This function fins the quotient of 2 ocmplex numbers.

float avg(float,int);//This function takes sum and n and finds the average.

float pi1();//This function finds the value of pi using series.

float pi2();//This function finds the value of pi using series.

float pi3();//This function finds the value of pi using series.

float r,theta,fi;
void c2s(int,int,int);//This function transforms cartersian to spherical coordinates.

void swp(int *,int *);//This function uses pointers to swap two variables given.

void bubblesort(int a[],int);//This is the bubble sort function. 

void selectionsort(int a[],int);//This is the selection sort function.

void merge(int a[],int,int,int);//This is merge function which merges two parts of the given array.

void mergesort(int a[],int,int);//This is the  merge sort function.

int linearsearch(int a[],int ,int);//This function searches a given array linearly.

int binarysearch(int a[],int ,int);//This function uses binarysearch technique to search a given array.

int rbinsearch(int a[],int,int,int,int);//This is recursive binarysearch function.

void addm(int a[][3],int b[][3],int,int,int s[][3]);//This function adds the given two matrices.

void prom(int a[][3],int b[][3],int ,int p[][3]);//This function gives the product of two matrices.

void transpose(int a[][3],int,int t[][3]);//This function gives the transpose of the given matrix.

int checksymmetric(int a[][3],int);//This function checks whether the given matrix is symmetric or not.

int checkmagicsq(int a[][10],int);//This function checks whether the given square is a magic square or not.

int checkduplicate(int a[][10],int);//This function checks whether the given array has duplicates or no. 
