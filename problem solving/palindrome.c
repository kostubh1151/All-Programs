#include<stdio.h>
void pal(int n,int rev,int m);
void main()
{
    int n,rev=0,m;

    scanf("%d",&n);
    m=n;
    pal(n,rev,m);
}
void pal(n,rev,m)
{
    if(m==0)
    {
        if(n==rev)
            printf("Palindrome");
        else
            printf("not palindrome");
    }
    else
        pal(n,rev*10 + m%10,m/10);
}
