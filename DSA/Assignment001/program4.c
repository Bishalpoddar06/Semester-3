/*
Print the double of all elements of an array.
*/

#include <stdio.h>

void printMappedElements(int arr[], int n, int multFactor) {
    printf("Mapped Elements for multFactor : %d\n", multFactor);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i] * multFactor);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    printMappedElements(arr, n, 2);
}

/* OUTPUT
Mapped Elements for multFactor : 2
20 40 60 80 100
*/