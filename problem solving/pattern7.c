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
        for(j=0;j<i;j++)
            printf("%d",i-j);
        for(k=2;k<=i;k++)
            printf("%d",k);
        printf("\n");


    }
}
