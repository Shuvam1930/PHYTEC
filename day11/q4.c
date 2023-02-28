
#include<stdio.h> 
int main()
{
    int a,i,sum1=0,sum2=0;
    printf("Enter the size of the array:");
    scanf("%d",&a);
    int arr[a];
    printf("\nEnter the values for array:");
    for (i=1;i<=a;i++)
    {
        scanf("%d",&arr[i]);
        }
        printf("\nValues of the array is:");
        for (i=1;i<=a;i++)
        
        {
            printf("%d\t",arr[i]);
        }
            for(i=1;i<=5;i++)
            {
                sum1=sum1+arr[i];
                }
                for(i=6;i<=10;i++)
                {
                    sum2=sum2+arr[i];
                }
                if(sum1==sum2)
                {
                    printf("\nequal");
                }
                else{
                    printf("\nnot equal");
                }
                }


