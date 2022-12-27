#include<stdio.h>
void main()
{
    int i,f=1,n,s=0;
    printf("Enter the no. of elements");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        s=s+(f/i);
    }
    printf("\n%d",s);
}
