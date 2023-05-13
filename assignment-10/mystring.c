/*
   This program contains the functions defined in mystring.h .

Date:16-08-2018.

*/

#include"mystring.h"

 int stlen(char s[])
{
    int len=0;
    while(s[len]!=0)
        len++;

    return len;
}

 void stcpy(char ds[],char s[])
{
      int i=0;

     while(s[i]!=0)
         ds[i]=s[i++];
}

void stcat(char ds[],char s[])
{
    int i,j=0;

    i=stlen(ds);
    while(s[j]!=0)
    { 
     ds[i]=s[j];
        i++;j++;
    }  
}

 int stcmp(char *s1,char *s2)
{
    int i=0;

    if(stlen(s1)==stlen(s2))
    { 
        for(i=0;i<stlen(s1);i++)
            if(s1[i]!=s2[i])
                return 0;
            else
                continue;
        return 1;
    }         
    else
        return 0;
}

void prtalt(char s[])
{
    int i=0;

    while(s[i]!=0)
    {
        printf("%c",s[i]);
        i+=2;
    }
}


void subst(char str[],int start_pos,int no_of_chars,char sub[])
{
    int i;

    for(i=0;i<no_of_chars;i++,start_pos++)
        sub[i]=str[start_pos];

}

void prtaltrev(char s[])
{
    int i=stlen(s);

    while(i>=0)
    {
        printf("%c",s[i]);
        i-=2;
    }
}

char largst(char s1[],char s2[])
{
    if(stlen(s1)>stlen(s2))
        return 's';
    else 
        return '0';
}

void prtvowels(char s[])
{
    int i=0;

    while(s[i]!=0)
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            printf("%c",s[i++]);
        else
             i++;
}

int no_of_vowels(char s[])
{
    int v=0,i=0;

    while(s[i]!=0)
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            v++;i++;
        }
        else
            i++;
    return v;
}

void prt_no_each_vowels(char s[])
{
    int a=0,e=0,i=0,o=0,u=0,c=0;

    while(s[c]!=0)
    {
        switch(s[c])
        {
            case 'a':a++;break;

            case 'e':e++;break;

            case 'i':i++;break;

            case 'o':o++;break;

            case 'u':u++;break;

        }
        c++;
    }  
    printf("\nNumber of 'a' is : %i",a);
    printf("\nNumber of 'e' is : %i",e);
    printf("\nNumber of 'i' is : %i",i);
    printf("\nNumber of 'o' is : %i",o);
    printf("\nNumber of 'u' is : %i",u);

}

int search(char s[],char c)
{
    int i=0;

    while(s[i]!=0)
        if(s[i]==c)
            return i;
        else
            i++;
    return -1;
}

void swap_c(char *a,char *b)
{
    char c=*a;*a=*b;*b=c;
}

void sort_a(char a[])
{
    int i,j,minp;

    for(j=0;j<stlen(a);j++)
    {
        if(a[j]!=' ')
        {    
         minp=j;
         for(i=j+1;i<stlen(a);i++)
             if(a[i]!=' ')
             if(a[minp]>a[i])
                minp=i;
         if(minp!=j)
            swap_c(&a[minp],&a[j]);
        }   
    }
}

int match(char s[],char ss[])
{
    int i=0,l=stlen(ss);
    char sub[20];

    if(strcmp(ss,"' ''\0'")==0)
        for(i=0;i<stlen(s);i++)
        { if(s[i]==' ')
                return i;
        }   
    else
    {
    subst(s,0,l,sub);
    if(stcmp(ss,sub))
        return 0;
    else
    {
        while(s[i]!=0)
        {
            if(s[i]==' '&& i+l<stlen(s))
            {   subst(s,i+1,l,sub);
                if(stcmp(ss,sub)&&(s[1+i+l]==' '||ispunctn(s[i+1+l])||s[i+l+1]==0))
                    return i+1;
                i++;
            }
            else
                i++;
        }
    }
    return -1;
    } 
}

int ispunctn(char c)
{
    if(c==33||c==46||c==58||c==59||c==63)
        return 1;
    return 0;
}

void replace(char s[],char ss[],char rs[])
{
    int c=0,i,k,m,sp;
    char cs[50],space[2]={" "},sub[20];
   
    while(1)
    {
        m=match(s,ss);

        if(m>=0)
        {   c=1;
            for(i=0;i<m;i++)
                cs[i]=s[i];
            for(i=m,k=0;i<(m+stlen(rs));i++,k++)
                cs[i]=rs[k];
            subst(s,m,(stlen(s)-m),sub);
            sp=match(sub,"' ''\0'");
            if(sp>=0)
            {
                sp=sp+m;
                if(stlen(rs)>stlen(ss))
                    for(i=(m+stlen(rs)),k=sp;k<stlen(s);i++,k++)
                    cs[i]=s[k];
                else 
                     for(i=(m+stlen(rs)),k=sp;i<stlen(s);i++,k++)
                     cs[i]=s[k];
            }
            for(i=0;i<stlen(cs);i++)
                s[i]=cs[i];
            s[i]='\0';
        }
        else
        {
            if(c)
                printf("\nThe completed string is  :%s\n",s);
            else
            
                printf("\nThe string to be repeated in main string not found.\n");
               
            break;
        }
    }
}

void swapst(char *s1,char *s2)
{
    char *t;

    t=s1;s1=s2;s2=t;
}

void sort_words(char s[])
{
    int *a,as,i,j,k,minp;
    int ls=stlen(s);
    
    a=malloc(ls*sizeof(int));
    a[0]=0;

    for(i=1,j=1;i<ls;i++)
        if(s[i]==' '&&s[i-1]!=' '&&a[i+1]!=' ')
            a[j++]=i+1;
    a[j++]=ls+1;
    as=j;

    for(i=0;i<as;i++)
        printf("\n%i\n",a[i]);

    char ss[as][10];

    for(i=0;i<as;i++)
    { for(j=a[i],k=0;j<a[i+1]-1;j++,k++)
            ss[i][k]=s[j];
      ss[i][k]='\0';
    }

    for(i=0;i<as;i++)
        printf("\n%s\n",ss[i]);

 for(i=0;i<as;i++)
     for(j=i+1;j<as;j++)
         if(strcmp(ss[i],ss[j])>0)
         {
             char *t;
             t=ss[i];
             strcpy(ss[i],ss[j]);
             strcpy(ss[j],t); 
         }
   for(i=0;i<as;i++)
     printf("\n%s\n",ss[i]);

 s[0]='\0';
 printf("S now is %s",s);

 for(i=0;i<as;i++)
 stcat(s,ss[i]);   

}
/*
void sort_words(char s[])
{
    char *w[10];
    int n,i,j;

    for(i=0;scanf("%s",s)==1;i++)
    {
        w[i]=calloc(strlen(s)+1,sizeof(char));
        if(w[i]==NULL)
        {
            printf("Memoy not allocated.");
                exit(1);
        }
        strcpy(w[i],s);
    }n=i;

    printf("\nwords\n");
    for(i=0;i<n;i++)
        printf("\n%s\n",w[i]);

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(strcmp(w[i],w[j])>0)
                swapst(&w[i],&w[j]);

    printf("\nsorted\n");
    for(i=0;i<n;i++)
        printf("\n%s\n",w[i]);

    s[0]="";

}*/
