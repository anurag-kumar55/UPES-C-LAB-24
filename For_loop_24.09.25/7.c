//Calculate the sum of digits of a given integer.
#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(; num > 0; num = num / 10) {
        sum = sum + (num % 10); 
    }
    printf("Sum of digits is: %d\n", sum);
    return 0;
}