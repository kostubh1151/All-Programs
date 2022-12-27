#include<stdio.h>
void main()
{
    int i,n,s,c=0,ls=0,rs=0,a,b,x,y;

    printf("Enter a odd-digit number: ");
    scanf("%d",&n);
    s=n;
    while(s!=0)
    {
        s=s/10;
        c++;
    }
    x=c/2;
    for(i=1;i<=c;i++)
    {
        if(i==(x+1))
            {n=n/10;
                continue;
            }
        else if(i<=x)
        {
            rs+=(n%10);
            n=n/10;
        }
        else
        {
            ls+=(n%10);
            n=n/10;
        }

    }
    if(ls==rs)
        printf("\nBalanced Number");
    else
        printf("\nUnbalanced Number");
}
