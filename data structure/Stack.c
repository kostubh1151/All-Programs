#include<stdio.h>
#define size 10
void initialized();
void push();
void pop();
struct stack
{
    int data[size];
    int top;
};
 void main()
 {
     struct stack *a;
     initialized(&a);
     push(&a,10);
     push(&a,20);
     pop(&a);
     pop(&a);
     pop(&a);

 }
 void initialized(struct stack *p)
 {
     p->top=-1;
 }
 void push(struct stack *p,int val)
 {
     if(p->top==size-1)
     {
         printf("overflow\n");
     }
     else
    {
        (p->top)++;
        p->data[p->top]=val;
     }
 }
 void pop(struct stack *p)
 {
     if(p->top==-1)
        printf("Underflow\n");
     else
     {
         printf("Popped=%d\n",p->data[p->top]);
         p->top--;
     }
 }
