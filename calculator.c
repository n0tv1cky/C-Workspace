#include<stdio.h>

void main() {
    int a, b, operatorNo;
    float ans;

    printf("\nEnter the two numbers a and b: ");
    scanf("%d %d", &a, &b);

    printf("\nEnter the operation number: ");
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Divistion");
    printf("\n5.Modulo\n");
    scanf("%d", &operatorNo);

    switch(operatorNo) {
        case 1: {
            ans = a+b;
            printf("The answer is %f", ans);
            break;
        }
        case 2: {
            ans = a-b;
            printf("The answer is %f", ans);
            break;
        }
        case 3: {
            ans = a*b;
            printf("The answer is %f", ans);
            break;
        }
        case 4: {
            if(b!=0) {
                ans = a/b;
                printf("The answer is %f", ans);
            } else {
                printf("\nDividing by zero not allowed");
            }
            break;
        }
        case 5: {
            ans = a%b;
            printf("The answer is %f", ans);
            break;
        }
        default: printf("\nInvalid Operation");
    }
    }