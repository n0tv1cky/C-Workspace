#include<stdio.h>

void arrInput(int arr[], int n) {
    printf("\nEnter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

int binSearch(int arr[], int n, int x) {
    int low = 0;
    int high = n-1;

    for(int i = 0; i <= n/2; i++) {
        int currentElement = arr[(high+low)/2];
        if(currentElement==x) {
            return (high+low)/2;
        } else if(currentElement<x) {
            low = ((high+low)/2)+1;
        } else {
            high = (high+low)/2;
        }
    }

    return -1;
}

void main() {
    int n, x;
    printf("\nEnter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    arrInput(arr,n);
    printf("\nEnter the element to be searched: ");
    scanf("%d", &x);
    if(binSearch(arr, n, x)==-1) {
        printf("\nThe element does not exist in the given array");
    } else {
        printf("\nThe element is present at %d position", binSearch(arr, n, x)+1);
    }
}