#include<stdio.h>
int main()
{
    int y,w,d,days;
    printf("Input Days:");
    scanf("%d",&days);
    y=days/365;
    w=(days-(y*365))/7;
    d=(days-(y-365))-(7*w);
    printf("y:w:d - %d:%d:%d\n",y,w,d);
    return 0;
}