
#include<stdio.h>
void main()
{

    int n,i,b=0,a[100];
    printf("Enter the total number: ");
    scanf("%d",&n);
    printf("Enter numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>b)
            b=a[i];
    }
    printf("Largest number is: %d",b);
}
