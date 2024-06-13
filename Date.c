//Define a structure for dates with dd/mm/yyyy. Provide functions for reading, displaying and comparing two dates are equal or not 
#include<stdio.h>
struct date
{
    int day[5];
    int month[5];
    int year[5];
};
struct date d;
 void readdate()
 {
     for(int i=1;i<3;i++)
     {
        printf("Enter the day:");
        scanf("%d",&d.day[i]);
        printf("Enter the month:");
        scanf("%d",&d.month[i]);
        printf("Enter the year:");
        scanf("%d",&d.year[i]);
     }
 }
 void printdate()
 {
     for(int i=1;i<3;i++)
     {
        printf("DATE[%d]=%d/%d/%d",i,d.day[i],d.month[i],d.year[i]);
        printf("\n");
     }
 }
 void compdate()
 {
     for(int i=1;i<2;i++)
     {
            if((d.day[i]==d.day[i+1])&&(d.month[i]==d.month[i+1])&&(d.year[i]==d.year[i+1]))
            {
                printf("The given dates are the same");
            }
            else
            {
                 printf("\nThe given dates are not same");
            }
    }
    
 }
 
 int main()
 {
        readdate();
        printdate();
        compdate();
        return 0;
 }