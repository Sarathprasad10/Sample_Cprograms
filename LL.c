//Section 9- Linked List- Basics 
//Demonstrate a linked list creation and display
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert(int e)
{ 
    struct node*t;
    if(head==NULL)
    {
        head=(struct node*)malloc(sizeof(struct node));
        head->data=e;
        head->next=NULL;
    }
   else
    { 
        t=head;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=(struct node*)malloc(sizeof(struct node));
        t->next->data=e;
        t->next->next=NULL;
    }
}
void delete(int e)
{
    struct node*t;
    if(head==NULL)
    {
        printf("\nno elemnets");
    }
    else if(head->data==e&&head->next==NULL)
    {
        printf("\n%d the element is removed",e);
            head=NULL;
    }
    else if(head->data==e&&head->next!=NULL)
    {
        printf("\n%d the element is removed",e);
        head=head->next;
    }
    else
    {   t=head;
            while(t->next->data!=e&&t->next->next!=NULL)
            {
                    t=t->next;
            }
            if(t->next->data==e)
            {
                    printf("\n%d is deleted", e);
                    t->next=t->next->next;
            }
            else
            {
                  printf("\nelement not found");
            }
    }
}

void display()
{
        struct node*t;
        if(head==NULL)
        {
                printf("\nno elements");
        }
        else
        {       printf("\nthe elements are:\n");
        t=head;
                while(t!=NULL)
                {
                        printf("%d\t",t->data);
                        t=t->next;
                }
        }
}

int main()
{
        insert(30);
        insert(20);
        insert(10);
        insert(5);
        display();
        delete(5);
        insert(50);
        display();
}