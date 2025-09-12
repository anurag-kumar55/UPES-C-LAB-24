#include<stdio.h>
int main()
{
    float a,b;
    printf("enter two number\n");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("sum = %.2f\n", a+b);
    printf( "Diff=%.2f\n", a-b);
    printf("Product =%2f\n",a * b);
    if (b==0)
    {
        printf("Error , divisor can not be zero");
        return 0;
    }
    else
    printf( "Quotient = %.2f\n", a/b);
    return 0;
    
    



    
}