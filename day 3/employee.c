#include<stdio.h>
int main()
{
    char id[10];
    int hour;
    double value,salary;
    printf("put the Employees id:");
    scanf("%s",&id);
    printf("\nInput the working hrs:");
    scanf("%d",&hour);
    printf("\nSalary amount/hrs:");
    scanf("lf",&value);
    salary = value*hour;
    printf("\nEmployees ID =%s\nSalary=12000\n",id,salary);
    return 0;


}