//write a function to find the sum of digits of a number.


#include <stdio.h>
void sumofdigits(int n)
{
    int sum = 0, digit;
    while (n > 0)
    {
        digit = n % 10;    
        sum = sum + digit;  
        n = n / 10;         
    }
    printf("Sum of digits = %d\n", sum);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    sumofdigits(num);  
    return 0;
}