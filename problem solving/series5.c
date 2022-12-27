#include<stdio.h>
#include<math.h>
void main()
{
    int i,f=1,n,s=0,p=1,x,j;
    printf("Enter the no. of elements");
    scanf("%d",&n);
    printf("Enter the value of x");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        f=1;
        p=1;
        p=pow(-1,i+1);
        p=pow(x,2*i-1)*p;
        for(j=1;j<=2*i-1;j++){
        f=f*j;
        }
        printf("%d  %d ",p,f );
        s=(s)+(p/f);

    }
    printf("\n%d",s);
}
