#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void main() {
    int a, b;

    printf("\nEnter the two numbers: ");
    scanf("%d %d", &a, &b);

    swap(&a,&b);

    printf("\na = %d, b = %d", a, b);
}