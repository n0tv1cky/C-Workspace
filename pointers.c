#include<stdio.h>

void main() {
    int n, m, i, j;
    printf("\nEnter the dimension of the array: ");
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n], ans[m][n];

    printf("\nEnter the elements of the first array: ");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", (*(a+i)+j));
        }
    }

    printf("\nEnter the elements of the second array: ");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", (*(b+i)+j));
        }
    }
    
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            *(*(ans+i)+j) = 0;
            *(*(ans+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
            printf("%d ", *(*(ans+i)+j));
        }
        printf("\n");
    }
}