#include <stdio.h>

int n = 0, m = 0, sum;

void matrixInput(int mat[][n]) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void matrixSum(int arr[][n]) {
    for(int i = 0; i < m; i++) {
        sum = 0;
        for(int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        printf("\nSum of Row %d = %d", i+1, sum);
    }

    for(int i = 0; i < n; i++) {
        sum = 0;
        for(int j = 0; j < m; j++) {
            sum += arr[i][j];
        }
        printf("\nSum of Column %d = %d", i+1, sum);
    }

    sum = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
    }
    printf("\nSum of all the elements %d", sum);

    sum = 0;
    for(int i = 0; i < m; i++) {
            sum += arr[i][i];
    }
    printf("\nSum of Diagonal Elements %d", sum);
}

void main() {

    printf("\nEnter the dimensions of the array: ");
    scanf("%d %d", &m, &n);
    int mat[m][n];

    matrixInput(mat);

    matrixSum(mat);
}

