/* program to convert all the consonants in a string to uppercase. 
You need to return the output string.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

char * function(char * str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!='A'&&str[i]!='a'&&str[i]!='E'&&str[i]!='e'&&str[i]!='I'&&str[i]!='i'&&str[i]!='O'&&str[i]!='o'&&str[i]!='u'&&str[i]!='U')
        {
            str[i]=toupper(str[i]);
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


