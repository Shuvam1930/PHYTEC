#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the value of a, b and c:");
    scanf("%d%d%d",&a,&b,&c);
    d = a>b ? (a>c ? a:c) : (b>c ? b:c);
    printf("\nThe greatest number is : %d\n",d);
    return 0;
}