#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=2*i-1;j++)
            printf("%d",j);
        for(k=j-2;k>=i;k--)
            printf("%d",k);
        printf("\n");

    }
}

