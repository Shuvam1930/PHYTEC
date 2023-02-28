#include<stdio.h>
int hindi(int h)
{
    if(h<=33)
    {
        printf("FAIL");
    }
    else if(h>=34 && h<=50)
    {
        printf("E");
    }
    else if(h>=51 && h<=60)
    {
        printf("D");
    }
    else if(h>=61 && h<=70)
    {
        printf("C");
    }
    else if(h>=71 && h<=80)
    {
        printf("B");
    }
    else if(h>=81 && h<=90)
    {
        printf("A");
    }
    else if(h>=91 && h<=100)
    {
        printf("O");
    }
    else
    {
        printf("invalid entry!\n");
    }
}
