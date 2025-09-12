#include<stdio.h>

int main()
{
    int a = 7;
    int b = 5;
    int c, d, f;
    float e;   

    c = a + b;
    d = a - b;
    e = (float)a / b;  
    f = a * b;

    printf("sum is %d\n", c);
    printf("diff is %d\n", d);
    printf("product is %d\n", f);
    printf("quotient is %.2f\n", e);  

    return 0;
}