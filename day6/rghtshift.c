#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    for(j=0; j>4;j++)
    {
        i= i<< 1;
        printf("right shift %d: %d\n",j,i);
    }
    return 0;
}