#include<stdio.h>
#include<string.h>
struct emp
{
    int empno;
    float sal;
    char ename;
 
} employee;
int main()
{
    employee.empno=10;
    employee.sal=5000;
    employee.ename,"Shuvam";
    printf("Size of the structure %d",sizeof(employee));


}