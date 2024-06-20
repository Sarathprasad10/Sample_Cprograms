/*Consider the following series: 1, 1, 2, 3, 4, 9, 8, 27, 16, 81, 32, 243, 64, 729, 128, 2187 …
This series is a mixture of 2 series – all the odd terms in this series form a geometric series and all the even terms form yet another geometric series. 
Write a program to find the Nth term in the series.
The value N in a positive integer that should be read from STDIN.
The Nth term that is calculated by the program should be written to STDOUT. 
Other than value of n th term,no other character / string or message should be written to STDOUT*/
#include<stdio.h>
#define MAX 100

int function(int year)
{
  int arr[MAX];
    // Base cases
    arr[0] = 1;
    arr[1] = 1;
    
    // Fill the array based on the given series rules
    for (int i = 2; i < year; i++) {
        if (i % 2 == 0) {
            arr[i] = arr[i-2] * 2;
        } else {
            arr[i] = arr[i-2] * 3;
        }
    }
    return arr[year-1];
}


void main()
{   
    int y;
    scanf("%d",&y);
    int out=function(y);
    printf("%d",out);
}



