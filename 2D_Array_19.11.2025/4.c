/*
Find the transpose of a matrix. 
Given a matrix A of size m×n, print its transpose Aᵀ of size n×m
*/
#include <stdio.h>
int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[10][10];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nTranspose of the matrix:\n");
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
