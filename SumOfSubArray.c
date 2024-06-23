/*unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S and print the left and right index of that subarray.
In case of multiple subarrays, return the subarray indexes which comes first on moving from left to right.*/

#include <stdio.h>
#define MAX 100

int function(int N, int S,int * A)
{
   int sum=0,i,j;
   for( i=1;i<N;i++)
   {
       
          sum=A[i];
           if(sum==S)
           {
               printf(" %d  %d ",i+1,i+1);
               return 0;
           }
           
            for(j=i+1;j<N;j++)
            {
                sum=sum+A[j];
                if(sum==S)
                {
                    printf("%d %d",i+1,j+1);
                    return 0;
                }
            }
            
   }
   printf("-1");
}


int main() {
    int i,N,S,A[MAX];
    
    scanf("%d",&N);
    scanf("%d",&S);
    for(i=0; i<N; i++)
        scanf("%d",&A[i]);
        
    function(N,S,A);
    return 0;
}


