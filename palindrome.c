#include<stdio.h>
#include<string.h>

char isPalindrome(char arr[], int size) {
    int i, start = 0, end = size-1;
    char palindrome = 'T';

    for(i = 0; i <= size/2; i++) {
        palindrome = 'T';
        if(arr[start]!=arr[end]) {
            palindrome = 'F';
            break;
        }
        start++;
        end--;
    }

    return palindrome;
}

void main() {
    int n;
    printf("Enter the length of the string: ");
    scanf("%d", &n);
    
    char word[n];
    printf("\nEnter the string: ");
    scanf("%s", &word);

    char ans = isPalindrome(word, n);

    if(ans=='T') {
        printf("\nThe given word is a palindrome");
    } else {
        printf("\nThe given word is not a palindrome");
    }
}