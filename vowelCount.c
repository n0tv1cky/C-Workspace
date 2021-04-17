#include<stdio.h>

char vowel[5];
char vowelChar[] = {'a', 'e', 'i', 'o', 'u'};

int stringLen(char word[]) {
    for(int i = 0; i < 50; i++) {
        if(word[i]=='\0') {
            return i;
        }
    }
}

int vowel_Count(char arr[], int n) {

    for(int i = 0; i < n; i++) {
        switch(arr[i]) {
            case 'a': {
                vowel[0]++;
                break;
            }
            case 'e': {
                vowel[1]++;
                break;
            }
            case 'i': {
                vowel[2]++;
                break;
            }
            case 'o': {
                vowel[3]++;
                break;
            }
            case 'u': {
                vowel[4]++;
                break;
            }
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += vowel[i];
    }
    return sum;
}

void main() {
    char sequence[50];
    printf("\nEnter the sequence: ");
    scanf("%s", sequence);
    int n = stringLen(sequence);

    printf("\nThe total number of Vowels are %d", vowel_Count(sequence, n));
    for(int i = 0; i < n; i++) {
        printf("\n%c occurs %d times", vowelChar[i], vowel[i]);
    }
}