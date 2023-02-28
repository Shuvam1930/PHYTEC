#include<stdio.h>
int add(int *,int *);
int main()
{
    int x,y;
    printf("insert two number to add\n");
    scanf("%d %d",x,y);
    printf("%d",add(&x,&y));
    //printf("%d+%d=%d\n",x,y,sum);
    
}
int add(int *a,int *b)
{
   
    return *a+*b;
}