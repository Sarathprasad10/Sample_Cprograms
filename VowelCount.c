/*program to count the number of vowels in a given string and return the count.*/

#include<stdio.h>
#define MAX 100

int function(char * str)
{
   int count=0;
    while(*str)
    {
        if(*str=='A'||*str=='a'||*str=='E'||*str=='e'||*str=='I'||*str=='i'||*str=='O'||*str=='o'||*str=='u'||*str=='U')
        {
            count ++;
        }
        str++;
    }
    return count;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    int out=function(text);
    printf("%d",out);
}


