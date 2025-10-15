/*
Print the first and last elements of an array.
*/

#include <stdio.h>

void printFirstLast(int arr[], int n) {
    printf("The First & Last Array Elements...\n");
    printf("%d and %d", arr[0], arr[n - 1]);
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    printFirstLast(arr, n);
}

/* OUTPUT
The First & Last Array Elements...
10 and 50
*/