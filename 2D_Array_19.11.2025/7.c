/*
Search for an element in a 2D array. 
Take an m×n matrix and a key. Search for the key and print its row and column index if found.
*/
#include <stdio.h>
int main() {
    int m, n, key;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[10][10];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter key to search: ");
    scanf("%d", &key);
    int found = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(A[i][j] == key) {
                printf("Key found at row %d, column %d\n", i, j);
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    if(!found)
        printf("Key not found\n");

    return 0;
}
