/*
 
    This file contains functions on complex numbers.

Date:06-08-2018.

*/

#include"ch.h"

c add (c c1,c c2)
{
    c t;
    t.r=c1.r+c2.r;
    t.i=c1.i+c2.i;

    return t;
}

c sub(c c1,c c2)
{
    c d;
    d.r=c1.r-c2.r;
    d.i=c1.i-c2.i;
    
    return d;
}

c pro(c c1,c c2)
{
    c p;
    p.r=(c1.r*c2.r)-(c1.i*c2.i);
    p.i=(c1.r*c2.i)+(c2.r*c1.i);

    return p;
}

c div (c c1,c c2)
{
    c d;
    d.r=((c1.r*c2.r)+(c1.i*c2.i))/((c2.r*c2.r)+(c2.i*c2.i));
    d.i=((c1.i*c2.r)-(c2.i*c1.r))/((c2.r*c2.r)+(c2.i*c2.i));

    return d;
}
