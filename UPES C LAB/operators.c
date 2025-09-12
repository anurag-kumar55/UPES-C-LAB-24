#include<stdio.h>
int main ()
{
    int a=7;
    int b=5;
    float e;
    int c,d,f;
    c=a+b;
    d=a-b;
    e=a/b;
    f=(float) a*b;
    printf("sum is %d/n",c);
    printf("diff is %d/n",d);
    printf("product is %d/n",f);
    printf("quotient is %.2f/n",e);
    return 0;

}