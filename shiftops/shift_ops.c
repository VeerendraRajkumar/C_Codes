/*
 
        This file contains the functions relating to bit operators.

        Date 29-12-2018.

*/
int circular_left_shift(int n,int pos)
{
    int i=1<<31,j,dn;

    for(j=0;j<pos;j++)
    {
        dn=n&i;
        n=n<<1;
        n+=dn;
        i=i>>1;
    }
    return n;
}

 void main()
{
    int n,pos;

    printf("\n\tNumber: \n");
    scanf("%d", &n);
    printf("\n\tPosition: \n");
    scanf("%d", &pos);

    circular_left_shift(n, pos);
}
