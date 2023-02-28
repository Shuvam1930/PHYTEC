#include<stdio.h>
int main()
{
    double a, b, c,discriminant, root1, root2, realpart, imagpart;
    printf("Enter coefficients a,b nad c:");
    scanf("%lf %lf %lf",&a,&b,&c);

    discriminant = b*b-4*a*c;

    if (discriminant > 0)
    {
        root1 =(-b+sqrt(discriminant))/(2*a);
        root2 =(-b+sqrt(discriminant))/(2*a);
        printf("root1=%2lf and root2=%2lf:",root1);
    }
    else if(discriminant ==0)
    {
        root1 =root2= -b/(2*a);
        printf("root1=root2=%.2lf;",root1);
    }
    else
    {
        realpart = -b/(2*a);
        imagpart = sqrt(discriminant)/(2*a);
        printf("root1 =%.2lf+5.2lfi and root2 =%.2lf-%.2fi",realpart, imagpart,realpart,imagpart) ;

    }
    return 0;

}