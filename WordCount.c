/*program to read a sentence and return the number of words present in the sentence.*/
#include<stdio.h>
#include<string.h>
#define MAX 100

int function(char * str)
{
   int count = 0;
    int flag = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && !flag) {
            count++;
            flag = 1;
        } 
        else if (str[i] == ' ') 
        {
            flag = 0;
        }
    }
return count;
}


void main()
{   
    char text[MAX];
    gets(text);
    
    int out=function(text);
    printf("%d",out);
}
