/* program to read an array and find the element who has the highest digit sum in the array.
While entering the input, the first element should be the n, length of the array. 
Followed by the n elements (A[i]) of the array. The output should be the array element with highest digit sum. 
If there are more than one element with same highest digit sum, display the first one only.*/

#include<stdio.h>
#define MAX 30

int function(int arr[],int lim)
{
   int max=0,rem,sum,num,maxindex;
   for(int i=0;i<lim;i++)
   {
       sum=0;
       num=arr[i];
       while(num>0)
       {
           rem=num%10;
           sum=sum+rem;
           num=num/10;
          
           
       }
       if(sum>max)
       {
           max=sum;
           maxindex=i;
       }
   }
   return arr[maxindex];
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


