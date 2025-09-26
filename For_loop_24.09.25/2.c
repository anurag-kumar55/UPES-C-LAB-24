//Calculate the sum of first 50 natural numbers.
#include <stdio.h>

int main() {
    int n = 50;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum = sum + i;  
    }

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}