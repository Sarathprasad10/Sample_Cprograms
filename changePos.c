//program to change every element in the position of an array which is multiple of three to -1
#include<stdio.h>
int main()
{   
    int n,a[10];
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%3==0)
        {
            a[i]=-1;
        }
    }
    printf("elements are:\n");
    for(int i=0;i<n;i++)
    {
       printf("%d\t",a[i]); 
    }
    return 0;
}