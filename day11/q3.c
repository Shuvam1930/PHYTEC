[16:32] Swadhin Biswal
#include <stdio.h>int main(void)
{

    int MAX, i, j, count=0;
    printf("Enter the size\n");
    scanf("%d", &MAX);
    int arr[MAX];
    printf("Enter the elements\n");
    for (i = 0; i < MAX; i++)
    {
    scanf("%d", &arr[i]);
    }
    for (i = 0; i < MAX; i++)
    {
        printf("%d\t", arr[i]);
    }
    for(i=0;i<MAX;i++)
    {
        count=count+arr[i];
    }
    printf("\nThe sum of elements are:");
    printf("%d\n",count);
    return 0;
}

