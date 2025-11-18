//Write a function to find the maximum of two numbers.


#include <stdio.h>
void max(int a, int b)  
{
    if (a > b)
        printf("maximum no. is = %d\n", a);
    else
        printf("maximum no. = %d\n", b);
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    max(x, y);  

    return 0;
}