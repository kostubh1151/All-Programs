#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *pre,*next;
};
void create();
void traverse();
void main()
{
    struct node *start=NULL;
    create(&start);
    traverse(start);
}
void create(struct node **p)
{
    int ch;
    struct node *ptr,*nptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&ptr->info);
    if(*p==NULL)
    {
        *p=ptr;
        ptr->pre=NULL;
        nptr=ptr;

    }
        printf("Enter choice: ");
        scanf("%d",&ch);
        while(ch==1)
        {
            ptr=(struct node *)malloc(sizeof(struct node));
            printf("Enter info: ");
            scanf("%d",&ptr->info);
            nptr->next=ptr;
            ptr->pre=nptr;
            nptr=ptr;
            printf("Enter choice: ");
            scanf("%d",&ch);
        }
        ptr->next=NULL;

}
void traverse(struct node* temp)
{
    while(temp!=NULL)
    {
        printf("%d=>",temp->info);
        temp=temp->next;
    }
    printf("NULL");
}
