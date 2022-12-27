#include<stdio.h>
void main()
{
    int i,f=1,n,s=1,p=1,x;
    printf("Enter the no. of elements");
    scanf("%d",&n);
    printf("Enter the value of x");
    scanf("%d",&x);
    for(i=1;i<n;i++)
    {
        p=p*(-x);
        f=f*i;
        s=s+(p/f);
        printf("%d  %d ",p,f );
    }
    printf("\n%d",s);
}
