/*
Print the matrix in row-major and column-major order. 
Row-major: print row by row 
Column-major: print column by column 
*/
#include <stdio.h>
int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[10][10];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nRow-major order:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nColumn-major order:\n");
    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
