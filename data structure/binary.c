#include<stdio.h>
int main()
{

    int n,i,x,a[10],m,l=0,h;
    printf("Enter the no. of elements in array: ");
    scanf("%d",&n);
    h=n;
    printf("Enter elements:-\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to be searched: ");
    scanf("%d",&x);
    while(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==x)
        {   printf("Element found at %d location",m+1);
            return 0;
        }
        else if(x<a[m])
            h=m-1;
        else if(x>a[m])
            l=m+1;
    }
    printf("Element not found");
    return 0;

}
