//Write a program to check whether a number is even or odd using a function.
#include <stdio.h>

void even_odd(int n)  
{
    if (n % 2 == 0)
        printf("The number is Even\n");
    else
        printf("The number is Odd\n");
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    even_odd (num);   

    return 0;
}