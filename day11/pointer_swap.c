#include<stdio.h>
int add(int *,int *)
int sub(int *,int *)
int mul(int *,int *)
int div(int *,int *)
int mod(int *,int *)
int main()
{
    int x,y;
    printf("insert two number to add\n");
    printf("insert two number to sub\n");
    printf("insert two number to mul\n");
    printf("insert two number to div\n");
    printf("insert two number to mod\n");
    scanf("%d %d",&x,&y);
    printf("%d",add(&x,&y));
    printf("%d",sub(&x,&y));
    printf("%d",mul(&x,&y));
    printf("%d",div(&x,&y));
    printf("%d",mod(&x,&y));
    
}
int add(int *a,int *b)
{
   
    return *a+*b;
    return *a-*b;
    return *a * *b;
    return *a / *b;
    return *a % *b;
   
}
