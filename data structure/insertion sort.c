#include<stdio.h>

void main()
{
    int i,j,k,n;
    int a[]={7,3,10,6,5,4};
    n=sizeof(a)/sizeof(a[0]);
    for(i=1;i<n;i++)
    {
        k=a[i];
        j=i-1;
        while(a[j]>k && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
