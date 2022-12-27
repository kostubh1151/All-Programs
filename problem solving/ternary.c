#include<stdio.h>
void main()
{
    int i,h=9,l=0,m1,m2,x;
    int a[10]={10,12,15,20,21,22,25,30,35,40};
    printf("enter the value to search");
    scanf("%d",&x);

    while(l<=h)
    {
        m1=l+(h-l)/3;
        m2=h-(h-l)/3;
        if(a[m1]==x)
        {
            printf("Element found at %d",m1+1);
            break;}
        else if(a[m2]==x)
        {
            printf("element found at %d",m2+1);
            break;  }
        else if(a[m1]>x)
        {
            h=m1-1;
        }
        else if(a[m2]<x)
        {
            l=m2+1;
        }
        else
         {

            l=m1+1;
            h=m2-1;
         }
    }
    if(l>h)
    printf("no");


}
