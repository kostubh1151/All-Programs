#include<stdio.h>
#include<math.h>
void main()
{
    int r,i;
    float x;
    printf("Enter the radius of circle: ");
    scanf("%d",&r);
    x=(2*r)/(sqrt(2));
    printf("Area=%.2f",x*x);
}
