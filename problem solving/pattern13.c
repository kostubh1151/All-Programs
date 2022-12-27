#include<stdio.h>
void main()
{
    int A[15],i,j,k,n;
    printf("Enter the value of N");
    scanf("%d",&n);
    A[0]=n;
    k=1;
    for(i=0;i<k;i++)
    {
        if(A[i]<=0){
                A[i]-5;
                k++;
                printf("%d  ",A[i]);
            break;}
        else
            A[i+1]=A[i]-5;
            printf("%d ",A[i]);
        k++;
    }
    for(i=k;i<n;i++)
    {
     A[i+1]=A[i]+5;
      printf("%d ",A[k+1]);
    }


}
