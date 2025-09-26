//Compute a^b(a raised to the power b).
#include <stdio.h>

int main() {
    int a, b, i;
    long long result = 1;

    printf("Enter the base (a): ");
    scanf("%d", &a);

    printf("Enter the exponent (b): ");
    scanf("%d", &b);

    for(i = 1; i <= b; i++) {
        result = result * a; 
    }

    printf("%d raised to the power %d is: %lld\n", a, b, result);

    return 0;
}