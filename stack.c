//stack program
#include <stdio.h>
int top = -1, ar[10];
int push(int e) 
{
    if (top == 8) 
    {
        printf("stack is full\n");
    } else {
        top++;
        ar[top] = e;
    }
    return top;
}

int pop() 
{
    if (top == -1) 
    {
        printf("stack is empty\n");
    } else {
        printf("top=%d and element of stack=%d is popped\n", top, ar[top]);
        top--;
    }
    return ar[top];
}
int peek()
{
    printf("is at top of th e stack:=%d",ar[top]);
}

int disp() 
{
   int j = top;
    if (top == -1) 
    {
        printf("stack is empty\n");
    } else {
        while (j >= 0) 
        {
            printf("%d,\t", ar[j]);
            j--;
        }
        printf("\n");
        printf("top=%d\n", top);
    }
}

int main() 
{
    int ch, n;
    printf("\n1.Push\n");
    printf("2.Pop\n");
    printf("3. Display\n");
    printf("4.PEEK\n");
    printf("5. Top\n");
    printf("6. Exit\n");
    
    do {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) 
        {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &n);
                push(n);
                break;
            case 2:
                printf("Pop\n");
                pop();
                break;
            case 3:
                printf("Display\n");
                disp();
                break;
            case 4:
                printf("**PEEK**");
                peek();
                break;
            case 5:
                printf("Top=%d\n", top);
                break;
            case 6:
                printf("Exit\n");
                break;
            default:
                printf("Wrong choice\n");
                break;
        }
    } while (ch != 6);

    return 0;
}


