//Write a function that takes a number and returns 1 if prime ,otherwise 0.

#include <stdio.h>

int Prime(int n)
{
    int i;
    if (n <= 1)
        return 0;   
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;   
    }
    return 1; 
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (Prime(num))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}