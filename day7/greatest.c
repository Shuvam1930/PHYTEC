#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    c=a>b ? a:b;
    printf("Larger of  %d and %d is %d\n",a,b,c);
    return 0;
}