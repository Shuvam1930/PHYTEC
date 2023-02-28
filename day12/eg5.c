#include<stdio.h>
#include<stdarg.h>
int main(int argc,char *argv[])
{
    int i,sum=0,n,count=0;
    for(i=1;i<argc;i++)
    {
        sscanf(argv[i],"%d",&n);
        sum+=n;
    }
    printf("The sum is %d",sum);
    printf("%s\n",argv[0]);
    printf("%d\n",argc);
    for(i=1;i<argv[i];i++)
    {
        count ++;
    }
    printf("%d\n",count);
}