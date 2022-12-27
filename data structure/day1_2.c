                                      // Program to insert the given elements into an array.

#include<stdio.h>
void main()
{
    int a[11],n,i,val,loc;
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
    printf("\nenter no. & location for insertion:");
    scanf("%d%d",&val,&loc);
    for(i=n-1;i>=loc-1;i--)
    {
        a[i+1]=a[i];
    }
    a[loc-1]=val;
    printf("new array\n");
    for(i=0;i<n+1;i++)
    printf("%d ",a[i]);
}