#include<stdio.h>
void main()
{
    int i,j,k=69;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c ",k+j);
        }
        printf("\n");
        k--;

    }
}
