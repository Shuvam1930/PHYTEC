#include<stdio.h>
#include<string.h>
struct Employee
{
    int empno;
    float sal;
    char ename[10];
}emp[20];
int main()
{
    int i,n;
    printf("Enter the no of Employee you want to enter: \n");
    scanf("%d",&n);
    printf("\nEnter the employee details\n\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the  %d employee No: ",i+1);
        scanf("%d",&emp[i].empno);
        printf("Enter the  %d employee name: ",i+1);
        scanf("%s",&emp[i].ename);
        printf("Enter the  %d employee salary: ",i+1);
        scanf("%f",&emp[i].sal);
    }
    for(i=0;i<n;i++)
    {
        printf("\nEmployee No:%d\tName:%s\tRs.%.2f\n",emp[i].empno,emp[i].ename,emp[i].sal);
    }
    return 0;
}