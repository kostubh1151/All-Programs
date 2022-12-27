#include<stdio.h>
void main()
{
    int i,j,k,a[10][10],b[10][10],n;
    printf("enter the no. of elements in matrix");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
      for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d",a[i][j]);
        }
        printf("\n");
    }

}
