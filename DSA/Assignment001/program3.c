/*
Print the middle element of the array.
*/

#include <stdio.h>

void printMiddleElement(int arr[], int n) {
    printf("Middle Element : %d\n", arr[n / 2]);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    printMiddleElement(arr, n);
}

/* OUTPUT
Middle Element : 30
*/