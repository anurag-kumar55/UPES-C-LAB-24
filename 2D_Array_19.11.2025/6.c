/*
Multiply two matrices. 
Given matrix A (m×p) and matrix B (p×n), compute their product A×B. 

*/
#include <stdio.h>

int main() {
    int m, p, n;
    
    printf("Enter size of matrix A (m p): ");
    scanf("%d %d", &m, &p);
    
    printf("Enter size of matrix B (p n): ");
    scanf("%d %d", &p, &n);

    int A[10][10], B[10][10], C[10][10];
    printf("Enter elements of matrix A:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of matrix B:\n");
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            C[i][j] = 0;
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < p; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nProduct of matrices (A × B):\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
