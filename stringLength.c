#include <stdio.h>

int n = 0;

int lengthOfString(char word[]) {

    for(int i = 0; i < 50; i++) {
        if(word[i]=='\0') {
            n = i;
            break;
        }
    }
    return n;
}

void main() {
    char word[50];


    printf("\nEnter the string: ");
    gets(word);

    lengthOfString(word);

    printf("\nThe length of the string is %d", n);
}