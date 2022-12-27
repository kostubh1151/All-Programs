#include<stdio.h>
void main()
{
    int top=-1,a[100],n,i,j,ch;
    printf("Enter no. of elements in stack: ");
    scanf("%d",&n);
    printf("1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice: ");
    scanf("%d",&ch);
    while(ch)
    {
        if(ch==1)
        {
            if(top==n-1)
            {
                printf("Overflow");
            }
            else
            {
                top++;
                printf("Enter the element to be inserted: ");
                scanf("%d",&a[top]);
            }
        }
        else if(ch==2)
        {
            if(top==-1)
            {
                printf("Stack is empty");
            }
            else
            {
                printf("Value popped= %d",a[top]);
                top--;
            }
        }
        else if(ch==3)
        {
            if(top==-1)
            {
                printf("Stack is empty");
            }
            else
            {
                for(i=0;i<=top;i++)
                    printf("%d ",a[i]);
            }
        }
        else if(ch==4)
        {
            printf("Exiting");
            break;
        }
        else
            printf("Wrong choice!!!");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
    }

}
