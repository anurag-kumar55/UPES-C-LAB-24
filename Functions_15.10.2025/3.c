//Write a program to calculate the square of a number using a function.

#include <stdio.h>
void sqr(int n)  
{
    printf("Square is = %d\n", n * n);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    sqr(num);  

    return 0;
}
