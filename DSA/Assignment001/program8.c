/*
Print the array in reverse.
*/

#include <stdio.h>

void printReversedArray(int arr[], int n) {
    printf("Reversed Array...\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, -30, 40, -50};
    int n = sizeof(arr) / sizeof(int);

    printReversedArray(arr, n);
}

/* OUTPUT
Reversed Array...
-50 40 -30 20 10
*/