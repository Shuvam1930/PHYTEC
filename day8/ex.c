#include<stdio.h>
int a;
int main()
{
    static int a=1;
    printf("%d",a);
    {
        static int a=2;
        printf("%d",a);

      {
        static int a=3;
        printf("%d",a);
 
      }
      
    }




    
}