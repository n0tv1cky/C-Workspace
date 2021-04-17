#include<stdio.h>

int checkYear(int m) {
    if(m%4==0) {
        if(m%100==0) {
            if(m%400==0) {
                return 1;
            } else {
                return 0;
            }
        } else { 
            return 1;
        }
    } else {
        return 0;
    }
}

void main() {
    int n;
    printf("\nEnter the year: ");
    scanf("%d", &n);
    
    if(checkYear(n)) {
        printf("\nThe given year is a Leap Year");
    } else {
        printf("\nThe given year is not a Leap Year");
    }
    }