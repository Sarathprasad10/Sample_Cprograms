/*program to count the occurrences of a given character in a string.
The character and string are entered using the main function. 
You need to write the code to find the number of times the given character occur in the given string and return the number.*/

#include<stdio.h>
#define MAX 100

int function(char * str, char character)
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==character)
        {
         count++;
        }
      
    }
    return count;
}


void main()
{   
    char ch,text[MAX];
    ch=getchar();
    fgets(text, sizeof(text), stdin);
    
    int out=function(text,ch);
    printf("%d",out);
}

