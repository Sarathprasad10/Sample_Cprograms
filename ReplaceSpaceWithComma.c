/*program to replace all the space characters in a string with comma(,) character. 
The function should return the output string.
*/
#include<stdio.h>
#include<string.h>
#define MAX 100

char * function(char * str)
{
    
  for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            str[i]=',';
        }
    }
    return str;
}


void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    char * out=function(text);
    printf("%s",out);
    
}



