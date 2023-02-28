#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers:");
    scanf("%d %d %d",&a,&b,&c);
    ((a>b && a>c) ? printf("a is greater\n"):printf("a is smaller\n"));
    ((a<b && b>c) ? printf("b is greater\n"):printf("b is smaller\n"));
    ((a<c && b<c) ? printf("c is greater\n"):printf("c is smaller\n"));
    return 0;
}