//Reverse a string using Stack
#include<stdio.h>
#include<string.h>
int stack[10],top=-1;
void push (char ch[])
{
    if(top==9)
    {   
        printf("\nstack is full");
    }
    else
        stack[++top]=ch;
        
}
int pop()
{
    if(top==-1)
    {
            printf("\nstack is empty");
            return 0;
            
    }
    else
    {
        printf("%c,",stack[top]);
        return stack[top--];
    }
}
int main()
{
    char ch[10];
    int i;
    printf("enter the string into the stack");
    gets(ch);
    for(i=0;i<strlen(ch);i++)
    {
            push(ch[i]);
    }
    printf("\nthe reversed string=");
    for(i=0;i<strlen(ch);i++)
    {
            pop();
            
    }
    return 0;
    
}
