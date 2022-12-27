#include<stdio.h>
void main()
{
    int n,i,c;
    printf("Enter the number: ");
    scanf("%d",&n);
    c=n/2;
    for(i=2;i<=c;i++)
        while(n%i==0)
        {
            printf("%d",i);
            n=n/i;
        }

}
