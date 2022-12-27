#include<stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct Node{
        int info;
        struct Node *link;
        };
void insert(struct Node *);
void main()
{


    struct Node *ptr, *nptr, *start,*temp;
    int ch;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter info: ");
    scanf("%d",&ptr->info);
    start=ptr;
    insert(ptr);

    temp=start;
    while(temp!=NULL)
    {
        printf("%d=>",temp->info);
        temp=temp->link;
    }
    printf("NULL");

}
void insert(struct Node *ptr)
{
    struct Node *nptr;
    int ch;
    printf("Would you like to continue Press 1: ");
    scanf("%d",&ch);
    while(ch==1)
    {
        nptr=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter info: ");
        scanf("%d",&nptr->info);
        ptr->link=nptr;
        ptr=nptr;
        printf("Continue press 1: ");
        scanf("%d",&ch);
    }
    ptr->link=NULL;
}
