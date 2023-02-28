#include<stdio.h>
int main()
{
    int base, exp;
    long doule resut =1.0;
    printf("Enter abase number:");
    scanf("%d",&base);
    printf("Enter an exponent:");
    scanf("%d",&exp);

    while (exp !=0)
    {
        result *=base;
        --exp;
    }
    printf("Answer =%.0Lf",result);
    return 0;
}