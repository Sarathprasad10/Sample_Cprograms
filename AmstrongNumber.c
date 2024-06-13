/*Write a program to read and check if the number is an Amstrong number or not. 
If it is Amstrong number, return 1, else return 0;*/

#include<stdio.h>
#include<math.h>
#define MAX 100

int function(int num)
{
   int temp=num;
   int n,Nnum,rem;
   int sum=0;
   Nnum=num;
   while(temp>0)
   {
       temp=temp/10;
       n++;
   }
   while(num>0)
   {
       rem=num%10;
       sum=sum+pow(rem,n);
       num=num/10;
   }
   if(sum==Nnum)
   {
       return 1;
   }
   else
   {
       return 0;
   }
}


void main()
{   
    int num;
    scanf("%d",&num);
    int out=function(num);
    printf("%d",out);
}


