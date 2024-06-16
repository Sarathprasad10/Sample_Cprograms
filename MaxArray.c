/*program to read an array and find the largest element in the array
While entering the input, the first element should be the n,length of the array. 
Followed by the n elements (A[i]) of the array. 
The output should be the largest element in the n element array.*/

#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
   int max=arr[0];
   for(int i=1;i<lim;i++)
   {
       if(max<arr[i])
       {
           max=arr[i];
       }
    
   }
   return max;
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    int max=function(A,n);    
    
    printf("%d",max);
    return 0;
}