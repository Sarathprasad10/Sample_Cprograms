/*
Given an array of 1's and 0's. Return a positive number if the count of 1's are more than the count of 0's, 
return a negative number if the number of 1's are less than the number of 0's and return 0 if their counts are same. The first input is the number of elements of the binary array followed by the binary array.
*/

#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
    int one=0,zero=0;
   for(int i=0;i<lim;i++)
   {
       if(arr[i]==1)
       {
           one++;
       }
       else if(arr[i]==0)
       {
           zero++;
       }
   }
   if(one>zero)
   {
       return 1;
       
   }
   else if(zero>one)
   {
    return -1;
   }
   else
   {
       return 0;
   }
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


