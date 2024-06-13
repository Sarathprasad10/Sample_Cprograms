//BST WITHOUT RECURSION
#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node*left;
        struct node*right;
};
struct node*root=NULL;
typedef struct node tree;
struct stack
{
    tree*r;
    struct stack *next;
};
struct stack*top=NULL;
typedef struct stack stack;
void insert(int e)
{
    tree*x,*p;
    if(root==NULL)
    {
        root=(tree*)malloc(sizeof(tree));
        root->data=e;
        root->left=NULL;
        root->right=NULL;
    }
    else
    {
        p=root;
        while(p!=NULL)
        {
            x=p;
            if(p->data>e)
            {
                    p=p->left;
            }
            else
            {
                    p=p->right;
            }
        }
        if(x->data>e)
        {
            x->left=(tree*)malloc(sizeof(tree));
            x->left->data=e;
            x->left->left=NULL;
            x->left->right=NULL;
        }
        else
        {
            x->right=(tree*)malloc(sizeof(tree));
            x->right->data=e;
            x->right->left=NULL;
             x->right->right=NULL;
            
        }
    }
}
void push(tree*t)
{
    stack*temp=(stack*)malloc(sizeof(stack));
    temp->r=t;
    temp->next=top;
    top=temp;
}
tree*pop()
{
    tree*t=NULL;
    if(top!=NULL)
    {
        t=top->r;
        top=top->next;
    }
    return t;
}
void inorder(tree*root)
{
    tree*t;
    for(t=root;t!=NULL;t=t->left)
    {
        push(t);
    }
    t=pop();
    while(t!=NULL)
    {
        printf("%d\t",t->data);
        for(t=t->right;t!=NULL;t=t->left)
        {
            push(t);
        }
        t=pop();
    }
}
int main()
{
    insert(10);
     insert(50);
      insert(20);
       insert(40);
        insert(30);
        inorder(root);
}