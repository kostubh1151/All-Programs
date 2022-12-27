#include<stdio.h>
void main()
{
    int m,n,p,q,i,j,k,a[50][50],b[50][50],c[50][50],d[50][50];
    printf("Enter the no. of rows and column in 1st:  ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter the no. of rows and columns in 2nd: ");
    scanf("%d %d",&p,&q);
    printf("Enter the elements:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
            scanf("%d",&b[i][j]);
    }
    if(n==p)
    {
        printf("Multiplication:-\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                d[i][j]=0;
                for(k=0;k<n;k++)
                    d[i][j]=d[i][j]+a[i][k]*b[k][j];
                printf("%d  ",d[i][j]);
            }
            printf("\n");
        }
    }

}
