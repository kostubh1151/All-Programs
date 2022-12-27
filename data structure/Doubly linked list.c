#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int info;
    struct Node *pre,*next;
};
void insert();
void main()
{
    struct Node *start,*ptr,*nptr,*temp;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    printf("enter info");
    scanf("%d",&ptr->info);
    ptr->pre=NULL;
    start=ptr;
    insert(ptr);
    temp=start;
    while((temp)!=NULL)
    {
        printf("%d=>",(temp->info));
        temp=temp->next;
    }

}
void insert(struct Node*ptr)
{
    struct Node*nptr;
    int ch;
    printf("Enter choice for insertion(1): ");
    scanf("%d",&ch);
    while(ch==1)
    {
        nptr=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter info");
        scanf("%d",&nptr->info);
        ptr->next=nptr;
        nptr->pre=ptr;
        ptr=nptr;
        printf("Enter choice for insertion(1): ");
        scanf("%d",&ch);
    }
    ptr->next=NULL;
}

