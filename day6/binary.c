#include<stdio.h>
int main()
{
    int i,j,a,b,c;
    printf("Give a number");
    scanf("%d",&a,&b);
    printf("Binary form of the given number is :",a,b);
    c=a*b;
    for (i=7;i>=0;i--)
    {
    j=(a>>i)&0x1;
    }
    return 0;
  


}


