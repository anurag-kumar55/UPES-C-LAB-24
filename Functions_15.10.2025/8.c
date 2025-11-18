//write a function to check whether a number is palindrome or not.


#include <stdio.h>
int Palindrome(int n)
{
    int original = n;
    int rev = 0, digit;
    while (n > 0)
    {
        digit = n % 10;        
        rev = rev * 10 + digit; 
        n = n / 10;             
    }
    if (rev == original)
        return 1;      
    else
        return 0;   
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (Palindrome(num))
        printf("no. is  palindrome\n");
    else
        printf("no. is not palindrome\n");

    return 0;
}
