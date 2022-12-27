#include<stdio.h>
void main()
{
    int a[10][10],i,j,n,b[10][10],t;
    printf("Enter no. of elements in matrix:-\n");
    scanf("%d",&n);
    printf("Enter elements:-\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    }
    t=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            b[j][i]=a[n+1-i][j];
        }

    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }

}
