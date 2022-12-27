#include<stdio.h>
void main()
{

    int i,s=0,n,a[100];
    float b;
    printf("Enter the no. of students: ");
    scanf("%d",&n);
    printf("Enter the marks of student:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    b=s/n;
    printf("The class average is: %.2f",b);
}
