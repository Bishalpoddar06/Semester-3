/*
Print the smallest and largest element of an array.
*/

#include <stdio.h>

void printMaxMin(int arr[], int n) {
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    printf("Smallest Element : %d, Largest Element : %d\n", min, max);
}

int main() {
    int arr[] = {1, 2, -3, 4, -50};
    int n = sizeof(arr) / sizeof(int);

    printMaxMin(arr, n);
}

/* OUTPUT
Smallest Element : -50, Largest Element : 4
*/