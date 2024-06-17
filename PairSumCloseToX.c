/*Given a sorted array and a number x, find a pair in an array whose sum is closest to x. 
Return the sum of the pair.*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 30

int function(int arr[],int lim, int x)
{
   int sum,result,diff,min=100000;
   for(int i=0;i<lim;i++)
   {
       for(int j=i+1;j<lim;j++)
       {
           sum=arr[i]+arr[j];
           diff=abs(x-sum);
           if(diff<min)
           {
               min=diff;
               result=sum;
           }
       }
   }
   return result;
   
}

int main() {
    int i,length,array[MAX];
    int x;
    scanf("%d",&x);
    while((scanf("%d,",&array[i]))!=-1){
        i++;
    }
    length=i;
    int out=function(array,length,x);
    printf("%d",out);
    return 0;
}

