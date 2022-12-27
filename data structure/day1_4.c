                                     // Program for delete the given elements into an array.

#include<stdio.h>
void main()
{
    int a[10],n,i,loc;
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
    printf("\nenter no. for deletion:");
    scanf("%d",&loc);
    for(i=0;i<n;i++)
    {
        a[i]=a[n+1];
    }
    printf("new array\n");
    for(i=0;i<n-1;i++)
    printf("%d ",a[i]);
}