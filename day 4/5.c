#include<stdio.h>
int main()
{
    int num, sum=0, firstdigit, lastdigit;
    printf("Enter any number:");
    scanf("%d",&num);
    lastdigit=num%10;
    firstdigit=num;
    while(num>=10)
    {
        num = num/10;
    }
    firstdigit = num;
    sum =firstdigit +lastdigit;
    printf("sum is :%d",sum);
    return 0;
}