#include<Stdio.h>

int prime(int n) {
    for(int i = 2; i <= n/2; i++) {
        if(n%i==0) {
            return 0;
        }
    }

    return 1;
}

void main() {
    int low, high;
    printf("\nEnter the range of the number: ");
    scanf("%d %d", &low, &high);

    for(int i = low; i <= high; i++) {
        if(prime(i)) {
            printf("%d ", i);
        }
    }
}