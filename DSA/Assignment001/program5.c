/*
Find the negative element in an array.
*/

#include <stdio.h>

void printNegativeNumbers(int arr[], int n) {
    int flag = 0;
    printf("Negative Numbers in Array...\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
            flag = 1;
        }
    }
    if (flag == 0) {
        printf("null");
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, -30, 40, -50};
    int n = sizeof(arr) / sizeof(int);

    printNegativeNumbers(arr, n);
}

/* OUTPUT
Negative Numbers in Array...
-30 -50
*/