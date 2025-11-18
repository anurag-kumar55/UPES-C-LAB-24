//Write a function int add(int a,int b) that returns the sum of two numbers.

#include <stdio.h>
void add(int a, int b)   
{
    int sum = a + b;
    printf("Sum = %d\n", sum);
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    add(x, y);   
    return 0;
}