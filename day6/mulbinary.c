#include<stdio.h>
int main()
{
    int i,j1,j2,a,b,mul;
    printf("Give a number");
    scanf("%d",&a,&b);
    printf("Binary form of the given number is :",a);
    for (i=7;i>=0;i--)
    {
        j1=(a>>i)&0x1;
        j2=(a>>i)&0x1;

        printf("position%d\n",i);
        printf("binary%d %d\n",j1,j2);
        mul=j1*j2;
        printf("multiply is:%d\n",mul);
    }
    return 0;
}
  