/*program to check if a given number is prime or not.
Return 1 if it is a prime number
Return 0 if it is not a prime number
*/

#include<stdio.h>
#include<math.h>
int checkPrime(int num)
{
    int flag = 1;

    if (num <= 1)
    {
        return 0; 
    }
    else
    {
     
        for (int i = 2; i <= (num/2); i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}


void main()
{   
    int num;
    int result;
    scanf("%d",&num);
    result=checkPrime(num);
    printf("%d",result);
}
