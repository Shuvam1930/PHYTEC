#include <stdio.h>
int inc(int a[])
{
    int i;
    for(i=0;i<4;i++)
    {
        a[i]=a[i]+2;
    }
    printf("Value after increment: ");
    for(i=0;i<4;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int i,res;
    int c[10]={1,2,3,4};
    printf("The value before: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", c[i]);
    }
    printf("\n");
    res=inc(c);
    return 0;
}