/*Check if the given string is palindrome or not.
Return 1 if the string is palindrome.
Return 0 if the string is not palindrome.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

int function(char * str)
{
   int i,right,len;
    len=strlen(str);
    right=len-1;
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[right]){
            return 0;
        }
        right--;
    }
    return 1;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    int out=function(text);
    printf("%d",out);
}



