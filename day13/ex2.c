#include<stdio.h>
#include<string.h>
struct emp
{
    int empno;
    float sal;
    char ename[10];
 
};

int main()

{
    struct employee emp1={10,50000,"Shuvam"};
    /*emp1.empno=10;
    strcpy(emp1.ename,"Alex")
    emp1.sal=5000;*/
    printf("%d\n",emp1.empno);
    printf("%s\n",emp1.sal);
    printf("%f\n",emp1.ename);


}