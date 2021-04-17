#include<stdio.h>
#include<math.h>

int binaryToDecimal(int binNum, int decNum, int bit) {
    int lastDigit = 0;

    if(binNum>0) {
        lastDigit = binNum%10;
        decNum += lastDigit*pow(2, bit);
        bit++;
        binNum /= 10;
        decNum = binaryToDecimal(binNum, decNum, bit);
    }

    return decNum;
}

void main() {
    int binaryNum = 0, decimalNum = 0, bit = 0;
    printf("\nEnter the Binary Number: ");
    scanf("%d", &binaryNum);

    printf("The Decimal Number is %d", binaryToDecimal(binaryNum, decimalNum, bit));
}