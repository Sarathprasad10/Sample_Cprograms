/*program to find the average of all elements of an array.
While entering the input, the first element should be the n, length of the array. 
Followed by the n elements (A[i]) of the array. 
The output should be the average of all elements in the n element array.
*/

#include<stdio.h>
#define MAX 30

float function(int arr[],int lim)
{
    
    float avg,sum=0;
   for(int i=0;i<lim;i++)
   {
       sum=sum+arr[i];
   }
   avg=sum/lim;
   return avg;
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    float out=function(A,n);    
    
    printf("%f",out);
    return 0;
}
