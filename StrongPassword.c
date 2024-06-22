/* program to check if the given password is strong.
Return 1 if the password is strong and 0 if the password is weak.
A strong password is one which satisfies the following conditions:
It contains a mix of capital letters, small letters and digits.
It contains minimum 8 characters.
It contains atleast one non alphanumeric character.
It should not contain any space.*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

int function(char * str)
{
    int cap=0,small=0,dig=0,space=1,nonaplha=0;
    if(strlen(str)<8)
    {
        return 0;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            cap=1;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            small=1;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            dig=1;
        }
        else if(str[i]==' ')
        {
            space=0;
        }
        else
        {
            nonaplha=1;
        }
    }
    return(cap&&small&&dig&&space&&nonaplha);
}

void main()
{   
    char text[MAX];
    fgets(text, sizeof(text), stdin);
    
    int out=function(text);
    printf("%d",out);
}


