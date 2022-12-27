#include<stdio.h>
void main()
{
    int n,l=0,h,k=2,i,x;
    int a[10]={10,12,15,20,21,22,25,30,35,40};
    n=10;
    h=l+k;
    printf("enter the value to search");
    scanf("%d",&x);
    while(l<=n)
    {
        if(x>a[h])
        {
            l=h;
            h=l+k;
        }
        else if(x<a[h])
            for(i=l;i<h;i++)
        {
            if(a[i]==x)
            {
                printf("no. found at %d",i+1);
                break;
            }
        }

    }


}
