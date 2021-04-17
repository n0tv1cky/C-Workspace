#include<stdio.h>
#include<math.h>

void main() {
    int n, lastDigit, sum = 0, temp, length = 0;

    printf("\nEnter the number: ");
    scanf("%d", &n);

    temp = n;

    while(temp>0) {
        length++;
        temp /= 10;
    }

    temp = n;

    while(temp>0) {
        lastDigit = temp%10;
        sum += pow(lastDigit, length);
        temp /= 10;
    }

    if(sum==n) {
        printf("\nThe given number is an Armstrong Number");
    } else {
        printf("\nThe given number is not an Armstorng Number");
    }
}