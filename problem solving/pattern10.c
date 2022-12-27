#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        if(i<=3){
        for(j=1;j<=i-1;j++)
            printf(" ");
        for(j=1;j<=7-2*i;j++)
            printf("*");
        }
        else
        {
        for(j=1;j<=5-i;j++)
            printf(" ");
        for(j=1;j<=2*i-5;j++)
            printf("*");
        }
        printf("\n");

}
}
