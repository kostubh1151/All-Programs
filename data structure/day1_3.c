                                   //Program for insertion in the sorted array

#include<stdio.h>
void main()
{
    int a[10],n,i,val;
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
    printf("\nenter no. for insertion:");
    scanf("%d",&val);
    while(a[i]>val && i>=0)
    {
        a[i+1]=a[i];
        i--;
    }
    i++;
    a[i]=val;
    printf("new array\n");
    for(i=0;i<n+1;i++)
    printf("%d ",a[i]);
}