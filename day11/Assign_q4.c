#include <stdio.h>
int main()
{
     int a[10],i,s1=0,s2=0;
     printf("Enter 10 Numbers:\n\n");
     for(i=0;i<10;i++)
     {
          scanf("%d",&a[i]);
     }
     for(i=0;i<5;i++)
     {
          s1=s1+a[i];
     }
     for(i=5;i<10;i++)
     {
          s2=s2+a[i];
     }
     printf("\nSum of First 5 Numbers: %d\n\nSum of Last 5 Numbers : %d\n",s1,s2);
     if(s1==s2)
          printf("\nSum is Equal");
     else
          printf("\nSum is NOT Equal");
     return 0;
}