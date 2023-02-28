#include<stdio.h>
int it(int i)
{
    if(i<=33)
    {
        printf("FAIL");
    }
    else if(i>=34 && i<=50)
    {
        printf("E");
    }
    else if(i>=51 && i<=60)
    {
        printf("D");
    }
    else if(i>=61 && i<=70)
    {
        printf("C");
    }
    else if(i>=71 && i<=80)
    {
        printf("B");
    }
    else if(i>=81 && i<=90)
    {
        printf("A");
    }
    else if(i>=91 && i<=100)
    {
        printf("O");
    }
    else
    {
        printf("invalid entry!\n");
    }
}
