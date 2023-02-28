#include<stdio.h>
int main()
{
    int y,m,d,days;
    printf("Input Days:");
    scanf("%d",&days);
    y=days/365;
    m=(days-(y*365))/30;
    d=(days-(y-365))-(30*m);
    printf("y:m:d - %d:%d:%d\n",y,m,d);
    return 0;
}