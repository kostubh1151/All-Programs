#include<stdio.h>
int main()
{

    int a[10],i,x,n;
    printf("Enter the no. of elements in array: ");
    scanf("%d",&n);
    printf("Enter elements:-\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to be searched: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
        if(a[i]==x)
        {
            printf("Element found at %d location",i+1);
            return 0;

        }
    printf("Element not found");
    return 0;

}
