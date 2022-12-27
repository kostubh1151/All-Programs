                                     // Program for Missing number in an array

#include<stdio.h>
void main()
{
    int a[8],n,i,summ,sum=0,res;
    printf("enter no. of element:");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        printf("enter elements:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    summ=n*(n+1)/2;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    res=summ-sum;
    printf("%d is missing",res);
}