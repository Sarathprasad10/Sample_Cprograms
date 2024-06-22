// program to read a number and and print the sum of its digits.
#include<stdio.h>

int sumofdig(int num)
{
        int sum=0;
    while(num>0)
    {
        int n=num%10;
        sum=sum+n;
        num=num/10;
    }
        
    return sum;
}


int main()
{   
    int num,result;
    scanf("%d",&num);
    result=sumofdig(num);
    printf("%d",result);
    return 0;
}
