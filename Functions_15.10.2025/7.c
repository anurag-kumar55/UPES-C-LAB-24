//Write a program to find factorial of a number using a function.
#include <stdio.h>

void factorial(int n)
{
    int fact = 1, i;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial is = %d\n", fact);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial(num);  

    return 0;
}