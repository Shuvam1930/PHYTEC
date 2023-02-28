//WAP to input values into array and display//
#include<stdio.h>
int main()
{
    int arr[10],i;
    for(i=0; i<10; i++)
    {
        printf("Enter a value for arr[%d] :", i);
        scanf("%d",&arr[i]);
    }
    printf("The array elemnts are : \n");
    for(i=0; i<10; i++)
    printf("%d\t",arr[i]);
    printf("\n");
    return 0;
}