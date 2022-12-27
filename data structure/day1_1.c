                                          //  Program for traversing array elements.



//testing






#include<stdio.h>
void main()
{
    int a[6],n,i;
    printf("enter no. of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}