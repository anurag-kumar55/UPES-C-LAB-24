/*
 Find the largest element in a 2D array. 
Traverse the matrix and return the maximum value present in it.
*/

#include <stdio.h>

int main() {
    int rows, colmn;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &colmn);

    int arr[100][100];  

    printf("Enter the elements of the matrix:\n");

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < colmn; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = arr[0][0];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < colmn; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];
        }
    }

    printf("Largest element is ");
    return 0;
}
