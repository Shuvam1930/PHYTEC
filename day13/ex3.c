#include<stdio.h>
#include<string.h>
#define MAX 10;
struct Employee
{
    int empno;
    float sal;
    char ename[10];
};
int main()
{
    /*emp1.empno=10;
    strcpy(emp1.ename,"Alex");
    emp1.sal=50000;*/
    struct Employee emp[10]={{1,50000,"Shuvam"},{2,48000,"Aman"},{3,46000,"Daman"},{4,80000,"Raman"},{5,60000,"Shamam"},{6,50000,"Tanman"},{7,50000,"vedam"},{8,50000,"Adam"},{9,50000,"Roman"},{10,50000,"DK"}};
    for(int i=0;i<10;i++)
    {

    
        printf("Employee No:%d\tName:%s\tRs.%.2f\n",emp[i].empno,emp[i].ename,emp[i].sal);
    }
    return 0;
}