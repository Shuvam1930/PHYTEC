#include<stdio.h>
int main()
{
    int i,a[10]={1,2,3,4,5,6,7,8,9},*p;
    for(i=0;i<=10;i++)
    {
        printf("\n value of %d from %p \n",a[i],&a[i]);

    }
    return 0;
}