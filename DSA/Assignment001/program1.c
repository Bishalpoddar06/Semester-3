/*
Print all the elements in an array.
*/

#include <stdio.h>

void printArray(int arr[], int n) {
    printf("The Array Elements...\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    printArray(arr, n);
}

/* OUTPUT
The Array Elements...
10 20 30 40 50
*/