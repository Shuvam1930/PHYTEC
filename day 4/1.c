#include<stdio.h>
int main()
{
    int n;
    printf("Enter a 4 digit number\n");
    scanf("%d",&n);
    float a;
    a=(((n+8)/3)%5)*5;
    
    printf("the result is:%f\n",n);
    return 0;
}
