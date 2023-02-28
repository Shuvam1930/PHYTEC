#include<stdio.h>
int main()
{
    int amt,total;
    printf("input the amount:");
    scanf("%d",&amt);

    total=(int)amt/100;
    printf("the amount are:");
    printf("\n %d note of 100\n",total);
    amt=amt-(total*100);

    total=(int)amt/50;
    printf("\n %d note of 50\n",total);
    amt=amt-(total*50);

    total=(int)amt/20;
    printf("\n %d note of 20\n",total);
    amt=amt-(total*20);

    total=(int)amt/10;
    printf("\n %d note of 10\n",total);
    amt=amt-(total*10);

    total=(int)amt/05;
    printf("\n %d note of 05\n",total);
    amt=amt-(total*05);

    total=(int)amt/20;
    printf("\n %d note of 02\n",total);
    amt=amt-(total*02);

    return 0;


}