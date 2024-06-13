//sum of 2 linked list

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*head=NULL;
struct node*h=NULL;

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
void insert2(int e)
{
    struct node*t;
    if(h==NULL)
    {
        h=(struct node*)malloc(sizeof(struct node));
        h->data=e;
        h->next=NULL;
    }
    else
    {
            t=h;
            while(t->next!=NULL)
            {
                t=t->next;
            }
            t->next=(struct node*)malloc(sizeof(struct node));
            t->next->data=e;
            t->next->next=NULL;
    }
}
void disp()
{
    printf("\nfirst linked list");
    struct node*t;
    t=head;
    while(t!=NULL)
    {
        printf("%d\t",t->data);
        t=t->next;
    }
    
}
void disp2()
{
    printf("\nsecond linked list");
    struct node*t;
    t=h;
    while(t!=NULL)
    {
        printf("%d\t",t->data);
        t=t->next;
    }
    
}
void sum() 
{
    int s = 0;
    struct node *t = head;
    struct node *t2 = h;

    while (t != NULL && t2 != NULL) 
    {
        s += t->data + t2->data;
        t = t->next;
        t2 = t2->next;
    }
    printf("\nSum = %d", s);
}


int main()
{
    int ch,n;
    printf("\n1.insert 1");
    printf("\n2.insert 2");
    printf("\n3.display");
    printf("\n4sum");
    do
    {
        printf("\nenter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nenter the nmber");
                    scanf("%d",&n);
                    insert(n);
                    break;
            case 2:printf("\nenter the nmber");
                    scanf("%d",&n);
                    insert2(n);
                    break;
            case 3:disp();
                    disp2();
                    break;
            case 4:sum();
                    break;
            case 5:printf("\nexit");
                    break;
            default:printf("wrong choice");
                    break;
            
        }
    }while(ch!=5);
}
