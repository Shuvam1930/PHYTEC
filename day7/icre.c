#include<stdio.h>
int main()
{
    int a=10;
    sizeof(a++);
    printf("The given value is:%d\n",a++);
    return 0;

} 