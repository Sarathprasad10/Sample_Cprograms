/*Find the nth term of the series?
0,0,7,6,14,12,21,18,28*/

#include<stdio.h>
#define MAX 100

int function(int year)
{
    int arr[year];
    arr[1]=0,arr[2]=0;
    
   for(int i=3;i<=year;i++)
  {
      if(i%2==1)
      {
          arr[i]=arr[i-2]+7;
      }
      else if(i%2==0)
      {
          arr[i]=arr[i-2]+6;
      }
  }
    
     return arr[year];
   
}


void main()
{   
    int y;
    scanf("%d",&y);
    int out=function(y);
    printf("%d",out);
}




