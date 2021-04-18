#include<stdio.h>

void matrixInput(int x, int y, int arr[x][y] ) {
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void matrixMultiply(int w, int x, int arr1[w][x], int y, int z, int arr2[y][z], int arr[w][z]) {
    for(int i = 0; i < w; i++) {
        for(int j = 0; j < z; j++) {
            arr[i][j] = 0;
            for(int k = 0; k < x; k++) {
                arr[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

void matrixPrint(int x, int y, int arr[x][y]) {
    printf("\nThe resultant matrix is: \n");
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void main() {

    int m, n, p, q;

    printf("\nEnter the dimensions of the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("\nEnter the dimensions of the second matrix: ");
    scanf("%d %d", &p, &q);

    if(n==p) {
        int arr1[m][n];
        int arr2[p][q];
        int ans[m][q];

        printf("\nEnter the elements of the first matrix: ");
        matrixInput(m, n, arr1);
        printf("\nEnter the elements of the second matrix: ");
        matrixInput(p, q, arr2);

        matrixMultiply(m, n, arr1, p, q, arr2, ans);

        matrixPrint(m, q, ans);
    } else {
        printf("\nThe given matrices cannot be multiplied");
    }
}