/*
 
    This is header file for myf.c .

Date:04-09-2018.

*/

#include<stdio.h>
#include<stdlib.h>

int ** allocate_matrix(int **,int ,int);
void deallocate(int **,int ,int);
int trace(int **,int ,int);
void sum(int **,int **,int ,int ,int **);
void product(int **,int ,int ,int **,int ,int,int **);
int symmetric(int **,int ,int);
int diagonal(int **,int ,int);
int upper(int **,int ,int);
int lower(int **,int,int);
char triangular(int **,int,int);
int scalar(int** ,int,int);
