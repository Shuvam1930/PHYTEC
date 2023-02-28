#include<stdio.h>
int main()
{
    unsigned int i;
    int j;
    i=1;
    /*for left shift*/
    for(j=0; j<4; j++)
    {
        i= i << 1;
        printf("left shift %d: %d\n",j,i);
    }
    /*right shift*/
    for(j=0; j<4; j++)
    {
        i = i>> 1;
        printf("right shift 5d: %d\n",j,i);
    }
    return 0;
}