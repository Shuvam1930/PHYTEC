#include<stdio.h>
#include<string.h>
struct Department
{
    char dept[10];
};
struct Employee
{
    int empno;
    float sal;
    char ename[10];
    struct Department d;
}emp[20];
int LCD_Read(struct Employee emp[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the  %d employee No: ",i+1);
        scanf("%d",&emp[i].empno);
        printf("Enter the  %d employee name: ",i+1);
        scanf("%s",&emp[i].ename);
        printf("Enter the  %d employee department: ",i+1);
        scanf("%s",&emp[i].d.dept);
        printf("Enter the  %d employee salary: ",i+1);
        scanf("%f",&emp[i].sal);
    }
}
void LCD_Display(struct Employee emp[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nEmployee No:%d\tName:%s\tDepartment:%s\tSalary:Rs.%.2f\n",emp[i].empno,emp[i].ename,emp[i].d.dept,emp[i].sal);
    }
}
int main()
{
    int i,n;
    printf("Enter the no of Employee you want to enter: \n");
    scanf("%d",&n);
    printf("\nEnter the employee details\n\n");
   
    LCD_Read(emp,n);
    LCD_Display(emp,n);
    return 0;
}