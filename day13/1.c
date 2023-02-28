#include<stdio.h>
int main()
{
    int first,second,*p,*q,sum;
    printf("Enter two numbers\n");
    scanf("%d\n",&first,&second);
    p=&first;
    q=&second;
    sum=*p + *q;
    printf("sum of the numbers =%d\n",sum);
    return 0;
}