                                      // Program to find which element is repeated in the array and which is not

#include<stdio.h>
void main()
{
    int a[10],n,i,j,loc;
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
    printf("\nrepeated element are\n");
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            printf("%d ",a[i]);
        }
    }
}