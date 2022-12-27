                                      // Program for reversal of an array.

#include<stdio.h>
void main()
{
    int a[10],n,i;
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
    printf("\n");
    printf("new array\n");
   for(i=n-1;i>=0;i--)
   {
        printf("%d ",a[i]);
   }
}