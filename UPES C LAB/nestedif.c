#include <stdio.h>

int main() {
    int age;
    char gender;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter gender (m/f): ");
    scanf(" %c", &gender); // space before %c to ignore newline

    if (age >= 18) {
        if (gender == 'm') {
            printf("Eligible to vote\n");
        } else {
            printf("Invalid gender input\n");
        }
    } else {
        printf("Underage\n");
    }

    return 0;
}