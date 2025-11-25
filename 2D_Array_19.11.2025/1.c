/*Find the sum of all elements in a 2D array. 

Write a program to take an m×n matrix as input and calculate the total sum of all elements. */

#include <stdio.h>
int main() {
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);

    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int arr[m][n];
    printf("Enter elements of the %d×%d matrix:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0];  
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Largest element in the matrix = %d\n", max);

    return 0;
}