#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,i,k;
    printf("Enter the value of A and B: ");
    scanf("%d %d",&a,&b);
    c=pow(a,b);
    printf("%d\n",c);
    printf("Enter the index: ");
    scanf("%d",&k);
    for(i=1;i<k;i++)
    {
        c=c/10;
    }
    c=c%10;
    printf("%d",c);


}
