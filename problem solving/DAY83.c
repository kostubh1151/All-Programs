#include<stdio.h>
int add(int);
void main()
{
    int n,y;
    printf("Enter a non negative integer");
    scanf("%d",&n);
    y=add(n);
    printf("%d",y);
}
int add(int x)
{
    int s=0,r;
    while((x!=0))
    {
        
        r=x%10;
        x=x/10;
        s=s+r;
    }
    if((s/10)!=0)
    {
        add(s);
    }
    else
    return s;
}