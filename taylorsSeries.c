#include<stdio.h>

void main() {
    int i, n;
    float x, sum, t;

    printf("\nEnter the value of x in sin(x): ");
    scanf("%f", &x);

    printf("\nEnter the number of terms upto which the sum needs to be calculated ");
    scanf("%f", &n);

    x = x*3.1415/180;
    sum = x;
    t = x;

    for(i = 1; i <= n; i++) {
        t = (-t*x*x)/(2*i*(2*i+1));
        sum += t;
    }

    printf("\nThe value of sin(%f) is %f", x, sum);
}