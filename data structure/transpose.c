#include<stdio.h>
void main()
{

    int a[50][50],i,j,m,n,t[50][50];
    printf("Enter the no. of rows and column: ");
    scanf("%d %d",&m,&n);
    printf("Enter elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            t[j][i]=a[i][j];
        }
    }
    printf("Array:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("Transpose:-\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ",t[i][j]);
        printf("\n");
    }

}
