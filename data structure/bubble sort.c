#include<stdio.h>
void swap(int *a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int i,j,k,n;
    int a[]={7,3,10,6,5,4};
    n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
