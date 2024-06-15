/* program to count the number of duplicate elements in an array.
While entering the input, the first element should be the n, length of the array. 
Followed by the n elements (A[i]) of the array. 
The output should be the count or duplicate elements in an array.
*/
#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
    int count;
   for(int i=0;i<lim;i++)
   {
       if(arr[i]!=-1)
       {
            for(int j=i+1;j<lim;j++)
            {
                if(arr[i]==arr[j]&&arr[i]!=-1)
                {
                    count++;
                    arr[j]=-1;
                }
            }
        }
    }
    return count;
}


int main()
{   
    int i,n, A[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        
    int out=function(A,n);    
    
    printf("%d",out);
    return 0;
}