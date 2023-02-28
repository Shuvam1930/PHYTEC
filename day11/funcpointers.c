#include <stdio.h>
// int(* func)(int,int);
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int main()
{
    int res,a;
    int (*func)(int, int);
    printf("Enter the choice\n");
    scanf("%c",&a);
    if(a=='+')
    {
        func = &add;
    res = (*func)(50, 70);
    printf("Value of add is %d\n", res);


    }
    else
    {
        func = &sub;
    res = (*func)(30, 20);
    printf("Value of sub is %d\n", res);

    }
    
}
