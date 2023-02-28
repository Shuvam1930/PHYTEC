#include<stdio.h>
int main()
{
    int i,j,a;
    printf("Give a number");
    scanf("%d",&a);
    printf("Binary form of the given number is :",a);
    for (i=7;i>=0;i--)
    {
    j=(a>>i)&0x1;
    printf("position :%d\n",i);
    printf("binary value :%d\n",j);
    }


}