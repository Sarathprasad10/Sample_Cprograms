//Section 11- linked list 
//Perform the respective operations on the following [Separate Question]
//a.Linked Stack
#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node* next;
};
struct node*top=NULL;
void push(int e)
{
        struct node* t;
        t=(struct node*)malloc(sizeof(struct node));
        t->data=e;
        t->next=top;                
        top=t;
}
void display()
{
        struct node* t;
        if(top==NULL)
        {
            printf("\nNo Elements:");
        }
        else
        {
            t=top;
            while(t!=NULL)
            {
                    printf("\n%d",t->data);
                    t=t->next;
                    
            }
                
        }
}
void pop()
{
        struct node *t;
        if(top==NULL)
        {
                printf("no elements");
        }
        else
        {
                printf("\n%d is popped",top->data);
                top=top->next;
        }
}
int main()
{
        push(10);
        push(20);
        push(30);
        display();
        pop();
        push(50);
        display();
        
}