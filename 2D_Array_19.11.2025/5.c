/*
Add two matrices. 
Take two m×n matrices A and B and compute C[i][j] = A[i][j] + B[i][j]
*/

#include <stdio.h>
int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[10][10], B[10][10], C[10][10];
    printf("Enter elements of matrix A:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of matrix B:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nSum of matrices (C = A + B):\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
