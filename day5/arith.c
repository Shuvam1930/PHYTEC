/* the program explains the Arithmatic operations 
usage : opeartors= '+','-',''*','/','%'
syntax : operand operator operand = a+b
*/
#include<stdio.h>
int main()
{
	int a= 10, b=4,res;
    printf("a is %d , b is %d\n",a,b);
    res =a+b;
    printf("a+b is %d\n",res);

    printf("a is %d , b is %d\n",a,b);
    res =a-b;
    printf("a-b is %d\n",res);

    printf("a is %d , b is %d\n",a,b);
    res =a*b;
    printf("a*b is %d\n",res);

    printf("a is %d , b is %d\n",a,b);
    res =a/b;
    printf("a/b is %d\n",res);

    printf("a is %d , b is %d\n",a,b);
    res =a%b;
    printf("a%b is %d\n",res);

	return 0;


 
}