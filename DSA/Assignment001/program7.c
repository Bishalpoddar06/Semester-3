/*
Print all the elements in even position in array.
*/

#include <stdio.h>

void printEvenIndices(int arr[], int n) {
    printf("The Odd Indexed Array Elements...\n");
    for (int i = 1; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, -30, 40, -50};
    int n = sizeof(arr) / sizeof(int);

    printEvenIndices(arr, n);
}

/* OUTPUT
The Odd Indexed Array Elements...
10 -30 -50
*/