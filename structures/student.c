#include"header.h"

void main()
{
    student *s;
    int n,i,regdno;
    date yoj;

    printf("Enter the number of students.");
    scanf("%i",&n);

    s=calloc(n,sizeof(student));
    if(s==NULL)
    {
        printf("Memory not allocated.");
        exit(-1);
    }

        for(i=0;i<n;i++)
            s[i]=get(s[i]);
        
       printf("\n\n\tDisplaying avg.");
        dispavg(s,n);
        printf("\n\tDisplaying regd");
        printf("Enter registration number.\n");
        scanf("%i",&regdno);
        prtregd(s,n,regdno);
        printf("\n\n\tDisplaying yoj");
        printf("Enter yoj");
        yoj=getdate(yoj);
        prtyear(s,n,yoj);
        printf("\n\n\tDisp gender");
        prtgender(s,n,'f');
        printf("\n\n\tDisplaying cgpa");
        cgpa(s,n);
        printf("\n");

}
