#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
            printf("1");
        else if(i%2==0)
            printf("2");
        else
        {
            for(j=3;j<=n;j+=2)
            {
                if(i%j==0)
                {
                    printf("%d",j);
                    break;
                }
            }
        }


    }
}
