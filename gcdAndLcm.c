#include<stdio.h>

int gcd(int n1, int n2) {
    // if(n1==0) return n2;
    // if(n2==0) return n1;
    // if(n1==n2) return n1;

    // if(n1>n2) {
    //     return gcd(n1-n2, n2);
    // } else {
    //     return gcd(n1, n2-n1);
    // }
    if(n2==0) return n1;
    return gcd(n2, n1%n2);
}

int lcm(int m1, int m2) {
    if(m1==0||m2==0) {
        return 0;
    } else {
        return m1*m2/gcd(m1, m2);
    }
    
}

void main() {
    int a, b;
    printf("\nEnter the two numbers a and b: ");
    scanf("%d %d", &a, &b);

    printf("\nThe GCD of the two numbers is %d", gcd(a,b));
    printf("\nThe LCM of the two numbers is %d", lcm(a,b));
}