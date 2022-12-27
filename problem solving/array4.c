#include<stdio.h>
void main()
{
    int i,j,k,l,m=0,n, arr[50],arr1[50];
    printf("Enter the no. of elements and value of K");
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        j=arr[i];
        if(j<k)
        {

        l=j%10;
        j=j/10;
        if(((l-j)==1)||((j-l)==1))
        {
        arr1[m]=arr[i];
        m++;
        }
        }
    }
    for(i=0;i<m;i++)
        printf("%d ",arr1[i]);
}
