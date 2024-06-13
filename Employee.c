//Define a structure for employees with eno,ename, esal and dno. Read  n employees information and provide functions for the following:  
a)Searching an employee by no
b)Sorting the employees by
1.Name
2.Salary
c)Deleting an employee

#include <stdio.h>

struct employee
{
    int empno[5];
    char ename[5][50];
    int salary[5];
    char dno[5][10];
};

struct employee e;

void read(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the employee number: ");
        scanf("%d", &e.empno[i]);

        printf("Enter the employee name: ");
        scanf("%s", e.ename[i]);

        printf("Enter the salary: ");
        scanf("%d", &e.salary[i]);

        printf("Enter the department no: ");
        scanf("%s", e.dno[i]);
    }
}

void print(int n)
{
    printf("\nTHE DETAILS OF EMPLOYEE\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee number=%d\n", e.empno[i]);
        printf("Employee name=%s\n", e.ename[i]);
        printf("Salary=%d\n", e.salary[i]);
        printf("Department NO=%s\n", e.dno[i]);
        printf("\n");
    }
}
void search(int n)
{   
    int s;
    printf("enter the employee number :");
    scanf("%d",&s);
    for(int i=0;i<n;i++)
    {
            if(e.empno[i]==s)
            {
                    printf("\nthe details of employee with employee number %d",e.empno[i]);
                    printf("\nname=%s\nsalary=%d\ndepartmentn no=%s\n",e.ename[i],e.salary[i],e.dno[i]);
            }
            else
            {
                    printf("not found");
            }
    }
}

int main()
{
    int ch, n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    read(n);

    do
    {
        printf("\n1. SHOW");
        printf("\n2.search");
        printf("\n3. EXIT");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            print(n);
            break;
        case 2:
            search(n);
        case 3:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (ch != 3);

    return 0;
}