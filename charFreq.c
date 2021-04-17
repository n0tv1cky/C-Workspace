#include<stdio.h>

int stringLen(char word[]) {
    for(int i = 0; i < 50; i++) {
        if(word[i]=='\0') {
            return i;
        }
    }
}

void charFrequency(char word[], int n, int frequency[]) {

    for(int i = 0; i < 256; i++) {
        frequency[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        int ascii = word[i];
        frequency[ascii]++;
    }

    for(int i = 0; i < 256; i++) {
        if(frequency[i]!=0) {
            printf("\n%c occurs %d times", i, frequency[i]);
        }
    }
}

void main() {
    char word[50];
    printf("\nEnter the string: ");
    scanf("%s", word);
    int n = stringLen(word);
    int frequency[256];
    
    charFrequency(word, n, frequency);
}