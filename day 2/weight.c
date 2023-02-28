#include<stdio.h>
int main()
{
    double i1,i2,w1,w2,avg;
    printf("weight of item:");
    scanf("lf",&w1);
    printf("number of items:");
    scanf("lf",&i1);
    printf("weight of item:");
    scanf("lf",&w2);
    printf("number of items:");
    scanf("lf",&i2);
    avg=((w1*i1)+(w2*i2))/i1+i2;
    return 0;

}